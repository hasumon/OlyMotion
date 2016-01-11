// Generated by IB v0.8.0 gem. Do not edit it manually
// Run `rake ib:open` to refresh

#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import <Security/Security.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface AppDelegate: UIResponder <UIApplicationDelegate>
@end

@interface UIImageViewAnimation: UIImageView
-(IBAction) setAnimationTemplateImages:(id) images;

@end

@interface BluetoothViewController: UIViewController
-(IBAction) viewDidLoad;
-(IBAction) didGetAppOACentralConfiguration:(id) notification;
-(IBAction) convert_secure:(id) text;
-(IBAction) dealloc;
-(IBAction) close;
-(IBAction) numberOfSectionsInTableView:(id) tableView;
-(IBAction) getFromOacentral;

@end

@interface SettingsViewController: UIViewController
-(IBAction) viewDidLoad;
-(IBAction) viewDidAppear:(id) animated;
-(IBAction) didChangeWifiStatus:(id) notification;
-(IBAction) didChangeBluetoothConnection:(id) notification;
-(IBAction) applicationDidBecomeActive:(id) notification;
-(IBAction) applicationWillResignActive:(id) notification;
-(IBAction) updateCameraConnectionCells;
-(IBAction) updateShowWifiSettingCell;
-(IBAction) updateShowBluetoothSettingCell;
-(IBAction) dealloc;
-(IBAction) numberOfSectionsInTableView:(id) tableView;
-(IBAction) didSelectRowAtConnectWithUsingWifiCell;
-(IBAction) reportBlockWakingUp:(id) progress;

@end

@interface AppCamera: OLYCamera
-(IBAction) initialize;

@end

@interface AppCameraLog: NSObject
-(IBAction) initialize;
-(IBAction) messages;
-(IBAction) clearMessages;

@end

@interface AppSetting: NSObject
@end

@interface BluetoothConnector: NSObject
-(IBAction) initialize;
-(IBAction) connectionStatus;
-(IBAction) discoverPeripheral:(id) error;
-(IBAction) connectPeripheral:(id) error;
-(IBAction) disconnectPeripheral:(id) error;
-(IBAction) centralManagerDidUpdateState:(id) central;

@end

@interface WifiConnector: NSObject
-(IBAction) initialize;
-(IBAction) dealloc;
-(IBAction) connectionStatus;
-(IBAction) cameraStatus;
-(IBAction) startMonitoring;
-(IBAction) stopMonitoring;
-(IBAction) waitForConnected:(id) timeout;
-(IBAction) waitForDisconnected:(id) timeout;
-(IBAction) reachabilityChanged:(id) notification;
-(IBAction) updateStatusWithToPingCamera:(id) ping;
-(IBAction) retreiveSSID;
-(IBAction) pingCamera;

@end
