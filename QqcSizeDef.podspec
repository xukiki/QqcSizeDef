Pod::Spec.new do |s|

  s.license      = "MIT"
  s.author       = { "qqc" => "20599378@qq.com" }
  s.platform     = :ios, "8.0"
  s.requires_arc  = true

  s.name         = "QqcSizeDef"
  s.version      = "1.0.0"
  s.summary      = "QqcSizeDef"
  s.homepage     = "https://github.com/xukiki/QqcSizeDef"
  s.source       = { :git => "https://github.com/xukiki/QqcSizeDef.git", :tag => "#{s.version}" }
  
  s.source_files  = ["QqcSizeDef/*.{h,m}"]

end
