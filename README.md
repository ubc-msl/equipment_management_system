![](http://assets.brand.ubc.ca/signatures/2_full_signatures/2_grey5415/rgb/s2g5415.png)

# Equipment Management System
The Equipment Management System is a Drupal 6 Module created with Features.
https://drupal.org/project/features

## Goals of this module
- List all the large scientific equipment in the MSL.
- Allow import of equipment data from Excel
- Restrict access to this system to only MSL/CHiBi personnel
- Allow searching of equipment.
- Capture the following REQUIRED information per piece of equipment:
  - Description
  - Location
  - Owner (Link to Lab contacts page)
  - Barcode
  - Status (In Service or Decommissioned)
  - Access
    - Restricted to owner (Default)
    - Permission granted by owner
    - Shared with all MSL/CHiBi
- Capture the following OPTIONAL information per piece of equipment:
  - Manufacturer
  - Supplier
  - Model
  - Date equipment was decommissioned (conditional field on Status)
  - Warranty (start date, end date)
  - Notes
  - File Attachments (manuals, software, photographs, etc.)

## Requirements
- Drupal 6
- Minimum 940px width for lists to be displayed properly.
  
### Drupal 6 Module Dependencies
- Administer Users by Role
- Autocomplete Widgets
- Conditional Fields
- Content
- Content Permissions
- Date
- Date Popup
- Features
- Feeds
- Feeds Import
- Feeds Admin UI
- FileField
- jQuery Update
- Menu
- Number
- Option Widgets
- Path
- Pathauto
- PHP filter
- Printer-friendly pages
- PDF version
- Text
- Views
- Views Export xls
- Date API
- Date Timezone
- Chaos tools
- Job Scheduler
- Token

# License
GNU GENERAL PUBLIC LICENSE Version 2
