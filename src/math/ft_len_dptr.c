/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_dptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 23:19:52 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/08/05 21:27:39 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

// Cuenta cuantos items tiene una array

int	ft_len_dptr(char **arr)
{
	int	i;

	i = -1;
	while (arr[++i] != NULL)
		;
	return (i);
}

// int main(void)
// {
// 		char *env[] = {"NVM_RC_VERSION=",
// 					"TERM_PROGRAM=iTerm.app",
// 					"NVM_CD_FLAGS=",
// 					"TERM=xterm-256color",
// 					"SHELL=/bin/bash",
// 					"CLICOLOR=1",
// 					"TMPDIR=/var/folders/4n/804bwxpj5vl86x7z5h4zk0_h0000gn/T/",
// 					"Apple_PubSub_Socket_Render=/private/tmp/com.apple.launchd,
// 					"TERM_PROGRAM_VERSION=3.3.12",
// 					"OLDPWD=/Volumes/1TB/Dropbox/00_42Barcelona/42Barcelona/C",
// 					"TERM_SESSION_ID=w0t0p2:8305BA1D-952A-488D-BE41-B7AE09E8F",
// 					"NVM_DIR=/Users/nacho/.nvm",
// 					"USER=nacho",
// 					"COMMAND_MODE=unix2003",
// 					"SSH_AUTH_SOCK=/private/tmp/com.apple.launchEZ49/Listeners",
// 					"__CF_USER_TEXT_ENCODING=0x0:0:0",
// 					"LSCOLORS=ExFxBxDxCxegedabagacad",
// 					"PATH=/Library/Frameworks/Python.framework/Vel/mongodb/bin",
// 					"PWD=/Volumes/00_42Barcelona/42Bana/C3/minishell/sources",
// 					"LANG=es_ES.UTF-8",
// 					"ITERM_PROFILE=Nach",
// 					"XPC_FLAGS=0x0",
// 					"XPC_SERVICE_NAME=0",
// 					"SHLVL=1",
// 					"HOME=/Users/nacho",
// 					"COLORFGBG=15;0",
// 					"GREP_OPTIONS=--color=auto",
// 					"LC_TERMINAL_VERSION=3.3.12",
// 					"ITERM_SESSION_ID=w0t0p2:83A1D-952A-488D-BE41-B7AE09E8DC1F",
// 					"LOGNAME=nacho",
// 					"LC_TERMINAL=iTerm2",
// 					"DISPLAY=/private/tmp/com.apple.launchd.soJV/org.xquartz:0",
// 					"SECURITYSESSIONID=186a7",
// 					"COLORTERM=truecolor",
// 					"_=/usr/bin/env",
// 					NULL};

// 		printf("--%d--\n", ft_len_dptr(env));

// }
