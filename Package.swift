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
            url: "https://ons.pfs.gdn/assets/96398dee-6d62-422e-9b78-0dcf0393420f/xcframework-build5.zip",
            checksum: "a2db092e556e325b9323c7d6a5f08fdd11e5e0b0712c20b9587055ab8c3e9c0d"
        )
    ]
)