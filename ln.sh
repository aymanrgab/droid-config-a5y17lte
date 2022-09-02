#!/bin/bash
# link necessary init services
files=(
"a2dp_audio_policy_configuration.xml
audio_policy_configuration.xml
audio_policy_volumes.xml
default_volume_tables.xml
media_codecs.xml
media_codecs_google_audio.xml
media_codecs_google_telephony.xml
media_codecs_google_video.xml
media_profiles_V1_0.xml
mixer_gains.xml
mixer_paths.xml
mixer_paths_0.xml
r_submix_audio_policy_configuration.xml
usb_audio_policy_configuration.xml"
)

for i in "${files[@]}"
do
  ln -s /vendor/etc/$i sparse/etc/
done

