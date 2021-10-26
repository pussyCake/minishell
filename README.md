# minishell

## Project

We have recreated a shell from scratch, using only our own library (libft) and a limited range of external functions.

Minishell is compatible with macos and linux.

## Building

``$> cd minishell``
  
To use Minishell:
``$> make && ./minishell``

## Features

|Features   |
|:---------|
|Display prompt|
|Single and double quotes management|
|Files redirections `>>` `>` `<` (except file descriptor agregations)|
|Pipes|
|Environment variables|
|Internal variables|
|`Ctrl + D`|
|`Ctrl + \`|
|`Ctrl + C`|

|commands |
|:---------|
|echo: with -n option|
|cd with relative and absolute path: with `-` options|
|pwd: no option|
|export: no option|
|env: no option|
|unset: no option|
|set: no option|
|exit: with arguments|
|history: no option|
