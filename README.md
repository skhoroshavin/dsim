# DSim [![Build Status](https://travis-ci.org/skhoroshavin/dsim.svg?branch=master)](https://travis-ci.org/skhoroshavin/dsim)
Data oriented simulation/game framework

Now at very early stage of development.

## Done

- Allocator interface
- Typed and untyped dynamic arrays
- Hash container with array-like interface

## Roadmap

- Stabilize storage interface and finish hash_storage implementation
- Stabilize storage asynchronous event queues
- Improve LUA bindings
- Implement network replication
- Add support for variable length data
- Implement benchmark for typical use cases
- Implement partitioned storages
- Implement storage views
- Implement more allocators (page, buddy, pool)
- Improve stack allocator

## Contribution policy

Help with porting to as many platforms as possible is very welcome.

## Credits

- Hash container inspired by hash from <a href="https://bitbucket.org/bitsquid/foundation">Bitsquid foundation</a> library.
- Tests written using <a href="http://www.throwtheswitch.org/unity">Unity</a> framework.
