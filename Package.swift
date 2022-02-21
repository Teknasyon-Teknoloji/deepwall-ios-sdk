// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "DeepWall",
    platforms: [
        .iOS(.v10)
    ],
    products: [
        .library(
            name: "DeepWall",
            targets: ["DeepWall"]),
    ],
    dependencies: [
    ],
    targets: [
        .binaryTarget(
            name: "DeepWall",
            path: "Frameworks/DeepWall.xcframework"
        )
    ]
)
