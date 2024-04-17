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
            url: "https://ons.pfs.gdn/assets/96398dee-6d62-422e-9b78-0dcf0393420f?download=",
            checksum: "b08b662e54e4d86cccbea490502345ad6f6f71479f6705e83301e674a4b3d6cd"
        )
    ]
)