/* SOGoUserDefaults.h - this file is part of SOGo
 *
 * Copyright (C) 2011-2022 Inverse inc.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef SOGOUSERDEFAULTS_H
#define SOGOUSERDEFAULTS_H

#import <SOGo/SOGoDefaultsSource.h>

@class NSArray;
@class NSDictionary;
@class NSMutableDictionary;
@class NSString;
@class NSTimeZone;

extern NSString *SOGoWeekStartJanuary1;
extern NSString *SOGoWeekStartFirst4DayWeek;
extern NSString *SOGoWeekStartFirstFullWeek;

extern NSString *SOGoPasswordRecoveryDisabled;
extern NSString *SOGoPasswordRecoveryQuestion;
extern NSString *SOGoPasswordRecoveryQuestion1;
extern NSString *SOGoPasswordRecoveryQuestion2;
extern NSString *SOGoPasswordRecoveryQuestion3;
extern NSString *SOGoPasswordRecoverySecondaryEmail;


@interface SOGoUserDefaults : SOGoDefaultsSource
{
  NSString *userLanguage;
}

+ (SOGoUserDefaults *) defaultsForUser: (NSString *) userId
                              inDomain: (NSString *) domainId;

/* general */
- (void) setLoginModule: (NSString *) newLoginModule;
- (NSString *) loginModule;

- (void) setRememberLastModule: (BOOL) rememberLastModule;
- (BOOL) rememberLastModule;

- (void) setDefaultCalendar: (NSString *) newDefaultCalendar;
- (NSString *) defaultCalendar;

- (void) setLongDateFormat: (NSString *) newFormat;
- (void) unsetLongDateFormat;
- (NSString *) longDateFormat;

- (void) setShortDateFormat: (NSString *) newFormat;
- (void) unsetShortDateFormat;
- (NSString *) shortDateFormat;

- (void) setTimeFormat: (NSString *) newFormat;
- (void) unsetTimeFormat;
- (NSString *) timeFormat;

- (void) setDayStartTime: (NSString *) newValue;
- (NSString *) dayStartTime;
- (unsigned int) dayStartHour;

- (void) setDayEndTime: (NSString *) newValue;
- (NSString *) dayEndTime;
- (unsigned int) dayEndHour;

- (void) setBusyOffHours: (BOOL) busyOffHours;
- (BOOL) busyOffHours;

- (void) setTimeZoneName: (NSString *) newValue;
- (NSString *) timeZoneName;

- (void) setTimeZone: (NSTimeZone *) newValue;
- (NSTimeZone *) timeZone;

- (void) setTimeFormat: (NSString *) newValue;
- (NSString *) timeFormat;

- (void) setLanguage: (NSString *) newValue;
- (NSString *) language;

/* mail */
- (void) setMailAddOutgoingAddresses: (BOOL) newValue;
- (BOOL) mailAddOutgoingAddresses;

- (void) setMailShowSubscribedFoldersOnly: (BOOL) newValue;
- (BOOL) mailShowSubscribedFoldersOnly;

- (void) setSynchronizeOnlyDefaultMailFolders: (BOOL) newValue;
- (BOOL) synchronizeOnlyDefaultMailFolders;

- (void) setMailSortByThreads: (BOOL) newValue;
- (BOOL) mailSortByThreads;

- (void) setDraftsFolderName: (NSString *) newValue;
- (NSString *) draftsFolderName;

- (void) setSentFolderName: (NSString *) newValue;
- (NSString *) sentFolderName;

- (void) setTrashFolderName: (NSString *) newValue;
- (NSString *) trashFolderName;

- (void) setJunkFolderName: (NSString *) newValue;
- (NSString *) junkFolderName;

- (void) setTemplatesFolderName: (NSString *) newValue;
- (NSString *) templatesFolderName;

- (void) setFirstDayOfWeek: (int) newValue;
- (int) firstDayOfWeek;

- (void) setFirstWeekOfYear: (NSString *) newValue;
- (NSString *) firstWeekOfYear;

- (void) setMailListViewColumnsOrder: (NSArray *) newValue;
- (NSArray *) mailListViewColumnsOrder;

- (void) setSelectedAddressBook: (NSString *) newValue;
- (NSString *) selectedAddressBook;

- (void) setRefreshViewCheck: (NSString *) newValue;
- (NSString *) refreshViewCheck;

- (BOOL) gravatarEnabled;
- (void) setAlternateAvatar: (NSString *) newValue;
- (NSString *) alternateAvatar;

- (void) setAnimationMode: (NSString *) newValue;
- (NSString *) animationMode;

- (BOOL) totpEnabled;
- (void) setTotpEnabled: (BOOL) newValue;

- (void) setMailComposeWindow: (NSString *) newValue;
- (NSString *) mailComposeWindow;

- (void) setMailComposeMessageType: (NSString *) newValue;
- (NSString *) mailComposeMessageType;

