// bzrgit.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function declarations
void initRepository();
void addFiles(char *filename);
void deleteFiles(char *filename);
void commitChanges(char *message);
void revertChanges();
void showRevisions();

// Function to execute Git command
void executeGitCommand(const char *command) {
    int status = system(command);

    if (status == 0) {
        printf("Command executed successfully.\n");
    } else {
        printf("Error executing command.\n");
    }
}

// Function to initialize the repository
void initRepository() {
    executeGitCommand("git init");
}

// Function to add files to the repository
void addFiles(char *filename) {
    char command[100];
    snprintf(command, sizeof(command), "git add %s", filename);

    executeGitCommand(command);
}

// Function to delete files from the repository
void deleteFiles(char *filename) {
    char command[100];
    snprintf(command, sizeof(command), "git rm %s", filename);

    executeGitCommand(command);
}

// Function to commit changes in the repository
void commitChanges(char *message) {
    char command[200];
    snprintf(command, sizeof(command), "git commit -m '%s'", message);

    executeGitCommand(command);
}

// Function to revert changes in the repository
void revertChanges() {
    executeGitCommand("git checkout -- .");
}

// Function to show revision history
void showRevisions() {
    executeGitCommand("git log");
}

// Function to display usage information
void displayUsage(char *programName) {
    printf("Usage: %s <command> [options]\n", programName);
    printf("\nCommands:\n");
    printf("  init                           Initialize a new repository\n");
    printf("  add <filename>                 Add a file to the repository\n");
    printf("  delete <filename>              Delete a file from the repository\n");
    printf("  commit <message>               Commit changes to the repository\n");
    printf("  revert                         Revert changes in the working directory\n");
    printf("  show-revisions                 Show revision history\n");
}

// Main function
int main(int argc, char *argv[]) {
    if (argc < 2) {
        displayUsage(argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "init") == 0) {
        initRepository();
    } else if (strcmp(argv[1], "add") == 0) {
        if (argc < 3) {
            printf("Usage: %s add <filename>\n", argv[0]);
            return 1;
        }
        addFiles(argv[2]);
    } else if (strcmp(argv[1], "delete") == 0) {
        if (argc < 3) {
            printf("Usage: %s delete <filename>\n", argv[0]);
            return 1;
        }
        deleteFiles(argv[2]);
    } else if (strcmp(argv[1], "commit") == 0) {
        if (argc < 3) {
            printf("Usage: %s commit <message>\n", argv[0]);
            return 1;
        }
        commitChanges(argv[2]);
    } else if (strcmp(argv[1], "revert") == 0) {
        revertChanges();
    } else if (strcmp(argv[1], "show-revisions") == 0) {
        showRevisions();
    } else {
        printf("Unknown command: %s\n", argv[1]);
        displayUsage(argv[0]);
        return 1;
    }

    return 0;
}
