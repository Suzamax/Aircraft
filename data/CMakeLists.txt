set(GRESOURCE_FILE ${GENERATED_DATA_DIR}/${PROJECT_NAME}.gresource.xml)
set(GSCHEMA_FILE ${GENERATED_DATA_DIR}/${APPLICATION_ID}.gschema.xml)
set(DESKTOP_FILE ${GENERATED_DATA_DIR}/${APPLICATION_ID}.desktop)
set(ICON_FILE ${GENERATED_DATA_DIR}/${PROJECT_NAME}.png)

configure_file(one.suzamax.Aircraft.gresource.xml.in ${GRESOURCE_FILE})
configure_file(one.suzamax.Aircraft.gschema.xml ${GSCHEMA_FILE})
configure_file(one.suzamax.Aircraft.desktop.in ${DESKTOP_FILE})
configure_file(icons/48x48/icon.png ${ICON_FILE} COPYONLY)

compile_schemas(${GSCHEMA_FILE})

install(FILES ${GSCHEMA_FILE} DESTINATION /usr/share/glib-2.0/schemas)
install(FILES ${DESKTOP_FILE} DESTINATION /usr/share/applications)
install(FILES ${ICON_FILE} DESTINATION /usr/share/icons/${PROJECT_NAME})
install(SCRIPT ${PROJECT_SOURCE_DIR}/cmake/InstallScript.cmake)