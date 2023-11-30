# JP_get_next_line
This function returns a line that can be read from a file descriptor

## General notes

### Functions from existing libraries

Function | Format | Description | Library
--- | --- | --- | ---
read | `ssize_t	read(int fd, void *buff, size_t count)` | Reads "count" bytes in "buff", contained in fd. Returns number of bytes read | `unistd.h`
open | `int	open(const char *pathname, int flags, mode_t mode)` | Opens file contained in "pathname". The variable "flags" define mode of opening. The variable "mode" is optional, and defines permission in creating new file. Returns file descriptor. | `fcntl.h`
close | `int	close(int fd)` | Closes file open in fd. Returns 0. | `fcntl.h`

## Main Functions

### Libft functions

Function | Format | Modified?
--- | --- | ---
ft_strlen | `size_t	ft_strlen(const char *str)` | Same as libft
ft_strchr | `char	*ft_strchr(const char *str, int c)` | Function now returns 0 on error
ft_strlcat | `size_t	ft_strlcat(char *dest, const char *src, size_t size, size_t d)` | Altered for efficiency: Function now always returns 0; Variable d is now a parameter.

### New functions

Function | Format | Description | Return
--- | --- | --- | ---
ft_strbuild | `char	*ft_strbuild(char *s1, const char *s2)` | Concatenates s1 and s2 into a new string. Allows s1 to be modified. [requires malloc] | New joined string
