#include <gazebo/gazebo.hh>

namespace gazebo
{
    class WorldPluginUdacityOffice : public WorldPlugin
    {
        public: WorldPluginUdacityOffice() : WorldPlugin()
        {
            printf("Welcome to the Udacity office!\n");
        }

        public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
        {
        }
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginUdacityOffice)
}