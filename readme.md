# SourceMonitorOS

[Jim Wanner][wannerjim] retired from software development. This project aims to get the original SourceMonitor code of [Campwood Software LTD][campwoodsw] to become open source.

## Motivation

Because of some licensed code and other issues a refactoring of the existing code base will be not done. Instead of this a re-write from scratch is aimed according to the functionality known from the original.

_Getting there is half the fun. - Konfuzius_

_A journey of a thousand miles begins with a single step. - Laotse_

## Definitions for environment

- Programming language: [C++17][cpp17]
- Build system: [CMake][cmake], minimum version 3.5
- License: [MIT][licensemit]
- Framework: [QT][qt] in verison 6.2 LTS

### How to compile

For compiling the project you have to open the [CMakeLists.txt project][project_file] file of the root folder in [QT Creator][tool_qt_creator].

## Required skills

To support the project there is a need of at least one of the listed skills.

- [![CPP](https://skillicons.dev/icons?i=cpp)](https://skillicons.dev) - the basic programming language
- [![CMake](https://skillicons.dev/icons?i=cmake)](https://skillicons.dev) - the build system used
- [![git](https://skillicons.dev/icons?i=git)](https://skillicons.dev) - the used code versioning system
- [![GitHub](https://skillicons.dev/icons?i=github)](https://skillicons.dev) - the hoster of the project code
- [![GitHubActions](https://skillicons.dev/icons?i=githubactions)](https://skillicons.dev) - used for CI/CD processes
- [![Markdown](https://skillicons.dev/icons?i=md)](https://skillicons.dev) - used for documentation
- [![QT](https://skillicons.dev/icons?i=qt)](https://skillicons.dev) - the used framework

## Project folder organization

Allthough there are CMake files existing up to know you need to run them using QT Creator.

- In the folder [documentation][folder_documentation] you can find the documentation of SourceMonitorOS
- In the folder [smcli][folder_smcli] you can find the command line client of SourceMonitorOS
- In the folder [smcore][folder_smcore] you can find the core functionality of SourceMonitorOS
- In the folder [smgui][folder_smgui] you can find the UI of SourceMonitorOS
- In the folder [smtest][folder_smtest] you can find the tests of at least the [smcore][folder_smcore].

[campwoodsw]: https://www.campwoodsw.com/sourcemonitor.html
[cmake]: https://www.cmake.org
[cpp17]: https://en.wikipedia.org/wiki/C%2B%2B17
[folder_documentation]: ./documentation/readme.md
[folder_smcli]: ./smcli/readme.md
[folder_smcore]: ./smcore/readme.md
[folder_smgui]: ./smgui/readme.md
[folder_smtest]: ./smtest/readme.md
[licensemit]: https://opensource.org/licenses/MIT
[qt]: https://www.qt.io/
[tool_qt_creator]: https://www.qt.io/product/development-tools
[wannerjim]: https://campwoodsw.com/emcomp/about-us/
[project_file]: ./CMakeLists.txt
