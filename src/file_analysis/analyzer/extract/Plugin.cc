// See the file  in the main distribution directory for copyright.

#include "Extract.h"
#include "plugin/Plugin.h"
#include "file_analysis/Component.h"

namespace plugin {
namespace Zeek_FileExtract {

class Plugin : public plugin::Plugin {
public:
	plugin::Configuration Configure()
		{
		AddComponent(new ::file_analysis::Component("EXTRACT", ::file_analysis::Extract::Instantiate));

		plugin::Configuration config;
		config.name = "Zeek::FileExtract";
		config.description = "Extract file content";
		return config;
		}
} plugin;

}
}
