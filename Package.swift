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
            url: "https://ons.pfs.gdn/assets/a741b936-e743-4416-afa4-7494df66d54f/ONSBatch.xcframework.zip",
            checksum: "89a288fd854c0f3876ff8e184382ccec5ae1683d4a12b61e9e79453e76806ccf"
        )
    ]
)
