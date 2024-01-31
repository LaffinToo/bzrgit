# BzrGit

BzrGit is a command-line front end for Git with a user interface inspired by Bazaar (bzr). It allows you to interact with Git repositories using commands that resemble the simplicity of Bazaar commands.

## Overview

BzrGit provides a set of commands for common version control operations, such as initializing a repository, adding and deleting files, committing changes, reverting changes, and displaying the revision history.

### Features

- **Initialization:** Initialize a new Git repository with ease.
- **Add Files:** Add files to the version control system.
- **Delete Files:** Remove files from version control.
- **Commit Changes:** Record changes to the repository with a commit message.
- **Revert Changes:** Revert changes in the working directory.
- **Show Revisions:** Display the revision history of the repository.

## Usage

### Command-Line Interface

```bash
./bzrgit <command> [options]
```

- **Commands:**
  - `init`: Initialize a new repository.
  - `add <filename>`: Add a file to the repository.
  - `delete <filename>`: Delete a file from the repository.
  - `commit <message>`: Commit changes to the repository.
  - `revert`: Revert changes in the working directory.
  - `show-revisions`: Display revision history.

### Examples

```bash
# Initialize a new repository
./bzrgit init

# Add a file to the repository
./bzrgit add file.txt

# Delete a file from the repository
./bzrgit delete file.txt

# Commit changes with a message
./bzrgit commit "Initial commit"

# Revert changes in the working directory
./bzrgit revert

# Show revision history
./bzrgit show-revisions
```

## Getting Started

1. Clone the repository:

   ```bash
   git clone https://github.com/luisespinoza/bzrgit.git
   ```

2. Compile the program:

   ```bash
   gcc bzrgit.c -o bzrgit
   ```

3. Run the program:

   ```bash
   ./bzrgit <command> [options]
   ```

## Author

Luis Espinoza
- Email: laffintoo@gmail.com

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
