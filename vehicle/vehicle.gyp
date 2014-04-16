{
  'includes':[
    '../common/common.gypi',
  ],
  'targets': [
    {
      'target_name': 'tizen_time',
      'type': 'loadable_module',
      'variables': {
        'packages': [
          'icu-i18n',
        ],
      },
      'includes': [
        '../common/pkg-config.gypi',
      ],
      'sources': [
        'vehicle_api.js',
        'vehicle_extension.cc',
        'vehicle_extension.h',
        'vehicle_instance.cc',
        'vehicle_instance.h',
        '../common/extension.h',
        '../common/extension.cc',
      ],
      'conditions': [
        [ 'tizen == 1', {
            'variables': { 'packages': ['vconf'] },
        }],
      ],
    },
  ],
}
