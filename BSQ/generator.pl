# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    generator.pl                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 22:50:21 by ymoussad          #+#    #+#              #
#    Updated: 2024/07/24 22:50:24 by ymoussad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
for (my $j = 0; $j < $x; $j++) {
if (int(rand($y) * 2) < $density) {
print "o";
}
else {
print ".";
}
}
print "\n";
}
