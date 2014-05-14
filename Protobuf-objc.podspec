Pod::Spec.new do |s|
  s.name         = "Protobuf-objc"
  s.version      = "1.2"
  s.summary      = "Protocol Buffers for Objective-C"
  s.description  = <<-DESC
                      An implementation of Protocol Buffers 2.5 in Objective C.
                      Protocol Buffers are a way of encoding structured data
                      in an efficient yet extensible format.
                      This project is based on an implementation of Protocol Buffers from Google.
                      Supported arm64 and early architectures.
                      DESC
  s.homepage     = "http://protobuf.axo.io"
  s.license      = "Apache 2.0"
  s.author       = { "Alexey KHokhlov" => "alexeyxo@gmail.com" }
  s.author       = "Sergey Shatunov"

  s.authors      = "Jon Parise","Kenton Varda", "Sanjay Ghemawat", "Jeff Dean"

  s.source       = {
    :git => "https://github.com/alexeyxo/protobuf-objc.git",
  }
  s.header_dir = "ProtocolBuffers"
  s.source_files = 'src/runtime/Classes/*.{h,m}'
  s.xcconfig = { 'WARNING_CFLAGS' => '$(inherited) -Wno-missing-prototypes -Wno-format' }
  s.preserve_paths = 'README.md'

  s.platform     = :ios, '5.0'
  s.requires_arc = false

  s.subspec 'arc' do |sp|
    sp.source_files = 'src/runtime/Classes/Descriptor/*.{h,m}'
    sp.requires_arc = true
  end

end