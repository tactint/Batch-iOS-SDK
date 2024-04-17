// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "ONSBatch",
    platforms: [
        .iOS(.v10)
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "ONSBatch",
            targets: ["ONSBatch"])
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
    ],
    targets: [
        .binaryTarget(
            name: "ONSBatch",
            url: "https://ons.pfs.gdn/assets/96398dee-6d62-422e-9b78-0dcf0393420f/xcframework.zip",
            checksum: "232275d7c22edb00cbe6909cd2f5a13cdb89c0f63b5f4ac11f65a8db909f20b0"
        )
    ]
)