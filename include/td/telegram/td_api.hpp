#pragma once

/**
 * \file
 * Contains downcast_call methods for calling a function object on downcasted to
 * the most derived class TDLib API object.
 */
#include "td_api.h"

namespace td {
namespace td_api {

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(Object &obj, const T &func) {
  switch (obj.get_id()) {
    case accountTtl::ID:
      func(static_cast<accountTtl &>(obj));
      return true;
    case address::ID:
      func(static_cast<address &>(obj));
      return true;
    case animatedChatPhoto::ID:
      func(static_cast<animatedChatPhoto &>(obj));
      return true;
    case animation::ID:
      func(static_cast<animation &>(obj));
      return true;
    case animations::ID:
      func(static_cast<animations &>(obj));
      return true;
    case audio::ID:
      func(static_cast<audio &>(obj));
      return true;
    case authenticationCodeInfo::ID:
      func(static_cast<authenticationCodeInfo &>(obj));
      return true;
    case authenticationCodeTypeTelegramMessage::ID:
      func(static_cast<authenticationCodeTypeTelegramMessage &>(obj));
      return true;
    case authenticationCodeTypeSms::ID:
      func(static_cast<authenticationCodeTypeSms &>(obj));
      return true;
    case authenticationCodeTypeCall::ID:
      func(static_cast<authenticationCodeTypeCall &>(obj));
      return true;
    case authenticationCodeTypeFlashCall::ID:
      func(static_cast<authenticationCodeTypeFlashCall &>(obj));
      return true;
    case authorizationStateWaitTdlibParameters::ID:
      func(static_cast<authorizationStateWaitTdlibParameters &>(obj));
      return true;
    case authorizationStateWaitEncryptionKey::ID:
      func(static_cast<authorizationStateWaitEncryptionKey &>(obj));
      return true;
    case authorizationStateWaitPhoneNumber::ID:
      func(static_cast<authorizationStateWaitPhoneNumber &>(obj));
      return true;
    case authorizationStateWaitCode::ID:
      func(static_cast<authorizationStateWaitCode &>(obj));
      return true;
    case authorizationStateWaitOtherDeviceConfirmation::ID:
      func(static_cast<authorizationStateWaitOtherDeviceConfirmation &>(obj));
      return true;
    case authorizationStateWaitRegistration::ID:
      func(static_cast<authorizationStateWaitRegistration &>(obj));
      return true;
    case authorizationStateWaitPassword::ID:
      func(static_cast<authorizationStateWaitPassword &>(obj));
      return true;
    case authorizationStateReady::ID:
      func(static_cast<authorizationStateReady &>(obj));
      return true;
    case authorizationStateLoggingOut::ID:
      func(static_cast<authorizationStateLoggingOut &>(obj));
      return true;
    case authorizationStateClosing::ID:
      func(static_cast<authorizationStateClosing &>(obj));
      return true;
    case authorizationStateClosed::ID:
      func(static_cast<authorizationStateClosed &>(obj));
      return true;
    case autoDownloadSettings::ID:
      func(static_cast<autoDownloadSettings &>(obj));
      return true;
    case autoDownloadSettingsPresets::ID:
      func(static_cast<autoDownloadSettingsPresets &>(obj));
      return true;
    case background::ID:
      func(static_cast<background &>(obj));
      return true;
    case backgroundFillSolid::ID:
      func(static_cast<backgroundFillSolid &>(obj));
      return true;
    case backgroundFillGradient::ID:
      func(static_cast<backgroundFillGradient &>(obj));
      return true;
    case backgroundTypeWallpaper::ID:
      func(static_cast<backgroundTypeWallpaper &>(obj));
      return true;
    case backgroundTypePattern::ID:
      func(static_cast<backgroundTypePattern &>(obj));
      return true;
    case backgroundTypeFill::ID:
      func(static_cast<backgroundTypeFill &>(obj));
      return true;
    case backgrounds::ID:
      func(static_cast<backgrounds &>(obj));
      return true;
    case bankCardActionOpenUrl::ID:
      func(static_cast<bankCardActionOpenUrl &>(obj));
      return true;
    case bankCardInfo::ID:
      func(static_cast<bankCardInfo &>(obj));
      return true;
    case basicGroup::ID:
      func(static_cast<basicGroup &>(obj));
      return true;
    case basicGroupFullInfo::ID:
      func(static_cast<basicGroupFullInfo &>(obj));
      return true;
    case botCommand::ID:
      func(static_cast<botCommand &>(obj));
      return true;
    case botInfo::ID:
      func(static_cast<botInfo &>(obj));
      return true;
    case call::ID:
      func(static_cast<call &>(obj));
      return true;
    case callDiscardReasonEmpty::ID:
      func(static_cast<callDiscardReasonEmpty &>(obj));
      return true;
    case callDiscardReasonMissed::ID:
      func(static_cast<callDiscardReasonMissed &>(obj));
      return true;
    case callDiscardReasonDeclined::ID:
      func(static_cast<callDiscardReasonDeclined &>(obj));
      return true;
    case callDiscardReasonDisconnected::ID:
      func(static_cast<callDiscardReasonDisconnected &>(obj));
      return true;
    case callDiscardReasonHungUp::ID:
      func(static_cast<callDiscardReasonHungUp &>(obj));
      return true;
    case callId::ID:
      func(static_cast<callId &>(obj));
      return true;
    case callProblemEcho::ID:
      func(static_cast<callProblemEcho &>(obj));
      return true;
    case callProblemNoise::ID:
      func(static_cast<callProblemNoise &>(obj));
      return true;
    case callProblemInterruptions::ID:
      func(static_cast<callProblemInterruptions &>(obj));
      return true;
    case callProblemDistortedSpeech::ID:
      func(static_cast<callProblemDistortedSpeech &>(obj));
      return true;
    case callProblemSilentLocal::ID:
      func(static_cast<callProblemSilentLocal &>(obj));
      return true;
    case callProblemSilentRemote::ID:
      func(static_cast<callProblemSilentRemote &>(obj));
      return true;
    case callProblemDropped::ID:
      func(static_cast<callProblemDropped &>(obj));
      return true;
    case callProblemDistortedVideo::ID:
      func(static_cast<callProblemDistortedVideo &>(obj));
      return true;
    case callProblemPixelatedVideo::ID:
      func(static_cast<callProblemPixelatedVideo &>(obj));
      return true;
    case callProtocol::ID:
      func(static_cast<callProtocol &>(obj));
      return true;
    case callServer::ID:
      func(static_cast<callServer &>(obj));
      return true;
    case callServerTypeTelegramReflector::ID:
      func(static_cast<callServerTypeTelegramReflector &>(obj));
      return true;
    case callServerTypeWebrtc::ID:
      func(static_cast<callServerTypeWebrtc &>(obj));
      return true;
    case callStatePending::ID:
      func(static_cast<callStatePending &>(obj));
      return true;
    case callStateExchangingKeys::ID:
      func(static_cast<callStateExchangingKeys &>(obj));
      return true;
    case callStateReady::ID:
      func(static_cast<callStateReady &>(obj));
      return true;
    case callStateHangingUp::ID:
      func(static_cast<callStateHangingUp &>(obj));
      return true;
    case callStateDiscarded::ID:
      func(static_cast<callStateDiscarded &>(obj));
      return true;
    case callStateError::ID:
      func(static_cast<callStateError &>(obj));
      return true;
    case callbackQueryAnswer::ID:
      func(static_cast<callbackQueryAnswer &>(obj));
      return true;
    case callbackQueryPayloadData::ID:
      func(static_cast<callbackQueryPayloadData &>(obj));
      return true;
    case callbackQueryPayloadDataWithPassword::ID:
      func(static_cast<callbackQueryPayloadDataWithPassword &>(obj));
      return true;
    case callbackQueryPayloadGame::ID:
      func(static_cast<callbackQueryPayloadGame &>(obj));
      return true;
    case canTransferOwnershipResultOk::ID:
      func(static_cast<canTransferOwnershipResultOk &>(obj));
      return true;
    case canTransferOwnershipResultPasswordNeeded::ID:
      func(static_cast<canTransferOwnershipResultPasswordNeeded &>(obj));
      return true;
    case canTransferOwnershipResultPasswordTooFresh::ID:
      func(static_cast<canTransferOwnershipResultPasswordTooFresh &>(obj));
      return true;
    case canTransferOwnershipResultSessionTooFresh::ID:
      func(static_cast<canTransferOwnershipResultSessionTooFresh &>(obj));
      return true;
    case chat::ID:
      func(static_cast<chat &>(obj));
      return true;
    case chatActionTyping::ID:
      func(static_cast<chatActionTyping &>(obj));
      return true;
    case chatActionRecordingVideo::ID:
      func(static_cast<chatActionRecordingVideo &>(obj));
      return true;
    case chatActionUploadingVideo::ID:
      func(static_cast<chatActionUploadingVideo &>(obj));
      return true;
    case chatActionRecordingVoiceNote::ID:
      func(static_cast<chatActionRecordingVoiceNote &>(obj));
      return true;
    case chatActionUploadingVoiceNote::ID:
      func(static_cast<chatActionUploadingVoiceNote &>(obj));
      return true;
    case chatActionUploadingPhoto::ID:
      func(static_cast<chatActionUploadingPhoto &>(obj));
      return true;
    case chatActionUploadingDocument::ID:
      func(static_cast<chatActionUploadingDocument &>(obj));
      return true;
    case chatActionChoosingLocation::ID:
      func(static_cast<chatActionChoosingLocation &>(obj));
      return true;
    case chatActionChoosingContact::ID:
      func(static_cast<chatActionChoosingContact &>(obj));
      return true;
    case chatActionStartPlayingGame::ID:
      func(static_cast<chatActionStartPlayingGame &>(obj));
      return true;
    case chatActionRecordingVideoNote::ID:
      func(static_cast<chatActionRecordingVideoNote &>(obj));
      return true;
    case chatActionUploadingVideoNote::ID:
      func(static_cast<chatActionUploadingVideoNote &>(obj));
      return true;
    case chatActionCancel::ID:
      func(static_cast<chatActionCancel &>(obj));
      return true;
    case chatActionBarReportSpam::ID:
      func(static_cast<chatActionBarReportSpam &>(obj));
      return true;
    case chatActionBarReportUnrelatedLocation::ID:
      func(static_cast<chatActionBarReportUnrelatedLocation &>(obj));
      return true;
    case chatActionBarReportAddBlock::ID:
      func(static_cast<chatActionBarReportAddBlock &>(obj));
      return true;
    case chatActionBarAddContact::ID:
      func(static_cast<chatActionBarAddContact &>(obj));
      return true;
    case chatActionBarSharePhoneNumber::ID:
      func(static_cast<chatActionBarSharePhoneNumber &>(obj));
      return true;
    case chatAdministrator::ID:
      func(static_cast<chatAdministrator &>(obj));
      return true;
    case chatAdministrators::ID:
      func(static_cast<chatAdministrators &>(obj));
      return true;
    case chatEvent::ID:
      func(static_cast<chatEvent &>(obj));
      return true;
    case chatEventMessageEdited::ID:
      func(static_cast<chatEventMessageEdited &>(obj));
      return true;
    case chatEventMessageDeleted::ID:
      func(static_cast<chatEventMessageDeleted &>(obj));
      return true;
    case chatEventPollStopped::ID:
      func(static_cast<chatEventPollStopped &>(obj));
      return true;
    case chatEventMessagePinned::ID:
      func(static_cast<chatEventMessagePinned &>(obj));
      return true;
    case chatEventMessageUnpinned::ID:
      func(static_cast<chatEventMessageUnpinned &>(obj));
      return true;
    case chatEventMemberJoined::ID:
      func(static_cast<chatEventMemberJoined &>(obj));
      return true;
    case chatEventMemberLeft::ID:
      func(static_cast<chatEventMemberLeft &>(obj));
      return true;
    case chatEventMemberInvited::ID:
      func(static_cast<chatEventMemberInvited &>(obj));
      return true;
    case chatEventMemberPromoted::ID:
      func(static_cast<chatEventMemberPromoted &>(obj));
      return true;
    case chatEventMemberRestricted::ID:
      func(static_cast<chatEventMemberRestricted &>(obj));
      return true;
    case chatEventTitleChanged::ID:
      func(static_cast<chatEventTitleChanged &>(obj));
      return true;
    case chatEventPermissionsChanged::ID:
      func(static_cast<chatEventPermissionsChanged &>(obj));
      return true;
    case chatEventDescriptionChanged::ID:
      func(static_cast<chatEventDescriptionChanged &>(obj));
      return true;
    case chatEventUsernameChanged::ID:
      func(static_cast<chatEventUsernameChanged &>(obj));
      return true;
    case chatEventPhotoChanged::ID:
      func(static_cast<chatEventPhotoChanged &>(obj));
      return true;
    case chatEventInvitesToggled::ID:
      func(static_cast<chatEventInvitesToggled &>(obj));
      return true;
    case chatEventLinkedChatChanged::ID:
      func(static_cast<chatEventLinkedChatChanged &>(obj));
      return true;
    case chatEventSlowModeDelayChanged::ID:
      func(static_cast<chatEventSlowModeDelayChanged &>(obj));
      return true;
    case chatEventSignMessagesToggled::ID:
      func(static_cast<chatEventSignMessagesToggled &>(obj));
      return true;
    case chatEventStickerSetChanged::ID:
      func(static_cast<chatEventStickerSetChanged &>(obj));
      return true;
    case chatEventLocationChanged::ID:
      func(static_cast<chatEventLocationChanged &>(obj));
      return true;
    case chatEventIsAllHistoryAvailableToggled::ID:
      func(static_cast<chatEventIsAllHistoryAvailableToggled &>(obj));
      return true;
    case chatEventLogFilters::ID:
      func(static_cast<chatEventLogFilters &>(obj));
      return true;
    case chatEvents::ID:
      func(static_cast<chatEvents &>(obj));
      return true;
    case chatFilter::ID:
      func(static_cast<chatFilter &>(obj));
      return true;
    case chatFilterInfo::ID:
      func(static_cast<chatFilterInfo &>(obj));
      return true;
    case chatInviteLink::ID:
      func(static_cast<chatInviteLink &>(obj));
      return true;
    case chatInviteLinkInfo::ID:
      func(static_cast<chatInviteLinkInfo &>(obj));
      return true;
    case chatListMain::ID:
      func(static_cast<chatListMain &>(obj));
      return true;
    case chatListArchive::ID:
      func(static_cast<chatListArchive &>(obj));
      return true;
    case chatListFilter::ID:
      func(static_cast<chatListFilter &>(obj));
      return true;
    case chatLists::ID:
      func(static_cast<chatLists &>(obj));
      return true;
    case chatLocation::ID:
      func(static_cast<chatLocation &>(obj));
      return true;
    case chatMember::ID:
      func(static_cast<chatMember &>(obj));
      return true;
    case chatMemberStatusCreator::ID:
      func(static_cast<chatMemberStatusCreator &>(obj));
      return true;
    case chatMemberStatusAdministrator::ID:
      func(static_cast<chatMemberStatusAdministrator &>(obj));
      return true;
    case chatMemberStatusMember::ID:
      func(static_cast<chatMemberStatusMember &>(obj));
      return true;
    case chatMemberStatusRestricted::ID:
      func(static_cast<chatMemberStatusRestricted &>(obj));
      return true;
    case chatMemberStatusLeft::ID:
      func(static_cast<chatMemberStatusLeft &>(obj));
      return true;
    case chatMemberStatusBanned::ID:
      func(static_cast<chatMemberStatusBanned &>(obj));
      return true;
    case chatMembers::ID:
      func(static_cast<chatMembers &>(obj));
      return true;
    case chatMembersFilterContacts::ID:
      func(static_cast<chatMembersFilterContacts &>(obj));
      return true;
    case chatMembersFilterAdministrators::ID:
      func(static_cast<chatMembersFilterAdministrators &>(obj));
      return true;
    case chatMembersFilterMembers::ID:
      func(static_cast<chatMembersFilterMembers &>(obj));
      return true;
    case chatMembersFilterRestricted::ID:
      func(static_cast<chatMembersFilterRestricted &>(obj));
      return true;
    case chatMembersFilterBanned::ID:
      func(static_cast<chatMembersFilterBanned &>(obj));
      return true;
    case chatMembersFilterBots::ID:
      func(static_cast<chatMembersFilterBots &>(obj));
      return true;
    case chatNearby::ID:
      func(static_cast<chatNearby &>(obj));
      return true;
    case chatNotificationSettings::ID:
      func(static_cast<chatNotificationSettings &>(obj));
      return true;
    case chatPermissions::ID:
      func(static_cast<chatPermissions &>(obj));
      return true;
    case chatPhoto::ID:
      func(static_cast<chatPhoto &>(obj));
      return true;
    case chatPhotoInfo::ID:
      func(static_cast<chatPhotoInfo &>(obj));
      return true;
    case chatPhotos::ID:
      func(static_cast<chatPhotos &>(obj));
      return true;
    case chatPosition::ID:
      func(static_cast<chatPosition &>(obj));
      return true;
    case chatReportReasonSpam::ID:
      func(static_cast<chatReportReasonSpam &>(obj));
      return true;
    case chatReportReasonViolence::ID:
      func(static_cast<chatReportReasonViolence &>(obj));
      return true;
    case chatReportReasonPornography::ID:
      func(static_cast<chatReportReasonPornography &>(obj));
      return true;
    case chatReportReasonChildAbuse::ID:
      func(static_cast<chatReportReasonChildAbuse &>(obj));
      return true;
    case chatReportReasonCopyright::ID:
      func(static_cast<chatReportReasonCopyright &>(obj));
      return true;
    case chatReportReasonUnrelatedLocation::ID:
      func(static_cast<chatReportReasonUnrelatedLocation &>(obj));
      return true;
    case chatReportReasonCustom::ID:
      func(static_cast<chatReportReasonCustom &>(obj));
      return true;
    case chatSourceMtprotoProxy::ID:
      func(static_cast<chatSourceMtprotoProxy &>(obj));
      return true;
    case chatSourcePublicServiceAnnouncement::ID:
      func(static_cast<chatSourcePublicServiceAnnouncement &>(obj));
      return true;
    case chatStatisticsSupergroup::ID:
      func(static_cast<chatStatisticsSupergroup &>(obj));
      return true;
    case chatStatisticsChannel::ID:
      func(static_cast<chatStatisticsChannel &>(obj));
      return true;
    case chatStatisticsAdministratorActionsInfo::ID:
      func(static_cast<chatStatisticsAdministratorActionsInfo &>(obj));
      return true;
    case chatStatisticsInviterInfo::ID:
      func(static_cast<chatStatisticsInviterInfo &>(obj));
      return true;
    case chatStatisticsMessageInteractionInfo::ID:
      func(static_cast<chatStatisticsMessageInteractionInfo &>(obj));
      return true;
    case chatStatisticsMessageSenderInfo::ID:
      func(static_cast<chatStatisticsMessageSenderInfo &>(obj));
      return true;
    case chatTypePrivate::ID:
      func(static_cast<chatTypePrivate &>(obj));
      return true;
    case chatTypeBasicGroup::ID:
      func(static_cast<chatTypeBasicGroup &>(obj));
      return true;
    case chatTypeSupergroup::ID:
      func(static_cast<chatTypeSupergroup &>(obj));
      return true;
    case chatTypeSecret::ID:
      func(static_cast<chatTypeSecret &>(obj));
      return true;
    case chats::ID:
      func(static_cast<chats &>(obj));
      return true;
    case chatsNearby::ID:
      func(static_cast<chatsNearby &>(obj));
      return true;
    case checkChatUsernameResultOk::ID:
      func(static_cast<checkChatUsernameResultOk &>(obj));
      return true;
    case checkChatUsernameResultUsernameInvalid::ID:
      func(static_cast<checkChatUsernameResultUsernameInvalid &>(obj));
      return true;
    case checkChatUsernameResultUsernameOccupied::ID:
      func(static_cast<checkChatUsernameResultUsernameOccupied &>(obj));
      return true;
    case checkChatUsernameResultPublicChatsTooMuch::ID:
      func(static_cast<checkChatUsernameResultPublicChatsTooMuch &>(obj));
      return true;
    case checkChatUsernameResultPublicGroupsUnavailable::ID:
      func(static_cast<checkChatUsernameResultPublicGroupsUnavailable &>(obj));
      return true;
    case connectedWebsite::ID:
      func(static_cast<connectedWebsite &>(obj));
      return true;
    case connectedWebsites::ID:
      func(static_cast<connectedWebsites &>(obj));
      return true;
    case connectionStateWaitingForNetwork::ID:
      func(static_cast<connectionStateWaitingForNetwork &>(obj));
      return true;
    case connectionStateConnectingToProxy::ID:
      func(static_cast<connectionStateConnectingToProxy &>(obj));
      return true;
    case connectionStateConnecting::ID:
      func(static_cast<connectionStateConnecting &>(obj));
      return true;
    case connectionStateUpdating::ID:
      func(static_cast<connectionStateUpdating &>(obj));
      return true;
    case connectionStateReady::ID:
      func(static_cast<connectionStateReady &>(obj));
      return true;
    case contact::ID:
      func(static_cast<contact &>(obj));
      return true;
    case count::ID:
      func(static_cast<count &>(obj));
      return true;
    case countries::ID:
      func(static_cast<countries &>(obj));
      return true;
    case countryInfo::ID:
      func(static_cast<countryInfo &>(obj));
      return true;
    case customRequestResult::ID:
      func(static_cast<customRequestResult &>(obj));
      return true;
    case databaseStatistics::ID:
      func(static_cast<databaseStatistics &>(obj));
      return true;
    case date::ID:
      func(static_cast<date &>(obj));
      return true;
    case dateRange::ID:
      func(static_cast<dateRange &>(obj));
      return true;
    case datedFile::ID:
      func(static_cast<datedFile &>(obj));
      return true;
    case deepLinkInfo::ID:
      func(static_cast<deepLinkInfo &>(obj));
      return true;
    case deviceTokenFirebaseCloudMessaging::ID:
      func(static_cast<deviceTokenFirebaseCloudMessaging &>(obj));
      return true;
    case deviceTokenApplePush::ID:
      func(static_cast<deviceTokenApplePush &>(obj));
      return true;
    case deviceTokenApplePushVoIP::ID:
      func(static_cast<deviceTokenApplePushVoIP &>(obj));
      return true;
    case deviceTokenWindowsPush::ID:
      func(static_cast<deviceTokenWindowsPush &>(obj));
      return true;
    case deviceTokenMicrosoftPush::ID:
      func(static_cast<deviceTokenMicrosoftPush &>(obj));
      return true;
    case deviceTokenMicrosoftPushVoIP::ID:
      func(static_cast<deviceTokenMicrosoftPushVoIP &>(obj));
      return true;
    case deviceTokenWebPush::ID:
      func(static_cast<deviceTokenWebPush &>(obj));
      return true;
    case deviceTokenSimplePush::ID:
      func(static_cast<deviceTokenSimplePush &>(obj));
      return true;
    case deviceTokenUbuntuPush::ID:
      func(static_cast<deviceTokenUbuntuPush &>(obj));
      return true;
    case deviceTokenBlackBerryPush::ID:
      func(static_cast<deviceTokenBlackBerryPush &>(obj));
      return true;
    case deviceTokenTizenPush::ID:
      func(static_cast<deviceTokenTizenPush &>(obj));
      return true;
    case document::ID:
      func(static_cast<document &>(obj));
      return true;
    case draftMessage::ID:
      func(static_cast<draftMessage &>(obj));
      return true;
    case emailAddressAuthenticationCodeInfo::ID:
      func(static_cast<emailAddressAuthenticationCodeInfo &>(obj));
      return true;
    case emojis::ID:
      func(static_cast<emojis &>(obj));
      return true;
    case encryptedCredentials::ID:
      func(static_cast<encryptedCredentials &>(obj));
      return true;
    case encryptedPassportElement::ID:
      func(static_cast<encryptedPassportElement &>(obj));
      return true;
    case error::ID:
      func(static_cast<error &>(obj));
      return true;
    case file::ID:
      func(static_cast<file &>(obj));
      return true;
    case filePart::ID:
      func(static_cast<filePart &>(obj));
      return true;
    case fileTypeNone::ID:
      func(static_cast<fileTypeNone &>(obj));
      return true;
    case fileTypeAnimation::ID:
      func(static_cast<fileTypeAnimation &>(obj));
      return true;
    case fileTypeAudio::ID:
      func(static_cast<fileTypeAudio &>(obj));
      return true;
    case fileTypeDocument::ID:
      func(static_cast<fileTypeDocument &>(obj));
      return true;
    case fileTypePhoto::ID:
      func(static_cast<fileTypePhoto &>(obj));
      return true;
    case fileTypeProfilePhoto::ID:
      func(static_cast<fileTypeProfilePhoto &>(obj));
      return true;
    case fileTypeSecret::ID:
      func(static_cast<fileTypeSecret &>(obj));
      return true;
    case fileTypeSecretThumbnail::ID:
      func(static_cast<fileTypeSecretThumbnail &>(obj));
      return true;
    case fileTypeSecure::ID:
      func(static_cast<fileTypeSecure &>(obj));
      return true;
    case fileTypeSticker::ID:
      func(static_cast<fileTypeSticker &>(obj));
      return true;
    case fileTypeThumbnail::ID:
      func(static_cast<fileTypeThumbnail &>(obj));
      return true;
    case fileTypeUnknown::ID:
      func(static_cast<fileTypeUnknown &>(obj));
      return true;
    case fileTypeVideo::ID:
      func(static_cast<fileTypeVideo &>(obj));
      return true;
    case fileTypeVideoNote::ID:
      func(static_cast<fileTypeVideoNote &>(obj));
      return true;
    case fileTypeVoiceNote::ID:
      func(static_cast<fileTypeVoiceNote &>(obj));
      return true;
    case fileTypeWallpaper::ID:
      func(static_cast<fileTypeWallpaper &>(obj));
      return true;
    case formattedText::ID:
      func(static_cast<formattedText &>(obj));
      return true;
    case foundMessages::ID:
      func(static_cast<foundMessages &>(obj));
      return true;
    case game::ID:
      func(static_cast<game &>(obj));
      return true;
    case gameHighScore::ID:
      func(static_cast<gameHighScore &>(obj));
      return true;
    case gameHighScores::ID:
      func(static_cast<gameHighScores &>(obj));
      return true;
    case hashtags::ID:
      func(static_cast<hashtags &>(obj));
      return true;
    case httpUrl::ID:
      func(static_cast<httpUrl &>(obj));
      return true;
    case identityDocument::ID:
      func(static_cast<identityDocument &>(obj));
      return true;
    case importedContacts::ID:
      func(static_cast<importedContacts &>(obj));
      return true;
    case inlineKeyboardButton::ID:
      func(static_cast<inlineKeyboardButton &>(obj));
      return true;
    case inlineKeyboardButtonTypeUrl::ID:
      func(static_cast<inlineKeyboardButtonTypeUrl &>(obj));
      return true;
    case inlineKeyboardButtonTypeLoginUrl::ID:
      func(static_cast<inlineKeyboardButtonTypeLoginUrl &>(obj));
      return true;
    case inlineKeyboardButtonTypeCallback::ID:
      func(static_cast<inlineKeyboardButtonTypeCallback &>(obj));
      return true;
    case inlineKeyboardButtonTypeCallbackWithPassword::ID:
      func(static_cast<inlineKeyboardButtonTypeCallbackWithPassword &>(obj));
      return true;
    case inlineKeyboardButtonTypeCallbackGame::ID:
      func(static_cast<inlineKeyboardButtonTypeCallbackGame &>(obj));
      return true;
    case inlineKeyboardButtonTypeSwitchInline::ID:
      func(static_cast<inlineKeyboardButtonTypeSwitchInline &>(obj));
      return true;
    case inlineKeyboardButtonTypeBuy::ID:
      func(static_cast<inlineKeyboardButtonTypeBuy &>(obj));
      return true;
    case inlineQueryResultArticle::ID:
      func(static_cast<inlineQueryResultArticle &>(obj));
      return true;
    case inlineQueryResultContact::ID:
      func(static_cast<inlineQueryResultContact &>(obj));
      return true;
    case inlineQueryResultLocation::ID:
      func(static_cast<inlineQueryResultLocation &>(obj));
      return true;
    case inlineQueryResultVenue::ID:
      func(static_cast<inlineQueryResultVenue &>(obj));
      return true;
    case inlineQueryResultGame::ID:
      func(static_cast<inlineQueryResultGame &>(obj));
      return true;
    case inlineQueryResultAnimation::ID:
      func(static_cast<inlineQueryResultAnimation &>(obj));
      return true;
    case inlineQueryResultAudio::ID:
      func(static_cast<inlineQueryResultAudio &>(obj));
      return true;
    case inlineQueryResultDocument::ID:
      func(static_cast<inlineQueryResultDocument &>(obj));
      return true;
    case inlineQueryResultPhoto::ID:
      func(static_cast<inlineQueryResultPhoto &>(obj));
      return true;
    case inlineQueryResultSticker::ID:
      func(static_cast<inlineQueryResultSticker &>(obj));
      return true;
    case inlineQueryResultVideo::ID:
      func(static_cast<inlineQueryResultVideo &>(obj));
      return true;
    case inlineQueryResultVoiceNote::ID:
      func(static_cast<inlineQueryResultVoiceNote &>(obj));
      return true;
    case inlineQueryResults::ID:
      func(static_cast<inlineQueryResults &>(obj));
      return true;
    case inputBackgroundLocal::ID:
      func(static_cast<inputBackgroundLocal &>(obj));
      return true;
    case inputBackgroundRemote::ID:
      func(static_cast<inputBackgroundRemote &>(obj));
      return true;
    case inputChatPhotoPrevious::ID:
      func(static_cast<inputChatPhotoPrevious &>(obj));
      return true;
    case inputChatPhotoStatic::ID:
      func(static_cast<inputChatPhotoStatic &>(obj));
      return true;
    case inputChatPhotoAnimation::ID:
      func(static_cast<inputChatPhotoAnimation &>(obj));
      return true;
    case inputCredentialsSaved::ID:
      func(static_cast<inputCredentialsSaved &>(obj));
      return true;
    case inputCredentialsNew::ID:
      func(static_cast<inputCredentialsNew &>(obj));
      return true;
    case inputCredentialsAndroidPay::ID:
      func(static_cast<inputCredentialsAndroidPay &>(obj));
      return true;
    case inputCredentialsApplePay::ID:
      func(static_cast<inputCredentialsApplePay &>(obj));
      return true;
    case inputFileId::ID:
      func(static_cast<inputFileId &>(obj));
      return true;
    case inputFileRemote::ID:
      func(static_cast<inputFileRemote &>(obj));
      return true;
    case inputFileLocal::ID:
      func(static_cast<inputFileLocal &>(obj));
      return true;
    case inputFileGenerated::ID:
      func(static_cast<inputFileGenerated &>(obj));
      return true;
    case inputIdentityDocument::ID:
      func(static_cast<inputIdentityDocument &>(obj));
      return true;
    case inputInlineQueryResultAnimation::ID:
      func(static_cast<inputInlineQueryResultAnimation &>(obj));
      return true;
    case inputInlineQueryResultArticle::ID:
      func(static_cast<inputInlineQueryResultArticle &>(obj));
      return true;
    case inputInlineQueryResultAudio::ID:
      func(static_cast<inputInlineQueryResultAudio &>(obj));
      return true;
    case inputInlineQueryResultContact::ID:
      func(static_cast<inputInlineQueryResultContact &>(obj));
      return true;
    case inputInlineQueryResultDocument::ID:
      func(static_cast<inputInlineQueryResultDocument &>(obj));
      return true;
    case inputInlineQueryResultGame::ID:
      func(static_cast<inputInlineQueryResultGame &>(obj));
      return true;
    case inputInlineQueryResultLocation::ID:
      func(static_cast<inputInlineQueryResultLocation &>(obj));
      return true;
    case inputInlineQueryResultPhoto::ID:
      func(static_cast<inputInlineQueryResultPhoto &>(obj));
      return true;
    case inputInlineQueryResultSticker::ID:
      func(static_cast<inputInlineQueryResultSticker &>(obj));
      return true;
    case inputInlineQueryResultVenue::ID:
      func(static_cast<inputInlineQueryResultVenue &>(obj));
      return true;
    case inputInlineQueryResultVideo::ID:
      func(static_cast<inputInlineQueryResultVideo &>(obj));
      return true;
    case inputInlineQueryResultVoiceNote::ID:
      func(static_cast<inputInlineQueryResultVoiceNote &>(obj));
      return true;
    case inputMessageText::ID:
      func(static_cast<inputMessageText &>(obj));
      return true;
    case inputMessageAnimation::ID:
      func(static_cast<inputMessageAnimation &>(obj));
      return true;
    case inputMessageAudio::ID:
      func(static_cast<inputMessageAudio &>(obj));
      return true;
    case inputMessageDocument::ID:
      func(static_cast<inputMessageDocument &>(obj));
      return true;
    case inputMessagePhoto::ID:
      func(static_cast<inputMessagePhoto &>(obj));
      return true;
    case inputMessageSticker::ID:
      func(static_cast<inputMessageSticker &>(obj));
      return true;
    case inputMessageVideo::ID:
      func(static_cast<inputMessageVideo &>(obj));
      return true;
    case inputMessageVideoNote::ID:
      func(static_cast<inputMessageVideoNote &>(obj));
      return true;
    case inputMessageVoiceNote::ID:
      func(static_cast<inputMessageVoiceNote &>(obj));
      return true;
    case inputMessageLocation::ID:
      func(static_cast<inputMessageLocation &>(obj));
      return true;
    case inputMessageVenue::ID:
      func(static_cast<inputMessageVenue &>(obj));
      return true;
    case inputMessageContact::ID:
      func(static_cast<inputMessageContact &>(obj));
      return true;
    case inputMessageDice::ID:
      func(static_cast<inputMessageDice &>(obj));
      return true;
    case inputMessageGame::ID:
      func(static_cast<inputMessageGame &>(obj));
      return true;
    case inputMessageInvoice::ID:
      func(static_cast<inputMessageInvoice &>(obj));
      return true;
    case inputMessagePoll::ID:
      func(static_cast<inputMessagePoll &>(obj));
      return true;
    case inputMessageForwarded::ID:
      func(static_cast<inputMessageForwarded &>(obj));
      return true;
    case inputPassportElementPersonalDetails::ID:
      func(static_cast<inputPassportElementPersonalDetails &>(obj));
      return true;
    case inputPassportElementPassport::ID:
      func(static_cast<inputPassportElementPassport &>(obj));
      return true;
    case inputPassportElementDriverLicense::ID:
      func(static_cast<inputPassportElementDriverLicense &>(obj));
      return true;
    case inputPassportElementIdentityCard::ID:
      func(static_cast<inputPassportElementIdentityCard &>(obj));
      return true;
    case inputPassportElementInternalPassport::ID:
      func(static_cast<inputPassportElementInternalPassport &>(obj));
      return true;
    case inputPassportElementAddress::ID:
      func(static_cast<inputPassportElementAddress &>(obj));
      return true;
    case inputPassportElementUtilityBill::ID:
      func(static_cast<inputPassportElementUtilityBill &>(obj));
      return true;
    case inputPassportElementBankStatement::ID:
      func(static_cast<inputPassportElementBankStatement &>(obj));
      return true;
    case inputPassportElementRentalAgreement::ID:
      func(static_cast<inputPassportElementRentalAgreement &>(obj));
      return true;
    case inputPassportElementPassportRegistration::ID:
      func(static_cast<inputPassportElementPassportRegistration &>(obj));
      return true;
    case inputPassportElementTemporaryRegistration::ID:
      func(static_cast<inputPassportElementTemporaryRegistration &>(obj));
      return true;
    case inputPassportElementPhoneNumber::ID:
      func(static_cast<inputPassportElementPhoneNumber &>(obj));
      return true;
    case inputPassportElementEmailAddress::ID:
      func(static_cast<inputPassportElementEmailAddress &>(obj));
      return true;
    case inputPassportElementError::ID:
      func(static_cast<inputPassportElementError &>(obj));
      return true;
    case inputPassportElementErrorSourceUnspecified::ID:
      func(static_cast<inputPassportElementErrorSourceUnspecified &>(obj));
      return true;
    case inputPassportElementErrorSourceDataField::ID:
      func(static_cast<inputPassportElementErrorSourceDataField &>(obj));
      return true;
    case inputPassportElementErrorSourceFrontSide::ID:
      func(static_cast<inputPassportElementErrorSourceFrontSide &>(obj));
      return true;
    case inputPassportElementErrorSourceReverseSide::ID:
      func(static_cast<inputPassportElementErrorSourceReverseSide &>(obj));
      return true;
    case inputPassportElementErrorSourceSelfie::ID:
      func(static_cast<inputPassportElementErrorSourceSelfie &>(obj));
      return true;
    case inputPassportElementErrorSourceTranslationFile::ID:
      func(static_cast<inputPassportElementErrorSourceTranslationFile &>(obj));
      return true;
    case inputPassportElementErrorSourceTranslationFiles::ID:
      func(static_cast<inputPassportElementErrorSourceTranslationFiles &>(obj));
      return true;
    case inputPassportElementErrorSourceFile::ID:
      func(static_cast<inputPassportElementErrorSourceFile &>(obj));
      return true;
    case inputPassportElementErrorSourceFiles::ID:
      func(static_cast<inputPassportElementErrorSourceFiles &>(obj));
      return true;
    case inputPersonalDocument::ID:
      func(static_cast<inputPersonalDocument &>(obj));
      return true;
    case inputStickerStatic::ID:
      func(static_cast<inputStickerStatic &>(obj));
      return true;
    case inputStickerAnimated::ID:
      func(static_cast<inputStickerAnimated &>(obj));
      return true;
    case inputThumbnail::ID:
      func(static_cast<inputThumbnail &>(obj));
      return true;
    case invoice::ID:
      func(static_cast<invoice &>(obj));
      return true;
    case jsonObjectMember::ID:
      func(static_cast<jsonObjectMember &>(obj));
      return true;
    case jsonValueNull::ID:
      func(static_cast<jsonValueNull &>(obj));
      return true;
    case jsonValueBoolean::ID:
      func(static_cast<jsonValueBoolean &>(obj));
      return true;
    case jsonValueNumber::ID:
      func(static_cast<jsonValueNumber &>(obj));
      return true;
    case jsonValueString::ID:
      func(static_cast<jsonValueString &>(obj));
      return true;
    case jsonValueArray::ID:
      func(static_cast<jsonValueArray &>(obj));
      return true;
    case jsonValueObject::ID:
      func(static_cast<jsonValueObject &>(obj));
      return true;
    case keyboardButton::ID:
      func(static_cast<keyboardButton &>(obj));
      return true;
    case keyboardButtonTypeText::ID:
      func(static_cast<keyboardButtonTypeText &>(obj));
      return true;
    case keyboardButtonTypeRequestPhoneNumber::ID:
      func(static_cast<keyboardButtonTypeRequestPhoneNumber &>(obj));
      return true;
    case keyboardButtonTypeRequestLocation::ID:
      func(static_cast<keyboardButtonTypeRequestLocation &>(obj));
      return true;
    case keyboardButtonTypeRequestPoll::ID:
      func(static_cast<keyboardButtonTypeRequestPoll &>(obj));
      return true;
    case labeledPricePart::ID:
      func(static_cast<labeledPricePart &>(obj));
      return true;
    case languagePackInfo::ID:
      func(static_cast<languagePackInfo &>(obj));
      return true;
    case languagePackString::ID:
      func(static_cast<languagePackString &>(obj));
      return true;
    case languagePackStringValueOrdinary::ID:
      func(static_cast<languagePackStringValueOrdinary &>(obj));
      return true;
    case languagePackStringValuePluralized::ID:
      func(static_cast<languagePackStringValuePluralized &>(obj));
      return true;
    case languagePackStringValueDeleted::ID:
      func(static_cast<languagePackStringValueDeleted &>(obj));
      return true;
    case languagePackStrings::ID:
      func(static_cast<languagePackStrings &>(obj));
      return true;
    case localFile::ID:
      func(static_cast<localFile &>(obj));
      return true;
    case localizationTargetInfo::ID:
      func(static_cast<localizationTargetInfo &>(obj));
      return true;
    case location::ID:
      func(static_cast<location &>(obj));
      return true;
    case logStreamDefault::ID:
      func(static_cast<logStreamDefault &>(obj));
      return true;
    case logStreamFile::ID:
      func(static_cast<logStreamFile &>(obj));
      return true;
    case logStreamEmpty::ID:
      func(static_cast<logStreamEmpty &>(obj));
      return true;
    case logTags::ID:
      func(static_cast<logTags &>(obj));
      return true;
    case logVerbosityLevel::ID:
      func(static_cast<logVerbosityLevel &>(obj));
      return true;
    case loginUrlInfoOpen::ID:
      func(static_cast<loginUrlInfoOpen &>(obj));
      return true;
    case loginUrlInfoRequestConfirmation::ID:
      func(static_cast<loginUrlInfoRequestConfirmation &>(obj));
      return true;
    case maskPointForehead::ID:
      func(static_cast<maskPointForehead &>(obj));
      return true;
    case maskPointEyes::ID:
      func(static_cast<maskPointEyes &>(obj));
      return true;
    case maskPointMouth::ID:
      func(static_cast<maskPointMouth &>(obj));
      return true;
    case maskPointChin::ID:
      func(static_cast<maskPointChin &>(obj));
      return true;
    case maskPosition::ID:
      func(static_cast<maskPosition &>(obj));
      return true;
    case message::ID:
      func(static_cast<message &>(obj));
      return true;
    case messageText::ID:
      func(static_cast<messageText &>(obj));
      return true;
    case messageAnimation::ID:
      func(static_cast<messageAnimation &>(obj));
      return true;
    case messageAudio::ID:
      func(static_cast<messageAudio &>(obj));
      return true;
    case messageDocument::ID:
      func(static_cast<messageDocument &>(obj));
      return true;
    case messagePhoto::ID:
      func(static_cast<messagePhoto &>(obj));
      return true;
    case messageExpiredPhoto::ID:
      func(static_cast<messageExpiredPhoto &>(obj));
      return true;
    case messageSticker::ID:
      func(static_cast<messageSticker &>(obj));
      return true;
    case messageVideo::ID:
      func(static_cast<messageVideo &>(obj));
      return true;
    case messageExpiredVideo::ID:
      func(static_cast<messageExpiredVideo &>(obj));
      return true;
    case messageVideoNote::ID:
      func(static_cast<messageVideoNote &>(obj));
      return true;
    case messageVoiceNote::ID:
      func(static_cast<messageVoiceNote &>(obj));
      return true;
    case messageLocation::ID:
      func(static_cast<messageLocation &>(obj));
      return true;
    case messageVenue::ID:
      func(static_cast<messageVenue &>(obj));
      return true;
    case messageContact::ID:
      func(static_cast<messageContact &>(obj));
      return true;
    case messageDice::ID:
      func(static_cast<messageDice &>(obj));
      return true;
    case messageGame::ID:
      func(static_cast<messageGame &>(obj));
      return true;
    case messagePoll::ID:
      func(static_cast<messagePoll &>(obj));
      return true;
    case messageInvoice::ID:
      func(static_cast<messageInvoice &>(obj));
      return true;
    case messageCall::ID:
      func(static_cast<messageCall &>(obj));
      return true;
    case messageBasicGroupChatCreate::ID:
      func(static_cast<messageBasicGroupChatCreate &>(obj));
      return true;
    case messageSupergroupChatCreate::ID:
      func(static_cast<messageSupergroupChatCreate &>(obj));
      return true;
    case messageChatChangeTitle::ID:
      func(static_cast<messageChatChangeTitle &>(obj));
      return true;
    case messageChatChangePhoto::ID:
      func(static_cast<messageChatChangePhoto &>(obj));
      return true;
    case messageChatDeletePhoto::ID:
      func(static_cast<messageChatDeletePhoto &>(obj));
      return true;
    case messageChatAddMembers::ID:
      func(static_cast<messageChatAddMembers &>(obj));
      return true;
    case messageChatJoinByLink::ID:
      func(static_cast<messageChatJoinByLink &>(obj));
      return true;
    case messageChatDeleteMember::ID:
      func(static_cast<messageChatDeleteMember &>(obj));
      return true;
    case messageChatUpgradeTo::ID:
      func(static_cast<messageChatUpgradeTo &>(obj));
      return true;
    case messageChatUpgradeFrom::ID:
      func(static_cast<messageChatUpgradeFrom &>(obj));
      return true;
    case messagePinMessage::ID:
      func(static_cast<messagePinMessage &>(obj));
      return true;
    case messageScreenshotTaken::ID:
      func(static_cast<messageScreenshotTaken &>(obj));
      return true;
    case messageChatSetTtl::ID:
      func(static_cast<messageChatSetTtl &>(obj));
      return true;
    case messageCustomServiceAction::ID:
      func(static_cast<messageCustomServiceAction &>(obj));
      return true;
    case messageGameScore::ID:
      func(static_cast<messageGameScore &>(obj));
      return true;
    case messagePaymentSuccessful::ID:
      func(static_cast<messagePaymentSuccessful &>(obj));
      return true;
    case messagePaymentSuccessfulBot::ID:
      func(static_cast<messagePaymentSuccessfulBot &>(obj));
      return true;
    case messageContactRegistered::ID:
      func(static_cast<messageContactRegistered &>(obj));
      return true;
    case messageWebsiteConnected::ID:
      func(static_cast<messageWebsiteConnected &>(obj));
      return true;
    case messagePassportDataSent::ID:
      func(static_cast<messagePassportDataSent &>(obj));
      return true;
    case messagePassportDataReceived::ID:
      func(static_cast<messagePassportDataReceived &>(obj));
      return true;
    case messageUnsupported::ID:
      func(static_cast<messageUnsupported &>(obj));
      return true;
    case messageCopyOptions::ID:
      func(static_cast<messageCopyOptions &>(obj));
      return true;
    case messageForwardInfo::ID:
      func(static_cast<messageForwardInfo &>(obj));
      return true;
    case messageForwardOriginUser::ID:
      func(static_cast<messageForwardOriginUser &>(obj));
      return true;
    case messageForwardOriginChat::ID:
      func(static_cast<messageForwardOriginChat &>(obj));
      return true;
    case messageForwardOriginHiddenUser::ID:
      func(static_cast<messageForwardOriginHiddenUser &>(obj));
      return true;
    case messageForwardOriginChannel::ID:
      func(static_cast<messageForwardOriginChannel &>(obj));
      return true;
    case messageInteractionInfo::ID:
      func(static_cast<messageInteractionInfo &>(obj));
      return true;
    case messageLink::ID:
      func(static_cast<messageLink &>(obj));
      return true;
    case messageLinkInfo::ID:
      func(static_cast<messageLinkInfo &>(obj));
      return true;
    case messageReplyInfo::ID:
      func(static_cast<messageReplyInfo &>(obj));
      return true;
    case messageSchedulingStateSendAtDate::ID:
      func(static_cast<messageSchedulingStateSendAtDate &>(obj));
      return true;
    case messageSchedulingStateSendWhenOnline::ID:
      func(static_cast<messageSchedulingStateSendWhenOnline &>(obj));
      return true;
    case messageSendOptions::ID:
      func(static_cast<messageSendOptions &>(obj));
      return true;
    case messageSendingStatePending::ID:
      func(static_cast<messageSendingStatePending &>(obj));
      return true;
    case messageSendingStateFailed::ID:
      func(static_cast<messageSendingStateFailed &>(obj));
      return true;
    case messageStatistics::ID:
      func(static_cast<messageStatistics &>(obj));
      return true;
    case messageThreadInfo::ID:
      func(static_cast<messageThreadInfo &>(obj));
      return true;
    case messages::ID:
      func(static_cast<messages &>(obj));
      return true;
    case minithumbnail::ID:
      func(static_cast<minithumbnail &>(obj));
      return true;
    case networkStatistics::ID:
      func(static_cast<networkStatistics &>(obj));
      return true;
    case networkStatisticsEntryFile::ID:
      func(static_cast<networkStatisticsEntryFile &>(obj));
      return true;
    case networkStatisticsEntryCall::ID:
      func(static_cast<networkStatisticsEntryCall &>(obj));
      return true;
    case networkTypeNone::ID:
      func(static_cast<networkTypeNone &>(obj));
      return true;
    case networkTypeMobile::ID:
      func(static_cast<networkTypeMobile &>(obj));
      return true;
    case networkTypeMobileRoaming::ID:
      func(static_cast<networkTypeMobileRoaming &>(obj));
      return true;
    case networkTypeWiFi::ID:
      func(static_cast<networkTypeWiFi &>(obj));
      return true;
    case networkTypeOther::ID:
      func(static_cast<networkTypeOther &>(obj));
      return true;
    case notification::ID:
      func(static_cast<notification &>(obj));
      return true;
    case notificationGroup::ID:
      func(static_cast<notificationGroup &>(obj));
      return true;
    case notificationGroupTypeMessages::ID:
      func(static_cast<notificationGroupTypeMessages &>(obj));
      return true;
    case notificationGroupTypeMentions::ID:
      func(static_cast<notificationGroupTypeMentions &>(obj));
      return true;
    case notificationGroupTypeSecretChat::ID:
      func(static_cast<notificationGroupTypeSecretChat &>(obj));
      return true;
    case notificationGroupTypeCalls::ID:
      func(static_cast<notificationGroupTypeCalls &>(obj));
      return true;
    case notificationSettingsScopePrivateChats::ID:
      func(static_cast<notificationSettingsScopePrivateChats &>(obj));
      return true;
    case notificationSettingsScopeGroupChats::ID:
      func(static_cast<notificationSettingsScopeGroupChats &>(obj));
      return true;
    case notificationSettingsScopeChannelChats::ID:
      func(static_cast<notificationSettingsScopeChannelChats &>(obj));
      return true;
    case notificationTypeNewMessage::ID:
      func(static_cast<notificationTypeNewMessage &>(obj));
      return true;
    case notificationTypeNewSecretChat::ID:
      func(static_cast<notificationTypeNewSecretChat &>(obj));
      return true;
    case notificationTypeNewCall::ID:
      func(static_cast<notificationTypeNewCall &>(obj));
      return true;
    case notificationTypeNewPushMessage::ID:
      func(static_cast<notificationTypeNewPushMessage &>(obj));
      return true;
    case ok::ID:
      func(static_cast<ok &>(obj));
      return true;
    case optionValueBoolean::ID:
      func(static_cast<optionValueBoolean &>(obj));
      return true;
    case optionValueEmpty::ID:
      func(static_cast<optionValueEmpty &>(obj));
      return true;
    case optionValueInteger::ID:
      func(static_cast<optionValueInteger &>(obj));
      return true;
    case optionValueString::ID:
      func(static_cast<optionValueString &>(obj));
      return true;
    case orderInfo::ID:
      func(static_cast<orderInfo &>(obj));
      return true;
    case pageBlockTitle::ID:
      func(static_cast<pageBlockTitle &>(obj));
      return true;
    case pageBlockSubtitle::ID:
      func(static_cast<pageBlockSubtitle &>(obj));
      return true;
    case pageBlockAuthorDate::ID:
      func(static_cast<pageBlockAuthorDate &>(obj));
      return true;
    case pageBlockHeader::ID:
      func(static_cast<pageBlockHeader &>(obj));
      return true;
    case pageBlockSubheader::ID:
      func(static_cast<pageBlockSubheader &>(obj));
      return true;
    case pageBlockKicker::ID:
      func(static_cast<pageBlockKicker &>(obj));
      return true;
    case pageBlockParagraph::ID:
      func(static_cast<pageBlockParagraph &>(obj));
      return true;
    case pageBlockPreformatted::ID:
      func(static_cast<pageBlockPreformatted &>(obj));
      return true;
    case pageBlockFooter::ID:
      func(static_cast<pageBlockFooter &>(obj));
      return true;
    case pageBlockDivider::ID:
      func(static_cast<pageBlockDivider &>(obj));
      return true;
    case pageBlockAnchor::ID:
      func(static_cast<pageBlockAnchor &>(obj));
      return true;
    case pageBlockList::ID:
      func(static_cast<pageBlockList &>(obj));
      return true;
    case pageBlockBlockQuote::ID:
      func(static_cast<pageBlockBlockQuote &>(obj));
      return true;
    case pageBlockPullQuote::ID:
      func(static_cast<pageBlockPullQuote &>(obj));
      return true;
    case pageBlockAnimation::ID:
      func(static_cast<pageBlockAnimation &>(obj));
      return true;
    case pageBlockAudio::ID:
      func(static_cast<pageBlockAudio &>(obj));
      return true;
    case pageBlockPhoto::ID:
      func(static_cast<pageBlockPhoto &>(obj));
      return true;
    case pageBlockVideo::ID:
      func(static_cast<pageBlockVideo &>(obj));
      return true;
    case pageBlockVoiceNote::ID:
      func(static_cast<pageBlockVoiceNote &>(obj));
      return true;
    case pageBlockCover::ID:
      func(static_cast<pageBlockCover &>(obj));
      return true;
    case pageBlockEmbedded::ID:
      func(static_cast<pageBlockEmbedded &>(obj));
      return true;
    case pageBlockEmbeddedPost::ID:
      func(static_cast<pageBlockEmbeddedPost &>(obj));
      return true;
    case pageBlockCollage::ID:
      func(static_cast<pageBlockCollage &>(obj));
      return true;
    case pageBlockSlideshow::ID:
      func(static_cast<pageBlockSlideshow &>(obj));
      return true;
    case pageBlockChatLink::ID:
      func(static_cast<pageBlockChatLink &>(obj));
      return true;
    case pageBlockTable::ID:
      func(static_cast<pageBlockTable &>(obj));
      return true;
    case pageBlockDetails::ID:
      func(static_cast<pageBlockDetails &>(obj));
      return true;
    case pageBlockRelatedArticles::ID:
      func(static_cast<pageBlockRelatedArticles &>(obj));
      return true;
    case pageBlockMap::ID:
      func(static_cast<pageBlockMap &>(obj));
      return true;
    case pageBlockCaption::ID:
      func(static_cast<pageBlockCaption &>(obj));
      return true;
    case pageBlockHorizontalAlignmentLeft::ID:
      func(static_cast<pageBlockHorizontalAlignmentLeft &>(obj));
      return true;
    case pageBlockHorizontalAlignmentCenter::ID:
      func(static_cast<pageBlockHorizontalAlignmentCenter &>(obj));
      return true;
    case pageBlockHorizontalAlignmentRight::ID:
      func(static_cast<pageBlockHorizontalAlignmentRight &>(obj));
      return true;
    case pageBlockListItem::ID:
      func(static_cast<pageBlockListItem &>(obj));
      return true;
    case pageBlockRelatedArticle::ID:
      func(static_cast<pageBlockRelatedArticle &>(obj));
      return true;
    case pageBlockTableCell::ID:
      func(static_cast<pageBlockTableCell &>(obj));
      return true;
    case pageBlockVerticalAlignmentTop::ID:
      func(static_cast<pageBlockVerticalAlignmentTop &>(obj));
      return true;
    case pageBlockVerticalAlignmentMiddle::ID:
      func(static_cast<pageBlockVerticalAlignmentMiddle &>(obj));
      return true;
    case pageBlockVerticalAlignmentBottom::ID:
      func(static_cast<pageBlockVerticalAlignmentBottom &>(obj));
      return true;
    case passportAuthorizationForm::ID:
      func(static_cast<passportAuthorizationForm &>(obj));
      return true;
    case passportElementPersonalDetails::ID:
      func(static_cast<passportElementPersonalDetails &>(obj));
      return true;
    case passportElementPassport::ID:
      func(static_cast<passportElementPassport &>(obj));
      return true;
    case passportElementDriverLicense::ID:
      func(static_cast<passportElementDriverLicense &>(obj));
      return true;
    case passportElementIdentityCard::ID:
      func(static_cast<passportElementIdentityCard &>(obj));
      return true;
    case passportElementInternalPassport::ID:
      func(static_cast<passportElementInternalPassport &>(obj));
      return true;
    case passportElementAddress::ID:
      func(static_cast<passportElementAddress &>(obj));
      return true;
    case passportElementUtilityBill::ID:
      func(static_cast<passportElementUtilityBill &>(obj));
      return true;
    case passportElementBankStatement::ID:
      func(static_cast<passportElementBankStatement &>(obj));
      return true;
    case passportElementRentalAgreement::ID:
      func(static_cast<passportElementRentalAgreement &>(obj));
      return true;
    case passportElementPassportRegistration::ID:
      func(static_cast<passportElementPassportRegistration &>(obj));
      return true;
    case passportElementTemporaryRegistration::ID:
      func(static_cast<passportElementTemporaryRegistration &>(obj));
      return true;
    case passportElementPhoneNumber::ID:
      func(static_cast<passportElementPhoneNumber &>(obj));
      return true;
    case passportElementEmailAddress::ID:
      func(static_cast<passportElementEmailAddress &>(obj));
      return true;
    case passportElementError::ID:
      func(static_cast<passportElementError &>(obj));
      return true;
    case passportElementErrorSourceUnspecified::ID:
      func(static_cast<passportElementErrorSourceUnspecified &>(obj));
      return true;
    case passportElementErrorSourceDataField::ID:
      func(static_cast<passportElementErrorSourceDataField &>(obj));
      return true;
    case passportElementErrorSourceFrontSide::ID:
      func(static_cast<passportElementErrorSourceFrontSide &>(obj));
      return true;
    case passportElementErrorSourceReverseSide::ID:
      func(static_cast<passportElementErrorSourceReverseSide &>(obj));
      return true;
    case passportElementErrorSourceSelfie::ID:
      func(static_cast<passportElementErrorSourceSelfie &>(obj));
      return true;
    case passportElementErrorSourceTranslationFile::ID:
      func(static_cast<passportElementErrorSourceTranslationFile &>(obj));
      return true;
    case passportElementErrorSourceTranslationFiles::ID:
      func(static_cast<passportElementErrorSourceTranslationFiles &>(obj));
      return true;
    case passportElementErrorSourceFile::ID:
      func(static_cast<passportElementErrorSourceFile &>(obj));
      return true;
    case passportElementErrorSourceFiles::ID:
      func(static_cast<passportElementErrorSourceFiles &>(obj));
      return true;
    case passportElementTypePersonalDetails::ID:
      func(static_cast<passportElementTypePersonalDetails &>(obj));
      return true;
    case passportElementTypePassport::ID:
      func(static_cast<passportElementTypePassport &>(obj));
      return true;
    case passportElementTypeDriverLicense::ID:
      func(static_cast<passportElementTypeDriverLicense &>(obj));
      return true;
    case passportElementTypeIdentityCard::ID:
      func(static_cast<passportElementTypeIdentityCard &>(obj));
      return true;
    case passportElementTypeInternalPassport::ID:
      func(static_cast<passportElementTypeInternalPassport &>(obj));
      return true;
    case passportElementTypeAddress::ID:
      func(static_cast<passportElementTypeAddress &>(obj));
      return true;
    case passportElementTypeUtilityBill::ID:
      func(static_cast<passportElementTypeUtilityBill &>(obj));
      return true;
    case passportElementTypeBankStatement::ID:
      func(static_cast<passportElementTypeBankStatement &>(obj));
      return true;
    case passportElementTypeRentalAgreement::ID:
      func(static_cast<passportElementTypeRentalAgreement &>(obj));
      return true;
    case passportElementTypePassportRegistration::ID:
      func(static_cast<passportElementTypePassportRegistration &>(obj));
      return true;
    case passportElementTypeTemporaryRegistration::ID:
      func(static_cast<passportElementTypeTemporaryRegistration &>(obj));
      return true;
    case passportElementTypePhoneNumber::ID:
      func(static_cast<passportElementTypePhoneNumber &>(obj));
      return true;
    case passportElementTypeEmailAddress::ID:
      func(static_cast<passportElementTypeEmailAddress &>(obj));
      return true;
    case passportElements::ID:
      func(static_cast<passportElements &>(obj));
      return true;
    case passportElementsWithErrors::ID:
      func(static_cast<passportElementsWithErrors &>(obj));
      return true;
    case passportRequiredElement::ID:
      func(static_cast<passportRequiredElement &>(obj));
      return true;
    case passportSuitableElement::ID:
      func(static_cast<passportSuitableElement &>(obj));
      return true;
    case passwordState::ID:
      func(static_cast<passwordState &>(obj));
      return true;
    case paymentForm::ID:
      func(static_cast<paymentForm &>(obj));
      return true;
    case paymentReceipt::ID:
      func(static_cast<paymentReceipt &>(obj));
      return true;
    case paymentResult::ID:
      func(static_cast<paymentResult &>(obj));
      return true;
    case paymentsProviderStripe::ID:
      func(static_cast<paymentsProviderStripe &>(obj));
      return true;
    case personalDetails::ID:
      func(static_cast<personalDetails &>(obj));
      return true;
    case personalDocument::ID:
      func(static_cast<personalDocument &>(obj));
      return true;
    case phoneNumberAuthenticationSettings::ID:
      func(static_cast<phoneNumberAuthenticationSettings &>(obj));
      return true;
    case phoneNumberInfo::ID:
      func(static_cast<phoneNumberInfo &>(obj));
      return true;
    case photo::ID:
      func(static_cast<photo &>(obj));
      return true;
    case photoSize::ID:
      func(static_cast<photoSize &>(obj));
      return true;
    case poll::ID:
      func(static_cast<poll &>(obj));
      return true;
    case pollOption::ID:
      func(static_cast<pollOption &>(obj));
      return true;
    case pollTypeRegular::ID:
      func(static_cast<pollTypeRegular &>(obj));
      return true;
    case pollTypeQuiz::ID:
      func(static_cast<pollTypeQuiz &>(obj));
      return true;
    case profilePhoto::ID:
      func(static_cast<profilePhoto &>(obj));
      return true;
    case proxies::ID:
      func(static_cast<proxies &>(obj));
      return true;
    case proxy::ID:
      func(static_cast<proxy &>(obj));
      return true;
    case proxyTypeSocks5::ID:
      func(static_cast<proxyTypeSocks5 &>(obj));
      return true;
    case proxyTypeHttp::ID:
      func(static_cast<proxyTypeHttp &>(obj));
      return true;
    case proxyTypeMtproto::ID:
      func(static_cast<proxyTypeMtproto &>(obj));
      return true;
    case publicChatTypeHasUsername::ID:
      func(static_cast<publicChatTypeHasUsername &>(obj));
      return true;
    case publicChatTypeIsLocationBased::ID:
      func(static_cast<publicChatTypeIsLocationBased &>(obj));
      return true;
    case pushMessageContentHidden::ID:
      func(static_cast<pushMessageContentHidden &>(obj));
      return true;
    case pushMessageContentAnimation::ID:
      func(static_cast<pushMessageContentAnimation &>(obj));
      return true;
    case pushMessageContentAudio::ID:
      func(static_cast<pushMessageContentAudio &>(obj));
      return true;
    case pushMessageContentContact::ID:
      func(static_cast<pushMessageContentContact &>(obj));
      return true;
    case pushMessageContentContactRegistered::ID:
      func(static_cast<pushMessageContentContactRegistered &>(obj));
      return true;
    case pushMessageContentDocument::ID:
      func(static_cast<pushMessageContentDocument &>(obj));
      return true;
    case pushMessageContentGame::ID:
      func(static_cast<pushMessageContentGame &>(obj));
      return true;
    case pushMessageContentGameScore::ID:
      func(static_cast<pushMessageContentGameScore &>(obj));
      return true;
    case pushMessageContentInvoice::ID:
      func(static_cast<pushMessageContentInvoice &>(obj));
      return true;
    case pushMessageContentLocation::ID:
      func(static_cast<pushMessageContentLocation &>(obj));
      return true;
    case pushMessageContentPhoto::ID:
      func(static_cast<pushMessageContentPhoto &>(obj));
      return true;
    case pushMessageContentPoll::ID:
      func(static_cast<pushMessageContentPoll &>(obj));
      return true;
    case pushMessageContentScreenshotTaken::ID:
      func(static_cast<pushMessageContentScreenshotTaken &>(obj));
      return true;
    case pushMessageContentSticker::ID:
      func(static_cast<pushMessageContentSticker &>(obj));
      return true;
    case pushMessageContentText::ID:
      func(static_cast<pushMessageContentText &>(obj));
      return true;
    case pushMessageContentVideo::ID:
      func(static_cast<pushMessageContentVideo &>(obj));
      return true;
    case pushMessageContentVideoNote::ID:
      func(static_cast<pushMessageContentVideoNote &>(obj));
      return true;
    case pushMessageContentVoiceNote::ID:
      func(static_cast<pushMessageContentVoiceNote &>(obj));
      return true;
    case pushMessageContentBasicGroupChatCreate::ID:
      func(static_cast<pushMessageContentBasicGroupChatCreate &>(obj));
      return true;
    case pushMessageContentChatAddMembers::ID:
      func(static_cast<pushMessageContentChatAddMembers &>(obj));
      return true;
    case pushMessageContentChatChangePhoto::ID:
      func(static_cast<pushMessageContentChatChangePhoto &>(obj));
      return true;
    case pushMessageContentChatChangeTitle::ID:
      func(static_cast<pushMessageContentChatChangeTitle &>(obj));
      return true;
    case pushMessageContentChatDeleteMember::ID:
      func(static_cast<pushMessageContentChatDeleteMember &>(obj));
      return true;
    case pushMessageContentChatJoinByLink::ID:
      func(static_cast<pushMessageContentChatJoinByLink &>(obj));
      return true;
    case pushMessageContentMessageForwards::ID:
      func(static_cast<pushMessageContentMessageForwards &>(obj));
      return true;
    case pushMessageContentMediaAlbum::ID:
      func(static_cast<pushMessageContentMediaAlbum &>(obj));
      return true;
    case pushReceiverId::ID:
      func(static_cast<pushReceiverId &>(obj));
      return true;
    case recommendedChatFilter::ID:
      func(static_cast<recommendedChatFilter &>(obj));
      return true;
    case recommendedChatFilters::ID:
      func(static_cast<recommendedChatFilters &>(obj));
      return true;
    case recoveryEmailAddress::ID:
      func(static_cast<recoveryEmailAddress &>(obj));
      return true;
    case remoteFile::ID:
      func(static_cast<remoteFile &>(obj));
      return true;
    case replyMarkupRemoveKeyboard::ID:
      func(static_cast<replyMarkupRemoveKeyboard &>(obj));
      return true;
    case replyMarkupForceReply::ID:
      func(static_cast<replyMarkupForceReply &>(obj));
      return true;
    case replyMarkupShowKeyboard::ID:
      func(static_cast<replyMarkupShowKeyboard &>(obj));
      return true;
    case replyMarkupInlineKeyboard::ID:
      func(static_cast<replyMarkupInlineKeyboard &>(obj));
      return true;
    case richTextPlain::ID:
      func(static_cast<richTextPlain &>(obj));
      return true;
    case richTextBold::ID:
      func(static_cast<richTextBold &>(obj));
      return true;
    case richTextItalic::ID:
      func(static_cast<richTextItalic &>(obj));
      return true;
    case richTextUnderline::ID:
      func(static_cast<richTextUnderline &>(obj));
      return true;
    case richTextStrikethrough::ID:
      func(static_cast<richTextStrikethrough &>(obj));
      return true;
    case richTextFixed::ID:
      func(static_cast<richTextFixed &>(obj));
      return true;
    case richTextUrl::ID:
      func(static_cast<richTextUrl &>(obj));
      return true;
    case richTextEmailAddress::ID:
      func(static_cast<richTextEmailAddress &>(obj));
      return true;
    case richTextSubscript::ID:
      func(static_cast<richTextSubscript &>(obj));
      return true;
    case richTextSuperscript::ID:
      func(static_cast<richTextSuperscript &>(obj));
      return true;
    case richTextMarked::ID:
      func(static_cast<richTextMarked &>(obj));
      return true;
    case richTextPhoneNumber::ID:
      func(static_cast<richTextPhoneNumber &>(obj));
      return true;
    case richTextIcon::ID:
      func(static_cast<richTextIcon &>(obj));
      return true;
    case richTextReference::ID:
      func(static_cast<richTextReference &>(obj));
      return true;
    case richTextAnchor::ID:
      func(static_cast<richTextAnchor &>(obj));
      return true;
    case richTextAnchorLink::ID:
      func(static_cast<richTextAnchorLink &>(obj));
      return true;
    case richTexts::ID:
      func(static_cast<richTexts &>(obj));
      return true;
    case savedCredentials::ID:
      func(static_cast<savedCredentials &>(obj));
      return true;
    case scopeNotificationSettings::ID:
      func(static_cast<scopeNotificationSettings &>(obj));
      return true;
    case searchMessagesFilterEmpty::ID:
      func(static_cast<searchMessagesFilterEmpty &>(obj));
      return true;
    case searchMessagesFilterAnimation::ID:
      func(static_cast<searchMessagesFilterAnimation &>(obj));
      return true;
    case searchMessagesFilterAudio::ID:
      func(static_cast<searchMessagesFilterAudio &>(obj));
      return true;
    case searchMessagesFilterDocument::ID:
      func(static_cast<searchMessagesFilterDocument &>(obj));
      return true;
    case searchMessagesFilterPhoto::ID:
      func(static_cast<searchMessagesFilterPhoto &>(obj));
      return true;
    case searchMessagesFilterVideo::ID:
      func(static_cast<searchMessagesFilterVideo &>(obj));
      return true;
    case searchMessagesFilterVoiceNote::ID:
      func(static_cast<searchMessagesFilterVoiceNote &>(obj));
      return true;
    case searchMessagesFilterPhotoAndVideo::ID:
      func(static_cast<searchMessagesFilterPhotoAndVideo &>(obj));
      return true;
    case searchMessagesFilterUrl::ID:
      func(static_cast<searchMessagesFilterUrl &>(obj));
      return true;
    case searchMessagesFilterChatPhoto::ID:
      func(static_cast<searchMessagesFilterChatPhoto &>(obj));
      return true;
    case searchMessagesFilterCall::ID:
      func(static_cast<searchMessagesFilterCall &>(obj));
      return true;
    case searchMessagesFilterMissedCall::ID:
      func(static_cast<searchMessagesFilterMissedCall &>(obj));
      return true;
    case searchMessagesFilterVideoNote::ID:
      func(static_cast<searchMessagesFilterVideoNote &>(obj));
      return true;
    case searchMessagesFilterVoiceAndVideoNote::ID:
      func(static_cast<searchMessagesFilterVoiceAndVideoNote &>(obj));
      return true;
    case searchMessagesFilterMention::ID:
      func(static_cast<searchMessagesFilterMention &>(obj));
      return true;
    case searchMessagesFilterUnreadMention::ID:
      func(static_cast<searchMessagesFilterUnreadMention &>(obj));
      return true;
    case searchMessagesFilterFailedToSend::ID:
      func(static_cast<searchMessagesFilterFailedToSend &>(obj));
      return true;
    case seconds::ID:
      func(static_cast<seconds &>(obj));
      return true;
    case secretChat::ID:
      func(static_cast<secretChat &>(obj));
      return true;
    case secretChatStatePending::ID:
      func(static_cast<secretChatStatePending &>(obj));
      return true;
    case secretChatStateReady::ID:
      func(static_cast<secretChatStateReady &>(obj));
      return true;
    case secretChatStateClosed::ID:
      func(static_cast<secretChatStateClosed &>(obj));
      return true;
    case session::ID:
      func(static_cast<session &>(obj));
      return true;
    case sessions::ID:
      func(static_cast<sessions &>(obj));
      return true;
    case shippingOption::ID:
      func(static_cast<shippingOption &>(obj));
      return true;
    case statisticsGraphData::ID:
      func(static_cast<statisticsGraphData &>(obj));
      return true;
    case statisticsGraphAsync::ID:
      func(static_cast<statisticsGraphAsync &>(obj));
      return true;
    case statisticsGraphError::ID:
      func(static_cast<statisticsGraphError &>(obj));
      return true;
    case statisticsValue::ID:
      func(static_cast<statisticsValue &>(obj));
      return true;
    case sticker::ID:
      func(static_cast<sticker &>(obj));
      return true;
    case stickerSet::ID:
      func(static_cast<stickerSet &>(obj));
      return true;
    case stickerSetInfo::ID:
      func(static_cast<stickerSetInfo &>(obj));
      return true;
    case stickerSets::ID:
      func(static_cast<stickerSets &>(obj));
      return true;
    case stickers::ID:
      func(static_cast<stickers &>(obj));
      return true;
    case storageStatistics::ID:
      func(static_cast<storageStatistics &>(obj));
      return true;
    case storageStatisticsByChat::ID:
      func(static_cast<storageStatisticsByChat &>(obj));
      return true;
    case storageStatisticsByFileType::ID:
      func(static_cast<storageStatisticsByFileType &>(obj));
      return true;
    case storageStatisticsFast::ID:
      func(static_cast<storageStatisticsFast &>(obj));
      return true;
    case suggestedActionEnableArchiveAndMuteNewChats::ID:
      func(static_cast<suggestedActionEnableArchiveAndMuteNewChats &>(obj));
      return true;
    case suggestedActionCheckPhoneNumber::ID:
      func(static_cast<suggestedActionCheckPhoneNumber &>(obj));
      return true;
    case supergroup::ID:
      func(static_cast<supergroup &>(obj));
      return true;
    case supergroupFullInfo::ID:
      func(static_cast<supergroupFullInfo &>(obj));
      return true;
    case supergroupMembersFilterRecent::ID:
      func(static_cast<supergroupMembersFilterRecent &>(obj));
      return true;
    case supergroupMembersFilterContacts::ID:
      func(static_cast<supergroupMembersFilterContacts &>(obj));
      return true;
    case supergroupMembersFilterAdministrators::ID:
      func(static_cast<supergroupMembersFilterAdministrators &>(obj));
      return true;
    case supergroupMembersFilterSearch::ID:
      func(static_cast<supergroupMembersFilterSearch &>(obj));
      return true;
    case supergroupMembersFilterRestricted::ID:
      func(static_cast<supergroupMembersFilterRestricted &>(obj));
      return true;
    case supergroupMembersFilterBanned::ID:
      func(static_cast<supergroupMembersFilterBanned &>(obj));
      return true;
    case supergroupMembersFilterBots::ID:
      func(static_cast<supergroupMembersFilterBots &>(obj));
      return true;
    case tMeUrl::ID:
      func(static_cast<tMeUrl &>(obj));
      return true;
    case tMeUrlTypeUser::ID:
      func(static_cast<tMeUrlTypeUser &>(obj));
      return true;
    case tMeUrlTypeSupergroup::ID:
      func(static_cast<tMeUrlTypeSupergroup &>(obj));
      return true;
    case tMeUrlTypeChatInvite::ID:
      func(static_cast<tMeUrlTypeChatInvite &>(obj));
      return true;
    case tMeUrlTypeStickerSet::ID:
      func(static_cast<tMeUrlTypeStickerSet &>(obj));
      return true;
    case tMeUrls::ID:
      func(static_cast<tMeUrls &>(obj));
      return true;
    case tdlibParameters::ID:
      func(static_cast<tdlibParameters &>(obj));
      return true;
    case temporaryPasswordState::ID:
      func(static_cast<temporaryPasswordState &>(obj));
      return true;
    case termsOfService::ID:
      func(static_cast<termsOfService &>(obj));
      return true;
    case testBytes::ID:
      func(static_cast<testBytes &>(obj));
      return true;
    case testInt::ID:
      func(static_cast<testInt &>(obj));
      return true;
    case testString::ID:
      func(static_cast<testString &>(obj));
      return true;
    case testVectorInt::ID:
      func(static_cast<testVectorInt &>(obj));
      return true;
    case testVectorIntObject::ID:
      func(static_cast<testVectorIntObject &>(obj));
      return true;
    case testVectorString::ID:
      func(static_cast<testVectorString &>(obj));
      return true;
    case testVectorStringObject::ID:
      func(static_cast<testVectorStringObject &>(obj));
      return true;
    case text::ID:
      func(static_cast<text &>(obj));
      return true;
    case textEntities::ID:
      func(static_cast<textEntities &>(obj));
      return true;
    case textEntity::ID:
      func(static_cast<textEntity &>(obj));
      return true;
    case textEntityTypeMention::ID:
      func(static_cast<textEntityTypeMention &>(obj));
      return true;
    case textEntityTypeHashtag::ID:
      func(static_cast<textEntityTypeHashtag &>(obj));
      return true;
    case textEntityTypeCashtag::ID:
      func(static_cast<textEntityTypeCashtag &>(obj));
      return true;
    case textEntityTypeBotCommand::ID:
      func(static_cast<textEntityTypeBotCommand &>(obj));
      return true;
    case textEntityTypeUrl::ID:
      func(static_cast<textEntityTypeUrl &>(obj));
      return true;
    case textEntityTypeEmailAddress::ID:
      func(static_cast<textEntityTypeEmailAddress &>(obj));
      return true;
    case textEntityTypePhoneNumber::ID:
      func(static_cast<textEntityTypePhoneNumber &>(obj));
      return true;
    case textEntityTypeBankCardNumber::ID:
      func(static_cast<textEntityTypeBankCardNumber &>(obj));
      return true;
    case textEntityTypeBold::ID:
      func(static_cast<textEntityTypeBold &>(obj));
      return true;
    case textEntityTypeItalic::ID:
      func(static_cast<textEntityTypeItalic &>(obj));
      return true;
    case textEntityTypeUnderline::ID:
      func(static_cast<textEntityTypeUnderline &>(obj));
      return true;
    case textEntityTypeStrikethrough::ID:
      func(static_cast<textEntityTypeStrikethrough &>(obj));
      return true;
    case textEntityTypeCode::ID:
      func(static_cast<textEntityTypeCode &>(obj));
      return true;
    case textEntityTypePre::ID:
      func(static_cast<textEntityTypePre &>(obj));
      return true;
    case textEntityTypePreCode::ID:
      func(static_cast<textEntityTypePreCode &>(obj));
      return true;
    case textEntityTypeTextUrl::ID:
      func(static_cast<textEntityTypeTextUrl &>(obj));
      return true;
    case textEntityTypeMentionName::ID:
      func(static_cast<textEntityTypeMentionName &>(obj));
      return true;
    case textParseModeMarkdown::ID:
      func(static_cast<textParseModeMarkdown &>(obj));
      return true;
    case textParseModeHTML::ID:
      func(static_cast<textParseModeHTML &>(obj));
      return true;
    case thumbnail::ID:
      func(static_cast<thumbnail &>(obj));
      return true;
    case thumbnailFormatJpeg::ID:
      func(static_cast<thumbnailFormatJpeg &>(obj));
      return true;
    case thumbnailFormatPng::ID:
      func(static_cast<thumbnailFormatPng &>(obj));
      return true;
    case thumbnailFormatWebp::ID:
      func(static_cast<thumbnailFormatWebp &>(obj));
      return true;
    case thumbnailFormatGif::ID:
      func(static_cast<thumbnailFormatGif &>(obj));
      return true;
    case thumbnailFormatTgs::ID:
      func(static_cast<thumbnailFormatTgs &>(obj));
      return true;
    case thumbnailFormatMpeg4::ID:
      func(static_cast<thumbnailFormatMpeg4 &>(obj));
      return true;
    case topChatCategoryUsers::ID:
      func(static_cast<topChatCategoryUsers &>(obj));
      return true;
    case topChatCategoryBots::ID:
      func(static_cast<topChatCategoryBots &>(obj));
      return true;
    case topChatCategoryGroups::ID:
      func(static_cast<topChatCategoryGroups &>(obj));
      return true;
    case topChatCategoryChannels::ID:
      func(static_cast<topChatCategoryChannels &>(obj));
      return true;
    case topChatCategoryInlineBots::ID:
      func(static_cast<topChatCategoryInlineBots &>(obj));
      return true;
    case topChatCategoryCalls::ID:
      func(static_cast<topChatCategoryCalls &>(obj));
      return true;
    case topChatCategoryForwardChats::ID:
      func(static_cast<topChatCategoryForwardChats &>(obj));
      return true;
    case updateAuthorizationState::ID:
      func(static_cast<updateAuthorizationState &>(obj));
      return true;
    case updateNewMessage::ID:
      func(static_cast<updateNewMessage &>(obj));
      return true;
    case updateMessageSendAcknowledged::ID:
      func(static_cast<updateMessageSendAcknowledged &>(obj));
      return true;
    case updateMessageSendSucceeded::ID:
      func(static_cast<updateMessageSendSucceeded &>(obj));
      return true;
    case updateMessageSendFailed::ID:
      func(static_cast<updateMessageSendFailed &>(obj));
      return true;
    case updateMessageContent::ID:
      func(static_cast<updateMessageContent &>(obj));
      return true;
    case updateMessageEdited::ID:
      func(static_cast<updateMessageEdited &>(obj));
      return true;
    case updateMessageInteractionInfo::ID:
      func(static_cast<updateMessageInteractionInfo &>(obj));
      return true;
    case updateMessageContentOpened::ID:
      func(static_cast<updateMessageContentOpened &>(obj));
      return true;
    case updateMessageMentionRead::ID:
      func(static_cast<updateMessageMentionRead &>(obj));
      return true;
    case updateMessageLiveLocationViewed::ID:
      func(static_cast<updateMessageLiveLocationViewed &>(obj));
      return true;
    case updateNewChat::ID:
      func(static_cast<updateNewChat &>(obj));
      return true;
    case updateChatTitle::ID:
      func(static_cast<updateChatTitle &>(obj));
      return true;
    case updateChatPhoto::ID:
      func(static_cast<updateChatPhoto &>(obj));
      return true;
    case updateChatPermissions::ID:
      func(static_cast<updateChatPermissions &>(obj));
      return true;
    case updateChatLastMessage::ID:
      func(static_cast<updateChatLastMessage &>(obj));
      return true;
    case updateChatPosition::ID:
      func(static_cast<updateChatPosition &>(obj));
      return true;
    case updateChatIsMarkedAsUnread::ID:
      func(static_cast<updateChatIsMarkedAsUnread &>(obj));
      return true;
    case updateChatIsBlocked::ID:
      func(static_cast<updateChatIsBlocked &>(obj));
      return true;
    case updateChatHasScheduledMessages::ID:
      func(static_cast<updateChatHasScheduledMessages &>(obj));
      return true;
    case updateChatDefaultDisableNotification::ID:
      func(static_cast<updateChatDefaultDisableNotification &>(obj));
      return true;
    case updateChatReadInbox::ID:
      func(static_cast<updateChatReadInbox &>(obj));
      return true;
    case updateChatReadOutbox::ID:
      func(static_cast<updateChatReadOutbox &>(obj));
      return true;
    case updateChatUnreadMentionCount::ID:
      func(static_cast<updateChatUnreadMentionCount &>(obj));
      return true;
    case updateChatNotificationSettings::ID:
      func(static_cast<updateChatNotificationSettings &>(obj));
      return true;
    case updateScopeNotificationSettings::ID:
      func(static_cast<updateScopeNotificationSettings &>(obj));
      return true;
    case updateChatActionBar::ID:
      func(static_cast<updateChatActionBar &>(obj));
      return true;
    case updateChatPinnedMessage::ID:
      func(static_cast<updateChatPinnedMessage &>(obj));
      return true;
    case updateChatReplyMarkup::ID:
      func(static_cast<updateChatReplyMarkup &>(obj));
      return true;
    case updateChatDraftMessage::ID:
      func(static_cast<updateChatDraftMessage &>(obj));
      return true;
    case updateChatFilters::ID:
      func(static_cast<updateChatFilters &>(obj));
      return true;
    case updateChatOnlineMemberCount::ID:
      func(static_cast<updateChatOnlineMemberCount &>(obj));
      return true;
    case updateNotification::ID:
      func(static_cast<updateNotification &>(obj));
      return true;
    case updateNotificationGroup::ID:
      func(static_cast<updateNotificationGroup &>(obj));
      return true;
    case updateActiveNotifications::ID:
      func(static_cast<updateActiveNotifications &>(obj));
      return true;
    case updateHavePendingNotifications::ID:
      func(static_cast<updateHavePendingNotifications &>(obj));
      return true;
    case updateDeleteMessages::ID:
      func(static_cast<updateDeleteMessages &>(obj));
      return true;
    case updateUserChatAction::ID:
      func(static_cast<updateUserChatAction &>(obj));
      return true;
    case updateUserStatus::ID:
      func(static_cast<updateUserStatus &>(obj));
      return true;
    case updateUser::ID:
      func(static_cast<updateUser &>(obj));
      return true;
    case updateBasicGroup::ID:
      func(static_cast<updateBasicGroup &>(obj));
      return true;
    case updateSupergroup::ID:
      func(static_cast<updateSupergroup &>(obj));
      return true;
    case updateSecretChat::ID:
      func(static_cast<updateSecretChat &>(obj));
      return true;
    case updateUserFullInfo::ID:
      func(static_cast<updateUserFullInfo &>(obj));
      return true;
    case updateBasicGroupFullInfo::ID:
      func(static_cast<updateBasicGroupFullInfo &>(obj));
      return true;
    case updateSupergroupFullInfo::ID:
      func(static_cast<updateSupergroupFullInfo &>(obj));
      return true;
    case updateServiceNotification::ID:
      func(static_cast<updateServiceNotification &>(obj));
      return true;
    case updateFile::ID:
      func(static_cast<updateFile &>(obj));
      return true;
    case updateFileGenerationStart::ID:
      func(static_cast<updateFileGenerationStart &>(obj));
      return true;
    case updateFileGenerationStop::ID:
      func(static_cast<updateFileGenerationStop &>(obj));
      return true;
    case updateCall::ID:
      func(static_cast<updateCall &>(obj));
      return true;
    case updateNewCallSignalingData::ID:
      func(static_cast<updateNewCallSignalingData &>(obj));
      return true;
    case updateUserPrivacySettingRules::ID:
      func(static_cast<updateUserPrivacySettingRules &>(obj));
      return true;
    case updateUnreadMessageCount::ID:
      func(static_cast<updateUnreadMessageCount &>(obj));
      return true;
    case updateUnreadChatCount::ID:
      func(static_cast<updateUnreadChatCount &>(obj));
      return true;
    case updateOption::ID:
      func(static_cast<updateOption &>(obj));
      return true;
    case updateStickerSet::ID:
      func(static_cast<updateStickerSet &>(obj));
      return true;
    case updateInstalledStickerSets::ID:
      func(static_cast<updateInstalledStickerSets &>(obj));
      return true;
    case updateTrendingStickerSets::ID:
      func(static_cast<updateTrendingStickerSets &>(obj));
      return true;
    case updateRecentStickers::ID:
      func(static_cast<updateRecentStickers &>(obj));
      return true;
    case updateFavoriteStickers::ID:
      func(static_cast<updateFavoriteStickers &>(obj));
      return true;
    case updateSavedAnimations::ID:
      func(static_cast<updateSavedAnimations &>(obj));
      return true;
    case updateSelectedBackground::ID:
      func(static_cast<updateSelectedBackground &>(obj));
      return true;
    case updateLanguagePackStrings::ID:
      func(static_cast<updateLanguagePackStrings &>(obj));
      return true;
    case updateConnectionState::ID:
      func(static_cast<updateConnectionState &>(obj));
      return true;
    case updateTermsOfService::ID:
      func(static_cast<updateTermsOfService &>(obj));
      return true;
    case updateUsersNearby::ID:
      func(static_cast<updateUsersNearby &>(obj));
      return true;
    case updateDiceEmojis::ID:
      func(static_cast<updateDiceEmojis &>(obj));
      return true;
    case updateAnimationSearchParameters::ID:
      func(static_cast<updateAnimationSearchParameters &>(obj));
      return true;
    case updateSuggestedActions::ID:
      func(static_cast<updateSuggestedActions &>(obj));
      return true;
    case updateNewInlineQuery::ID:
      func(static_cast<updateNewInlineQuery &>(obj));
      return true;
    case updateNewChosenInlineResult::ID:
      func(static_cast<updateNewChosenInlineResult &>(obj));
      return true;
    case updateNewCallbackQuery::ID:
      func(static_cast<updateNewCallbackQuery &>(obj));
      return true;
    case updateNewInlineCallbackQuery::ID:
      func(static_cast<updateNewInlineCallbackQuery &>(obj));
      return true;
    case updateNewShippingQuery::ID:
      func(static_cast<updateNewShippingQuery &>(obj));
      return true;
    case updateNewPreCheckoutQuery::ID:
      func(static_cast<updateNewPreCheckoutQuery &>(obj));
      return true;
    case updateNewCustomEvent::ID:
      func(static_cast<updateNewCustomEvent &>(obj));
      return true;
    case updateNewCustomQuery::ID:
      func(static_cast<updateNewCustomQuery &>(obj));
      return true;
    case updatePoll::ID:
      func(static_cast<updatePoll &>(obj));
      return true;
    case updatePollAnswer::ID:
      func(static_cast<updatePollAnswer &>(obj));
      return true;
    case updates::ID:
      func(static_cast<updates &>(obj));
      return true;
    case user::ID:
      func(static_cast<user &>(obj));
      return true;
    case userFullInfo::ID:
      func(static_cast<userFullInfo &>(obj));
      return true;
    case userPrivacySettingShowStatus::ID:
      func(static_cast<userPrivacySettingShowStatus &>(obj));
      return true;
    case userPrivacySettingShowProfilePhoto::ID:
      func(static_cast<userPrivacySettingShowProfilePhoto &>(obj));
      return true;
    case userPrivacySettingShowLinkInForwardedMessages::ID:
      func(static_cast<userPrivacySettingShowLinkInForwardedMessages &>(obj));
      return true;
    case userPrivacySettingShowPhoneNumber::ID:
      func(static_cast<userPrivacySettingShowPhoneNumber &>(obj));
      return true;
    case userPrivacySettingAllowChatInvites::ID:
      func(static_cast<userPrivacySettingAllowChatInvites &>(obj));
      return true;
    case userPrivacySettingAllowCalls::ID:
      func(static_cast<userPrivacySettingAllowCalls &>(obj));
      return true;
    case userPrivacySettingAllowPeerToPeerCalls::ID:
      func(static_cast<userPrivacySettingAllowPeerToPeerCalls &>(obj));
      return true;
    case userPrivacySettingAllowFindingByPhoneNumber::ID:
      func(static_cast<userPrivacySettingAllowFindingByPhoneNumber &>(obj));
      return true;
    case userPrivacySettingRuleAllowAll::ID:
      func(static_cast<userPrivacySettingRuleAllowAll &>(obj));
      return true;
    case userPrivacySettingRuleAllowContacts::ID:
      func(static_cast<userPrivacySettingRuleAllowContacts &>(obj));
      return true;
    case userPrivacySettingRuleAllowUsers::ID:
      func(static_cast<userPrivacySettingRuleAllowUsers &>(obj));
      return true;
    case userPrivacySettingRuleAllowChatMembers::ID:
      func(static_cast<userPrivacySettingRuleAllowChatMembers &>(obj));
      return true;
    case userPrivacySettingRuleRestrictAll::ID:
      func(static_cast<userPrivacySettingRuleRestrictAll &>(obj));
      return true;
    case userPrivacySettingRuleRestrictContacts::ID:
      func(static_cast<userPrivacySettingRuleRestrictContacts &>(obj));
      return true;
    case userPrivacySettingRuleRestrictUsers::ID:
      func(static_cast<userPrivacySettingRuleRestrictUsers &>(obj));
      return true;
    case userPrivacySettingRuleRestrictChatMembers::ID:
      func(static_cast<userPrivacySettingRuleRestrictChatMembers &>(obj));
      return true;
    case userPrivacySettingRules::ID:
      func(static_cast<userPrivacySettingRules &>(obj));
      return true;
    case userStatusEmpty::ID:
      func(static_cast<userStatusEmpty &>(obj));
      return true;
    case userStatusOnline::ID:
      func(static_cast<userStatusOnline &>(obj));
      return true;
    case userStatusOffline::ID:
      func(static_cast<userStatusOffline &>(obj));
      return true;
    case userStatusRecently::ID:
      func(static_cast<userStatusRecently &>(obj));
      return true;
    case userStatusLastWeek::ID:
      func(static_cast<userStatusLastWeek &>(obj));
      return true;
    case userStatusLastMonth::ID:
      func(static_cast<userStatusLastMonth &>(obj));
      return true;
    case userTypeRegular::ID:
      func(static_cast<userTypeRegular &>(obj));
      return true;
    case userTypeDeleted::ID:
      func(static_cast<userTypeDeleted &>(obj));
      return true;
    case userTypeBot::ID:
      func(static_cast<userTypeBot &>(obj));
      return true;
    case userTypeUnknown::ID:
      func(static_cast<userTypeUnknown &>(obj));
      return true;
    case users::ID:
      func(static_cast<users &>(obj));
      return true;
    case validatedOrderInfo::ID:
      func(static_cast<validatedOrderInfo &>(obj));
      return true;
    case venue::ID:
      func(static_cast<venue &>(obj));
      return true;
    case video::ID:
      func(static_cast<video &>(obj));
      return true;
    case videoNote::ID:
      func(static_cast<videoNote &>(obj));
      return true;
    case voiceNote::ID:
      func(static_cast<voiceNote &>(obj));
      return true;
    case webPage::ID:
      func(static_cast<webPage &>(obj));
      return true;
    case webPageInstantView::ID:
      func(static_cast<webPageInstantView &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(Function &obj, const T &func) {
  switch (obj.get_id()) {
    case acceptCall::ID:
      func(static_cast<acceptCall &>(obj));
      return true;
    case acceptTermsOfService::ID:
      func(static_cast<acceptTermsOfService &>(obj));
      return true;
    case addChatMember::ID:
      func(static_cast<addChatMember &>(obj));
      return true;
    case addChatMembers::ID:
      func(static_cast<addChatMembers &>(obj));
      return true;
    case addChatToList::ID:
      func(static_cast<addChatToList &>(obj));
      return true;
    case addContact::ID:
      func(static_cast<addContact &>(obj));
      return true;
    case addCustomServerLanguagePack::ID:
      func(static_cast<addCustomServerLanguagePack &>(obj));
      return true;
    case addFavoriteSticker::ID:
      func(static_cast<addFavoriteSticker &>(obj));
      return true;
    case addLocalMessage::ID:
      func(static_cast<addLocalMessage &>(obj));
      return true;
    case addLogMessage::ID:
      func(static_cast<addLogMessage &>(obj));
      return true;
    case addNetworkStatistics::ID:
      func(static_cast<addNetworkStatistics &>(obj));
      return true;
    case addProxy::ID:
      func(static_cast<addProxy &>(obj));
      return true;
    case addRecentSticker::ID:
      func(static_cast<addRecentSticker &>(obj));
      return true;
    case addRecentlyFoundChat::ID:
      func(static_cast<addRecentlyFoundChat &>(obj));
      return true;
    case addSavedAnimation::ID:
      func(static_cast<addSavedAnimation &>(obj));
      return true;
    case addStickerToSet::ID:
      func(static_cast<addStickerToSet &>(obj));
      return true;
    case answerCallbackQuery::ID:
      func(static_cast<answerCallbackQuery &>(obj));
      return true;
    case answerCustomQuery::ID:
      func(static_cast<answerCustomQuery &>(obj));
      return true;
    case answerInlineQuery::ID:
      func(static_cast<answerInlineQuery &>(obj));
      return true;
    case answerPreCheckoutQuery::ID:
      func(static_cast<answerPreCheckoutQuery &>(obj));
      return true;
    case answerShippingQuery::ID:
      func(static_cast<answerShippingQuery &>(obj));
      return true;
    case blockChatFromReplies::ID:
      func(static_cast<blockChatFromReplies &>(obj));
      return true;
    case canTransferOwnership::ID:
      func(static_cast<canTransferOwnership &>(obj));
      return true;
    case cancelDownloadFile::ID:
      func(static_cast<cancelDownloadFile &>(obj));
      return true;
    case cancelUploadFile::ID:
      func(static_cast<cancelUploadFile &>(obj));
      return true;
    case changeImportedContacts::ID:
      func(static_cast<changeImportedContacts &>(obj));
      return true;
    case changePhoneNumber::ID:
      func(static_cast<changePhoneNumber &>(obj));
      return true;
    case changeStickerSet::ID:
      func(static_cast<changeStickerSet &>(obj));
      return true;
    case checkAuthenticationBotToken::ID:
      func(static_cast<checkAuthenticationBotToken &>(obj));
      return true;
    case checkAuthenticationCode::ID:
      func(static_cast<checkAuthenticationCode &>(obj));
      return true;
    case checkAuthenticationPassword::ID:
      func(static_cast<checkAuthenticationPassword &>(obj));
      return true;
    case checkChangePhoneNumberCode::ID:
      func(static_cast<checkChangePhoneNumberCode &>(obj));
      return true;
    case checkChatInviteLink::ID:
      func(static_cast<checkChatInviteLink &>(obj));
      return true;
    case checkChatUsername::ID:
      func(static_cast<checkChatUsername &>(obj));
      return true;
    case checkCreatedPublicChatsLimit::ID:
      func(static_cast<checkCreatedPublicChatsLimit &>(obj));
      return true;
    case checkDatabaseEncryptionKey::ID:
      func(static_cast<checkDatabaseEncryptionKey &>(obj));
      return true;
    case checkEmailAddressVerificationCode::ID:
      func(static_cast<checkEmailAddressVerificationCode &>(obj));
      return true;
    case checkPhoneNumberConfirmationCode::ID:
      func(static_cast<checkPhoneNumberConfirmationCode &>(obj));
      return true;
    case checkPhoneNumberVerificationCode::ID:
      func(static_cast<checkPhoneNumberVerificationCode &>(obj));
      return true;
    case checkRecoveryEmailAddressCode::ID:
      func(static_cast<checkRecoveryEmailAddressCode &>(obj));
      return true;
    case cleanFileName::ID:
      func(static_cast<cleanFileName &>(obj));
      return true;
    case clearAllDraftMessages::ID:
      func(static_cast<clearAllDraftMessages &>(obj));
      return true;
    case clearImportedContacts::ID:
      func(static_cast<clearImportedContacts &>(obj));
      return true;
    case clearRecentStickers::ID:
      func(static_cast<clearRecentStickers &>(obj));
      return true;
    case clearRecentlyFoundChats::ID:
      func(static_cast<clearRecentlyFoundChats &>(obj));
      return true;
    case close::ID:
      func(static_cast<close &>(obj));
      return true;
    case closeChat::ID:
      func(static_cast<closeChat &>(obj));
      return true;
    case closeSecretChat::ID:
      func(static_cast<closeSecretChat &>(obj));
      return true;
    case confirmQrCodeAuthentication::ID:
      func(static_cast<confirmQrCodeAuthentication &>(obj));
      return true;
    case createBasicGroupChat::ID:
      func(static_cast<createBasicGroupChat &>(obj));
      return true;
    case createCall::ID:
      func(static_cast<createCall &>(obj));
      return true;
    case createChatFilter::ID:
      func(static_cast<createChatFilter &>(obj));
      return true;
    case createNewBasicGroupChat::ID:
      func(static_cast<createNewBasicGroupChat &>(obj));
      return true;
    case createNewSecretChat::ID:
      func(static_cast<createNewSecretChat &>(obj));
      return true;
    case createNewStickerSet::ID:
      func(static_cast<createNewStickerSet &>(obj));
      return true;
    case createNewSupergroupChat::ID:
      func(static_cast<createNewSupergroupChat &>(obj));
      return true;
    case createPrivateChat::ID:
      func(static_cast<createPrivateChat &>(obj));
      return true;
    case createSecretChat::ID:
      func(static_cast<createSecretChat &>(obj));
      return true;
    case createSupergroupChat::ID:
      func(static_cast<createSupergroupChat &>(obj));
      return true;
    case createTemporaryPassword::ID:
      func(static_cast<createTemporaryPassword &>(obj));
      return true;
    case deleteAccount::ID:
      func(static_cast<deleteAccount &>(obj));
      return true;
    case deleteChatFilter::ID:
      func(static_cast<deleteChatFilter &>(obj));
      return true;
    case deleteChatHistory::ID:
      func(static_cast<deleteChatHistory &>(obj));
      return true;
    case deleteChatMessagesFromUser::ID:
      func(static_cast<deleteChatMessagesFromUser &>(obj));
      return true;
    case deleteChatReplyMarkup::ID:
      func(static_cast<deleteChatReplyMarkup &>(obj));
      return true;
    case deleteFile::ID:
      func(static_cast<deleteFile &>(obj));
      return true;
    case deleteLanguagePack::ID:
      func(static_cast<deleteLanguagePack &>(obj));
      return true;
    case deleteMessages::ID:
      func(static_cast<deleteMessages &>(obj));
      return true;
    case deletePassportElement::ID:
      func(static_cast<deletePassportElement &>(obj));
      return true;
    case deleteProfilePhoto::ID:
      func(static_cast<deleteProfilePhoto &>(obj));
      return true;
    case deleteSavedCredentials::ID:
      func(static_cast<deleteSavedCredentials &>(obj));
      return true;
    case deleteSavedOrderInfo::ID:
      func(static_cast<deleteSavedOrderInfo &>(obj));
      return true;
    case deleteSupergroup::ID:
      func(static_cast<deleteSupergroup &>(obj));
      return true;
    case destroy::ID:
      func(static_cast<destroy &>(obj));
      return true;
    case disableProxy::ID:
      func(static_cast<disableProxy &>(obj));
      return true;
    case discardCall::ID:
      func(static_cast<discardCall &>(obj));
      return true;
    case disconnectAllWebsites::ID:
      func(static_cast<disconnectAllWebsites &>(obj));
      return true;
    case disconnectWebsite::ID:
      func(static_cast<disconnectWebsite &>(obj));
      return true;
    case downloadFile::ID:
      func(static_cast<downloadFile &>(obj));
      return true;
    case editChatFilter::ID:
      func(static_cast<editChatFilter &>(obj));
      return true;
    case editCustomLanguagePackInfo::ID:
      func(static_cast<editCustomLanguagePackInfo &>(obj));
      return true;
    case editInlineMessageCaption::ID:
      func(static_cast<editInlineMessageCaption &>(obj));
      return true;
    case editInlineMessageLiveLocation::ID:
      func(static_cast<editInlineMessageLiveLocation &>(obj));
      return true;
    case editInlineMessageMedia::ID:
      func(static_cast<editInlineMessageMedia &>(obj));
      return true;
    case editInlineMessageReplyMarkup::ID:
      func(static_cast<editInlineMessageReplyMarkup &>(obj));
      return true;
    case editInlineMessageText::ID:
      func(static_cast<editInlineMessageText &>(obj));
      return true;
    case editMessageCaption::ID:
      func(static_cast<editMessageCaption &>(obj));
      return true;
    case editMessageLiveLocation::ID:
      func(static_cast<editMessageLiveLocation &>(obj));
      return true;
    case editMessageMedia::ID:
      func(static_cast<editMessageMedia &>(obj));
      return true;
    case editMessageReplyMarkup::ID:
      func(static_cast<editMessageReplyMarkup &>(obj));
      return true;
    case editMessageSchedulingState::ID:
      func(static_cast<editMessageSchedulingState &>(obj));
      return true;
    case editMessageText::ID:
      func(static_cast<editMessageText &>(obj));
      return true;
    case editProxy::ID:
      func(static_cast<editProxy &>(obj));
      return true;
    case enableProxy::ID:
      func(static_cast<enableProxy &>(obj));
      return true;
    case finishFileGeneration::ID:
      func(static_cast<finishFileGeneration &>(obj));
      return true;
    case forwardMessages::ID:
      func(static_cast<forwardMessages &>(obj));
      return true;
    case generateChatInviteLink::ID:
      func(static_cast<generateChatInviteLink &>(obj));
      return true;
    case getAccountTtl::ID:
      func(static_cast<getAccountTtl &>(obj));
      return true;
    case getActiveLiveLocationMessages::ID:
      func(static_cast<getActiveLiveLocationMessages &>(obj));
      return true;
    case getActiveSessions::ID:
      func(static_cast<getActiveSessions &>(obj));
      return true;
    case getAllPassportElements::ID:
      func(static_cast<getAllPassportElements &>(obj));
      return true;
    case getApplicationConfig::ID:
      func(static_cast<getApplicationConfig &>(obj));
      return true;
    case getArchivedStickerSets::ID:
      func(static_cast<getArchivedStickerSets &>(obj));
      return true;
    case getAttachedStickerSets::ID:
      func(static_cast<getAttachedStickerSets &>(obj));
      return true;
    case getAuthorizationState::ID:
      func(static_cast<getAuthorizationState &>(obj));
      return true;
    case getAutoDownloadSettingsPresets::ID:
      func(static_cast<getAutoDownloadSettingsPresets &>(obj));
      return true;
    case getBackgroundUrl::ID:
      func(static_cast<getBackgroundUrl &>(obj));
      return true;
    case getBackgrounds::ID:
      func(static_cast<getBackgrounds &>(obj));
      return true;
    case getBankCardInfo::ID:
      func(static_cast<getBankCardInfo &>(obj));
      return true;
    case getBasicGroup::ID:
      func(static_cast<getBasicGroup &>(obj));
      return true;
    case getBasicGroupFullInfo::ID:
      func(static_cast<getBasicGroupFullInfo &>(obj));
      return true;
    case getBlockedChats::ID:
      func(static_cast<getBlockedChats &>(obj));
      return true;
    case getCallbackQueryAnswer::ID:
      func(static_cast<getCallbackQueryAnswer &>(obj));
      return true;
    case getChat::ID:
      func(static_cast<getChat &>(obj));
      return true;
    case getChatAdministrators::ID:
      func(static_cast<getChatAdministrators &>(obj));
      return true;
    case getChatEventLog::ID:
      func(static_cast<getChatEventLog &>(obj));
      return true;
    case getChatFilter::ID:
      func(static_cast<getChatFilter &>(obj));
      return true;
    case getChatFilterDefaultIconName::ID:
      func(static_cast<getChatFilterDefaultIconName &>(obj));
      return true;
    case getChatHistory::ID:
      func(static_cast<getChatHistory &>(obj));
      return true;
    case getChatListsToAddChat::ID:
      func(static_cast<getChatListsToAddChat &>(obj));
      return true;
    case getChatMember::ID:
      func(static_cast<getChatMember &>(obj));
      return true;
    case getChatMessageByDate::ID:
      func(static_cast<getChatMessageByDate &>(obj));
      return true;
    case getChatMessageCount::ID:
      func(static_cast<getChatMessageCount &>(obj));
      return true;
    case getChatNotificationSettingsExceptions::ID:
      func(static_cast<getChatNotificationSettingsExceptions &>(obj));
      return true;
    case getChatPinnedMessage::ID:
      func(static_cast<getChatPinnedMessage &>(obj));
      return true;
    case getChatScheduledMessages::ID:
      func(static_cast<getChatScheduledMessages &>(obj));
      return true;
    case getChatStatistics::ID:
      func(static_cast<getChatStatistics &>(obj));
      return true;
    case getChatStatisticsUrl::ID:
      func(static_cast<getChatStatisticsUrl &>(obj));
      return true;
    case getChats::ID:
      func(static_cast<getChats &>(obj));
      return true;
    case getConnectedWebsites::ID:
      func(static_cast<getConnectedWebsites &>(obj));
      return true;
    case getContacts::ID:
      func(static_cast<getContacts &>(obj));
      return true;
    case getCountries::ID:
      func(static_cast<getCountries &>(obj));
      return true;
    case getCountryCode::ID:
      func(static_cast<getCountryCode &>(obj));
      return true;
    case getCreatedPublicChats::ID:
      func(static_cast<getCreatedPublicChats &>(obj));
      return true;
    case getCurrentState::ID:
      func(static_cast<getCurrentState &>(obj));
      return true;
    case getDatabaseStatistics::ID:
      func(static_cast<getDatabaseStatistics &>(obj));
      return true;
    case getDeepLinkInfo::ID:
      func(static_cast<getDeepLinkInfo &>(obj));
      return true;
    case getEmojiSuggestionsUrl::ID:
      func(static_cast<getEmojiSuggestionsUrl &>(obj));
      return true;
    case getFavoriteStickers::ID:
      func(static_cast<getFavoriteStickers &>(obj));
      return true;
    case getFile::ID:
      func(static_cast<getFile &>(obj));
      return true;
    case getFileDownloadedPrefixSize::ID:
      func(static_cast<getFileDownloadedPrefixSize &>(obj));
      return true;
    case getFileExtension::ID:
      func(static_cast<getFileExtension &>(obj));
      return true;
    case getFileMimeType::ID:
      func(static_cast<getFileMimeType &>(obj));
      return true;
    case getGameHighScores::ID:
      func(static_cast<getGameHighScores &>(obj));
      return true;
    case getGroupsInCommon::ID:
      func(static_cast<getGroupsInCommon &>(obj));
      return true;
    case getImportedContactCount::ID:
      func(static_cast<getImportedContactCount &>(obj));
      return true;
    case getInactiveSupergroupChats::ID:
      func(static_cast<getInactiveSupergroupChats &>(obj));
      return true;
    case getInlineGameHighScores::ID:
      func(static_cast<getInlineGameHighScores &>(obj));
      return true;
    case getInlineQueryResults::ID:
      func(static_cast<getInlineQueryResults &>(obj));
      return true;
    case getInstalledStickerSets::ID:
      func(static_cast<getInstalledStickerSets &>(obj));
      return true;
    case getInviteText::ID:
      func(static_cast<getInviteText &>(obj));
      return true;
    case getJsonString::ID:
      func(static_cast<getJsonString &>(obj));
      return true;
    case getJsonValue::ID:
      func(static_cast<getJsonValue &>(obj));
      return true;
    case getLanguagePackInfo::ID:
      func(static_cast<getLanguagePackInfo &>(obj));
      return true;
    case getLanguagePackString::ID:
      func(static_cast<getLanguagePackString &>(obj));
      return true;
    case getLanguagePackStrings::ID:
      func(static_cast<getLanguagePackStrings &>(obj));
      return true;
    case getLocalizationTargetInfo::ID:
      func(static_cast<getLocalizationTargetInfo &>(obj));
      return true;
    case getLogStream::ID:
      func(static_cast<getLogStream &>(obj));
      return true;
    case getLogTagVerbosityLevel::ID:
      func(static_cast<getLogTagVerbosityLevel &>(obj));
      return true;
    case getLogTags::ID:
      func(static_cast<getLogTags &>(obj));
      return true;
    case getLogVerbosityLevel::ID:
      func(static_cast<getLogVerbosityLevel &>(obj));
      return true;
    case getLoginUrl::ID:
      func(static_cast<getLoginUrl &>(obj));
      return true;
    case getLoginUrlInfo::ID:
      func(static_cast<getLoginUrlInfo &>(obj));
      return true;
    case getMapThumbnailFile::ID:
      func(static_cast<getMapThumbnailFile &>(obj));
      return true;
    case getMarkdownText::ID:
      func(static_cast<getMarkdownText &>(obj));
      return true;
    case getMe::ID:
      func(static_cast<getMe &>(obj));
      return true;
    case getMessage::ID:
      func(static_cast<getMessage &>(obj));
      return true;
    case getMessageEmbeddingCode::ID:
      func(static_cast<getMessageEmbeddingCode &>(obj));
      return true;
    case getMessageLink::ID:
      func(static_cast<getMessageLink &>(obj));
      return true;
    case getMessageLinkInfo::ID:
      func(static_cast<getMessageLinkInfo &>(obj));
      return true;
    case getMessageLocally::ID:
      func(static_cast<getMessageLocally &>(obj));
      return true;
    case getMessagePublicForwards::ID:
      func(static_cast<getMessagePublicForwards &>(obj));
      return true;
    case getMessageStatistics::ID:
      func(static_cast<getMessageStatistics &>(obj));
      return true;
    case getMessageThread::ID:
      func(static_cast<getMessageThread &>(obj));
      return true;
    case getMessageThreadHistory::ID:
      func(static_cast<getMessageThreadHistory &>(obj));
      return true;
    case getMessages::ID:
      func(static_cast<getMessages &>(obj));
      return true;
    case getNetworkStatistics::ID:
      func(static_cast<getNetworkStatistics &>(obj));
      return true;
    case getOption::ID:
      func(static_cast<getOption &>(obj));
      return true;
    case getPassportAuthorizationForm::ID:
      func(static_cast<getPassportAuthorizationForm &>(obj));
      return true;
    case getPassportAuthorizationFormAvailableElements::ID:
      func(static_cast<getPassportAuthorizationFormAvailableElements &>(obj));
      return true;
    case getPassportElement::ID:
      func(static_cast<getPassportElement &>(obj));
      return true;
    case getPasswordState::ID:
      func(static_cast<getPasswordState &>(obj));
      return true;
    case getPaymentForm::ID:
      func(static_cast<getPaymentForm &>(obj));
      return true;
    case getPaymentReceipt::ID:
      func(static_cast<getPaymentReceipt &>(obj));
      return true;
    case getPhoneNumberInfo::ID:
      func(static_cast<getPhoneNumberInfo &>(obj));
      return true;
    case getPollVoters::ID:
      func(static_cast<getPollVoters &>(obj));
      return true;
    case getPreferredCountryLanguage::ID:
      func(static_cast<getPreferredCountryLanguage &>(obj));
      return true;
    case getProxies::ID:
      func(static_cast<getProxies &>(obj));
      return true;
    case getProxyLink::ID:
      func(static_cast<getProxyLink &>(obj));
      return true;
    case getPushReceiverId::ID:
      func(static_cast<getPushReceiverId &>(obj));
      return true;
    case getRecentInlineBots::ID:
      func(static_cast<getRecentInlineBots &>(obj));
      return true;
    case getRecentStickers::ID:
      func(static_cast<getRecentStickers &>(obj));
      return true;
    case getRecentlyVisitedTMeUrls::ID:
      func(static_cast<getRecentlyVisitedTMeUrls &>(obj));
      return true;
    case getRecommendedChatFilters::ID:
      func(static_cast<getRecommendedChatFilters &>(obj));
      return true;
    case getRecoveryEmailAddress::ID:
      func(static_cast<getRecoveryEmailAddress &>(obj));
      return true;
    case getRemoteFile::ID:
      func(static_cast<getRemoteFile &>(obj));
      return true;
    case getRepliedMessage::ID:
      func(static_cast<getRepliedMessage &>(obj));
      return true;
    case getSavedAnimations::ID:
      func(static_cast<getSavedAnimations &>(obj));
      return true;
    case getSavedOrderInfo::ID:
      func(static_cast<getSavedOrderInfo &>(obj));
      return true;
    case getScopeNotificationSettings::ID:
      func(static_cast<getScopeNotificationSettings &>(obj));
      return true;
    case getSecretChat::ID:
      func(static_cast<getSecretChat &>(obj));
      return true;
    case getStatisticsGraph::ID:
      func(static_cast<getStatisticsGraph &>(obj));
      return true;
    case getStickerEmojis::ID:
      func(static_cast<getStickerEmojis &>(obj));
      return true;
    case getStickerSet::ID:
      func(static_cast<getStickerSet &>(obj));
      return true;
    case getStickers::ID:
      func(static_cast<getStickers &>(obj));
      return true;
    case getStorageStatistics::ID:
      func(static_cast<getStorageStatistics &>(obj));
      return true;
    case getStorageStatisticsFast::ID:
      func(static_cast<getStorageStatisticsFast &>(obj));
      return true;
    case getSuitableDiscussionChats::ID:
      func(static_cast<getSuitableDiscussionChats &>(obj));
      return true;
    case getSupergroup::ID:
      func(static_cast<getSupergroup &>(obj));
      return true;
    case getSupergroupFullInfo::ID:
      func(static_cast<getSupergroupFullInfo &>(obj));
      return true;
    case getSupergroupMembers::ID:
      func(static_cast<getSupergroupMembers &>(obj));
      return true;
    case getSupportUser::ID:
      func(static_cast<getSupportUser &>(obj));
      return true;
    case getTemporaryPasswordState::ID:
      func(static_cast<getTemporaryPasswordState &>(obj));
      return true;
    case getTextEntities::ID:
      func(static_cast<getTextEntities &>(obj));
      return true;
    case getTopChats::ID:
      func(static_cast<getTopChats &>(obj));
      return true;
    case getTrendingStickerSets::ID:
      func(static_cast<getTrendingStickerSets &>(obj));
      return true;
    case getUser::ID:
      func(static_cast<getUser &>(obj));
      return true;
    case getUserFullInfo::ID:
      func(static_cast<getUserFullInfo &>(obj));
      return true;
    case getUserPrivacySettingRules::ID:
      func(static_cast<getUserPrivacySettingRules &>(obj));
      return true;
    case getUserProfilePhotos::ID:
      func(static_cast<getUserProfilePhotos &>(obj));
      return true;
    case getWebPageInstantView::ID:
      func(static_cast<getWebPageInstantView &>(obj));
      return true;
    case getWebPagePreview::ID:
      func(static_cast<getWebPagePreview &>(obj));
      return true;
    case hideSuggestedAction::ID:
      func(static_cast<hideSuggestedAction &>(obj));
      return true;
    case importContacts::ID:
      func(static_cast<importContacts &>(obj));
      return true;
    case joinChat::ID:
      func(static_cast<joinChat &>(obj));
      return true;
    case joinChatByInviteLink::ID:
      func(static_cast<joinChatByInviteLink &>(obj));
      return true;
    case leaveChat::ID:
      func(static_cast<leaveChat &>(obj));
      return true;
    case logOut::ID:
      func(static_cast<logOut &>(obj));
      return true;
    case openChat::ID:
      func(static_cast<openChat &>(obj));
      return true;
    case openMessageContent::ID:
      func(static_cast<openMessageContent &>(obj));
      return true;
    case optimizeStorage::ID:
      func(static_cast<optimizeStorage &>(obj));
      return true;
    case parseMarkdown::ID:
      func(static_cast<parseMarkdown &>(obj));
      return true;
    case parseTextEntities::ID:
      func(static_cast<parseTextEntities &>(obj));
      return true;
    case pinChatMessage::ID:
      func(static_cast<pinChatMessage &>(obj));
      return true;
    case pingProxy::ID:
      func(static_cast<pingProxy &>(obj));
      return true;
    case processPushNotification::ID:
      func(static_cast<processPushNotification &>(obj));
      return true;
    case readAllChatMentions::ID:
      func(static_cast<readAllChatMentions &>(obj));
      return true;
    case readFilePart::ID:
      func(static_cast<readFilePart &>(obj));
      return true;
    case recoverAuthenticationPassword::ID:
      func(static_cast<recoverAuthenticationPassword &>(obj));
      return true;
    case recoverPassword::ID:
      func(static_cast<recoverPassword &>(obj));
      return true;
    case registerDevice::ID:
      func(static_cast<registerDevice &>(obj));
      return true;
    case registerUser::ID:
      func(static_cast<registerUser &>(obj));
      return true;
    case removeBackground::ID:
      func(static_cast<removeBackground &>(obj));
      return true;
    case removeChatActionBar::ID:
      func(static_cast<removeChatActionBar &>(obj));
      return true;
    case removeContacts::ID:
      func(static_cast<removeContacts &>(obj));
      return true;
    case removeFavoriteSticker::ID:
      func(static_cast<removeFavoriteSticker &>(obj));
      return true;
    case removeNotification::ID:
      func(static_cast<removeNotification &>(obj));
      return true;
    case removeNotificationGroup::ID:
      func(static_cast<removeNotificationGroup &>(obj));
      return true;
    case removeProxy::ID:
      func(static_cast<removeProxy &>(obj));
      return true;
    case removeRecentHashtag::ID:
      func(static_cast<removeRecentHashtag &>(obj));
      return true;
    case removeRecentSticker::ID:
      func(static_cast<removeRecentSticker &>(obj));
      return true;
    case removeRecentlyFoundChat::ID:
      func(static_cast<removeRecentlyFoundChat &>(obj));
      return true;
    case removeSavedAnimation::ID:
      func(static_cast<removeSavedAnimation &>(obj));
      return true;
    case removeStickerFromSet::ID:
      func(static_cast<removeStickerFromSet &>(obj));
      return true;
    case removeTopChat::ID:
      func(static_cast<removeTopChat &>(obj));
      return true;
    case reorderChatFilters::ID:
      func(static_cast<reorderChatFilters &>(obj));
      return true;
    case reorderInstalledStickerSets::ID:
      func(static_cast<reorderInstalledStickerSets &>(obj));
      return true;
    case reportChat::ID:
      func(static_cast<reportChat &>(obj));
      return true;
    case reportSupergroupSpam::ID:
      func(static_cast<reportSupergroupSpam &>(obj));
      return true;
    case requestAuthenticationPasswordRecovery::ID:
      func(static_cast<requestAuthenticationPasswordRecovery &>(obj));
      return true;
    case requestPasswordRecovery::ID:
      func(static_cast<requestPasswordRecovery &>(obj));
      return true;
    case requestQrCodeAuthentication::ID:
      func(static_cast<requestQrCodeAuthentication &>(obj));
      return true;
    case resendAuthenticationCode::ID:
      func(static_cast<resendAuthenticationCode &>(obj));
      return true;
    case resendChangePhoneNumberCode::ID:
      func(static_cast<resendChangePhoneNumberCode &>(obj));
      return true;
    case resendEmailAddressVerificationCode::ID:
      func(static_cast<resendEmailAddressVerificationCode &>(obj));
      return true;
    case resendMessages::ID:
      func(static_cast<resendMessages &>(obj));
      return true;
    case resendPhoneNumberConfirmationCode::ID:
      func(static_cast<resendPhoneNumberConfirmationCode &>(obj));
      return true;
    case resendPhoneNumberVerificationCode::ID:
      func(static_cast<resendPhoneNumberVerificationCode &>(obj));
      return true;
    case resendRecoveryEmailAddressCode::ID:
      func(static_cast<resendRecoveryEmailAddressCode &>(obj));
      return true;
    case resetAllNotificationSettings::ID:
      func(static_cast<resetAllNotificationSettings &>(obj));
      return true;
    case resetBackgrounds::ID:
      func(static_cast<resetBackgrounds &>(obj));
      return true;
    case resetNetworkStatistics::ID:
      func(static_cast<resetNetworkStatistics &>(obj));
      return true;
    case saveApplicationLogEvent::ID:
      func(static_cast<saveApplicationLogEvent &>(obj));
      return true;
    case searchBackground::ID:
      func(static_cast<searchBackground &>(obj));
      return true;
    case searchCallMessages::ID:
      func(static_cast<searchCallMessages &>(obj));
      return true;
    case searchChatMembers::ID:
      func(static_cast<searchChatMembers &>(obj));
      return true;
    case searchChatMessages::ID:
      func(static_cast<searchChatMessages &>(obj));
      return true;
    case searchChatRecentLocationMessages::ID:
      func(static_cast<searchChatRecentLocationMessages &>(obj));
      return true;
    case searchChats::ID:
      func(static_cast<searchChats &>(obj));
      return true;
    case searchChatsNearby::ID:
      func(static_cast<searchChatsNearby &>(obj));
      return true;
    case searchChatsOnServer::ID:
      func(static_cast<searchChatsOnServer &>(obj));
      return true;
    case searchContacts::ID:
      func(static_cast<searchContacts &>(obj));
      return true;
    case searchEmojis::ID:
      func(static_cast<searchEmojis &>(obj));
      return true;
    case searchHashtags::ID:
      func(static_cast<searchHashtags &>(obj));
      return true;
    case searchInstalledStickerSets::ID:
      func(static_cast<searchInstalledStickerSets &>(obj));
      return true;
    case searchMessages::ID:
      func(static_cast<searchMessages &>(obj));
      return true;
    case searchPublicChat::ID:
      func(static_cast<searchPublicChat &>(obj));
      return true;
    case searchPublicChats::ID:
      func(static_cast<searchPublicChats &>(obj));
      return true;
    case searchSecretMessages::ID:
      func(static_cast<searchSecretMessages &>(obj));
      return true;
    case searchStickerSet::ID:
      func(static_cast<searchStickerSet &>(obj));
      return true;
    case searchStickerSets::ID:
      func(static_cast<searchStickerSets &>(obj));
      return true;
    case searchStickers::ID:
      func(static_cast<searchStickers &>(obj));
      return true;
    case sendBotStartMessage::ID:
      func(static_cast<sendBotStartMessage &>(obj));
      return true;
    case sendCallDebugInformation::ID:
      func(static_cast<sendCallDebugInformation &>(obj));
      return true;
    case sendCallRating::ID:
      func(static_cast<sendCallRating &>(obj));
      return true;
    case sendCallSignalingData::ID:
      func(static_cast<sendCallSignalingData &>(obj));
      return true;
    case sendChatAction::ID:
      func(static_cast<sendChatAction &>(obj));
      return true;
    case sendChatScreenshotTakenNotification::ID:
      func(static_cast<sendChatScreenshotTakenNotification &>(obj));
      return true;
    case sendChatSetTtlMessage::ID:
      func(static_cast<sendChatSetTtlMessage &>(obj));
      return true;
    case sendCustomRequest::ID:
      func(static_cast<sendCustomRequest &>(obj));
      return true;
    case sendEmailAddressVerificationCode::ID:
      func(static_cast<sendEmailAddressVerificationCode &>(obj));
      return true;
    case sendInlineQueryResultMessage::ID:
      func(static_cast<sendInlineQueryResultMessage &>(obj));
      return true;
    case sendMessage::ID:
      func(static_cast<sendMessage &>(obj));
      return true;
    case sendMessageAlbum::ID:
      func(static_cast<sendMessageAlbum &>(obj));
      return true;
    case sendPassportAuthorizationForm::ID:
      func(static_cast<sendPassportAuthorizationForm &>(obj));
      return true;
    case sendPaymentForm::ID:
      func(static_cast<sendPaymentForm &>(obj));
      return true;
    case sendPhoneNumberConfirmationCode::ID:
      func(static_cast<sendPhoneNumberConfirmationCode &>(obj));
      return true;
    case sendPhoneNumberVerificationCode::ID:
      func(static_cast<sendPhoneNumberVerificationCode &>(obj));
      return true;
    case setAccountTtl::ID:
      func(static_cast<setAccountTtl &>(obj));
      return true;
    case setAlarm::ID:
      func(static_cast<setAlarm &>(obj));
      return true;
    case setAuthenticationPhoneNumber::ID:
      func(static_cast<setAuthenticationPhoneNumber &>(obj));
      return true;
    case setAutoDownloadSettings::ID:
      func(static_cast<setAutoDownloadSettings &>(obj));
      return true;
    case setBackground::ID:
      func(static_cast<setBackground &>(obj));
      return true;
    case setBio::ID:
      func(static_cast<setBio &>(obj));
      return true;
    case setBotUpdatesStatus::ID:
      func(static_cast<setBotUpdatesStatus &>(obj));
      return true;
    case setChatClientData::ID:
      func(static_cast<setChatClientData &>(obj));
      return true;
    case setChatDescription::ID:
      func(static_cast<setChatDescription &>(obj));
      return true;
    case setChatDiscussionGroup::ID:
      func(static_cast<setChatDiscussionGroup &>(obj));
      return true;
    case setChatDraftMessage::ID:
      func(static_cast<setChatDraftMessage &>(obj));
      return true;
    case setChatLocation::ID:
      func(static_cast<setChatLocation &>(obj));
      return true;
    case setChatMemberStatus::ID:
      func(static_cast<setChatMemberStatus &>(obj));
      return true;
    case setChatNotificationSettings::ID:
      func(static_cast<setChatNotificationSettings &>(obj));
      return true;
    case setChatPermissions::ID:
      func(static_cast<setChatPermissions &>(obj));
      return true;
    case setChatPhoto::ID:
      func(static_cast<setChatPhoto &>(obj));
      return true;
    case setChatSlowModeDelay::ID:
      func(static_cast<setChatSlowModeDelay &>(obj));
      return true;
    case setChatTitle::ID:
      func(static_cast<setChatTitle &>(obj));
      return true;
    case setCommands::ID:
      func(static_cast<setCommands &>(obj));
      return true;
    case setCustomLanguagePack::ID:
      func(static_cast<setCustomLanguagePack &>(obj));
      return true;
    case setCustomLanguagePackString::ID:
      func(static_cast<setCustomLanguagePackString &>(obj));
      return true;
    case setDatabaseEncryptionKey::ID:
      func(static_cast<setDatabaseEncryptionKey &>(obj));
      return true;
    case setFileGenerationProgress::ID:
      func(static_cast<setFileGenerationProgress &>(obj));
      return true;
    case setGameScore::ID:
      func(static_cast<setGameScore &>(obj));
      return true;
    case setInlineGameScore::ID:
      func(static_cast<setInlineGameScore &>(obj));
      return true;
    case setLocation::ID:
      func(static_cast<setLocation &>(obj));
      return true;
    case setLogStream::ID:
      func(static_cast<setLogStream &>(obj));
      return true;
    case setLogTagVerbosityLevel::ID:
      func(static_cast<setLogTagVerbosityLevel &>(obj));
      return true;
    case setLogVerbosityLevel::ID:
      func(static_cast<setLogVerbosityLevel &>(obj));
      return true;
    case setName::ID:
      func(static_cast<setName &>(obj));
      return true;
    case setNetworkType::ID:
      func(static_cast<setNetworkType &>(obj));
      return true;
    case setOption::ID:
      func(static_cast<setOption &>(obj));
      return true;
    case setPassportElement::ID:
      func(static_cast<setPassportElement &>(obj));
      return true;
    case setPassportElementErrors::ID:
      func(static_cast<setPassportElementErrors &>(obj));
      return true;
    case setPassword::ID:
      func(static_cast<setPassword &>(obj));
      return true;
    case setPinnedChats::ID:
      func(static_cast<setPinnedChats &>(obj));
      return true;
    case setPollAnswer::ID:
      func(static_cast<setPollAnswer &>(obj));
      return true;
    case setProfilePhoto::ID:
      func(static_cast<setProfilePhoto &>(obj));
      return true;
    case setRecoveryEmailAddress::ID:
      func(static_cast<setRecoveryEmailAddress &>(obj));
      return true;
    case setScopeNotificationSettings::ID:
      func(static_cast<setScopeNotificationSettings &>(obj));
      return true;
    case setStickerPositionInSet::ID:
      func(static_cast<setStickerPositionInSet &>(obj));
      return true;
    case setStickerSetThumbnail::ID:
      func(static_cast<setStickerSetThumbnail &>(obj));
      return true;
    case setSupergroupStickerSet::ID:
      func(static_cast<setSupergroupStickerSet &>(obj));
      return true;
    case setSupergroupUsername::ID:
      func(static_cast<setSupergroupUsername &>(obj));
      return true;
    case setTdlibParameters::ID:
      func(static_cast<setTdlibParameters &>(obj));
      return true;
    case setUserPrivacySettingRules::ID:
      func(static_cast<setUserPrivacySettingRules &>(obj));
      return true;
    case setUsername::ID:
      func(static_cast<setUsername &>(obj));
      return true;
    case sharePhoneNumber::ID:
      func(static_cast<sharePhoneNumber &>(obj));
      return true;
    case stopPoll::ID:
      func(static_cast<stopPoll &>(obj));
      return true;
    case synchronizeLanguagePack::ID:
      func(static_cast<synchronizeLanguagePack &>(obj));
      return true;
    case terminateAllOtherSessions::ID:
      func(static_cast<terminateAllOtherSessions &>(obj));
      return true;
    case terminateSession::ID:
      func(static_cast<terminateSession &>(obj));
      return true;
    case testCallBytes::ID:
      func(static_cast<testCallBytes &>(obj));
      return true;
    case testCallEmpty::ID:
      func(static_cast<testCallEmpty &>(obj));
      return true;
    case testCallString::ID:
      func(static_cast<testCallString &>(obj));
      return true;
    case testCallVectorInt::ID:
      func(static_cast<testCallVectorInt &>(obj));
      return true;
    case testCallVectorIntObject::ID:
      func(static_cast<testCallVectorIntObject &>(obj));
      return true;
    case testCallVectorString::ID:
      func(static_cast<testCallVectorString &>(obj));
      return true;
    case testCallVectorStringObject::ID:
      func(static_cast<testCallVectorStringObject &>(obj));
      return true;
    case testGetDifference::ID:
      func(static_cast<testGetDifference &>(obj));
      return true;
    case testNetwork::ID:
      func(static_cast<testNetwork &>(obj));
      return true;
    case testProxy::ID:
      func(static_cast<testProxy &>(obj));
      return true;
    case testReturnError::ID:
      func(static_cast<testReturnError &>(obj));
      return true;
    case testSquareInt::ID:
      func(static_cast<testSquareInt &>(obj));
      return true;
    case testUseUpdate::ID:
      func(static_cast<testUseUpdate &>(obj));
      return true;
    case toggleChatDefaultDisableNotification::ID:
      func(static_cast<toggleChatDefaultDisableNotification &>(obj));
      return true;
    case toggleChatIsBlocked::ID:
      func(static_cast<toggleChatIsBlocked &>(obj));
      return true;
    case toggleChatIsMarkedAsUnread::ID:
      func(static_cast<toggleChatIsMarkedAsUnread &>(obj));
      return true;
    case toggleChatIsPinned::ID:
      func(static_cast<toggleChatIsPinned &>(obj));
      return true;
    case toggleSupergroupIsAllHistoryAvailable::ID:
      func(static_cast<toggleSupergroupIsAllHistoryAvailable &>(obj));
      return true;
    case toggleSupergroupSignMessages::ID:
      func(static_cast<toggleSupergroupSignMessages &>(obj));
      return true;
    case transferChatOwnership::ID:
      func(static_cast<transferChatOwnership &>(obj));
      return true;
    case unpinChatMessage::ID:
      func(static_cast<unpinChatMessage &>(obj));
      return true;
    case upgradeBasicGroupChatToSupergroupChat::ID:
      func(static_cast<upgradeBasicGroupChatToSupergroupChat &>(obj));
      return true;
    case uploadFile::ID:
      func(static_cast<uploadFile &>(obj));
      return true;
    case uploadStickerFile::ID:
      func(static_cast<uploadStickerFile &>(obj));
      return true;
    case validateOrderInfo::ID:
      func(static_cast<validateOrderInfo &>(obj));
      return true;
    case viewMessages::ID:
      func(static_cast<viewMessages &>(obj));
      return true;
    case viewTrendingStickerSets::ID:
      func(static_cast<viewTrendingStickerSets &>(obj));
      return true;
    case writeGeneratedFilePart::ID:
      func(static_cast<writeGeneratedFilePart &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(AuthenticationCodeType &obj, const T &func) {
  switch (obj.get_id()) {
    case authenticationCodeTypeTelegramMessage::ID:
      func(static_cast<authenticationCodeTypeTelegramMessage &>(obj));
      return true;
    case authenticationCodeTypeSms::ID:
      func(static_cast<authenticationCodeTypeSms &>(obj));
      return true;
    case authenticationCodeTypeCall::ID:
      func(static_cast<authenticationCodeTypeCall &>(obj));
      return true;
    case authenticationCodeTypeFlashCall::ID:
      func(static_cast<authenticationCodeTypeFlashCall &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(AuthorizationState &obj, const T &func) {
  switch (obj.get_id()) {
    case authorizationStateWaitTdlibParameters::ID:
      func(static_cast<authorizationStateWaitTdlibParameters &>(obj));
      return true;
    case authorizationStateWaitEncryptionKey::ID:
      func(static_cast<authorizationStateWaitEncryptionKey &>(obj));
      return true;
    case authorizationStateWaitPhoneNumber::ID:
      func(static_cast<authorizationStateWaitPhoneNumber &>(obj));
      return true;
    case authorizationStateWaitCode::ID:
      func(static_cast<authorizationStateWaitCode &>(obj));
      return true;
    case authorizationStateWaitOtherDeviceConfirmation::ID:
      func(static_cast<authorizationStateWaitOtherDeviceConfirmation &>(obj));
      return true;
    case authorizationStateWaitRegistration::ID:
      func(static_cast<authorizationStateWaitRegistration &>(obj));
      return true;
    case authorizationStateWaitPassword::ID:
      func(static_cast<authorizationStateWaitPassword &>(obj));
      return true;
    case authorizationStateReady::ID:
      func(static_cast<authorizationStateReady &>(obj));
      return true;
    case authorizationStateLoggingOut::ID:
      func(static_cast<authorizationStateLoggingOut &>(obj));
      return true;
    case authorizationStateClosing::ID:
      func(static_cast<authorizationStateClosing &>(obj));
      return true;
    case authorizationStateClosed::ID:
      func(static_cast<authorizationStateClosed &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(BackgroundFill &obj, const T &func) {
  switch (obj.get_id()) {
    case backgroundFillSolid::ID:
      func(static_cast<backgroundFillSolid &>(obj));
      return true;
    case backgroundFillGradient::ID:
      func(static_cast<backgroundFillGradient &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(BackgroundType &obj, const T &func) {
  switch (obj.get_id()) {
    case backgroundTypeWallpaper::ID:
      func(static_cast<backgroundTypeWallpaper &>(obj));
      return true;
    case backgroundTypePattern::ID:
      func(static_cast<backgroundTypePattern &>(obj));
      return true;
    case backgroundTypeFill::ID:
      func(static_cast<backgroundTypeFill &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(CallDiscardReason &obj, const T &func) {
  switch (obj.get_id()) {
    case callDiscardReasonEmpty::ID:
      func(static_cast<callDiscardReasonEmpty &>(obj));
      return true;
    case callDiscardReasonMissed::ID:
      func(static_cast<callDiscardReasonMissed &>(obj));
      return true;
    case callDiscardReasonDeclined::ID:
      func(static_cast<callDiscardReasonDeclined &>(obj));
      return true;
    case callDiscardReasonDisconnected::ID:
      func(static_cast<callDiscardReasonDisconnected &>(obj));
      return true;
    case callDiscardReasonHungUp::ID:
      func(static_cast<callDiscardReasonHungUp &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(CallProblem &obj, const T &func) {
  switch (obj.get_id()) {
    case callProblemEcho::ID:
      func(static_cast<callProblemEcho &>(obj));
      return true;
    case callProblemNoise::ID:
      func(static_cast<callProblemNoise &>(obj));
      return true;
    case callProblemInterruptions::ID:
      func(static_cast<callProblemInterruptions &>(obj));
      return true;
    case callProblemDistortedSpeech::ID:
      func(static_cast<callProblemDistortedSpeech &>(obj));
      return true;
    case callProblemSilentLocal::ID:
      func(static_cast<callProblemSilentLocal &>(obj));
      return true;
    case callProblemSilentRemote::ID:
      func(static_cast<callProblemSilentRemote &>(obj));
      return true;
    case callProblemDropped::ID:
      func(static_cast<callProblemDropped &>(obj));
      return true;
    case callProblemDistortedVideo::ID:
      func(static_cast<callProblemDistortedVideo &>(obj));
      return true;
    case callProblemPixelatedVideo::ID:
      func(static_cast<callProblemPixelatedVideo &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(CallServerType &obj, const T &func) {
  switch (obj.get_id()) {
    case callServerTypeTelegramReflector::ID:
      func(static_cast<callServerTypeTelegramReflector &>(obj));
      return true;
    case callServerTypeWebrtc::ID:
      func(static_cast<callServerTypeWebrtc &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(CallState &obj, const T &func) {
  switch (obj.get_id()) {
    case callStatePending::ID:
      func(static_cast<callStatePending &>(obj));
      return true;
    case callStateExchangingKeys::ID:
      func(static_cast<callStateExchangingKeys &>(obj));
      return true;
    case callStateReady::ID:
      func(static_cast<callStateReady &>(obj));
      return true;
    case callStateHangingUp::ID:
      func(static_cast<callStateHangingUp &>(obj));
      return true;
    case callStateDiscarded::ID:
      func(static_cast<callStateDiscarded &>(obj));
      return true;
    case callStateError::ID:
      func(static_cast<callStateError &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(CallbackQueryPayload &obj, const T &func) {
  switch (obj.get_id()) {
    case callbackQueryPayloadData::ID:
      func(static_cast<callbackQueryPayloadData &>(obj));
      return true;
    case callbackQueryPayloadDataWithPassword::ID:
      func(static_cast<callbackQueryPayloadDataWithPassword &>(obj));
      return true;
    case callbackQueryPayloadGame::ID:
      func(static_cast<callbackQueryPayloadGame &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(CanTransferOwnershipResult &obj, const T &func) {
  switch (obj.get_id()) {
    case canTransferOwnershipResultOk::ID:
      func(static_cast<canTransferOwnershipResultOk &>(obj));
      return true;
    case canTransferOwnershipResultPasswordNeeded::ID:
      func(static_cast<canTransferOwnershipResultPasswordNeeded &>(obj));
      return true;
    case canTransferOwnershipResultPasswordTooFresh::ID:
      func(static_cast<canTransferOwnershipResultPasswordTooFresh &>(obj));
      return true;
    case canTransferOwnershipResultSessionTooFresh::ID:
      func(static_cast<canTransferOwnershipResultSessionTooFresh &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatAction &obj, const T &func) {
  switch (obj.get_id()) {
    case chatActionTyping::ID:
      func(static_cast<chatActionTyping &>(obj));
      return true;
    case chatActionRecordingVideo::ID:
      func(static_cast<chatActionRecordingVideo &>(obj));
      return true;
    case chatActionUploadingVideo::ID:
      func(static_cast<chatActionUploadingVideo &>(obj));
      return true;
    case chatActionRecordingVoiceNote::ID:
      func(static_cast<chatActionRecordingVoiceNote &>(obj));
      return true;
    case chatActionUploadingVoiceNote::ID:
      func(static_cast<chatActionUploadingVoiceNote &>(obj));
      return true;
    case chatActionUploadingPhoto::ID:
      func(static_cast<chatActionUploadingPhoto &>(obj));
      return true;
    case chatActionUploadingDocument::ID:
      func(static_cast<chatActionUploadingDocument &>(obj));
      return true;
    case chatActionChoosingLocation::ID:
      func(static_cast<chatActionChoosingLocation &>(obj));
      return true;
    case chatActionChoosingContact::ID:
      func(static_cast<chatActionChoosingContact &>(obj));
      return true;
    case chatActionStartPlayingGame::ID:
      func(static_cast<chatActionStartPlayingGame &>(obj));
      return true;
    case chatActionRecordingVideoNote::ID:
      func(static_cast<chatActionRecordingVideoNote &>(obj));
      return true;
    case chatActionUploadingVideoNote::ID:
      func(static_cast<chatActionUploadingVideoNote &>(obj));
      return true;
    case chatActionCancel::ID:
      func(static_cast<chatActionCancel &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatActionBar &obj, const T &func) {
  switch (obj.get_id()) {
    case chatActionBarReportSpam::ID:
      func(static_cast<chatActionBarReportSpam &>(obj));
      return true;
    case chatActionBarReportUnrelatedLocation::ID:
      func(static_cast<chatActionBarReportUnrelatedLocation &>(obj));
      return true;
    case chatActionBarReportAddBlock::ID:
      func(static_cast<chatActionBarReportAddBlock &>(obj));
      return true;
    case chatActionBarAddContact::ID:
      func(static_cast<chatActionBarAddContact &>(obj));
      return true;
    case chatActionBarSharePhoneNumber::ID:
      func(static_cast<chatActionBarSharePhoneNumber &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatEventAction &obj, const T &func) {
  switch (obj.get_id()) {
    case chatEventMessageEdited::ID:
      func(static_cast<chatEventMessageEdited &>(obj));
      return true;
    case chatEventMessageDeleted::ID:
      func(static_cast<chatEventMessageDeleted &>(obj));
      return true;
    case chatEventPollStopped::ID:
      func(static_cast<chatEventPollStopped &>(obj));
      return true;
    case chatEventMessagePinned::ID:
      func(static_cast<chatEventMessagePinned &>(obj));
      return true;
    case chatEventMessageUnpinned::ID:
      func(static_cast<chatEventMessageUnpinned &>(obj));
      return true;
    case chatEventMemberJoined::ID:
      func(static_cast<chatEventMemberJoined &>(obj));
      return true;
    case chatEventMemberLeft::ID:
      func(static_cast<chatEventMemberLeft &>(obj));
      return true;
    case chatEventMemberInvited::ID:
      func(static_cast<chatEventMemberInvited &>(obj));
      return true;
    case chatEventMemberPromoted::ID:
      func(static_cast<chatEventMemberPromoted &>(obj));
      return true;
    case chatEventMemberRestricted::ID:
      func(static_cast<chatEventMemberRestricted &>(obj));
      return true;
    case chatEventTitleChanged::ID:
      func(static_cast<chatEventTitleChanged &>(obj));
      return true;
    case chatEventPermissionsChanged::ID:
      func(static_cast<chatEventPermissionsChanged &>(obj));
      return true;
    case chatEventDescriptionChanged::ID:
      func(static_cast<chatEventDescriptionChanged &>(obj));
      return true;
    case chatEventUsernameChanged::ID:
      func(static_cast<chatEventUsernameChanged &>(obj));
      return true;
    case chatEventPhotoChanged::ID:
      func(static_cast<chatEventPhotoChanged &>(obj));
      return true;
    case chatEventInvitesToggled::ID:
      func(static_cast<chatEventInvitesToggled &>(obj));
      return true;
    case chatEventLinkedChatChanged::ID:
      func(static_cast<chatEventLinkedChatChanged &>(obj));
      return true;
    case chatEventSlowModeDelayChanged::ID:
      func(static_cast<chatEventSlowModeDelayChanged &>(obj));
      return true;
    case chatEventSignMessagesToggled::ID:
      func(static_cast<chatEventSignMessagesToggled &>(obj));
      return true;
    case chatEventStickerSetChanged::ID:
      func(static_cast<chatEventStickerSetChanged &>(obj));
      return true;
    case chatEventLocationChanged::ID:
      func(static_cast<chatEventLocationChanged &>(obj));
      return true;
    case chatEventIsAllHistoryAvailableToggled::ID:
      func(static_cast<chatEventIsAllHistoryAvailableToggled &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatList &obj, const T &func) {
  switch (obj.get_id()) {
    case chatListMain::ID:
      func(static_cast<chatListMain &>(obj));
      return true;
    case chatListArchive::ID:
      func(static_cast<chatListArchive &>(obj));
      return true;
    case chatListFilter::ID:
      func(static_cast<chatListFilter &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatMemberStatus &obj, const T &func) {
  switch (obj.get_id()) {
    case chatMemberStatusCreator::ID:
      func(static_cast<chatMemberStatusCreator &>(obj));
      return true;
    case chatMemberStatusAdministrator::ID:
      func(static_cast<chatMemberStatusAdministrator &>(obj));
      return true;
    case chatMemberStatusMember::ID:
      func(static_cast<chatMemberStatusMember &>(obj));
      return true;
    case chatMemberStatusRestricted::ID:
      func(static_cast<chatMemberStatusRestricted &>(obj));
      return true;
    case chatMemberStatusLeft::ID:
      func(static_cast<chatMemberStatusLeft &>(obj));
      return true;
    case chatMemberStatusBanned::ID:
      func(static_cast<chatMemberStatusBanned &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatMembersFilter &obj, const T &func) {
  switch (obj.get_id()) {
    case chatMembersFilterContacts::ID:
      func(static_cast<chatMembersFilterContacts &>(obj));
      return true;
    case chatMembersFilterAdministrators::ID:
      func(static_cast<chatMembersFilterAdministrators &>(obj));
      return true;
    case chatMembersFilterMembers::ID:
      func(static_cast<chatMembersFilterMembers &>(obj));
      return true;
    case chatMembersFilterRestricted::ID:
      func(static_cast<chatMembersFilterRestricted &>(obj));
      return true;
    case chatMembersFilterBanned::ID:
      func(static_cast<chatMembersFilterBanned &>(obj));
      return true;
    case chatMembersFilterBots::ID:
      func(static_cast<chatMembersFilterBots &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatReportReason &obj, const T &func) {
  switch (obj.get_id()) {
    case chatReportReasonSpam::ID:
      func(static_cast<chatReportReasonSpam &>(obj));
      return true;
    case chatReportReasonViolence::ID:
      func(static_cast<chatReportReasonViolence &>(obj));
      return true;
    case chatReportReasonPornography::ID:
      func(static_cast<chatReportReasonPornography &>(obj));
      return true;
    case chatReportReasonChildAbuse::ID:
      func(static_cast<chatReportReasonChildAbuse &>(obj));
      return true;
    case chatReportReasonCopyright::ID:
      func(static_cast<chatReportReasonCopyright &>(obj));
      return true;
    case chatReportReasonUnrelatedLocation::ID:
      func(static_cast<chatReportReasonUnrelatedLocation &>(obj));
      return true;
    case chatReportReasonCustom::ID:
      func(static_cast<chatReportReasonCustom &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatSource &obj, const T &func) {
  switch (obj.get_id()) {
    case chatSourceMtprotoProxy::ID:
      func(static_cast<chatSourceMtprotoProxy &>(obj));
      return true;
    case chatSourcePublicServiceAnnouncement::ID:
      func(static_cast<chatSourcePublicServiceAnnouncement &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatStatistics &obj, const T &func) {
  switch (obj.get_id()) {
    case chatStatisticsSupergroup::ID:
      func(static_cast<chatStatisticsSupergroup &>(obj));
      return true;
    case chatStatisticsChannel::ID:
      func(static_cast<chatStatisticsChannel &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatType &obj, const T &func) {
  switch (obj.get_id()) {
    case chatTypePrivate::ID:
      func(static_cast<chatTypePrivate &>(obj));
      return true;
    case chatTypeBasicGroup::ID:
      func(static_cast<chatTypeBasicGroup &>(obj));
      return true;
    case chatTypeSupergroup::ID:
      func(static_cast<chatTypeSupergroup &>(obj));
      return true;
    case chatTypeSecret::ID:
      func(static_cast<chatTypeSecret &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(CheckChatUsernameResult &obj, const T &func) {
  switch (obj.get_id()) {
    case checkChatUsernameResultOk::ID:
      func(static_cast<checkChatUsernameResultOk &>(obj));
      return true;
    case checkChatUsernameResultUsernameInvalid::ID:
      func(static_cast<checkChatUsernameResultUsernameInvalid &>(obj));
      return true;
    case checkChatUsernameResultUsernameOccupied::ID:
      func(static_cast<checkChatUsernameResultUsernameOccupied &>(obj));
      return true;
    case checkChatUsernameResultPublicChatsTooMuch::ID:
      func(static_cast<checkChatUsernameResultPublicChatsTooMuch &>(obj));
      return true;
    case checkChatUsernameResultPublicGroupsUnavailable::ID:
      func(static_cast<checkChatUsernameResultPublicGroupsUnavailable &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ConnectionState &obj, const T &func) {
  switch (obj.get_id()) {
    case connectionStateWaitingForNetwork::ID:
      func(static_cast<connectionStateWaitingForNetwork &>(obj));
      return true;
    case connectionStateConnectingToProxy::ID:
      func(static_cast<connectionStateConnectingToProxy &>(obj));
      return true;
    case connectionStateConnecting::ID:
      func(static_cast<connectionStateConnecting &>(obj));
      return true;
    case connectionStateUpdating::ID:
      func(static_cast<connectionStateUpdating &>(obj));
      return true;
    case connectionStateReady::ID:
      func(static_cast<connectionStateReady &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(DeviceToken &obj, const T &func) {
  switch (obj.get_id()) {
    case deviceTokenFirebaseCloudMessaging::ID:
      func(static_cast<deviceTokenFirebaseCloudMessaging &>(obj));
      return true;
    case deviceTokenApplePush::ID:
      func(static_cast<deviceTokenApplePush &>(obj));
      return true;
    case deviceTokenApplePushVoIP::ID:
      func(static_cast<deviceTokenApplePushVoIP &>(obj));
      return true;
    case deviceTokenWindowsPush::ID:
      func(static_cast<deviceTokenWindowsPush &>(obj));
      return true;
    case deviceTokenMicrosoftPush::ID:
      func(static_cast<deviceTokenMicrosoftPush &>(obj));
      return true;
    case deviceTokenMicrosoftPushVoIP::ID:
      func(static_cast<deviceTokenMicrosoftPushVoIP &>(obj));
      return true;
    case deviceTokenWebPush::ID:
      func(static_cast<deviceTokenWebPush &>(obj));
      return true;
    case deviceTokenSimplePush::ID:
      func(static_cast<deviceTokenSimplePush &>(obj));
      return true;
    case deviceTokenUbuntuPush::ID:
      func(static_cast<deviceTokenUbuntuPush &>(obj));
      return true;
    case deviceTokenBlackBerryPush::ID:
      func(static_cast<deviceTokenBlackBerryPush &>(obj));
      return true;
    case deviceTokenTizenPush::ID:
      func(static_cast<deviceTokenTizenPush &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(FileType &obj, const T &func) {
  switch (obj.get_id()) {
    case fileTypeNone::ID:
      func(static_cast<fileTypeNone &>(obj));
      return true;
    case fileTypeAnimation::ID:
      func(static_cast<fileTypeAnimation &>(obj));
      return true;
    case fileTypeAudio::ID:
      func(static_cast<fileTypeAudio &>(obj));
      return true;
    case fileTypeDocument::ID:
      func(static_cast<fileTypeDocument &>(obj));
      return true;
    case fileTypePhoto::ID:
      func(static_cast<fileTypePhoto &>(obj));
      return true;
    case fileTypeProfilePhoto::ID:
      func(static_cast<fileTypeProfilePhoto &>(obj));
      return true;
    case fileTypeSecret::ID:
      func(static_cast<fileTypeSecret &>(obj));
      return true;
    case fileTypeSecretThumbnail::ID:
      func(static_cast<fileTypeSecretThumbnail &>(obj));
      return true;
    case fileTypeSecure::ID:
      func(static_cast<fileTypeSecure &>(obj));
      return true;
    case fileTypeSticker::ID:
      func(static_cast<fileTypeSticker &>(obj));
      return true;
    case fileTypeThumbnail::ID:
      func(static_cast<fileTypeThumbnail &>(obj));
      return true;
    case fileTypeUnknown::ID:
      func(static_cast<fileTypeUnknown &>(obj));
      return true;
    case fileTypeVideo::ID:
      func(static_cast<fileTypeVideo &>(obj));
      return true;
    case fileTypeVideoNote::ID:
      func(static_cast<fileTypeVideoNote &>(obj));
      return true;
    case fileTypeVoiceNote::ID:
      func(static_cast<fileTypeVoiceNote &>(obj));
      return true;
    case fileTypeWallpaper::ID:
      func(static_cast<fileTypeWallpaper &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InlineKeyboardButtonType &obj, const T &func) {
  switch (obj.get_id()) {
    case inlineKeyboardButtonTypeUrl::ID:
      func(static_cast<inlineKeyboardButtonTypeUrl &>(obj));
      return true;
    case inlineKeyboardButtonTypeLoginUrl::ID:
      func(static_cast<inlineKeyboardButtonTypeLoginUrl &>(obj));
      return true;
    case inlineKeyboardButtonTypeCallback::ID:
      func(static_cast<inlineKeyboardButtonTypeCallback &>(obj));
      return true;
    case inlineKeyboardButtonTypeCallbackWithPassword::ID:
      func(static_cast<inlineKeyboardButtonTypeCallbackWithPassword &>(obj));
      return true;
    case inlineKeyboardButtonTypeCallbackGame::ID:
      func(static_cast<inlineKeyboardButtonTypeCallbackGame &>(obj));
      return true;
    case inlineKeyboardButtonTypeSwitchInline::ID:
      func(static_cast<inlineKeyboardButtonTypeSwitchInline &>(obj));
      return true;
    case inlineKeyboardButtonTypeBuy::ID:
      func(static_cast<inlineKeyboardButtonTypeBuy &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InlineQueryResult &obj, const T &func) {
  switch (obj.get_id()) {
    case inlineQueryResultArticle::ID:
      func(static_cast<inlineQueryResultArticle &>(obj));
      return true;
    case inlineQueryResultContact::ID:
      func(static_cast<inlineQueryResultContact &>(obj));
      return true;
    case inlineQueryResultLocation::ID:
      func(static_cast<inlineQueryResultLocation &>(obj));
      return true;
    case inlineQueryResultVenue::ID:
      func(static_cast<inlineQueryResultVenue &>(obj));
      return true;
    case inlineQueryResultGame::ID:
      func(static_cast<inlineQueryResultGame &>(obj));
      return true;
    case inlineQueryResultAnimation::ID:
      func(static_cast<inlineQueryResultAnimation &>(obj));
      return true;
    case inlineQueryResultAudio::ID:
      func(static_cast<inlineQueryResultAudio &>(obj));
      return true;
    case inlineQueryResultDocument::ID:
      func(static_cast<inlineQueryResultDocument &>(obj));
      return true;
    case inlineQueryResultPhoto::ID:
      func(static_cast<inlineQueryResultPhoto &>(obj));
      return true;
    case inlineQueryResultSticker::ID:
      func(static_cast<inlineQueryResultSticker &>(obj));
      return true;
    case inlineQueryResultVideo::ID:
      func(static_cast<inlineQueryResultVideo &>(obj));
      return true;
    case inlineQueryResultVoiceNote::ID:
      func(static_cast<inlineQueryResultVoiceNote &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputBackground &obj, const T &func) {
  switch (obj.get_id()) {
    case inputBackgroundLocal::ID:
      func(static_cast<inputBackgroundLocal &>(obj));
      return true;
    case inputBackgroundRemote::ID:
      func(static_cast<inputBackgroundRemote &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputChatPhoto &obj, const T &func) {
  switch (obj.get_id()) {
    case inputChatPhotoPrevious::ID:
      func(static_cast<inputChatPhotoPrevious &>(obj));
      return true;
    case inputChatPhotoStatic::ID:
      func(static_cast<inputChatPhotoStatic &>(obj));
      return true;
    case inputChatPhotoAnimation::ID:
      func(static_cast<inputChatPhotoAnimation &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputCredentials &obj, const T &func) {
  switch (obj.get_id()) {
    case inputCredentialsSaved::ID:
      func(static_cast<inputCredentialsSaved &>(obj));
      return true;
    case inputCredentialsNew::ID:
      func(static_cast<inputCredentialsNew &>(obj));
      return true;
    case inputCredentialsAndroidPay::ID:
      func(static_cast<inputCredentialsAndroidPay &>(obj));
      return true;
    case inputCredentialsApplePay::ID:
      func(static_cast<inputCredentialsApplePay &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputFile &obj, const T &func) {
  switch (obj.get_id()) {
    case inputFileId::ID:
      func(static_cast<inputFileId &>(obj));
      return true;
    case inputFileRemote::ID:
      func(static_cast<inputFileRemote &>(obj));
      return true;
    case inputFileLocal::ID:
      func(static_cast<inputFileLocal &>(obj));
      return true;
    case inputFileGenerated::ID:
      func(static_cast<inputFileGenerated &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputInlineQueryResult &obj, const T &func) {
  switch (obj.get_id()) {
    case inputInlineQueryResultAnimation::ID:
      func(static_cast<inputInlineQueryResultAnimation &>(obj));
      return true;
    case inputInlineQueryResultArticle::ID:
      func(static_cast<inputInlineQueryResultArticle &>(obj));
      return true;
    case inputInlineQueryResultAudio::ID:
      func(static_cast<inputInlineQueryResultAudio &>(obj));
      return true;
    case inputInlineQueryResultContact::ID:
      func(static_cast<inputInlineQueryResultContact &>(obj));
      return true;
    case inputInlineQueryResultDocument::ID:
      func(static_cast<inputInlineQueryResultDocument &>(obj));
      return true;
    case inputInlineQueryResultGame::ID:
      func(static_cast<inputInlineQueryResultGame &>(obj));
      return true;
    case inputInlineQueryResultLocation::ID:
      func(static_cast<inputInlineQueryResultLocation &>(obj));
      return true;
    case inputInlineQueryResultPhoto::ID:
      func(static_cast<inputInlineQueryResultPhoto &>(obj));
      return true;
    case inputInlineQueryResultSticker::ID:
      func(static_cast<inputInlineQueryResultSticker &>(obj));
      return true;
    case inputInlineQueryResultVenue::ID:
      func(static_cast<inputInlineQueryResultVenue &>(obj));
      return true;
    case inputInlineQueryResultVideo::ID:
      func(static_cast<inputInlineQueryResultVideo &>(obj));
      return true;
    case inputInlineQueryResultVoiceNote::ID:
      func(static_cast<inputInlineQueryResultVoiceNote &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputMessageContent &obj, const T &func) {
  switch (obj.get_id()) {
    case inputMessageText::ID:
      func(static_cast<inputMessageText &>(obj));
      return true;
    case inputMessageAnimation::ID:
      func(static_cast<inputMessageAnimation &>(obj));
      return true;
    case inputMessageAudio::ID:
      func(static_cast<inputMessageAudio &>(obj));
      return true;
    case inputMessageDocument::ID:
      func(static_cast<inputMessageDocument &>(obj));
      return true;
    case inputMessagePhoto::ID:
      func(static_cast<inputMessagePhoto &>(obj));
      return true;
    case inputMessageSticker::ID:
      func(static_cast<inputMessageSticker &>(obj));
      return true;
    case inputMessageVideo::ID:
      func(static_cast<inputMessageVideo &>(obj));
      return true;
    case inputMessageVideoNote::ID:
      func(static_cast<inputMessageVideoNote &>(obj));
      return true;
    case inputMessageVoiceNote::ID:
      func(static_cast<inputMessageVoiceNote &>(obj));
      return true;
    case inputMessageLocation::ID:
      func(static_cast<inputMessageLocation &>(obj));
      return true;
    case inputMessageVenue::ID:
      func(static_cast<inputMessageVenue &>(obj));
      return true;
    case inputMessageContact::ID:
      func(static_cast<inputMessageContact &>(obj));
      return true;
    case inputMessageDice::ID:
      func(static_cast<inputMessageDice &>(obj));
      return true;
    case inputMessageGame::ID:
      func(static_cast<inputMessageGame &>(obj));
      return true;
    case inputMessageInvoice::ID:
      func(static_cast<inputMessageInvoice &>(obj));
      return true;
    case inputMessagePoll::ID:
      func(static_cast<inputMessagePoll &>(obj));
      return true;
    case inputMessageForwarded::ID:
      func(static_cast<inputMessageForwarded &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputPassportElement &obj, const T &func) {
  switch (obj.get_id()) {
    case inputPassportElementPersonalDetails::ID:
      func(static_cast<inputPassportElementPersonalDetails &>(obj));
      return true;
    case inputPassportElementPassport::ID:
      func(static_cast<inputPassportElementPassport &>(obj));
      return true;
    case inputPassportElementDriverLicense::ID:
      func(static_cast<inputPassportElementDriverLicense &>(obj));
      return true;
    case inputPassportElementIdentityCard::ID:
      func(static_cast<inputPassportElementIdentityCard &>(obj));
      return true;
    case inputPassportElementInternalPassport::ID:
      func(static_cast<inputPassportElementInternalPassport &>(obj));
      return true;
    case inputPassportElementAddress::ID:
      func(static_cast<inputPassportElementAddress &>(obj));
      return true;
    case inputPassportElementUtilityBill::ID:
      func(static_cast<inputPassportElementUtilityBill &>(obj));
      return true;
    case inputPassportElementBankStatement::ID:
      func(static_cast<inputPassportElementBankStatement &>(obj));
      return true;
    case inputPassportElementRentalAgreement::ID:
      func(static_cast<inputPassportElementRentalAgreement &>(obj));
      return true;
    case inputPassportElementPassportRegistration::ID:
      func(static_cast<inputPassportElementPassportRegistration &>(obj));
      return true;
    case inputPassportElementTemporaryRegistration::ID:
      func(static_cast<inputPassportElementTemporaryRegistration &>(obj));
      return true;
    case inputPassportElementPhoneNumber::ID:
      func(static_cast<inputPassportElementPhoneNumber &>(obj));
      return true;
    case inputPassportElementEmailAddress::ID:
      func(static_cast<inputPassportElementEmailAddress &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputPassportElementErrorSource &obj, const T &func) {
  switch (obj.get_id()) {
    case inputPassportElementErrorSourceUnspecified::ID:
      func(static_cast<inputPassportElementErrorSourceUnspecified &>(obj));
      return true;
    case inputPassportElementErrorSourceDataField::ID:
      func(static_cast<inputPassportElementErrorSourceDataField &>(obj));
      return true;
    case inputPassportElementErrorSourceFrontSide::ID:
      func(static_cast<inputPassportElementErrorSourceFrontSide &>(obj));
      return true;
    case inputPassportElementErrorSourceReverseSide::ID:
      func(static_cast<inputPassportElementErrorSourceReverseSide &>(obj));
      return true;
    case inputPassportElementErrorSourceSelfie::ID:
      func(static_cast<inputPassportElementErrorSourceSelfie &>(obj));
      return true;
    case inputPassportElementErrorSourceTranslationFile::ID:
      func(static_cast<inputPassportElementErrorSourceTranslationFile &>(obj));
      return true;
    case inputPassportElementErrorSourceTranslationFiles::ID:
      func(static_cast<inputPassportElementErrorSourceTranslationFiles &>(obj));
      return true;
    case inputPassportElementErrorSourceFile::ID:
      func(static_cast<inputPassportElementErrorSourceFile &>(obj));
      return true;
    case inputPassportElementErrorSourceFiles::ID:
      func(static_cast<inputPassportElementErrorSourceFiles &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputSticker &obj, const T &func) {
  switch (obj.get_id()) {
    case inputStickerStatic::ID:
      func(static_cast<inputStickerStatic &>(obj));
      return true;
    case inputStickerAnimated::ID:
      func(static_cast<inputStickerAnimated &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(JsonValue &obj, const T &func) {
  switch (obj.get_id()) {
    case jsonValueNull::ID:
      func(static_cast<jsonValueNull &>(obj));
      return true;
    case jsonValueBoolean::ID:
      func(static_cast<jsonValueBoolean &>(obj));
      return true;
    case jsonValueNumber::ID:
      func(static_cast<jsonValueNumber &>(obj));
      return true;
    case jsonValueString::ID:
      func(static_cast<jsonValueString &>(obj));
      return true;
    case jsonValueArray::ID:
      func(static_cast<jsonValueArray &>(obj));
      return true;
    case jsonValueObject::ID:
      func(static_cast<jsonValueObject &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(KeyboardButtonType &obj, const T &func) {
  switch (obj.get_id()) {
    case keyboardButtonTypeText::ID:
      func(static_cast<keyboardButtonTypeText &>(obj));
      return true;
    case keyboardButtonTypeRequestPhoneNumber::ID:
      func(static_cast<keyboardButtonTypeRequestPhoneNumber &>(obj));
      return true;
    case keyboardButtonTypeRequestLocation::ID:
      func(static_cast<keyboardButtonTypeRequestLocation &>(obj));
      return true;
    case keyboardButtonTypeRequestPoll::ID:
      func(static_cast<keyboardButtonTypeRequestPoll &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(LanguagePackStringValue &obj, const T &func) {
  switch (obj.get_id()) {
    case languagePackStringValueOrdinary::ID:
      func(static_cast<languagePackStringValueOrdinary &>(obj));
      return true;
    case languagePackStringValuePluralized::ID:
      func(static_cast<languagePackStringValuePluralized &>(obj));
      return true;
    case languagePackStringValueDeleted::ID:
      func(static_cast<languagePackStringValueDeleted &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(LogStream &obj, const T &func) {
  switch (obj.get_id()) {
    case logStreamDefault::ID:
      func(static_cast<logStreamDefault &>(obj));
      return true;
    case logStreamFile::ID:
      func(static_cast<logStreamFile &>(obj));
      return true;
    case logStreamEmpty::ID:
      func(static_cast<logStreamEmpty &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(LoginUrlInfo &obj, const T &func) {
  switch (obj.get_id()) {
    case loginUrlInfoOpen::ID:
      func(static_cast<loginUrlInfoOpen &>(obj));
      return true;
    case loginUrlInfoRequestConfirmation::ID:
      func(static_cast<loginUrlInfoRequestConfirmation &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(MaskPoint &obj, const T &func) {
  switch (obj.get_id()) {
    case maskPointForehead::ID:
      func(static_cast<maskPointForehead &>(obj));
      return true;
    case maskPointEyes::ID:
      func(static_cast<maskPointEyes &>(obj));
      return true;
    case maskPointMouth::ID:
      func(static_cast<maskPointMouth &>(obj));
      return true;
    case maskPointChin::ID:
      func(static_cast<maskPointChin &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(MessageContent &obj, const T &func) {
  switch (obj.get_id()) {
    case messageText::ID:
      func(static_cast<messageText &>(obj));
      return true;
    case messageAnimation::ID:
      func(static_cast<messageAnimation &>(obj));
      return true;
    case messageAudio::ID:
      func(static_cast<messageAudio &>(obj));
      return true;
    case messageDocument::ID:
      func(static_cast<messageDocument &>(obj));
      return true;
    case messagePhoto::ID:
      func(static_cast<messagePhoto &>(obj));
      return true;
    case messageExpiredPhoto::ID:
      func(static_cast<messageExpiredPhoto &>(obj));
      return true;
    case messageSticker::ID:
      func(static_cast<messageSticker &>(obj));
      return true;
    case messageVideo::ID:
      func(static_cast<messageVideo &>(obj));
      return true;
    case messageExpiredVideo::ID:
      func(static_cast<messageExpiredVideo &>(obj));
      return true;
    case messageVideoNote::ID:
      func(static_cast<messageVideoNote &>(obj));
      return true;
    case messageVoiceNote::ID:
      func(static_cast<messageVoiceNote &>(obj));
      return true;
    case messageLocation::ID:
      func(static_cast<messageLocation &>(obj));
      return true;
    case messageVenue::ID:
      func(static_cast<messageVenue &>(obj));
      return true;
    case messageContact::ID:
      func(static_cast<messageContact &>(obj));
      return true;
    case messageDice::ID:
      func(static_cast<messageDice &>(obj));
      return true;
    case messageGame::ID:
      func(static_cast<messageGame &>(obj));
      return true;
    case messagePoll::ID:
      func(static_cast<messagePoll &>(obj));
      return true;
    case messageInvoice::ID:
      func(static_cast<messageInvoice &>(obj));
      return true;
    case messageCall::ID:
      func(static_cast<messageCall &>(obj));
      return true;
    case messageBasicGroupChatCreate::ID:
      func(static_cast<messageBasicGroupChatCreate &>(obj));
      return true;
    case messageSupergroupChatCreate::ID:
      func(static_cast<messageSupergroupChatCreate &>(obj));
      return true;
    case messageChatChangeTitle::ID:
      func(static_cast<messageChatChangeTitle &>(obj));
      return true;
    case messageChatChangePhoto::ID:
      func(static_cast<messageChatChangePhoto &>(obj));
      return true;
    case messageChatDeletePhoto::ID:
      func(static_cast<messageChatDeletePhoto &>(obj));
      return true;
    case messageChatAddMembers::ID:
      func(static_cast<messageChatAddMembers &>(obj));
      return true;
    case messageChatJoinByLink::ID:
      func(static_cast<messageChatJoinByLink &>(obj));
      return true;
    case messageChatDeleteMember::ID:
      func(static_cast<messageChatDeleteMember &>(obj));
      return true;
    case messageChatUpgradeTo::ID:
      func(static_cast<messageChatUpgradeTo &>(obj));
      return true;
    case messageChatUpgradeFrom::ID:
      func(static_cast<messageChatUpgradeFrom &>(obj));
      return true;
    case messagePinMessage::ID:
      func(static_cast<messagePinMessage &>(obj));
      return true;
    case messageScreenshotTaken::ID:
      func(static_cast<messageScreenshotTaken &>(obj));
      return true;
    case messageChatSetTtl::ID:
      func(static_cast<messageChatSetTtl &>(obj));
      return true;
    case messageCustomServiceAction::ID:
      func(static_cast<messageCustomServiceAction &>(obj));
      return true;
    case messageGameScore::ID:
      func(static_cast<messageGameScore &>(obj));
      return true;
    case messagePaymentSuccessful::ID:
      func(static_cast<messagePaymentSuccessful &>(obj));
      return true;
    case messagePaymentSuccessfulBot::ID:
      func(static_cast<messagePaymentSuccessfulBot &>(obj));
      return true;
    case messageContactRegistered::ID:
      func(static_cast<messageContactRegistered &>(obj));
      return true;
    case messageWebsiteConnected::ID:
      func(static_cast<messageWebsiteConnected &>(obj));
      return true;
    case messagePassportDataSent::ID:
      func(static_cast<messagePassportDataSent &>(obj));
      return true;
    case messagePassportDataReceived::ID:
      func(static_cast<messagePassportDataReceived &>(obj));
      return true;
    case messageUnsupported::ID:
      func(static_cast<messageUnsupported &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(MessageForwardOrigin &obj, const T &func) {
  switch (obj.get_id()) {
    case messageForwardOriginUser::ID:
      func(static_cast<messageForwardOriginUser &>(obj));
      return true;
    case messageForwardOriginChat::ID:
      func(static_cast<messageForwardOriginChat &>(obj));
      return true;
    case messageForwardOriginHiddenUser::ID:
      func(static_cast<messageForwardOriginHiddenUser &>(obj));
      return true;
    case messageForwardOriginChannel::ID:
      func(static_cast<messageForwardOriginChannel &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(MessageSchedulingState &obj, const T &func) {
  switch (obj.get_id()) {
    case messageSchedulingStateSendAtDate::ID:
      func(static_cast<messageSchedulingStateSendAtDate &>(obj));
      return true;
    case messageSchedulingStateSendWhenOnline::ID:
      func(static_cast<messageSchedulingStateSendWhenOnline &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(MessageSendingState &obj, const T &func) {
  switch (obj.get_id()) {
    case messageSendingStatePending::ID:
      func(static_cast<messageSendingStatePending &>(obj));
      return true;
    case messageSendingStateFailed::ID:
      func(static_cast<messageSendingStateFailed &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(NetworkStatisticsEntry &obj, const T &func) {
  switch (obj.get_id()) {
    case networkStatisticsEntryFile::ID:
      func(static_cast<networkStatisticsEntryFile &>(obj));
      return true;
    case networkStatisticsEntryCall::ID:
      func(static_cast<networkStatisticsEntryCall &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(NetworkType &obj, const T &func) {
  switch (obj.get_id()) {
    case networkTypeNone::ID:
      func(static_cast<networkTypeNone &>(obj));
      return true;
    case networkTypeMobile::ID:
      func(static_cast<networkTypeMobile &>(obj));
      return true;
    case networkTypeMobileRoaming::ID:
      func(static_cast<networkTypeMobileRoaming &>(obj));
      return true;
    case networkTypeWiFi::ID:
      func(static_cast<networkTypeWiFi &>(obj));
      return true;
    case networkTypeOther::ID:
      func(static_cast<networkTypeOther &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(NotificationGroupType &obj, const T &func) {
  switch (obj.get_id()) {
    case notificationGroupTypeMessages::ID:
      func(static_cast<notificationGroupTypeMessages &>(obj));
      return true;
    case notificationGroupTypeMentions::ID:
      func(static_cast<notificationGroupTypeMentions &>(obj));
      return true;
    case notificationGroupTypeSecretChat::ID:
      func(static_cast<notificationGroupTypeSecretChat &>(obj));
      return true;
    case notificationGroupTypeCalls::ID:
      func(static_cast<notificationGroupTypeCalls &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(NotificationSettingsScope &obj, const T &func) {
  switch (obj.get_id()) {
    case notificationSettingsScopePrivateChats::ID:
      func(static_cast<notificationSettingsScopePrivateChats &>(obj));
      return true;
    case notificationSettingsScopeGroupChats::ID:
      func(static_cast<notificationSettingsScopeGroupChats &>(obj));
      return true;
    case notificationSettingsScopeChannelChats::ID:
      func(static_cast<notificationSettingsScopeChannelChats &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(NotificationType &obj, const T &func) {
  switch (obj.get_id()) {
    case notificationTypeNewMessage::ID:
      func(static_cast<notificationTypeNewMessage &>(obj));
      return true;
    case notificationTypeNewSecretChat::ID:
      func(static_cast<notificationTypeNewSecretChat &>(obj));
      return true;
    case notificationTypeNewCall::ID:
      func(static_cast<notificationTypeNewCall &>(obj));
      return true;
    case notificationTypeNewPushMessage::ID:
      func(static_cast<notificationTypeNewPushMessage &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(OptionValue &obj, const T &func) {
  switch (obj.get_id()) {
    case optionValueBoolean::ID:
      func(static_cast<optionValueBoolean &>(obj));
      return true;
    case optionValueEmpty::ID:
      func(static_cast<optionValueEmpty &>(obj));
      return true;
    case optionValueInteger::ID:
      func(static_cast<optionValueInteger &>(obj));
      return true;
    case optionValueString::ID:
      func(static_cast<optionValueString &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PageBlock &obj, const T &func) {
  switch (obj.get_id()) {
    case pageBlockTitle::ID:
      func(static_cast<pageBlockTitle &>(obj));
      return true;
    case pageBlockSubtitle::ID:
      func(static_cast<pageBlockSubtitle &>(obj));
      return true;
    case pageBlockAuthorDate::ID:
      func(static_cast<pageBlockAuthorDate &>(obj));
      return true;
    case pageBlockHeader::ID:
      func(static_cast<pageBlockHeader &>(obj));
      return true;
    case pageBlockSubheader::ID:
      func(static_cast<pageBlockSubheader &>(obj));
      return true;
    case pageBlockKicker::ID:
      func(static_cast<pageBlockKicker &>(obj));
      return true;
    case pageBlockParagraph::ID:
      func(static_cast<pageBlockParagraph &>(obj));
      return true;
    case pageBlockPreformatted::ID:
      func(static_cast<pageBlockPreformatted &>(obj));
      return true;
    case pageBlockFooter::ID:
      func(static_cast<pageBlockFooter &>(obj));
      return true;
    case pageBlockDivider::ID:
      func(static_cast<pageBlockDivider &>(obj));
      return true;
    case pageBlockAnchor::ID:
      func(static_cast<pageBlockAnchor &>(obj));
      return true;
    case pageBlockList::ID:
      func(static_cast<pageBlockList &>(obj));
      return true;
    case pageBlockBlockQuote::ID:
      func(static_cast<pageBlockBlockQuote &>(obj));
      return true;
    case pageBlockPullQuote::ID:
      func(static_cast<pageBlockPullQuote &>(obj));
      return true;
    case pageBlockAnimation::ID:
      func(static_cast<pageBlockAnimation &>(obj));
      return true;
    case pageBlockAudio::ID:
      func(static_cast<pageBlockAudio &>(obj));
      return true;
    case pageBlockPhoto::ID:
      func(static_cast<pageBlockPhoto &>(obj));
      return true;
    case pageBlockVideo::ID:
      func(static_cast<pageBlockVideo &>(obj));
      return true;
    case pageBlockVoiceNote::ID:
      func(static_cast<pageBlockVoiceNote &>(obj));
      return true;
    case pageBlockCover::ID:
      func(static_cast<pageBlockCover &>(obj));
      return true;
    case pageBlockEmbedded::ID:
      func(static_cast<pageBlockEmbedded &>(obj));
      return true;
    case pageBlockEmbeddedPost::ID:
      func(static_cast<pageBlockEmbeddedPost &>(obj));
      return true;
    case pageBlockCollage::ID:
      func(static_cast<pageBlockCollage &>(obj));
      return true;
    case pageBlockSlideshow::ID:
      func(static_cast<pageBlockSlideshow &>(obj));
      return true;
    case pageBlockChatLink::ID:
      func(static_cast<pageBlockChatLink &>(obj));
      return true;
    case pageBlockTable::ID:
      func(static_cast<pageBlockTable &>(obj));
      return true;
    case pageBlockDetails::ID:
      func(static_cast<pageBlockDetails &>(obj));
      return true;
    case pageBlockRelatedArticles::ID:
      func(static_cast<pageBlockRelatedArticles &>(obj));
      return true;
    case pageBlockMap::ID:
      func(static_cast<pageBlockMap &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PageBlockHorizontalAlignment &obj, const T &func) {
  switch (obj.get_id()) {
    case pageBlockHorizontalAlignmentLeft::ID:
      func(static_cast<pageBlockHorizontalAlignmentLeft &>(obj));
      return true;
    case pageBlockHorizontalAlignmentCenter::ID:
      func(static_cast<pageBlockHorizontalAlignmentCenter &>(obj));
      return true;
    case pageBlockHorizontalAlignmentRight::ID:
      func(static_cast<pageBlockHorizontalAlignmentRight &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PageBlockVerticalAlignment &obj, const T &func) {
  switch (obj.get_id()) {
    case pageBlockVerticalAlignmentTop::ID:
      func(static_cast<pageBlockVerticalAlignmentTop &>(obj));
      return true;
    case pageBlockVerticalAlignmentMiddle::ID:
      func(static_cast<pageBlockVerticalAlignmentMiddle &>(obj));
      return true;
    case pageBlockVerticalAlignmentBottom::ID:
      func(static_cast<pageBlockVerticalAlignmentBottom &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PassportElement &obj, const T &func) {
  switch (obj.get_id()) {
    case passportElementPersonalDetails::ID:
      func(static_cast<passportElementPersonalDetails &>(obj));
      return true;
    case passportElementPassport::ID:
      func(static_cast<passportElementPassport &>(obj));
      return true;
    case passportElementDriverLicense::ID:
      func(static_cast<passportElementDriverLicense &>(obj));
      return true;
    case passportElementIdentityCard::ID:
      func(static_cast<passportElementIdentityCard &>(obj));
      return true;
    case passportElementInternalPassport::ID:
      func(static_cast<passportElementInternalPassport &>(obj));
      return true;
    case passportElementAddress::ID:
      func(static_cast<passportElementAddress &>(obj));
      return true;
    case passportElementUtilityBill::ID:
      func(static_cast<passportElementUtilityBill &>(obj));
      return true;
    case passportElementBankStatement::ID:
      func(static_cast<passportElementBankStatement &>(obj));
      return true;
    case passportElementRentalAgreement::ID:
      func(static_cast<passportElementRentalAgreement &>(obj));
      return true;
    case passportElementPassportRegistration::ID:
      func(static_cast<passportElementPassportRegistration &>(obj));
      return true;
    case passportElementTemporaryRegistration::ID:
      func(static_cast<passportElementTemporaryRegistration &>(obj));
      return true;
    case passportElementPhoneNumber::ID:
      func(static_cast<passportElementPhoneNumber &>(obj));
      return true;
    case passportElementEmailAddress::ID:
      func(static_cast<passportElementEmailAddress &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PassportElementErrorSource &obj, const T &func) {
  switch (obj.get_id()) {
    case passportElementErrorSourceUnspecified::ID:
      func(static_cast<passportElementErrorSourceUnspecified &>(obj));
      return true;
    case passportElementErrorSourceDataField::ID:
      func(static_cast<passportElementErrorSourceDataField &>(obj));
      return true;
    case passportElementErrorSourceFrontSide::ID:
      func(static_cast<passportElementErrorSourceFrontSide &>(obj));
      return true;
    case passportElementErrorSourceReverseSide::ID:
      func(static_cast<passportElementErrorSourceReverseSide &>(obj));
      return true;
    case passportElementErrorSourceSelfie::ID:
      func(static_cast<passportElementErrorSourceSelfie &>(obj));
      return true;
    case passportElementErrorSourceTranslationFile::ID:
      func(static_cast<passportElementErrorSourceTranslationFile &>(obj));
      return true;
    case passportElementErrorSourceTranslationFiles::ID:
      func(static_cast<passportElementErrorSourceTranslationFiles &>(obj));
      return true;
    case passportElementErrorSourceFile::ID:
      func(static_cast<passportElementErrorSourceFile &>(obj));
      return true;
    case passportElementErrorSourceFiles::ID:
      func(static_cast<passportElementErrorSourceFiles &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PassportElementType &obj, const T &func) {
  switch (obj.get_id()) {
    case passportElementTypePersonalDetails::ID:
      func(static_cast<passportElementTypePersonalDetails &>(obj));
      return true;
    case passportElementTypePassport::ID:
      func(static_cast<passportElementTypePassport &>(obj));
      return true;
    case passportElementTypeDriverLicense::ID:
      func(static_cast<passportElementTypeDriverLicense &>(obj));
      return true;
    case passportElementTypeIdentityCard::ID:
      func(static_cast<passportElementTypeIdentityCard &>(obj));
      return true;
    case passportElementTypeInternalPassport::ID:
      func(static_cast<passportElementTypeInternalPassport &>(obj));
      return true;
    case passportElementTypeAddress::ID:
      func(static_cast<passportElementTypeAddress &>(obj));
      return true;
    case passportElementTypeUtilityBill::ID:
      func(static_cast<passportElementTypeUtilityBill &>(obj));
      return true;
    case passportElementTypeBankStatement::ID:
      func(static_cast<passportElementTypeBankStatement &>(obj));
      return true;
    case passportElementTypeRentalAgreement::ID:
      func(static_cast<passportElementTypeRentalAgreement &>(obj));
      return true;
    case passportElementTypePassportRegistration::ID:
      func(static_cast<passportElementTypePassportRegistration &>(obj));
      return true;
    case passportElementTypeTemporaryRegistration::ID:
      func(static_cast<passportElementTypeTemporaryRegistration &>(obj));
      return true;
    case passportElementTypePhoneNumber::ID:
      func(static_cast<passportElementTypePhoneNumber &>(obj));
      return true;
    case passportElementTypeEmailAddress::ID:
      func(static_cast<passportElementTypeEmailAddress &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PollType &obj, const T &func) {
  switch (obj.get_id()) {
    case pollTypeRegular::ID:
      func(static_cast<pollTypeRegular &>(obj));
      return true;
    case pollTypeQuiz::ID:
      func(static_cast<pollTypeQuiz &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ProxyType &obj, const T &func) {
  switch (obj.get_id()) {
    case proxyTypeSocks5::ID:
      func(static_cast<proxyTypeSocks5 &>(obj));
      return true;
    case proxyTypeHttp::ID:
      func(static_cast<proxyTypeHttp &>(obj));
      return true;
    case proxyTypeMtproto::ID:
      func(static_cast<proxyTypeMtproto &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PublicChatType &obj, const T &func) {
  switch (obj.get_id()) {
    case publicChatTypeHasUsername::ID:
      func(static_cast<publicChatTypeHasUsername &>(obj));
      return true;
    case publicChatTypeIsLocationBased::ID:
      func(static_cast<publicChatTypeIsLocationBased &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PushMessageContent &obj, const T &func) {
  switch (obj.get_id()) {
    case pushMessageContentHidden::ID:
      func(static_cast<pushMessageContentHidden &>(obj));
      return true;
    case pushMessageContentAnimation::ID:
      func(static_cast<pushMessageContentAnimation &>(obj));
      return true;
    case pushMessageContentAudio::ID:
      func(static_cast<pushMessageContentAudio &>(obj));
      return true;
    case pushMessageContentContact::ID:
      func(static_cast<pushMessageContentContact &>(obj));
      return true;
    case pushMessageContentContactRegistered::ID:
      func(static_cast<pushMessageContentContactRegistered &>(obj));
      return true;
    case pushMessageContentDocument::ID:
      func(static_cast<pushMessageContentDocument &>(obj));
      return true;
    case pushMessageContentGame::ID:
      func(static_cast<pushMessageContentGame &>(obj));
      return true;
    case pushMessageContentGameScore::ID:
      func(static_cast<pushMessageContentGameScore &>(obj));
      return true;
    case pushMessageContentInvoice::ID:
      func(static_cast<pushMessageContentInvoice &>(obj));
      return true;
    case pushMessageContentLocation::ID:
      func(static_cast<pushMessageContentLocation &>(obj));
      return true;
    case pushMessageContentPhoto::ID:
      func(static_cast<pushMessageContentPhoto &>(obj));
      return true;
    case pushMessageContentPoll::ID:
      func(static_cast<pushMessageContentPoll &>(obj));
      return true;
    case pushMessageContentScreenshotTaken::ID:
      func(static_cast<pushMessageContentScreenshotTaken &>(obj));
      return true;
    case pushMessageContentSticker::ID:
      func(static_cast<pushMessageContentSticker &>(obj));
      return true;
    case pushMessageContentText::ID:
      func(static_cast<pushMessageContentText &>(obj));
      return true;
    case pushMessageContentVideo::ID:
      func(static_cast<pushMessageContentVideo &>(obj));
      return true;
    case pushMessageContentVideoNote::ID:
      func(static_cast<pushMessageContentVideoNote &>(obj));
      return true;
    case pushMessageContentVoiceNote::ID:
      func(static_cast<pushMessageContentVoiceNote &>(obj));
      return true;
    case pushMessageContentBasicGroupChatCreate::ID:
      func(static_cast<pushMessageContentBasicGroupChatCreate &>(obj));
      return true;
    case pushMessageContentChatAddMembers::ID:
      func(static_cast<pushMessageContentChatAddMembers &>(obj));
      return true;
    case pushMessageContentChatChangePhoto::ID:
      func(static_cast<pushMessageContentChatChangePhoto &>(obj));
      return true;
    case pushMessageContentChatChangeTitle::ID:
      func(static_cast<pushMessageContentChatChangeTitle &>(obj));
      return true;
    case pushMessageContentChatDeleteMember::ID:
      func(static_cast<pushMessageContentChatDeleteMember &>(obj));
      return true;
    case pushMessageContentChatJoinByLink::ID:
      func(static_cast<pushMessageContentChatJoinByLink &>(obj));
      return true;
    case pushMessageContentMessageForwards::ID:
      func(static_cast<pushMessageContentMessageForwards &>(obj));
      return true;
    case pushMessageContentMediaAlbum::ID:
      func(static_cast<pushMessageContentMediaAlbum &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ReplyMarkup &obj, const T &func) {
  switch (obj.get_id()) {
    case replyMarkupRemoveKeyboard::ID:
      func(static_cast<replyMarkupRemoveKeyboard &>(obj));
      return true;
    case replyMarkupForceReply::ID:
      func(static_cast<replyMarkupForceReply &>(obj));
      return true;
    case replyMarkupShowKeyboard::ID:
      func(static_cast<replyMarkupShowKeyboard &>(obj));
      return true;
    case replyMarkupInlineKeyboard::ID:
      func(static_cast<replyMarkupInlineKeyboard &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(RichText &obj, const T &func) {
  switch (obj.get_id()) {
    case richTextPlain::ID:
      func(static_cast<richTextPlain &>(obj));
      return true;
    case richTextBold::ID:
      func(static_cast<richTextBold &>(obj));
      return true;
    case richTextItalic::ID:
      func(static_cast<richTextItalic &>(obj));
      return true;
    case richTextUnderline::ID:
      func(static_cast<richTextUnderline &>(obj));
      return true;
    case richTextStrikethrough::ID:
      func(static_cast<richTextStrikethrough &>(obj));
      return true;
    case richTextFixed::ID:
      func(static_cast<richTextFixed &>(obj));
      return true;
    case richTextUrl::ID:
      func(static_cast<richTextUrl &>(obj));
      return true;
    case richTextEmailAddress::ID:
      func(static_cast<richTextEmailAddress &>(obj));
      return true;
    case richTextSubscript::ID:
      func(static_cast<richTextSubscript &>(obj));
      return true;
    case richTextSuperscript::ID:
      func(static_cast<richTextSuperscript &>(obj));
      return true;
    case richTextMarked::ID:
      func(static_cast<richTextMarked &>(obj));
      return true;
    case richTextPhoneNumber::ID:
      func(static_cast<richTextPhoneNumber &>(obj));
      return true;
    case richTextIcon::ID:
      func(static_cast<richTextIcon &>(obj));
      return true;
    case richTextReference::ID:
      func(static_cast<richTextReference &>(obj));
      return true;
    case richTextAnchor::ID:
      func(static_cast<richTextAnchor &>(obj));
      return true;
    case richTextAnchorLink::ID:
      func(static_cast<richTextAnchorLink &>(obj));
      return true;
    case richTexts::ID:
      func(static_cast<richTexts &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(SearchMessagesFilter &obj, const T &func) {
  switch (obj.get_id()) {
    case searchMessagesFilterEmpty::ID:
      func(static_cast<searchMessagesFilterEmpty &>(obj));
      return true;
    case searchMessagesFilterAnimation::ID:
      func(static_cast<searchMessagesFilterAnimation &>(obj));
      return true;
    case searchMessagesFilterAudio::ID:
      func(static_cast<searchMessagesFilterAudio &>(obj));
      return true;
    case searchMessagesFilterDocument::ID:
      func(static_cast<searchMessagesFilterDocument &>(obj));
      return true;
    case searchMessagesFilterPhoto::ID:
      func(static_cast<searchMessagesFilterPhoto &>(obj));
      return true;
    case searchMessagesFilterVideo::ID:
      func(static_cast<searchMessagesFilterVideo &>(obj));
      return true;
    case searchMessagesFilterVoiceNote::ID:
      func(static_cast<searchMessagesFilterVoiceNote &>(obj));
      return true;
    case searchMessagesFilterPhotoAndVideo::ID:
      func(static_cast<searchMessagesFilterPhotoAndVideo &>(obj));
      return true;
    case searchMessagesFilterUrl::ID:
      func(static_cast<searchMessagesFilterUrl &>(obj));
      return true;
    case searchMessagesFilterChatPhoto::ID:
      func(static_cast<searchMessagesFilterChatPhoto &>(obj));
      return true;
    case searchMessagesFilterCall::ID:
      func(static_cast<searchMessagesFilterCall &>(obj));
      return true;
    case searchMessagesFilterMissedCall::ID:
      func(static_cast<searchMessagesFilterMissedCall &>(obj));
      return true;
    case searchMessagesFilterVideoNote::ID:
      func(static_cast<searchMessagesFilterVideoNote &>(obj));
      return true;
    case searchMessagesFilterVoiceAndVideoNote::ID:
      func(static_cast<searchMessagesFilterVoiceAndVideoNote &>(obj));
      return true;
    case searchMessagesFilterMention::ID:
      func(static_cast<searchMessagesFilterMention &>(obj));
      return true;
    case searchMessagesFilterUnreadMention::ID:
      func(static_cast<searchMessagesFilterUnreadMention &>(obj));
      return true;
    case searchMessagesFilterFailedToSend::ID:
      func(static_cast<searchMessagesFilterFailedToSend &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(SecretChatState &obj, const T &func) {
  switch (obj.get_id()) {
    case secretChatStatePending::ID:
      func(static_cast<secretChatStatePending &>(obj));
      return true;
    case secretChatStateReady::ID:
      func(static_cast<secretChatStateReady &>(obj));
      return true;
    case secretChatStateClosed::ID:
      func(static_cast<secretChatStateClosed &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(StatisticsGraph &obj, const T &func) {
  switch (obj.get_id()) {
    case statisticsGraphData::ID:
      func(static_cast<statisticsGraphData &>(obj));
      return true;
    case statisticsGraphAsync::ID:
      func(static_cast<statisticsGraphAsync &>(obj));
      return true;
    case statisticsGraphError::ID:
      func(static_cast<statisticsGraphError &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(SuggestedAction &obj, const T &func) {
  switch (obj.get_id()) {
    case suggestedActionEnableArchiveAndMuteNewChats::ID:
      func(static_cast<suggestedActionEnableArchiveAndMuteNewChats &>(obj));
      return true;
    case suggestedActionCheckPhoneNumber::ID:
      func(static_cast<suggestedActionCheckPhoneNumber &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(SupergroupMembersFilter &obj, const T &func) {
  switch (obj.get_id()) {
    case supergroupMembersFilterRecent::ID:
      func(static_cast<supergroupMembersFilterRecent &>(obj));
      return true;
    case supergroupMembersFilterContacts::ID:
      func(static_cast<supergroupMembersFilterContacts &>(obj));
      return true;
    case supergroupMembersFilterAdministrators::ID:
      func(static_cast<supergroupMembersFilterAdministrators &>(obj));
      return true;
    case supergroupMembersFilterSearch::ID:
      func(static_cast<supergroupMembersFilterSearch &>(obj));
      return true;
    case supergroupMembersFilterRestricted::ID:
      func(static_cast<supergroupMembersFilterRestricted &>(obj));
      return true;
    case supergroupMembersFilterBanned::ID:
      func(static_cast<supergroupMembersFilterBanned &>(obj));
      return true;
    case supergroupMembersFilterBots::ID:
      func(static_cast<supergroupMembersFilterBots &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(TMeUrlType &obj, const T &func) {
  switch (obj.get_id()) {
    case tMeUrlTypeUser::ID:
      func(static_cast<tMeUrlTypeUser &>(obj));
      return true;
    case tMeUrlTypeSupergroup::ID:
      func(static_cast<tMeUrlTypeSupergroup &>(obj));
      return true;
    case tMeUrlTypeChatInvite::ID:
      func(static_cast<tMeUrlTypeChatInvite &>(obj));
      return true;
    case tMeUrlTypeStickerSet::ID:
      func(static_cast<tMeUrlTypeStickerSet &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(TextEntityType &obj, const T &func) {
  switch (obj.get_id()) {
    case textEntityTypeMention::ID:
      func(static_cast<textEntityTypeMention &>(obj));
      return true;
    case textEntityTypeHashtag::ID:
      func(static_cast<textEntityTypeHashtag &>(obj));
      return true;
    case textEntityTypeCashtag::ID:
      func(static_cast<textEntityTypeCashtag &>(obj));
      return true;
    case textEntityTypeBotCommand::ID:
      func(static_cast<textEntityTypeBotCommand &>(obj));
      return true;
    case textEntityTypeUrl::ID:
      func(static_cast<textEntityTypeUrl &>(obj));
      return true;
    case textEntityTypeEmailAddress::ID:
      func(static_cast<textEntityTypeEmailAddress &>(obj));
      return true;
    case textEntityTypePhoneNumber::ID:
      func(static_cast<textEntityTypePhoneNumber &>(obj));
      return true;
    case textEntityTypeBankCardNumber::ID:
      func(static_cast<textEntityTypeBankCardNumber &>(obj));
      return true;
    case textEntityTypeBold::ID:
      func(static_cast<textEntityTypeBold &>(obj));
      return true;
    case textEntityTypeItalic::ID:
      func(static_cast<textEntityTypeItalic &>(obj));
      return true;
    case textEntityTypeUnderline::ID:
      func(static_cast<textEntityTypeUnderline &>(obj));
      return true;
    case textEntityTypeStrikethrough::ID:
      func(static_cast<textEntityTypeStrikethrough &>(obj));
      return true;
    case textEntityTypeCode::ID:
      func(static_cast<textEntityTypeCode &>(obj));
      return true;
    case textEntityTypePre::ID:
      func(static_cast<textEntityTypePre &>(obj));
      return true;
    case textEntityTypePreCode::ID:
      func(static_cast<textEntityTypePreCode &>(obj));
      return true;
    case textEntityTypeTextUrl::ID:
      func(static_cast<textEntityTypeTextUrl &>(obj));
      return true;
    case textEntityTypeMentionName::ID:
      func(static_cast<textEntityTypeMentionName &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(TextParseMode &obj, const T &func) {
  switch (obj.get_id()) {
    case textParseModeMarkdown::ID:
      func(static_cast<textParseModeMarkdown &>(obj));
      return true;
    case textParseModeHTML::ID:
      func(static_cast<textParseModeHTML &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ThumbnailFormat &obj, const T &func) {
  switch (obj.get_id()) {
    case thumbnailFormatJpeg::ID:
      func(static_cast<thumbnailFormatJpeg &>(obj));
      return true;
    case thumbnailFormatPng::ID:
      func(static_cast<thumbnailFormatPng &>(obj));
      return true;
    case thumbnailFormatWebp::ID:
      func(static_cast<thumbnailFormatWebp &>(obj));
      return true;
    case thumbnailFormatGif::ID:
      func(static_cast<thumbnailFormatGif &>(obj));
      return true;
    case thumbnailFormatTgs::ID:
      func(static_cast<thumbnailFormatTgs &>(obj));
      return true;
    case thumbnailFormatMpeg4::ID:
      func(static_cast<thumbnailFormatMpeg4 &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(TopChatCategory &obj, const T &func) {
  switch (obj.get_id()) {
    case topChatCategoryUsers::ID:
      func(static_cast<topChatCategoryUsers &>(obj));
      return true;
    case topChatCategoryBots::ID:
      func(static_cast<topChatCategoryBots &>(obj));
      return true;
    case topChatCategoryGroups::ID:
      func(static_cast<topChatCategoryGroups &>(obj));
      return true;
    case topChatCategoryChannels::ID:
      func(static_cast<topChatCategoryChannels &>(obj));
      return true;
    case topChatCategoryInlineBots::ID:
      func(static_cast<topChatCategoryInlineBots &>(obj));
      return true;
    case topChatCategoryCalls::ID:
      func(static_cast<topChatCategoryCalls &>(obj));
      return true;
    case topChatCategoryForwardChats::ID:
      func(static_cast<topChatCategoryForwardChats &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(Update &obj, const T &func) {
  switch (obj.get_id()) {
    case updateAuthorizationState::ID:
      func(static_cast<updateAuthorizationState &>(obj));
      return true;
    case updateNewMessage::ID:
      func(static_cast<updateNewMessage &>(obj));
      return true;
    case updateMessageSendAcknowledged::ID:
      func(static_cast<updateMessageSendAcknowledged &>(obj));
      return true;
    case updateMessageSendSucceeded::ID:
      func(static_cast<updateMessageSendSucceeded &>(obj));
      return true;
    case updateMessageSendFailed::ID:
      func(static_cast<updateMessageSendFailed &>(obj));
      return true;
    case updateMessageContent::ID:
      func(static_cast<updateMessageContent &>(obj));
      return true;
    case updateMessageEdited::ID:
      func(static_cast<updateMessageEdited &>(obj));
      return true;
    case updateMessageInteractionInfo::ID:
      func(static_cast<updateMessageInteractionInfo &>(obj));
      return true;
    case updateMessageContentOpened::ID:
      func(static_cast<updateMessageContentOpened &>(obj));
      return true;
    case updateMessageMentionRead::ID:
      func(static_cast<updateMessageMentionRead &>(obj));
      return true;
    case updateMessageLiveLocationViewed::ID:
      func(static_cast<updateMessageLiveLocationViewed &>(obj));
      return true;
    case updateNewChat::ID:
      func(static_cast<updateNewChat &>(obj));
      return true;
    case updateChatTitle::ID:
      func(static_cast<updateChatTitle &>(obj));
      return true;
    case updateChatPhoto::ID:
      func(static_cast<updateChatPhoto &>(obj));
      return true;
    case updateChatPermissions::ID:
      func(static_cast<updateChatPermissions &>(obj));
      return true;
    case updateChatLastMessage::ID:
      func(static_cast<updateChatLastMessage &>(obj));
      return true;
    case updateChatPosition::ID:
      func(static_cast<updateChatPosition &>(obj));
      return true;
    case updateChatIsMarkedAsUnread::ID:
      func(static_cast<updateChatIsMarkedAsUnread &>(obj));
      return true;
    case updateChatIsBlocked::ID:
      func(static_cast<updateChatIsBlocked &>(obj));
      return true;
    case updateChatHasScheduledMessages::ID:
      func(static_cast<updateChatHasScheduledMessages &>(obj));
      return true;
    case updateChatDefaultDisableNotification::ID:
      func(static_cast<updateChatDefaultDisableNotification &>(obj));
      return true;
    case updateChatReadInbox::ID:
      func(static_cast<updateChatReadInbox &>(obj));
      return true;
    case updateChatReadOutbox::ID:
      func(static_cast<updateChatReadOutbox &>(obj));
      return true;
    case updateChatUnreadMentionCount::ID:
      func(static_cast<updateChatUnreadMentionCount &>(obj));
      return true;
    case updateChatNotificationSettings::ID:
      func(static_cast<updateChatNotificationSettings &>(obj));
      return true;
    case updateScopeNotificationSettings::ID:
      func(static_cast<updateScopeNotificationSettings &>(obj));
      return true;
    case updateChatActionBar::ID:
      func(static_cast<updateChatActionBar &>(obj));
      return true;
    case updateChatPinnedMessage::ID:
      func(static_cast<updateChatPinnedMessage &>(obj));
      return true;
    case updateChatReplyMarkup::ID:
      func(static_cast<updateChatReplyMarkup &>(obj));
      return true;
    case updateChatDraftMessage::ID:
      func(static_cast<updateChatDraftMessage &>(obj));
      return true;
    case updateChatFilters::ID:
      func(static_cast<updateChatFilters &>(obj));
      return true;
    case updateChatOnlineMemberCount::ID:
      func(static_cast<updateChatOnlineMemberCount &>(obj));
      return true;
    case updateNotification::ID:
      func(static_cast<updateNotification &>(obj));
      return true;
    case updateNotificationGroup::ID:
      func(static_cast<updateNotificationGroup &>(obj));
      return true;
    case updateActiveNotifications::ID:
      func(static_cast<updateActiveNotifications &>(obj));
      return true;
    case updateHavePendingNotifications::ID:
      func(static_cast<updateHavePendingNotifications &>(obj));
      return true;
    case updateDeleteMessages::ID:
      func(static_cast<updateDeleteMessages &>(obj));
      return true;
    case updateUserChatAction::ID:
      func(static_cast<updateUserChatAction &>(obj));
      return true;
    case updateUserStatus::ID:
      func(static_cast<updateUserStatus &>(obj));
      return true;
    case updateUser::ID:
      func(static_cast<updateUser &>(obj));
      return true;
    case updateBasicGroup::ID:
      func(static_cast<updateBasicGroup &>(obj));
      return true;
    case updateSupergroup::ID:
      func(static_cast<updateSupergroup &>(obj));
      return true;
    case updateSecretChat::ID:
      func(static_cast<updateSecretChat &>(obj));
      return true;
    case updateUserFullInfo::ID:
      func(static_cast<updateUserFullInfo &>(obj));
      return true;
    case updateBasicGroupFullInfo::ID:
      func(static_cast<updateBasicGroupFullInfo &>(obj));
      return true;
    case updateSupergroupFullInfo::ID:
      func(static_cast<updateSupergroupFullInfo &>(obj));
      return true;
    case updateServiceNotification::ID:
      func(static_cast<updateServiceNotification &>(obj));
      return true;
    case updateFile::ID:
      func(static_cast<updateFile &>(obj));
      return true;
    case updateFileGenerationStart::ID:
      func(static_cast<updateFileGenerationStart &>(obj));
      return true;
    case updateFileGenerationStop::ID:
      func(static_cast<updateFileGenerationStop &>(obj));
      return true;
    case updateCall::ID:
      func(static_cast<updateCall &>(obj));
      return true;
    case updateNewCallSignalingData::ID:
      func(static_cast<updateNewCallSignalingData &>(obj));
      return true;
    case updateUserPrivacySettingRules::ID:
      func(static_cast<updateUserPrivacySettingRules &>(obj));
      return true;
    case updateUnreadMessageCount::ID:
      func(static_cast<updateUnreadMessageCount &>(obj));
      return true;
    case updateUnreadChatCount::ID:
      func(static_cast<updateUnreadChatCount &>(obj));
      return true;
    case updateOption::ID:
      func(static_cast<updateOption &>(obj));
      return true;
    case updateStickerSet::ID:
      func(static_cast<updateStickerSet &>(obj));
      return true;
    case updateInstalledStickerSets::ID:
      func(static_cast<updateInstalledStickerSets &>(obj));
      return true;
    case updateTrendingStickerSets::ID:
      func(static_cast<updateTrendingStickerSets &>(obj));
      return true;
    case updateRecentStickers::ID:
      func(static_cast<updateRecentStickers &>(obj));
      return true;
    case updateFavoriteStickers::ID:
      func(static_cast<updateFavoriteStickers &>(obj));
      return true;
    case updateSavedAnimations::ID:
      func(static_cast<updateSavedAnimations &>(obj));
      return true;
    case updateSelectedBackground::ID:
      func(static_cast<updateSelectedBackground &>(obj));
      return true;
    case updateLanguagePackStrings::ID:
      func(static_cast<updateLanguagePackStrings &>(obj));
      return true;
    case updateConnectionState::ID:
      func(static_cast<updateConnectionState &>(obj));
      return true;
    case updateTermsOfService::ID:
      func(static_cast<updateTermsOfService &>(obj));
      return true;
    case updateUsersNearby::ID:
      func(static_cast<updateUsersNearby &>(obj));
      return true;
    case updateDiceEmojis::ID:
      func(static_cast<updateDiceEmojis &>(obj));
      return true;
    case updateAnimationSearchParameters::ID:
      func(static_cast<updateAnimationSearchParameters &>(obj));
      return true;
    case updateSuggestedActions::ID:
      func(static_cast<updateSuggestedActions &>(obj));
      return true;
    case updateNewInlineQuery::ID:
      func(static_cast<updateNewInlineQuery &>(obj));
      return true;
    case updateNewChosenInlineResult::ID:
      func(static_cast<updateNewChosenInlineResult &>(obj));
      return true;
    case updateNewCallbackQuery::ID:
      func(static_cast<updateNewCallbackQuery &>(obj));
      return true;
    case updateNewInlineCallbackQuery::ID:
      func(static_cast<updateNewInlineCallbackQuery &>(obj));
      return true;
    case updateNewShippingQuery::ID:
      func(static_cast<updateNewShippingQuery &>(obj));
      return true;
    case updateNewPreCheckoutQuery::ID:
      func(static_cast<updateNewPreCheckoutQuery &>(obj));
      return true;
    case updateNewCustomEvent::ID:
      func(static_cast<updateNewCustomEvent &>(obj));
      return true;
    case updateNewCustomQuery::ID:
      func(static_cast<updateNewCustomQuery &>(obj));
      return true;
    case updatePoll::ID:
      func(static_cast<updatePoll &>(obj));
      return true;
    case updatePollAnswer::ID:
      func(static_cast<updatePollAnswer &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(UserPrivacySetting &obj, const T &func) {
  switch (obj.get_id()) {
    case userPrivacySettingShowStatus::ID:
      func(static_cast<userPrivacySettingShowStatus &>(obj));
      return true;
    case userPrivacySettingShowProfilePhoto::ID:
      func(static_cast<userPrivacySettingShowProfilePhoto &>(obj));
      return true;
    case userPrivacySettingShowLinkInForwardedMessages::ID:
      func(static_cast<userPrivacySettingShowLinkInForwardedMessages &>(obj));
      return true;
    case userPrivacySettingShowPhoneNumber::ID:
      func(static_cast<userPrivacySettingShowPhoneNumber &>(obj));
      return true;
    case userPrivacySettingAllowChatInvites::ID:
      func(static_cast<userPrivacySettingAllowChatInvites &>(obj));
      return true;
    case userPrivacySettingAllowCalls::ID:
      func(static_cast<userPrivacySettingAllowCalls &>(obj));
      return true;
    case userPrivacySettingAllowPeerToPeerCalls::ID:
      func(static_cast<userPrivacySettingAllowPeerToPeerCalls &>(obj));
      return true;
    case userPrivacySettingAllowFindingByPhoneNumber::ID:
      func(static_cast<userPrivacySettingAllowFindingByPhoneNumber &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(UserPrivacySettingRule &obj, const T &func) {
  switch (obj.get_id()) {
    case userPrivacySettingRuleAllowAll::ID:
      func(static_cast<userPrivacySettingRuleAllowAll &>(obj));
      return true;
    case userPrivacySettingRuleAllowContacts::ID:
      func(static_cast<userPrivacySettingRuleAllowContacts &>(obj));
      return true;
    case userPrivacySettingRuleAllowUsers::ID:
      func(static_cast<userPrivacySettingRuleAllowUsers &>(obj));
      return true;
    case userPrivacySettingRuleAllowChatMembers::ID:
      func(static_cast<userPrivacySettingRuleAllowChatMembers &>(obj));
      return true;
    case userPrivacySettingRuleRestrictAll::ID:
      func(static_cast<userPrivacySettingRuleRestrictAll &>(obj));
      return true;
    case userPrivacySettingRuleRestrictContacts::ID:
      func(static_cast<userPrivacySettingRuleRestrictContacts &>(obj));
      return true;
    case userPrivacySettingRuleRestrictUsers::ID:
      func(static_cast<userPrivacySettingRuleRestrictUsers &>(obj));
      return true;
    case userPrivacySettingRuleRestrictChatMembers::ID:
      func(static_cast<userPrivacySettingRuleRestrictChatMembers &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(UserStatus &obj, const T &func) {
  switch (obj.get_id()) {
    case userStatusEmpty::ID:
      func(static_cast<userStatusEmpty &>(obj));
      return true;
    case userStatusOnline::ID:
      func(static_cast<userStatusOnline &>(obj));
      return true;
    case userStatusOffline::ID:
      func(static_cast<userStatusOffline &>(obj));
      return true;
    case userStatusRecently::ID:
      func(static_cast<userStatusRecently &>(obj));
      return true;
    case userStatusLastWeek::ID:
      func(static_cast<userStatusLastWeek &>(obj));
      return true;
    case userStatusLastMonth::ID:
      func(static_cast<userStatusLastMonth &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(UserType &obj, const T &func) {
  switch (obj.get_id()) {
    case userTypeRegular::ID:
      func(static_cast<userTypeRegular &>(obj));
      return true;
    case userTypeDeleted::ID:
      func(static_cast<userTypeDeleted &>(obj));
      return true;
    case userTypeBot::ID:
      func(static_cast<userTypeBot &>(obj));
      return true;
    case userTypeUnknown::ID:
      func(static_cast<userTypeUnknown &>(obj));
      return true;
    default:
      return false;
  }
}

}  // namespace td_api
}  // namespace td
