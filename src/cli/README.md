# ccurl-cli
Command-line interface to libcurl

This requires cornodeledger/ccurl to be built and in the library path.

## install

```
cmake .
make
make install
```

## Running

```
ccurl <minWeightMagnitude> [TRYTES]
```
or
```
echo [TRYTES] | ccurl <minWeightMagnitude>
```
