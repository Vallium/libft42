/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 16:19:32 by aalliot           #+#    #+#             */
/*   Updated: 2017/09/03 16:25:08 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void		error_tab_one(const char **t)
{
	t[7] = "Argument list too long";
	t[8] = "Exec format error";
	t[9] = "Bad file descriptor";
	t[10] = "No child processes";
	t[11] = "Resource deadlock avoided";
	t[12] = "Cannot allocate memory";
	t[13] = "Permission denied";
	t[14] = "Bad address";
	t[15] = "Block device required";
	t[16] = "Device / Resource busy";
	t[17] = "File exists";
	t[18] = "Cross-device link";
	t[19] = "Operation not supported by device";
	t[20] = "Not a directory";
	t[21] = "Is a directory";
	t[22] = "Invalid argument";
	t[23] = "Too many open files in system";
	t[24] = "Too many open files";
	t[25] = "Inappropriate ioctl for device";
	t[26] = "Text file busy";
	t[27] = "File too large";
	t[28] = "No space left on device";
	t[29] = "Illegal seek";
	t[30] = "Read-only file system";
	t[31] = "Too many links";
}

static void		error_tab_two(const char **t)
{
	t[32] = "Broken pipe";
	t[33] = "Numerical argument out of domain";
	t[34] = "Result too large";
	t[35] = "Resource temporarily unavailable";
	t[36] = "Operation now in progress";
	t[37] = "Operation already in progress";
	t[38] = "Socket operation on non-socket";
	t[39] = "Destination address required";
	t[40] = "Message too long";
	t[41] = "Protocol wrong type for socket";
	t[42] = "Protocol not available";
	t[43] = "Protocol not supported";
	t[44] = "Socket type not supported";
	t[45] = "Operation not supported";
	t[46] = "Protocol family not supported";
	t[47] = "Address family not supported by protocol family";
	t[48] = "Address already in use";
	t[49] = "Can't assign requested address";
	t[50] = "Network is down";
	t[51] = "Network is unreachable";
	t[52] = "Network dropped connection on reset";
	t[53] = "Software caused connection abort";
	t[54] = "Connection reset by peer";
	t[55] = "No buffer space available";
	t[56] = "Socket is already connected";
}

static void		error_tab_three(const char **t)
{
	t[57] = "Socket is not connected";
	t[58] = "Can't send after socket shutdown";
	t[59] = "Too many references: can't splice";
	t[60] = "Operation timed out";
	t[61] = "Connection refused";
	t[62] = "Too many levels of symbolic links";
	t[63] = "File name too long";
	t[64] = "Host is down";
	t[65] = "No route to host";
	t[66] = "Directory not empty";
	t[67] = "Too many processes";
	t[68] = "Too many users";
	t[69] = "Disc quota exceeded";
	t[70] = "Stale NFS file handle";
	t[71] = "Too many levels of remote in path";
	t[72] = "RPC struct is bad";
	t[73] = "RPC version wrong";
	t[74] = "RPC prog. not avail";
	t[75] = "Program version wrong";
	t[76] = "Bad procedure for program";
	t[77] = "No locks available";
	t[78] = "Function not implemented";
	t[79] = "Inappropriate file type or format";
	t[80] = "Authentication error";
	t[81] = "Need authenticator";
}

static void		error_tab_four(const char **t)
{
	t[82] = "Device power is off";
	t[83] = "Device error, e.g. paper out";
	t[84] = "Value too large to be stored in data type";
	t[85] = "Bad executable";
	t[86] = "Bad CPU type in executable";
	t[87] = "Shared library version mismatch";
	t[88] = "Malformed Macho file";
	t[89] = "Operation canceled";
	t[90] = "Identifier removed";
	t[91] = "No message of desired type";
	t[92] = "Illegal byte sequence";
	t[93] = "Attribute not found";
	t[94] = "Bad message";
	t[95] = "Reserved";
	t[96] = "No message available on STREAM";
	t[97] = "Reserved";
	t[98] = "No STREAM resources";
	t[99] = "Not a STREAM";
	t[100] = "Protocol error";
	t[101] = "STREAM ioctl timeout";
	t[102] = "Operation not supported on socket";
	t[103] = "No such policy registered";
	t[104] = "State not recoverable";
	t[105] = "Previous owner died";
	t[106] = "Interface output queue is full";
}

const char		*ft_strerror(size_t err)
{
	const char	*t[107];

	t[0] = NULL;
	t[1] = "Operation not permitted";
	t[2] = "No such file or directory";
	t[3] = "No such process";
	t[4] = "Interrupted system call";
	t[5] = "Input/output error";
	t[6] = "Device not configured";
	error_tab_one(t);
	error_tab_two(t);
	error_tab_three(t);
	error_tab_four(t);
	return (t[err]);
}
