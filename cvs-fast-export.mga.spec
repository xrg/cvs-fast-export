%define git_repo cvs-fast-export

Name:       cvs-fast-export
Summary:    Convert CVS repositories to git stream
Version:    %git_get_ver
Release:    %mkrel %git_get_rel
URL:        http://www.catb.org/~esr/cvs-fast-export
Source0:    %git_bs_source %{name}-%{version}.tar.gz
License:    GPLv2
Group:      Development/Other
BuildRequires:  asciidoc
BuildRequires:  flex
BuildRequires:  bison >= 3


%description
This program analyzes a collection of RCS files in a CVS repository
(or outside of one) and, when possible, emits an equivalent history in
the form of a fast-import stream.  Not all possible histories can be
rendered this way; the program tries to emit useful warnings when it
can't.  The program can also produce a visualization of the resulting
commit DAG in the DOT format handled by the graphviz suite.

The analysis stage of this code originally travelled as "parsecvs" 
and was written by Keith Packard in early 2006.  It was briefly 
maintained by Bart Massey before passing to Eric S. Raymond in 
late 2012; ESR wrote the fast-export output stage and renamed the
program to reflect its new function. More historical details are
in hacking.asc.

The distribution includes a tool, cvssync, for fetching masters from
CVS remote repositories so cvs-fast-export can see them.  You will
need rsync installed to use it.


%prep
%git_get_source
%setup -q

%build
%make_build cvs-fast-export man


%install
%make_install prefix=%{_prefix}



%files
%doc README NEWS COPYING AUTHORS
%defattr(-,root,root)
%attr(0755,root,root) %{_bindir}/cvsconvert
%attr(0755,root,root) %{_bindir}/cvs-fast-export
%attr(0755,root,root) %{_bindir}/cvssync
                      %{_mandir}/man1/cvs*.1*


%changelog -f %{_sourcedir}/%{name}-changelog.gitrpm.txt
