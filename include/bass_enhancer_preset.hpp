#ifndef BASS_ENHANCER_PRESET_HPP
#define BASS_ENHANCER_PRESET_HPP

#include "plugin_preset_base.hpp"

class BassEnhancerPreset : public PluginPresetBase {
 public:
  BassEnhancerPreset();

  void write(PresetType preset_type,
             boost::property_tree::ptree& root) override;
  void read(PresetType preset_type, const boost::property_tree::ptree& root) override;

 private:
  Glib::RefPtr<Gio::Settings> output_settings;

  void save(boost::property_tree::ptree& root,
            const std::string& section,
            const Glib::RefPtr<Gio::Settings>& settings) override;
  void load(const boost::property_tree::ptree& root,
            const std::string& section,
            const Glib::RefPtr<Gio::Settings>& settings) override;
};

#endif