- (void) setMailComposeFontSize: (int) newValue;
- (int) mailComposeFontSize;

- (void) setMailDisplayRemoteInlineImages: (NSString *) newValue;
- (NSString *) mailDisplayRemoteInlineImages;


- (void) setMailAutoMarkAsReadDelay: (int) newValue;
- (int) mailAutoMarkAsReadDelay;

- (void) setMailAutoSave: (NSString *) newValue;
- (NSString *) mailAutoSave;

- (void) setMailMessageForwarding: (NSString *) newValue;
- (NSString *) mailMessageForwarding;

- (void) setMailReplyPlacement: (NSString *) newValue;
- (NSString *) mailReplyPlacement;

- (void) setMailSignaturePlacement: (NSString *) newValue;
- (NSString *) mailSignaturePlacement;

- (BOOL)mailUseSignatureOnNew;
- (void)setMailUseSignatureOnNew:(BOOL)newValue;
- (BOOL)mailUseSignatureOnReply;
- (void)setMailUseSignatureOnReply:(BOOL)newValue;
- (BOOL)mailUseSignatureOnForward;
- (void)setMailUseSignatureOnForward:(BOOL)newValue;

- (void) setAllowUserReceipt: (BOOL) allow;
- (BOOL) allowUserReceipt;
- (void) setUserReceiptNonRecipientAction: (NSString *) action;
- (NSString *) userReceiptNonRecipientAction;
- (void) setUserReceiptOutsideDomainAction: (NSString *) action;
- (NSString *) userReceiptOutsideDomainAction;
- (void) setUserReceiptAnyAction: (NSString *) action;
- (NSString *) userReceiptAnyAction;

- (void) setMailUseOutlookStyleReplies: (BOOL) newValue;
- (BOOL) mailUseOutlookStyleReplies;

- (void) setMailCertificate: (NSData *) newValue;
- (void) unsetMailCertificate;
- (NSString *) mailCertificate;

- (void) setMailCertificateAlwaysSign: (BOOL) newValue;
- (BOOL) mailCertificateAlwaysSign;

- (void) setMailCertificateAlwaysEncrypt: (BOOL) newValue;
- (BOOL) mailCertificateAlwaysEncrypt;

- (void) setMailIdentities: (NSArray *) newIdentites;
- (NSArray *) mailIdentities;

- (void) setMailForceDefaultIdentity: (BOOL) newValue;
- (BOOL) mailForceDefaultIdentity;

- (void) setAuxiliaryMailAccounts: (NSArray *) newAccounts;
- (NSArray *) auxiliaryMailAccounts;

- (void) setSieveFilters: (NSArray *) newValue;
- (NSArray *) sieveFilters;

- (void) setVacationOptions: (NSDictionary *) newValue;
- (NSDictionary *) vacationOptions;

- (void) setForwardOptions: (NSDictionary *) newValue;
- (NSDictionary *) forwardOptions;

- (void) setNotificationOptions: (NSDictionary *) newValue;
- (NSDictionary *) notificationOptions;

- (void) setMailLabelsColors: (NSDictionary *) newValues;
- (NSDictionary *) mailLabelsColors;

- (void)setHideInlineAttachments:(BOOL)newValue;
- (BOOL)hideInlineAttachments;

/* calendar */
- (void)setCalendarCategories : (NSArray *)newValues;
- (NSArray *) calendarCategories;

- (void) setCalendarCategoriesColors: (NSDictionary *) newValues;
- (NSDictionary *) calendarCategoriesColors;

- (void) setCalendarShouldDisplayWeekend: (BOOL) newValue;
- (BOOL) calendarShouldDisplayWeekend;

- (void) setCalendarWeekdays: (NSArray *) newValues;
- (NSArray *) calendarWeekdays;

- (void) setCalendarEventsDefaultClassification: (NSString *) newValue;
- (NSString *) calendarEventsDefaultClassification;

- (void) setCalendarTasksDefaultClassification: (NSString *) newValue;
- (NSString *) calendarTasksDefaultClassification;

- (void) setCalendarDefaultReminder: (NSString *) newValue;
- (NSString *) calendarDefaultReminder;

/* contacts */
- (void) setContactsCategories: (NSArray *) newValues;
- (NSArray *) contactsCategories;

/* Password recovery */
- (void) setPasswordRecoveryMode: (NSString *) newValue;
- (NSString *) passwordRecoveryMode;
- (void) setPasswordRecoveryQuestion: (NSString *) newValue;
- (NSString *) passwordRecoveryQuestion;
- (void) setPasswordRecoveryQuestionAnswer: (NSString *) newValue;
- (NSString *) passwordRecoveryQuestionAnswer;
- (void) setPasswordRecoverySecondaryEmail: (NSString *) newValue;
- (NSString *) passwordRecoverySecondaryEmail;

@end

#endif /* SOGOUSERDEFAULTS_H */
