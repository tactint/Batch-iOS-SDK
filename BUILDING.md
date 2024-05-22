# Building Batch SDK

## Requirements

- Latest Xcode

## Steps

- Open `batch.xcodeproj`. Dependencies are added using Swift Package Manager, Xcode will download them automatically
- Archive the `BatchXCFramework` target
- `Batch.xcframework` will be available in `Sources/universal`
- Generate the checksum for the package `swift package compute-checksum PATH`
https://developer.apple.com/documentation/packagedescription/target/checksum
