﻿
# 🔥 **Ember**

## *An experimental modular MMO server emulator.*

---

Ember is an educational and research emulator developed to investigate MMO server architectures and bleeding-edge C++ language features and tooling.

While most emulators strive for feature completeness, Ember aims to be a production quality codebase and deployment architecture.

### Quickstart

Ember uses Docker to make development easy. Use our provided images to set an entire development environment up within minutes. See docs/Quickstart.md.

Want to do it the traditional way? That's fine too, just see docs/GettingStarted.md.

### Need help?

We have a Discord server over at [https://discord.gg/WpPJzQS](https://discord.gg/WpPJzQS) or you can check [our website](https://emberemu.com) out for further documentation.

### Supported platforms

Ember aims to support the following platforms as a minimum:

| Operating System  | Architectures  |
| :------------ |:---------------:|
| Linux      | x86, x64, ARMv6 (tentative) |
| Windows       | x86, x64        |
| Mac OS | x86, x64        |

### Compiler support

This table lists the compilers actively used during development as well as the oldest versions that should support the language features needed to compile the codebase. The minimum versions are not frequently tested, therefore they are not guaranteed to be compatible.

|       |  Supported  |   Minimum   |
|-------|:-----------:|:-----------:|
| MSVC  | 19.7 (VS2017) | 19.7 (VS2017) |
| Clang |     5.0     |     5.0     |
| GCC   |     8.1     |     8.1     |

### Build status

|  | master  | development |
| :------------ |:---------------:|:---------------:|
| Linux | [![Build Status](https://travis-ci.org/EmberEmu/Ember.svg?branch=master)](https://travis-ci.org/EmberEmu/Ember) | [![Build Status](https://travis-ci.org/EmberEmu/Ember.svg?branch=development)](https://travis-ci.org/EmberEmu/Ember) |
| Windows | [![Build status](https://ci.appveyor.com/api/projects/status/wtctwhykqeelwk4g/branch/master?svg=true)](https://ci.appveyor.com/project/Chaosvex/ember/branch/master) | Soon |
| Coverity | [![Coverity Scan Status](https://scan.coverity.com/projects/5653/badge.svg)](https://scan.coverity.com/projects/5653) | [![Coverity Scan Status](https://scan.coverity.com/projects/5653/badge.svg)](https://scan.coverity.com/projects/5653) |

### Why WoW 1.12.1?

Our primary goal isn't to produce a feature-complete, up-to-date emulator to use with newer clients. The 1.12.1 protocol was chosen as a fixed target to leverage the extensive research of prior projects, allowing for greater focus on writing code over reverse engineering.

### License

This project is licensed under the Mozilla Public License Version 2.0. A full copy of the license can be found in LICENSE or [by clicking here](http://mozilla.org/MPL/2.0/).
