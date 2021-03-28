-- phpMyAdmin SQL Dump
-- version 2.11.6
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Apr 30, 2010 at 09:06 AM
-- Server version: 5.0.51
-- PHP Version: 5.2.6

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `vms`
--

-- --------------------------------------------------------

--
-- Table structure for table `jos_banner`
--

CREATE TABLE `jos_banner` (
  `bid` int(11) NOT NULL auto_increment,
  `cid` int(11) NOT NULL default '0',
  `type` varchar(30) NOT NULL default 'banner',
  `name` varchar(255) NOT NULL default '',
  `alias` varchar(255) NOT NULL default '',
  `imptotal` int(11) NOT NULL default '0',
  `impmade` int(11) NOT NULL default '0',
  `clicks` int(11) NOT NULL default '0',
  `imageurl` varchar(100) NOT NULL default '',
  `clickurl` varchar(200) NOT NULL default '',
  `date` datetime default NULL,
  `showBanner` tinyint(1) NOT NULL default '0',
  `checked_out` tinyint(1) NOT NULL default '0',
  `checked_out_time` datetime NOT NULL default '0000-00-00 00:00:00',
  `editor` varchar(50) default NULL,
  `custombannercode` text,
  `catid` int(10) unsigned NOT NULL default '0',
  `description` text NOT NULL,
  `sticky` tinyint(1) unsigned NOT NULL default '0',
  `ordering` int(11) NOT NULL default '0',
  `publish_up` datetime NOT NULL default '0000-00-00 00:00:00',
  `publish_down` datetime NOT NULL default '0000-00-00 00:00:00',
  `tags` text NOT NULL,
  `params` text NOT NULL,
  PRIMARY KEY  (`bid`),
  KEY `viewbanner` (`showBanner`),
  KEY `idx_banner_catid` (`catid`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=9 ;

--
-- Dumping data for table `jos_banner`
--

INSERT INTO `jos_banner` (`bid`, `cid`, `type`, `name`, `alias`, `imptotal`, `impmade`, `clicks`, `imageurl`, `clickurl`, `date`, `showBanner`, `checked_out`, `checked_out_time`, `editor`, `custombannercode`, `catid`, `description`, `sticky`, `ordering`, `publish_up`, `publish_down`, `tags`, `params`) VALUES
(1, 1, 'banner', 'OSM 1', 'osm-1', 0, 43, 0, 'osmbanner1.png', 'http://www.opensourcematters.org', '2004-07-07 15:31:29', 0, 0, '0000-00-00 00:00:00', '', '', 13, '', 0, 1, '0000-00-00 00:00:00', '0000-00-00 00:00:00', '', ''),
(2, 1, 'banner', 'OSM 2', 'osm-2', 0, 49, 0, 'osmbanner2.png', 'http://www.opensourcematters.org', '2004-07-07 15:31:29', 0, 0, '0000-00-00 00:00:00', '', '', 13, '', 0, 2, '0000-00-00 00:00:00', '0000-00-00 00:00:00', '', ''),
(3, 1, '', 'Joomla!', 'joomla', 0, 238, 0, '', 'http://www.joomla.org', '2006-05-29 14:21:28', 0, 0, '0000-00-00 00:00:00', '', '<a href="{CLICKURL}" target="_blank">{NAME}</a>\r\n<br/>\r\nJoomla! The most popular and widely used Open Source CMS Project in the world.', 14, '', 0, 1, '0000-00-00 00:00:00', '0000-00-00 00:00:00', '', ''),
(4, 1, '', 'JoomlaCode', 'joomlacode', 0, 238, 0, '', 'http://joomlacode.org', '2006-05-29 14:19:26', 0, 0, '0000-00-00 00:00:00', '', '<a href="{CLICKURL}" target="_blank">{NAME}</a>\r\n<br/>\r\nJoomlaCode, development and distribution made easy.', 14, '', 0, 2, '0000-00-00 00:00:00', '0000-00-00 00:00:00', '', ''),
(5, 1, '', 'Joomla! Extensions', 'joomla-extensions', 0, 233, 0, '', 'http://extensions.joomla.org', '2006-05-29 14:23:21', 0, 0, '0000-00-00 00:00:00', '', '<a href="{CLICKURL}" target="_blank">{NAME}</a>\r\n<br/>\r\nJoomla! Components, Modules, Plugins and Languages by the bucket load.', 14, '', 0, 3, '0000-00-00 00:00:00', '0000-00-00 00:00:00', '', ''),
(6, 1, '', 'Joomla! Shop', 'joomla-shop', 0, 233, 0, '', 'http://shop.joomla.org', '2006-05-29 14:23:21', 0, 0, '0000-00-00 00:00:00', '', '<a href="{CLICKURL}" target="_blank">{NAME}</a>\r\n<br/>\r\nFor all your Joomla! merchandise.', 14, '', 0, 4, '0000-00-00 00:00:00', '0000-00-00 00:00:00', '', ''),
(7, 1, '', 'Joomla! Promo Shop', 'joomla-promo-shop', 0, 103, 1, 'shop-ad.jpg', 'http://shop.joomla.org', '2007-09-19 17:26:24', 0, 0, '0000-00-00 00:00:00', '', '', 33, '', 0, 3, '0000-00-00 00:00:00', '0000-00-00 00:00:00', '', ''),
(8, 1, '', 'Joomla! Promo Books', 'joomla-promo-books', 0, 113, 2, 'shop-ad-books.jpg', 'http://shop.joomla.org/amazoncom-bookstores.html', '2007-09-19 17:28:01', 0, 0, '0000-00-00 00:00:00', '', '', 33, '', 0, 4, '0000-00-00 00:00:00', '0000-00-00 00:00:00', '', '');

-- --------------------------------------------------------

--
-- Table structure for table `jos_bannerclient`
--

CREATE TABLE `jos_bannerclient` (
  `cid` int(11) NOT NULL auto_increment,
  `name` varchar(255) NOT NULL default '',
  `contact` varchar(255) NOT NULL default '',
  `email` varchar(255) NOT NULL default '',
  `extrainfo` text NOT NULL,
  `checked_out` tinyint(1) NOT NULL default '0',
  `checked_out_time` time default NULL,
  `editor` varchar(50) default NULL,
  PRIMARY KEY  (`cid`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=2 ;

--
-- Dumping data for table `jos_bannerclient`
--

INSERT INTO `jos_bannerclient` (`cid`, `name`, `contact`, `email`, `extrainfo`, `checked_out`, `checked_out_time`, `editor`) VALUES
(1, 'Open Source Matters', 'Administrator', 'admin@opensourcematters.org', '', 62, '18:51:43', NULL);

-- --------------------------------------------------------

--
-- Table structure for table `jos_bannertrack`
--

CREATE TABLE `jos_bannertrack` (
  `track_date` date NOT NULL,
  `track_type` int(10) unsigned NOT NULL,
  `banner_id` int(10) unsigned NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_bannertrack`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_categories`
--

CREATE TABLE `jos_categories` (
  `id` int(11) NOT NULL auto_increment,
  `parent_id` int(11) NOT NULL default '0',
  `title` varchar(255) NOT NULL default '',
  `name` varchar(255) NOT NULL default '',
  `alias` varchar(255) NOT NULL default '',
  `image` varchar(255) NOT NULL default '',
  `section` varchar(50) NOT NULL default '',
  `image_position` varchar(30) NOT NULL default '',
  `description` text NOT NULL,
  `published` tinyint(1) NOT NULL default '0',
  `checked_out` int(11) unsigned NOT NULL default '0',
  `checked_out_time` datetime NOT NULL default '0000-00-00 00:00:00',
  `editor` varchar(50) default NULL,
  `ordering` int(11) NOT NULL default '0',
  `access` tinyint(3) unsigned NOT NULL default '0',
  `count` int(11) NOT NULL default '0',
  `params` text NOT NULL,
  PRIMARY KEY  (`id`),
  KEY `cat_idx` (`section`,`published`,`access`),
  KEY `idx_access` (`access`),
  KEY `idx_checkout` (`checked_out`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=901 ;

--
-- Dumping data for table `jos_categories`
--

INSERT INTO `jos_categories` (`id`, `parent_id`, `title`, `name`, `alias`, `image`, `section`, `image_position`, `description`, `published`, `checked_out`, `checked_out_time`, `editor`, `ordering`, `access`, `count`, `params`) VALUES
(1, 0, 'Latest', '', 'latest-news', 'taking_notes.jpg', '1', 'left', '<p>The latest news from the PDMA</p>', 1, 0, '0000-00-00 00:00:00', '', 1, 0, 1, ''),
(2, 0, 'Joomla! Specific Links', '', 'joomla-specific-links', 'clock.jpg', 'com_weblinks', 'left', 'A selection of links that are all related to the Joomla! Project.', 1, 0, '0000-00-00 00:00:00', NULL, 1, 0, 0, ''),
(3, 0, 'Newsflash', '', 'newsflash', '', '1', 'left', '', 1, 0, '0000-00-00 00:00:00', '', 2, 0, 0, ''),
(4, 0, 'Joomla!', '', 'joomla', '', 'com_newsfeeds', 'left', '', 1, 0, '0000-00-00 00:00:00', NULL, 2, 0, 0, ''),
(5, 0, 'Free and Open Source Software', '', 'free-and-open-source-software', '', 'com_newsfeeds', 'left', 'Read the latest news about free and open source software from some of its leading advocates.', 1, 0, '0000-00-00 00:00:00', NULL, 3, 0, 0, ''),
(6, 0, 'Related Projects', '', 'related-projects', '', 'com_newsfeeds', 'left', 'Joomla builds on and collaborates with many other free and open source projects. Keep up with the latest news from some of them.', 1, 0, '0000-00-00 00:00:00', NULL, 4, 0, 0, ''),
(12, 0, 'Contacts', '', 'contacts', '', 'com_contact_details', 'left', 'Contact Details for this Web site', 1, 0, '0000-00-00 00:00:00', NULL, 0, 0, 0, ''),
(13, 0, 'Joomla', '', 'joomla', '', 'com_banner', 'left', '', 1, 0, '0000-00-00 00:00:00', NULL, 0, 0, 0, ''),
(14, 0, 'Text Ads', '', 'text-ads', '', 'com_banner', 'left', '', 1, 0, '0000-00-00 00:00:00', NULL, 0, 0, 0, ''),
(15, 0, 'Features', '', 'features', '', 'com_content', 'left', '', 0, 0, '0000-00-00 00:00:00', NULL, 6, 0, 0, ''),
(17, 0, 'Benefits', '', 'benefits', '', 'com_content', 'left', '', 0, 0, '0000-00-00 00:00:00', NULL, 4, 0, 0, ''),
(18, 0, 'Platforms', '', 'platforms', '', 'com_content', 'left', '', 0, 0, '0000-00-00 00:00:00', NULL, 3, 0, 0, ''),
(19, 0, 'Other Resources', '', 'other-resources', '', 'com_weblinks', 'left', '', 1, 0, '0000-00-00 00:00:00', NULL, 2, 0, 0, ''),
(29, 0, 'The PDMA', '', 'the-pdma', '', '4', 'left', '<p>Information about the software behind Joomla!</p>', 1, 0, '0000-00-00 00:00:00', NULL, 2, 0, 0, ''),
(28, 0, 'Current Users', '', 'current-users', '', '3', 'left', 'Questions that users migrating to Joomla! 1.5 are likely to raise<br />', 1, 0, '0000-00-00 00:00:00', NULL, 2, 0, 0, ''),
(25, 0, 'The Project', '', 'the-project', '', '4', 'left', 'General facts about Joomla!<br />', 1, 0, '0000-00-00 00:00:00', NULL, 1, 0, 0, ''),
(27, 0, 'New to Joomla!', '', 'new-to-joomla', '', '3', 'left', 'Questions for new users of Joomla!', 1, 0, '0000-00-00 00:00:00', NULL, 3, 0, 0, ''),
(30, 0, 'The Community', '', 'the-community', '', '4', 'left', 'About the millions of Joomla! users and Web sites<br />', 1, 0, '0000-00-00 00:00:00', NULL, 3, 0, 0, ''),
(31, 0, 'General', '', 'general', '', '3', 'left', 'General questions about the Joomla! CMS', 1, 0, '0000-00-00 00:00:00', NULL, 1, 0, 0, ''),
(32, 0, 'Languages', '', 'languages', '', '3', 'left', 'Questions related to localisation and languages', 1, 0, '0000-00-00 00:00:00', NULL, 4, 0, 0, ''),
(33, 0, 'Joomla! Promo', '', 'joomla-promo', '', 'com_banner', 'left', '', 1, 0, '0000-00-00 00:00:00', NULL, 1, 0, 0, ''),
(900, 0, 'Additional Information', 'Personal', '', '', 'com_extending_field_list', 'left', '', 1, 62, '2007-03-30 14:36:58', NULL, 2, 0, 0, '');

-- --------------------------------------------------------

--
-- Table structure for table `jos_components`
--

CREATE TABLE `jos_components` (
  `id` int(11) NOT NULL auto_increment,
  `name` varchar(50) NOT NULL default '',
  `link` varchar(255) NOT NULL default '',
  `menuid` int(11) unsigned NOT NULL default '0',
  `parent` int(11) unsigned NOT NULL default '0',
  `admin_menu_link` varchar(255) NOT NULL default '',
  `admin_menu_alt` varchar(255) NOT NULL default '',
  `option` varchar(50) NOT NULL default '',
  `ordering` int(11) NOT NULL default '0',
  `admin_menu_img` varchar(255) NOT NULL default '',
  `iscore` tinyint(4) NOT NULL default '0',
  `params` text NOT NULL,
  `enabled` tinyint(4) NOT NULL default '1',
  PRIMARY KEY  (`id`),
  KEY `parent_option` (`parent`,`option`(32))
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=44 ;

--
-- Dumping data for table `jos_components`
--

INSERT INTO `jos_components` (`id`, `name`, `link`, `menuid`, `parent`, `admin_menu_link`, `admin_menu_alt`, `option`, `ordering`, `admin_menu_img`, `iscore`, `params`, `enabled`) VALUES
(1, 'Banners', '', 0, 0, '', 'Banner Management', 'com_banners', 0, 'js/ThemeOffice/component.png', 0, 'track_impressions=0\ntrack_clicks=0\ntag_prefix=\n\n', 1),
(2, 'Banners', '', 0, 1, 'option=com_banners', 'Active Banners', 'com_banners', 1, 'js/ThemeOffice/edit.png', 0, '', 1),
(3, 'Clients', '', 0, 1, 'option=com_banners&c=client', 'Manage Clients', 'com_banners', 2, 'js/ThemeOffice/categories.png', 0, '', 1),
(4, 'Web Links', 'option=com_weblinks', 0, 0, '', 'Manage Weblinks', 'com_weblinks', 0, 'js/ThemeOffice/component.png', 0, 'show_comp_description=1\ncomp_description=\nshow_link_hits=1\nshow_link_description=1\nshow_other_cats=1\nshow_headings=1\nshow_page_title=1\nlink_target=0\nlink_icons=\n\n', 1),
(5, 'Links', '', 0, 4, 'option=com_weblinks', 'View existing weblinks', 'com_weblinks', 1, 'js/ThemeOffice/edit.png', 0, '', 1),
(6, 'Categories', '', 0, 4, 'option=com_categories&section=com_weblinks', 'Manage weblink categories', '', 2, 'js/ThemeOffice/categories.png', 0, '', 1),
(7, 'Contacts', 'option=com_contact', 0, 0, '', 'Edit contact details', 'com_contact', 0, 'js/ThemeOffice/component.png', 1, 'contact_icons=0\nicon_address=\nicon_email=\nicon_telephone=\nicon_fax=\nicon_misc=\nshow_headings=1\nshow_position=1\nshow_email=0\nshow_telephone=1\nshow_mobile=1\nshow_fax=1\nbannedEmail=\nbannedSubject=\nbannedText=\nsession=1\ncustomReply=0\n\n', 1),
(8, 'Contacts', '', 0, 7, 'option=com_contact', 'Edit contact details', 'com_contact', 0, 'js/ThemeOffice/edit.png', 1, '', 1),
(9, 'Categories', '', 0, 7, 'option=com_categories&section=com_contact_details', 'Manage contact categories', '', 2, 'js/ThemeOffice/categories.png', 1, 'contact_icons=0\nicon_address=\nicon_email=\nicon_telephone=\nicon_fax=\nicon_misc=\nshow_headings=1\nshow_position=1\nshow_email=0\nshow_telephone=1\nshow_mobile=1\nshow_fax=1\nbannedEmail=\nbannedSubject=\nbannedText=\nsession=1\ncustomReply=0\n\n', 1),
(10, 'Polls', 'option=com_poll', 0, 0, 'option=com_poll', 'Manage Polls', 'com_poll', 0, 'js/ThemeOffice/component.png', 0, '', 1),
(11, 'News Feeds', 'option=com_newsfeeds', 0, 0, '', 'News Feeds Management', 'com_newsfeeds', 0, 'js/ThemeOffice/component.png', 0, '', 1),
(12, 'Feeds', '', 0, 11, 'option=com_newsfeeds', 'Manage News Feeds', 'com_newsfeeds', 1, 'js/ThemeOffice/edit.png', 0, 'show_headings=1\nshow_name=1\nshow_articles=1\nshow_link=1\nshow_cat_description=1\nshow_cat_items=1\nshow_feed_image=1\nshow_feed_description=1\nshow_item_description=1\nfeed_word_count=0\n\n', 1),
(13, 'Categories', '', 0, 11, 'option=com_categories&section=com_newsfeeds', 'Manage Categories', '', 2, 'js/ThemeOffice/categories.png', 0, '', 1),
(14, 'User', 'option=com_user', 0, 0, '', '', 'com_user', 0, '', 1, '', 1),
(15, 'Search', 'option=com_search', 0, 0, 'option=com_search', 'Search Statistics', 'com_search', 0, 'js/ThemeOffice/component.png', 1, 'enabled=0\n\n', 1),
(16, 'Categories', '', 0, 1, 'option=com_categories&section=com_banner', 'Categories', '', 3, '', 1, '', 1),
(17, 'Wrapper', 'option=com_wrapper', 0, 0, '', 'Wrapper', 'com_wrapper', 0, '', 1, '', 1),
(18, 'Mail To', '', 0, 0, '', '', 'com_mailto', 0, '', 1, '', 1),
(19, 'Media Manager', '', 0, 0, 'option=com_media', 'Media Manager', 'com_media', 0, '', 1, 'upload_extensions=bmp,csv,doc,epg,gif,ico,jpg,odg,odp,ods,odt,pdf,png,ppt,swf,txt,xcf,xls,BMP,CSV,DOC,EPG,GIF,ICO,JPG,ODG,ODP,ODS,ODT,PDF,PNG,PPT,SWF,TXT,XCF,XLS\nupload_maxsize=10000000\nfile_path=images\nimage_path=images/stories\nrestrict_uploads=1\ncheck_mime=1\nimage_extensions=bmp,gif,jpg,png\nignore_extensions=\nupload_mime=image/jpeg,image/gif,image/png,image/bmp,application/x-shockwave-flash,application/msword,application/excel,application/pdf,application/powerpoint,text/plain,application/x-zip\nupload_mime_illegal=text/html', 1),
(20, 'Articles', 'option=com_content', 0, 0, '', '', 'com_content', 0, '', 1, 'show_noauth=0\nshow_title=1\nlink_titles=0\nshow_intro=1\nshow_section=0\nlink_section=0\nshow_category=0\nlink_category=0\nshow_author=1\nshow_create_date=1\nshow_modify_date=1\nshow_item_navigation=0\nshow_readmore=1\nshow_vote=0\nshow_icons=1\nshow_pdf_icon=1\nshow_print_icon=1\nshow_email_icon=1\nshow_hits=1\nfeed_summary=0\n\n', 1),
(21, 'Configuration Manager', '', 0, 0, '', 'Configuration', 'com_config', 0, '', 1, '', 1),
(22, 'Installation Manager', '', 0, 0, '', 'Installer', 'com_installer', 0, '', 1, '', 1),
(23, 'Language Manager', '', 0, 0, '', 'Languages', 'com_languages', 0, '', 1, '', 1),
(24, 'Mass mail', '', 0, 0, '', 'Mass Mail', 'com_massmail', 0, '', 1, 'mailSubjectPrefix=\nmailBodySuffix=\n\n', 1),
(25, 'Menu Editor', '', 0, 0, '', 'Menu Editor', 'com_menus', 0, '', 1, '', 1),
(27, 'Messaging', '', 0, 0, '', 'Messages', 'com_messages', 0, '', 1, '', 1),
(28, 'Modules Manager', '', 0, 0, '', 'Modules', 'com_modules', 0, '', 1, '', 1),
(29, 'Plugin Manager', '', 0, 0, '', 'Plugins', 'com_plugins', 0, '', 1, '', 1),
(30, 'Template Manager', '', 0, 0, '', 'Templates', 'com_templates', 0, '', 1, '', 1),
(31, 'User Manager', '', 0, 0, '', 'Users', 'com_users', 0, '', 1, 'allowUserRegistration=1\nnew_usertype=Registered\nuseractivation=1\nfrontend_userparams=1\n\n', 1),
(32, 'Cache Manager', '', 0, 0, '', 'Cache', 'com_cache', 0, '', 1, '', 1),
(33, 'Control Panel', '', 0, 0, '', 'Control Panel', 'com_cpanel', 0, '', 1, '', 1),
(34, 'Community Builder', 'option=com_comprofiler', 0, 0, 'option=com_comprofiler', 'Community Builder', 'com_comprofiler', 0, 'js/ThemeOffice/component.png', 0, '', 1),
(35, 'User Management', '', 0, 34, 'option=com_comprofiler&task=showusers', 'User Management', 'com_comprofiler', 0, 'js/ThemeOffice/user.png', 0, '', 1),
(36, 'Tab Management', '', 0, 34, 'option=com_comprofiler&task=showTab', 'Tab Management', 'com_comprofiler', 1, 'js/ThemeOffice/article.png', 0, '', 1),
(37, 'Field Management', '', 0, 34, 'option=com_comprofiler&task=showField', 'Field Management', 'com_comprofiler', 2, 'js/ThemeOffice/content.png', 0, '', 1),
(38, 'List Management', '', 0, 34, 'option=com_comprofiler&task=showLists', 'List Management', 'com_comprofiler', 3, 'js/ThemeOffice/static.png', 0, '', 1),
(39, 'Plugin Management', '', 0, 34, 'option=com_comprofiler&task=showPlugins', 'Plugin Management', 'com_comprofiler', 4, 'js/ThemeOffice/plugin.png', 0, '', 1),
(40, 'Tools', '', 0, 34, 'option=com_comprofiler&task=tools', 'Tools', 'com_comprofiler', 5, 'js/ThemeOffice/component.png', 0, '', 1),
(41, 'Configuration', '', 0, 34, 'option=com_comprofiler&task=showconfig', 'Configuration', 'com_comprofiler', 6, 'js/ThemeOffice/config.png', 0, '', 1);

-- --------------------------------------------------------

--
-- Table structure for table `jos_comprofiler`
--

CREATE TABLE `jos_comprofiler` (
  `id` int(11) NOT NULL default '0',
  `user_id` int(11) NOT NULL default '0',
  `firstname` varchar(100) default NULL,
  `middlename` varchar(100) default NULL,
  `lastname` varchar(100) default NULL,
  `hits` int(11) NOT NULL default '0',
  `message_last_sent` datetime NOT NULL default '0000-00-00 00:00:00',
  `message_number_sent` int(11) NOT NULL default '0',
  `avatar` varchar(255) default NULL,
  `avatarapproved` tinyint(4) NOT NULL default '1',
  `approved` tinyint(4) NOT NULL default '1',
  `confirmed` tinyint(4) NOT NULL default '1',
  `lastupdatedate` datetime NOT NULL default '0000-00-00 00:00:00',
  `registeripaddr` varchar(50) NOT NULL default '',
  `cbactivation` varchar(50) NOT NULL default '',
  `banned` tinyint(4) NOT NULL default '0',
  `banneddate` datetime default NULL,
  `unbanneddate` datetime default NULL,
  `bannedby` int(11) default NULL,
  `unbannedby` int(11) default NULL,
  `bannedreason` mediumtext,
  `acceptedterms` tinyint(1) NOT NULL default '0',
  `cb_gender` varchar(255) default NULL,
  `cb_dateofbirth` date default NULL,
  `cb_typeofidentification` varchar(255) default NULL,
  `cb_cnic` varchar(255) default NULL,
  `cb_passportno` varchar(255) default NULL,
  `cb_country` varchar(255) default NULL,
  `cb_stateprovince` varchar(255) default NULL,
  `cb_city` varchar(255) default NULL,
  `cb_status` varchar(255) default NULL,
  `cb_monthlyincome` varchar(255) default NULL,
  `cb_availability` varchar(255) default NULL,
  `cb_startdate` date default NULL,
  `cb_enddate` date default NULL,
  `cb_starthours` varchar(255) default NULL,
  `cb_endhous` varchar(255) default NULL,
  `cb_preferredmediumofcontact` varchar(255) default NULL,
  `cb_presentaddress` varchar(255) default NULL,
  `cb_permanentaddress` varchar(255) default NULL,
  `cb_contactperson` varchar(255) default NULL,
  `cb_mobilenumber` varchar(255) default NULL,
  `cb_phonenumber` varchar(255) default NULL,
  `cb_emergencycontactnumber` varchar(255) default NULL,
  `cb_faxnumber` varchar(255) default NULL,
  `cb_website` varchar(255) default NULL,
  `cb_occupation` varchar(255) default NULL,
  `cb_skills` mediumtext,
  `cb_alerts` varchar(255) default NULL,
  `cb_pname` varchar(255) default NULL,
  `cb_privacystatement` varchar(255) default NULL,
  `cb_projectarea` varchar(255) default NULL,
  PRIMARY KEY  (`id`),
  UNIQUE KEY `user_id` (`user_id`),
  KEY `apprconfbanid` (`approved`,`confirmed`,`banned`,`id`),
  KEY `avatappr_apr_conf_ban_avatar` (`avatarapproved`,`approved`,`confirmed`,`banned`,`avatar`),
  KEY `lastupdatedate` (`lastupdatedate`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_comprofiler`
--

INSERT INTO `jos_comprofiler` (`id`, `user_id`, `firstname`, `middlename`, `lastname`, `hits`, `message_last_sent`, `message_number_sent`, `avatar`, `avatarapproved`, `approved`, `confirmed`, `lastupdatedate`, `registeripaddr`, `cbactivation`, `banned`, `banneddate`, `unbanneddate`, `bannedby`, `unbannedby`, `bannedreason`, `acceptedterms`, `cb_gender`, `cb_dateofbirth`, `cb_typeofidentification`, `cb_cnic`, `cb_passportno`, `cb_country`, `cb_stateprovince`, `cb_city`, `cb_status`, `cb_monthlyincome`, `cb_availability`, `cb_startdate`, `cb_enddate`, `cb_starthours`, `cb_endhous`, `cb_preferredmediumofcontact`, `cb_presentaddress`, `cb_permanentaddress`, `cb_contactperson`, `cb_mobilenumber`, `cb_phonenumber`, `cb_emergencycontactnumber`, `cb_faxnumber`, `cb_website`, `cb_occupation`, `cb_skills`, `cb_alerts`, `cb_pname`, `cb_privacystatement`, `cb_projectarea`) VALUES
(62, 62, NULL, NULL, NULL, 0, '0000-00-00 00:00:00', 0, NULL, 1, 1, 1, '0000-00-00 00:00:00', '', '', 0, NULL, NULL, NULL, NULL, NULL, 0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL),
(63, 63, 'Saeed', '', 'Ahmed', 3, '2010-04-16 20:13:59', 1, 'gallery/guitar.gif', 1, 1, 1, '2010-04-19 12:01:06', '', '', 0, NULL, NULL, NULL, NULL, NULL, 0, 'Male', NULL, 'CNIC', '1234-1223-33333', '', 'Pakistan', 'Sindh', 'Khi', 'single', '10,000-20,000', 'During Disaster Only', '2010-04-01', '2010-04-20', '8 AM', '6 PM', 'Mobile No', 'abc', '', '', '0306-8763260', '', '', '', '', 'student', 'abc', 'Yes', '01', NULL, NULL),
(64, 64, 'Atif', '', 'kamran', 4, '0000-00-00 00:00:00', 0, NULL, 1, 1, 1, '2010-04-19 12:10:55', '', '', 0, NULL, NULL, NULL, NULL, NULL, 0, 'Male', NULL, 'CNIC', '123-4567-9843', '', 'Pakistan', 'punjab', 'Multan', 'single', '20,000-30,000', 'Every Time', '2010-04-05', '2010-04-28', '9;00 AM', '8;00 PM', 'Mobile No', 'karachi', '', '', '0334-6960886', '', '', '', '', 'Engineer', 'abc', 'Yes', '01', NULL, NULL),
(65, 65, 'Muhamad', 'Waseem', 'Sadiq', 2, '0000-00-00 00:00:00', 0, 'gallery/ball.gif', 1, 1, 1, '2010-04-16 21:51:27', '127.0.0.1', '', 0, NULL, NULL, NULL, NULL, NULL, 0, 'Male', NULL, 'CNIC', '123-444-666', '', 'Pakistan', 'sindh', 'khi', 'single', '20,000-30,000', 'Every Time', '2010-04-05', '2010-04-30', '6 AM', '8 PM', 'Mobile No', 'F B Area', '', '', '0333-444444444', '', '', '', '', 'doctor', 'aaaaaaa', 'Yes', '', NULL, NULL),
(66, 66, 'Hameed', 'ul', 'Rasheed', 0, '2010-04-29 06:57:33', 1, NULL, 1, 1, 1, '0000-00-00 00:00:00', '', '', 0, NULL, NULL, NULL, NULL, NULL, 0, 'Male', '1991-01-01', 'CNIC', '345-677-4444', '', 'Pakistan', 'Punjab', 'Lahoor', 'single', '20,000-30,000', 'Every Time', '2010-04-06', '2010-04-30', '6:00 AM', '5:00 PM', 'Mobile No', 'Lahoor', '', '', '0333-4561234', '', '', '', '', 'Engineer', 'aaaaa', 'Yes', '', NULL, NULL);

-- --------------------------------------------------------

--
-- Table structure for table `jos_comprofiler_fields`
--

CREATE TABLE `jos_comprofiler_fields` (
  `fieldid` int(11) NOT NULL auto_increment,
  `name` varchar(50) NOT NULL default '',
  `tablecolumns` text NOT NULL,
  `table` varchar(50) NOT NULL default '#__comprofiler',
  `title` varchar(255) NOT NULL default '',
  `description` mediumtext NOT NULL,
  `type` varchar(50) NOT NULL default '',
  `maxlength` int(11) default NULL,
  `size` int(11) default NULL,
  `required` tinyint(4) default '0',
  `tabid` int(11) default NULL,
  `ordering` int(11) default NULL,
  `cols` int(11) default NULL,
  `rows` int(11) default NULL,
  `value` varchar(50) default NULL,
  `default` mediumtext,
  `published` tinyint(1) NOT NULL default '1',
  `registration` tinyint(1) NOT NULL default '0',
  `profile` tinyint(1) NOT NULL default '1',
  `displaytitle` tinyint(1) NOT NULL default '1',
  `readonly` tinyint(1) NOT NULL default '0',
  `searchable` tinyint(1) NOT NULL default '0',
  `calculated` tinyint(1) NOT NULL default '0',
  `sys` tinyint(4) NOT NULL default '0',
  `pluginid` int(11) NOT NULL default '0',
  `params` mediumtext,
  PRIMARY KEY  (`fieldid`),
  KEY `tabid_pub_prof_order` (`tabid`,`published`,`profile`,`ordering`),
  KEY `readonly_published_tabid` (`readonly`,`published`,`tabid`),
  KEY `registration_published_order` (`registration`,`published`,`ordering`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=93 ;

--
-- Dumping data for table `jos_comprofiler_fields`
--

INSERT INTO `jos_comprofiler_fields` (`fieldid`, `name`, `tablecolumns`, `table`, `title`, `description`, `type`, `maxlength`, `size`, `required`, `tabid`, `ordering`, `cols`, `rows`, `value`, `default`, `published`, `registration`, `profile`, `displaytitle`, `readonly`, `searchable`, `calculated`, `sys`, `pluginid`, `params`) VALUES
(41, 'name', 'name', '#__users', '_UE_NAME', '_UE_REGWARN_NAME', 'predefined', NULL, NULL, 0, 11, -51, NULL, NULL, NULL, NULL, 1, 0, 0, 1, 0, 0, 1, 1, 1, NULL),
(26, 'onlinestatus', '', '#__comprofiler', '_UE_ONLINESTATUS', '', 'status', 0, 0, 0, 21, -21, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 1, 1, 1, ''),
(27, 'lastvisitDate', 'lastvisitDate', '#__users', '_UE_LASTONLINE', '', 'datetime', NULL, NULL, 0, 21, -19, NULL, NULL, NULL, NULL, 1, 0, 1, 1, 1, 0, 1, 1, 1, 'field_display_by=2'),
(28, 'registerDate', 'registerDate', '#__users', '_UE_MEMBERSINCE', '', 'datetime', NULL, NULL, 0, 21, -20, NULL, NULL, NULL, NULL, 1, 0, 1, 1, 1, 0, 1, 1, 1, 'field_display_by=2'),
(29, 'avatar', 'avatar,avatarapproved', '#__comprofiler', '_UE_IMAGE', '', 'image', 0, 0, 0, 20, 1, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 1, 1, 1, 'avatarHeight=\navatarWidth=\navatarSize=\nthumbHeight=\nthumbWidth='),
(42, 'username', 'username', '#__users', '_UE_UNAME', '_UE_VALID_UNAME', 'predefined', NULL, NULL, 1, 11, -46, NULL, NULL, NULL, NULL, 1, 1, 1, 1, 0, 1, 1, 1, 1, NULL),
(45, 'formatname', '', '#__comprofiler', '_UE_FORMATNAME', '', 'formatname', NULL, NULL, 0, 11, -52, NULL, NULL, NULL, NULL, 1, 0, 1, 0, 1, 0, 1, 1, 1, NULL),
(46, 'firstname', 'firstname', '#__comprofiler', '_UE_YOUR_FNAME', '_UE_REGWARN_FNAME', 'predefined', NULL, NULL, 1, 11, -50, NULL, NULL, NULL, NULL, 1, 1, 1, 1, 0, 0, 1, 1, 1, NULL),
(47, 'middlename', 'middlename', '#__comprofiler', '_UE_YOUR_MNAME', '_UE_REGWARN_MNAME', 'predefined', NULL, NULL, 0, 11, -49, NULL, NULL, NULL, NULL, 1, 1, 0, 1, 0, 0, 1, 1, 1, NULL),
(48, 'lastname', 'lastname', '#__comprofiler', '_UE_YOUR_LNAME', '_UE_REGWARN_LNAME', 'predefined', NULL, NULL, 1, 11, -48, NULL, NULL, NULL, NULL, 1, 1, 0, 1, 0, 0, 1, 1, 1, NULL),
(49, 'lastupdatedate', 'lastupdatedate', '#__comprofiler', '_UE_LASTUPDATEDON', '', 'datetime', NULL, NULL, 0, 21, -18, NULL, NULL, NULL, NULL, 1, 0, 1, 1, 1, 0, 1, 1, 1, 'field_display_by=2'),
(50, 'email', 'email', '#__users', '_UE_EMAIL', '_UE_REGWARN_MAIL', 'primaryemailaddress', NULL, NULL, 1, 11, -47, NULL, NULL, NULL, NULL, 1, 1, 1, 1, 0, 0, 1, 1, 1, NULL),
(25, 'hits', 'hits', '#__comprofiler', '_UE_HITS', '_UE_HITS_DESC', 'counter', 0, 0, 0, 21, -22, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 1, 1, 1, ''),
(51, 'password', 'password', '#__users', '_UE_PASS', '_UE_VALID_PASS', 'password', 50, NULL, 1, 11, -45, NULL, NULL, NULL, NULL, 1, 1, 0, 1, 0, 0, 1, 1, 1, NULL),
(52, 'params', 'params', '#__users', '_UE_USERPARAMS', '', 'userparams', NULL, NULL, 0, 11, -30, NULL, NULL, NULL, NULL, 1, 0, 0, 1, 0, 0, 1, 1, 1, NULL),
(24, 'connections', '', '#__comprofiler', '_UE_CONNECTION', '', 'connections', NULL, NULL, 0, 21, -17, NULL, NULL, NULL, NULL, 1, 0, 1, 1, 1, 0, 1, 1, 1, NULL),
(23, 'forumrank', '', '#__comprofiler', '_UE_FORUM_FORUMRANKING', '', 'forumstats', NULL, NULL, 0, 21, -16, NULL, NULL, NULL, NULL, 1, 0, 1, 1, 1, 0, 1, 1, 4, NULL),
(22, 'forumposts', '', '#__comprofiler', '_UE_FORUM_TOTALPOSTS', '', 'forumstats', NULL, NULL, 0, 21, -15, NULL, NULL, NULL, NULL, 1, 0, 1, 1, 1, 0, 1, 1, 4, NULL),
(21, 'forumkarma', '', '#__comprofiler', '_UE_FORUM_KARMA', '', 'forumstats', NULL, NULL, 0, 21, -14, NULL, NULL, NULL, NULL, 1, 0, 1, 1, 1, 0, 1, 1, 4, NULL),
(20, 'forumsignature', '', '#__comprofiler', '_UE_FB_SIGNATURE', '', 'forumsettings', NULL, NULL, 0, 13, 2, 60, 5, NULL, NULL, 1, 0, 0, 1, 0, 0, 0, 1, 4, NULL),
(19, 'forumview', '', '#__comprofiler', '_UE_FB_VIEWTYPE_TITLE', '', 'forumsettings', NULL, NULL, 1, 13, 3, NULL, NULL, NULL, 'flat', 1, 0, 0, 1, 0, 0, 0, 1, 4, NULL),
(18, 'forumorder', '', '#__comprofiler', '_UE_FB_ORDERING_TITLE', '', 'forumsettings', NULL, NULL, 1, 13, 1, NULL, NULL, NULL, '0', 1, 0, 0, 1, 0, 0, 0, 1, 4, NULL),
(56, 'cb_gender', 'cb_gender', '#__comprofiler', 'Gender', '', 'select', 0, 0, 1, 11, -29, 0, 0, NULL, 'Male', 1, 1, 1, 1, 0, 0, 0, 0, 1, ''),
(84, 'cb_occupation', 'cb_occupation', '#__comprofiler', 'Occupation', '', 'text', 0, 0, 1, 11, -5, 0, 0, NULL, 'Doctor', 1, 1, 1, 1, 0, 1, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(57, 'cb_dateofbirth', 'cb_dateofbirth', '#__comprofiler', 'Date Of Birth', '', 'date', 0, 0, 1, 11, -28, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'year_min=-110\nyear_max=+25\nfield_display_by=0\nfield_display_years_text=1\nfield_display_ago_text=1\nfield_search_by=0\nduration_title=\nshow_date_time=1'),
(58, 'cb_typeofidentification', 'cb_typeofidentification', '#__comprofiler', 'Type of Identification', '', 'select', 0, 0, 1, 11, -27, 0, 0, NULL, 'CNIC', 1, 1, 1, 1, 0, 0, 0, 0, 1, ''),
(59, 'cb_cnic', 'cb_cnic', '#__comprofiler', 'CNIC#', '', 'text', 0, 0, 1, 11, -26, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(60, 'cb_passportno', 'cb_passportno', '#__comprofiler', 'Passport #', '', 'text', 0, 0, 0, 11, -25, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(61, 'cb_country', 'cb_country', '#__comprofiler', 'Country', '', 'select', 0, 0, 1, 11, -24, 0, 0, NULL, 'Pakistan', 1, 1, 1, 1, 0, 0, 0, 0, 1, ''),
(62, 'cb_stateprovince', 'cb_stateprovince', '#__comprofiler', 'State / Province', '', 'text', 0, 0, 1, 11, -23, 0, 0, NULL, 'Sindh', 1, 1, 1, 1, 0, 1, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(63, 'cb_city', 'cb_city', '#__comprofiler', 'City', '', 'text', 0, 0, 1, 11, -22, 0, 0, NULL, 'Karachi', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(64, 'cb_status', 'cb_status', '#__comprofiler', 'Status', '', 'select', 0, 0, 1, 11, -21, 0, 0, NULL, 'single', 1, 1, 1, 1, 0, 0, 0, 0, 1, ''),
(69, 'cb_availability', 'cb_availability', '#__comprofiler', 'Availability', '', 'select', 0, 0, 1, 11, -19, 0, 0, NULL, 'Every Time', 1, 1, 1, 1, 0, 0, 0, 0, 1, ''),
(68, 'cb_monthlyincome', 'cb_monthlyincome', '#__comprofiler', 'Monthly Income', '', 'select', 0, 0, 1, 11, -20, 0, 0, NULL, '10,000-20,000', 1, 1, 1, 1, 0, 0, 0, 0, 1, ''),
(70, 'cb_startdate', 'cb_startdate', '#__comprofiler', 'Start Date', '', 'date', 0, 0, 1, 11, -18, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'year_min=-110\nyear_max=+25\nfield_display_by=0\nfield_display_years_text=1\nfield_display_ago_text=1\nfield_search_by=0\nduration_title=\nshow_date_time=1'),
(71, 'cb_enddate', 'cb_enddate', '#__comprofiler', 'End Date', '', 'date', 0, 0, 1, 11, -17, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'year_min=-110\nyear_max=+25\nfield_display_by=0\nfield_display_years_text=1\nfield_display_ago_text=1\nfield_search_by=0\nduration_title=\nshow_date_time=0'),
(73, 'cb_starthours', 'cb_starthours', '#__comprofiler', 'Start Hours', '', 'text', 0, 0, 1, 11, -16, 0, 0, NULL, '08:00 AM', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(74, 'cb_endhous', 'cb_endhous', '#__comprofiler', 'End Hours', '', 'text', 0, 0, 1, 11, -15, 0, 0, NULL, '06:00 PM', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(75, 'cb_preferredmediumofcontact', 'cb_preferredmediumofcontact', '#__comprofiler', 'Preferred Medium Of Contact', '', 'select', 0, 0, 1, 11, -14, 0, 0, NULL, 'Mobile No ', 1, 1, 1, 1, 0, 0, 0, 0, 1, ''),
(76, 'cb_presentaddress', 'cb_presentaddress', '#__comprofiler', 'Peresent Address', '', 'text', 0, 0, 1, 11, -13, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(77, 'cb_permanentaddress', 'cb_permanentaddress', '#__comprofiler', 'Permanent Address', '', 'text', 0, 0, 0, 11, -12, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(78, 'cb_contactperson', 'cb_contactperson', '#__comprofiler', 'Contact Person', '', 'text', 0, 0, 0, 11, -11, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(79, 'cb_mobilenumber', 'cb_mobilenumber', '#__comprofiler', 'Mobile Number', '', 'text', 0, 0, 1, 11, -10, 0, 0, NULL, '0306-8763260', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(80, 'cb_phonenumber', 'cb_phonenumber', '#__comprofiler', 'Phone Number', '', 'text', 0, 0, 0, 11, -9, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(81, 'cb_emergencycontactnumber', 'cb_emergencycontactnumber', '#__comprofiler', 'Emergency Contact Number', '', 'text', 0, 0, 0, 11, -8, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(82, 'cb_faxnumber', 'cb_faxnumber', '#__comprofiler', 'FAX Number', '', 'text', 0, 0, 0, 11, -7, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(83, 'cb_website', 'cb_website', '#__comprofiler', 'Website', '', 'text', 0, 0, 0, 11, -6, 0, 0, NULL, 'http://www.vms.com', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(85, 'cb_skills', 'cb_skills', '#__comprofiler', 'Skills', '', 'textarea', 0, 0, 1, 11, -4, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(91, 'cb_privacystatement', 'cb_privacystatement', '#__comprofiler', 'Privacy Statement', '', 'select', 0, 0, 0, 11, -2, 0, 0, NULL, 'Agree', 1, 1, 0, 0, 0, 0, 0, 0, 1, ''),
(92, 'cb_projectarea', 'cb_projectarea', '#__comprofiler', 'Project Area', '', 'text', 0, 0, 0, 23, 2, 0, 0, NULL, '', 1, 1, 1, 1, 0, 0, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit='),
(88, 'cb_alerts', 'cb_alerts', '#__comprofiler', 'Would to Like to recieve News Letters/Alerts from PDMA time to time', '', 'select', 0, 0, 1, 11, -3, 0, 0, NULL, 'Yes', 1, 1, 1, 1, 0, 0, 0, 0, 1, ''),
(90, 'cb_pname', 'cb_pname', '#__comprofiler', 'Select Project ', '<p>Check news updates for selecting project.</p>', 'text', 0, 0, 0, 23, 1, 0, 0, NULL, 'Enter Project code', 1, 1, 1, 1, 0, 1, 0, 0, 1, 'fieldMinLength=0\nfieldValidateExpression=\npregexp=/^.*$/\npregexperror=Not a valid input\nfieldValidateForbiddenList_register=http:,https:,mailto:,//.[url],<a,</a>,&#\nfieldValidateForbiddenList_edit=');

-- --------------------------------------------------------

--
-- Table structure for table `jos_comprofiler_field_values`
--

CREATE TABLE `jos_comprofiler_field_values` (
  `fieldvalueid` int(11) NOT NULL auto_increment,
  `fieldid` int(11) NOT NULL default '0',
  `fieldtitle` varchar(255) NOT NULL default '',
  `ordering` int(11) NOT NULL default '0',
  `sys` tinyint(4) NOT NULL default '0',
  PRIMARY KEY  (`fieldvalueid`),
  KEY `fieldid_ordering` (`fieldid`,`ordering`),
  KEY `fieldtitle_id` (`fieldtitle`,`fieldid`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=79 ;

--
-- Dumping data for table `jos_comprofiler_field_values`
--

INSERT INTO `jos_comprofiler_field_values` (`fieldvalueid`, `fieldid`, `fieldtitle`, `ordering`, `sys`) VALUES
(54, 56, 'Female', 2, 0),
(53, 56, 'Male', 1, 0),
(56, 58, 'Passport No', 2, 0),
(55, 58, 'CNIC', 1, 0),
(61, 61, 'China', 5, 0),
(60, 61, 'Afghanistan', 4, 0),
(59, 61, 'Iran', 3, 0),
(58, 61, 'India', 2, 0),
(57, 61, 'Pakistan', 1, 0),
(65, 64, 'Married', 1, 0),
(74, 68, 'More than 100000', 8, 0),
(73, 68, '60,000-70,000', 7, 0),
(72, 68, '50,000-60,000', 6, 0),
(71, 68, '40,000-50,000', 5, 0),
(70, 68, '30,000-40,000', 4, 0),
(69, 68, '20,000-30,000', 3, 0),
(68, 68, '10,000-20,000', 2, 0),
(67, 68, 'Less Than 10,000', 1, 0),
(76, 69, 'During Disaster Only', 2, 0),
(75, 69, 'Every Time', 1, 0),
(42, 75, 'Present Address', 1, 0),
(43, 75, 'Permanent Address', 2, 0),
(44, 75, 'Contact Person', 3, 0),
(45, 75, 'Phone Number', 4, 0),
(46, 75, 'Mobile No', 5, 0),
(47, 75, 'Fax Number', 6, 0),
(48, 75, 'Wesite', 7, 0),
(49, 75, 'Emergency Contact No', 8, 0),
(50, 75, 'Email Address', 9, 0),
(51, 88, 'Yes', 1, 0),
(52, 88, 'No', 2, 0),
(62, 61, 'USA', 6, 0),
(63, 61, 'England', 7, 0),
(64, 61, 'Germany', 8, 0),
(66, 64, 'single', 2, 0),
(77, 91, 'Agree', 1, 0),
(78, 91, 'Not agree', 2, 0);

-- --------------------------------------------------------

--
-- Table structure for table `jos_comprofiler_lists`
--

CREATE TABLE `jos_comprofiler_lists` (
  `listid` int(11) NOT NULL auto_increment,
  `title` varchar(255) NOT NULL default '',
  `description` mediumtext,
  `published` tinyint(1) NOT NULL default '0',
  `default` tinyint(1) NOT NULL default '0',
  `usergroupids` varchar(255) default NULL,
  `useraccessgroupid` int(9) NOT NULL default '18',
  `sortfields` varchar(255) default NULL,
  `filterfields` mediumtext,
  `ordering` int(11) NOT NULL default '0',
  `col1title` varchar(255) default NULL,
  `col1enabled` tinyint(1) NOT NULL default '0',
  `col1fields` mediumtext,
  `col2title` varchar(255) default NULL,
  `col2enabled` tinyint(1) NOT NULL default '0',
  `col1captions` tinyint(1) NOT NULL default '0',
  `col2fields` mediumtext,
  `col2captions` tinyint(1) NOT NULL default '0',
  `col3title` varchar(255) default NULL,
  `col3enabled` tinyint(1) NOT NULL default '0',
  `col3fields` mediumtext,
  `col3captions` tinyint(1) NOT NULL default '0',
  `col4title` varchar(255) default NULL,
  `col4enabled` tinyint(1) NOT NULL default '0',
  `col4fields` mediumtext,
  `col4captions` tinyint(1) NOT NULL default '0',
  `params` mediumtext,
  PRIMARY KEY  (`listid`),
  KEY `pub_ordering` (`published`,`ordering`),
  KEY `default_published` (`default`,`published`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=5 ;

--
-- Dumping data for table `jos_comprofiler_lists`
--

INSERT INTO `jos_comprofiler_lists` (`listid`, `title`, `description`, `published`, `default`, `usergroupids`, `useraccessgroupid`, `sortfields`, `filterfields`, `ordering`, `col1title`, `col1enabled`, `col1fields`, `col2title`, `col2enabled`, `col1captions`, `col2fields`, `col2captions`, `col3title`, `col3enabled`, `col3fields`, `col3captions`, `col4title`, `col4enabled`, `col4fields`, `col4captions`, `params`) VALUES
(4, 'Volunteer Search', '<p>Here you can view and search all the registered volunteer  .</p>', 1, 0, '18', 24, '`firstname` ASC', '', 1, 'Volunteer', 1, '42|*|56|*|84|*|49', 'Availability', 1, 1, '69|*|70|*|71|*|73|*|74', 1, 'Base Location', 1, '61|*|62|*|63', 1, 'Contact Information', 1, '76|*|79|*|81|*|50', 1, 'list_search=2\nlist_compare_types=2\nlist_limit=\nlist_paging=1\nhotlink_protection=0');

-- --------------------------------------------------------

--
-- Table structure for table `jos_comprofiler_members`
--

CREATE TABLE `jos_comprofiler_members` (
  `referenceid` int(11) NOT NULL default '0',
  `memberid` int(11) NOT NULL default '0',
  `accepted` tinyint(1) NOT NULL default '1',
  `pending` tinyint(1) NOT NULL default '0',
  `membersince` date NOT NULL default '0000-00-00',
  `reason` mediumtext,
  `description` varchar(255) default NULL,
  `type` mediumtext,
  PRIMARY KEY  (`referenceid`,`memberid`),
  KEY `pamr` (`pending`,`accepted`,`memberid`,`referenceid`),
  KEY `aprm` (`accepted`,`pending`,`referenceid`,`memberid`),
  KEY `membrefid` (`memberid`,`referenceid`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_comprofiler_members`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_comprofiler_plugin`
--

CREATE TABLE `jos_comprofiler_plugin` (
  `id` int(11) NOT NULL auto_increment,
  `name` varchar(100) NOT NULL default '',
  `element` varchar(100) NOT NULL default '',
  `type` varchar(100) default '',
  `folder` varchar(100) default '',
  `backend_menu` varchar(255) NOT NULL default '',
  `access` tinyint(3) unsigned NOT NULL default '0',
  `ordering` int(11) NOT NULL default '0',
  `published` tinyint(3) NOT NULL default '0',
  `iscore` tinyint(3) NOT NULL default '0',
  `client_id` tinyint(3) NOT NULL default '0',
  `checked_out` int(11) unsigned NOT NULL default '0',
  `checked_out_time` datetime NOT NULL default '0000-00-00 00:00:00',
  `params` text NOT NULL,
  PRIMARY KEY  (`id`),
  KEY `idx_folder` (`published`,`client_id`,`access`,`folder`),
  KEY `type_pub_order` (`type`,`published`,`ordering`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=500 ;

--
-- Dumping data for table `jos_comprofiler_plugin`
--

INSERT INTO `jos_comprofiler_plugin` (`id`, `name`, `element`, `type`, `folder`, `backend_menu`, `access`, `ordering`, `published`, `iscore`, `client_id`, `checked_out`, `checked_out_time`, `params`) VALUES
(1, 'CB Core', 'cb.core', 'user', 'plug_cbcore', '', 0, 1, 1, 1, 0, 0, '0000-00-00 00:00:00', ''),
(2, 'CB Connections', 'cb.connections', 'user', 'plug_cbconnections', '', 0, 3, 1, 1, 0, 0, '0000-00-00 00:00:00', ''),
(3, 'Content Author', 'cb.authortab', 'user', 'plug_cbmamboauthortab', '', 0, 4, 1, 1, 0, 0, '0000-00-00 00:00:00', ''),
(4, 'Forum integration', 'cb.simpleboardtab', 'user', 'plug_cbsimpleboardtab', '', 0, 5, 0, 1, 0, 0, '0000-00-00 00:00:00', ''),
(5, 'Mamblog Blog', 'cb.mamblogtab', 'user', 'plug_cbmamblogtab', '', 0, 6, 0, 1, 0, 0, '0000-00-00 00:00:00', ''),
(6, 'YaNC Newsletters', 'yanc', 'user', 'plug_yancintegration', '', 0, 7, 0, 1, 0, 0, '0000-00-00 00:00:00', ''),
(7, 'Default', 'default', 'templates', 'default', '', 0, 1, 1, 1, 0, 0, '0000-00-00 00:00:00', ''),
(8, 'WinClassic', 'winclassic', 'templates', 'winclassic', '', 0, 2, 1, 1, 0, 0, '0000-00-00 00:00:00', ''),
(9, 'WebFX', 'webfx', 'templates', 'webfx', '', 0, 3, 1, 1, 0, 0, '0000-00-00 00:00:00', ''),
(10, 'OSX', 'osx', 'templates', 'osx', '', 0, 4, 1, 1, 0, 0, '0000-00-00 00:00:00', ''),
(11, 'Luna', 'luna', 'templates', 'luna', '', 0, 5, 1, 1, 0, 0, '0000-00-00 00:00:00', ''),
(12, 'Dark', 'dark', 'templates', 'dark', '', 0, 6, 1, 1, 0, 0, '0000-00-00 00:00:00', ''),
(13, 'Default language (English)', 'default_language', 'language', 'default_language', '', 0, -1, 1, 1, 0, 0, '0000-00-00 00:00:00', ''),
(14, 'CB Menu', 'cb.menu', 'user', 'plug_cbmenu', '', 0, 2, 1, 1, 0, 62, '2010-04-15 14:48:55', ''),
(15, 'Private Message System', 'pms.mypmspro', 'user', 'plug_pms_mypmspro', '', 0, 8, 0, 1, 0, 0, '0000-00-00 00:00:00', '');

-- --------------------------------------------------------

--
-- Table structure for table `jos_comprofiler_sessions`
--

CREATE TABLE `jos_comprofiler_sessions` (
  `username` varchar(50) NOT NULL default '',
  `userid` int(11) unsigned NOT NULL default '0',
  `ui` tinyint(4) NOT NULL default '0',
  `incoming_ip` varchar(39) NOT NULL default '',
  `client_ip` varchar(39) NOT NULL default '',
  `session_id` varchar(33) NOT NULL default '',
  `session_data` mediumtext NOT NULL,
  `expiry_time` int(14) unsigned NOT NULL default '0',
  PRIMARY KEY  (`session_id`),
  KEY `expiry_time` (`expiry_time`),
  KEY `userid` (`userid`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_comprofiler_sessions`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_comprofiler_tabs`
--

CREATE TABLE `jos_comprofiler_tabs` (
  `tabid` int(11) NOT NULL auto_increment,
  `title` varchar(50) NOT NULL default '',
  `description` text,
  `ordering` int(11) NOT NULL default '0',
  `ordering_register` int(11) NOT NULL default '10',
  `width` varchar(10) NOT NULL default '.5',
  `enabled` tinyint(1) NOT NULL default '1',
  `pluginclass` varchar(255) default NULL,
  `pluginid` int(11) default NULL,
  `fields` tinyint(1) NOT NULL default '1',
  `params` mediumtext,
  `sys` tinyint(4) NOT NULL default '0',
  `displaytype` varchar(255) NOT NULL default '',
  `position` varchar(255) NOT NULL default '',
  `useraccessgroupid` int(9) NOT NULL default '-2',
  PRIMARY KEY  (`tabid`),
  KEY `enabled_position_ordering` (`enabled`,`position`,`ordering`),
  KEY `orderreg_enabled_pos_order` (`enabled`,`ordering_register`,`position`,`ordering`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=24 ;

--
-- Dumping data for table `jos_comprofiler_tabs`
--

INSERT INTO `jos_comprofiler_tabs` (`tabid`, `title`, `description`, `ordering`, `ordering_register`, `width`, `enabled`, `pluginclass`, `pluginid`, `fields`, `params`, `sys`, `displaytype`, `position`, `useraccessgroupid`) VALUES
(11, '_UE_CONTACT_INFO_HEADER', '', -4, 10, '1', 1, 'getContactTab', 1, 1, NULL, 2, 'tab', 'cb_tabmain', -2),
(12, '_UE_AUTHORTAB', '', -3, 10, '1', 0, 'getAuthorTab', 3, 0, NULL, 1, 'tab', 'cb_tabmain', -2),
(13, '_UE_FORUMTAB', '', -2, 10, '1', 0, 'getForumTab', 4, 1, NULL, 1, 'tab', 'cb_tabmain', -2),
(14, '_UE_BLOGTAB', '', -1, 10, '1', 0, 'getBlogTab', 5, 0, NULL, 1, 'tab', 'cb_tabmain', -2),
(15, '_UE_CONNECTION', '', 99, 10, '1', 0, 'getConnectionTab', 2, 0, NULL, 1, 'tab', 'cb_tabmain', -2),
(16, '_UE_NEWSLETTER_HEADER', '_UE_NEWSLETTER_INTRODCUTION', 99, 10, '1', 0, 'getNewslettersTab', 6, 0, NULL, 1, 'tab', 'cb_tabmain', -2),
(17, '_UE_MENU', '', -10, 10, '1', 1, 'getMenuTab', 14, 0, NULL, 1, 'html', 'cb_head', -2),
(18, '_UE_CONNECTIONPATHS', '', -9, 10, '1', 1, 'getConnectionPathsTab', 2, 0, NULL, 1, 'html', 'cb_head', -2),
(19, '_UE_PROFILE_PAGE_TITLE', '', -8, 10, '1', 1, 'getPageTitleTab', 1, 0, NULL, 1, 'html', 'cb_head', -2),
(20, '_UE_PORTRAIT', '', -7, 10, '1', 1, 'getPortraitTab', 1, 1, NULL, 1, 'html', 'cb_middle', -2),
(21, '_UE_USER_STATUS', '', -6, 10, '.5', 1, 'getStatusTab', 14, 1, NULL, 1, 'html', 'cb_right', -2),
(22, '_UE_PMSTAB', '', -5, 10, '.5', 0, 'getmypmsproTab', 15, 0, NULL, 1, 'html', 'cb_right', -2),
(23, 'assigned Projects', '', 100, 10, '.5', 1, NULL, NULL, 1, '', 0, 'tab', 'cb_tabmain', -1);

-- --------------------------------------------------------

--
-- Table structure for table `jos_comprofiler_userreports`
--

CREATE TABLE `jos_comprofiler_userreports` (
  `reportid` int(11) NOT NULL auto_increment,
  `reporteduser` int(11) NOT NULL default '0',
  `reportedbyuser` int(11) NOT NULL default '0',
  `reportedondate` date NOT NULL default '0000-00-00',
  `reportexplaination` text NOT NULL,
  `reportedstatus` tinyint(4) NOT NULL default '0',
  PRIMARY KEY  (`reportid`),
  KEY `status_user_date` (`reportedstatus`,`reporteduser`,`reportedondate`),
  KEY `reportedbyuser_ondate` (`reportedbyuser`,`reportedondate`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=13 ;

--
-- Dumping data for table `jos_comprofiler_userreports`
--

INSERT INTO `jos_comprofiler_userreports` (`reportid`, `reporteduser`, `reportedbyuser`, `reportedondate`, `reportexplaination`, `reportedstatus`) VALUES
(11, 63, 65, '2010-04-16', 'hi salam', 0),
(12, 64, 66, '2010-04-19', 'abc', 0);

-- --------------------------------------------------------

--
-- Table structure for table `jos_comprofiler_views`
--

CREATE TABLE `jos_comprofiler_views` (
  `viewer_id` int(11) NOT NULL default '0',
  `profile_id` int(11) NOT NULL default '0',
  `lastip` varchar(50) NOT NULL default '',
  `lastview` datetime NOT NULL default '0000-00-00 00:00:00',
  `viewscount` int(11) NOT NULL default '0',
  `vote` tinyint(3) default NULL,
  `lastvote` datetime NOT NULL default '0000-00-00 00:00:00',
  PRIMARY KEY  (`viewer_id`,`profile_id`,`lastip`),
  KEY `lastview` (`lastview`),
  KEY `profile_id_lastview` (`profile_id`,`lastview`,`viewer_id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_comprofiler_views`
--

INSERT INTO `jos_comprofiler_views` (`viewer_id`, `profile_id`, `lastip`, `lastview`, `viewscount`, `vote`, `lastvote`) VALUES
(63, 64, '127.0.0.1', '2010-04-16 20:13:02', 1, NULL, '0000-00-00 00:00:00'),
(62, 63, '127.0.0.1', '2010-04-16 21:22:07', 1, NULL, '0000-00-00 00:00:00'),
(63, 65, '127.0.0.1', '2010-04-16 21:37:50', 1, NULL, '0000-00-00 00:00:00'),
(65, 63, '127.0.0.1', '2010-04-16 21:51:43', 1, NULL, '0000-00-00 00:00:00'),
(66, 63, '127.0.0.1', '2010-04-19 01:05:49', 1, NULL, '0000-00-00 00:00:00'),
(66, 64, '127.0.0.1', '2010-04-29 06:56:05', 2, NULL, '0000-00-00 00:00:00'),
(62, 64, '127.0.0.1', '2010-04-19 14:36:57', 1, NULL, '0000-00-00 00:00:00'),
(66, 65, '127.0.0.1', '2010-04-28 20:40:10', 1, NULL, '0000-00-00 00:00:00');

-- --------------------------------------------------------

--
-- Table structure for table `jos_contact_details`
--

CREATE TABLE `jos_contact_details` (
  `id` int(11) NOT NULL auto_increment,
  `name` varchar(255) NOT NULL default '',
  `alias` varchar(255) NOT NULL default '',
  `con_position` varchar(255) default NULL,
  `address` text,
  `suburb` varchar(100) default NULL,
  `state` varchar(100) default NULL,
  `country` varchar(100) default NULL,
  `postcode` varchar(100) default NULL,
  `telephone` varchar(255) default NULL,
  `fax` varchar(255) default NULL,
  `misc` mediumtext,
  `image` varchar(255) default NULL,
  `imagepos` varchar(20) default NULL,
  `email_to` varchar(255) default NULL,
  `default_con` tinyint(1) unsigned NOT NULL default '0',
  `published` tinyint(1) unsigned NOT NULL default '0',
  `checked_out` int(11) unsigned NOT NULL default '0',
  `checked_out_time` datetime NOT NULL default '0000-00-00 00:00:00',
  `ordering` int(11) NOT NULL default '0',
  `params` text NOT NULL,
  `user_id` int(11) NOT NULL default '0',
  `catid` int(11) NOT NULL default '0',
  `access` tinyint(3) unsigned NOT NULL default '0',
  `mobile` varchar(255) NOT NULL default '',
  `webpage` varchar(255) NOT NULL default '',
  PRIMARY KEY  (`id`),
  KEY `catid` (`catid`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=2 ;

--
-- Dumping data for table `jos_contact_details`
--

INSERT INTO `jos_contact_details` (`id`, `name`, `alias`, `con_position`, `address`, `suburb`, `state`, `country`, `postcode`, `telephone`, `fax`, `misc`, `image`, `imagepos`, `email_to`, `default_con`, `published`, `checked_out`, `checked_out_time`, `ordering`, `params`, `user_id`, `catid`, `access`, `mobile`, `webpage`) VALUES
(1, 'Name', 'name', 'Position', 'Street', 'Suburb', 'State', 'Country', 'Zip Code', 'Telephone', 'Fax', 'Miscellanous info', 'powered_by.png', 'top', 'email@email.com', 1, 1, 0, '0000-00-00 00:00:00', 1, 'show_name=1\r\nshow_position=1\r\nshow_email=0\r\nshow_street_address=1\r\nshow_suburb=1\r\nshow_state=1\r\nshow_postcode=1\r\nshow_country=1\r\nshow_telephone=1\r\nshow_mobile=1\r\nshow_fax=1\r\nshow_webpage=1\r\nshow_misc=1\r\nshow_image=1\r\nallow_vcard=0\r\ncontact_icons=0\r\nicon_address=\r\nicon_email=\r\nicon_telephone=\r\nicon_fax=\r\nicon_misc=\r\nshow_email_form=1\r\nemail_description=1\r\nshow_email_copy=1\r\nbanned_email=\r\nbanned_subject=\r\nbanned_text=', 0, 12, 0, '', '');

-- --------------------------------------------------------

--
-- Table structure for table `jos_content`
--

CREATE TABLE `jos_content` (
  `id` int(11) unsigned NOT NULL auto_increment,
  `title` varchar(255) NOT NULL default '',
  `alias` varchar(255) NOT NULL default '',
  `title_alias` varchar(255) NOT NULL default '',
  `introtext` mediumtext NOT NULL,
  `fulltext` mediumtext NOT NULL,
  `state` tinyint(3) NOT NULL default '0',
  `sectionid` int(11) unsigned NOT NULL default '0',
  `mask` int(11) unsigned NOT NULL default '0',
  `catid` int(11) unsigned NOT NULL default '0',
  `created` datetime NOT NULL default '0000-00-00 00:00:00',
  `created_by` int(11) unsigned NOT NULL default '0',
  `created_by_alias` varchar(255) NOT NULL default '',
  `modified` datetime NOT NULL default '0000-00-00 00:00:00',
  `modified_by` int(11) unsigned NOT NULL default '0',
  `checked_out` int(11) unsigned NOT NULL default '0',
  `checked_out_time` datetime NOT NULL default '0000-00-00 00:00:00',
  `publish_up` datetime NOT NULL default '0000-00-00 00:00:00',
  `publish_down` datetime NOT NULL default '0000-00-00 00:00:00',
  `images` text NOT NULL,
  `urls` text NOT NULL,
  `attribs` text NOT NULL,
  `version` int(11) unsigned NOT NULL default '1',
  `parentid` int(11) unsigned NOT NULL default '0',
  `ordering` int(11) NOT NULL default '0',
  `metakey` text NOT NULL,
  `metadesc` text NOT NULL,
  `access` int(11) unsigned NOT NULL default '0',
  `hits` int(11) unsigned NOT NULL default '0',
  `metadata` text NOT NULL,
  PRIMARY KEY  (`id`),
  KEY `idx_section` (`sectionid`),
  KEY `idx_access` (`access`),
  KEY `idx_checkout` (`checked_out`),
  KEY `idx_state` (`state`),
  KEY `idx_catid` (`catid`),
  KEY `idx_createdby` (`created_by`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=49 ;

--
-- Dumping data for table `jos_content`
--

INSERT INTO `jos_content` (`id`, `title`, `alias`, `title_alias`, `introtext`, `fulltext`, `state`, `sectionid`, `mask`, `catid`, `created`, `created_by`, `created_by_alias`, `modified`, `modified_by`, `checked_out`, `checked_out_time`, `publish_up`, `publish_down`, `images`, `urls`, `attribs`, `version`, `parentid`, `ordering`, `metakey`, `metadesc`, `access`, `hits`, `metadata`) VALUES
(1, 'Welcome to Joomla!', 'welcome-to-joomla', '', '<div align="left"><strong>Joomla! is a free open source framework and content publishing system designed for quickly creating highly interactive multi-language Web sites, online communities, media portals, blogs and eCommerce applications. <br /></strong></div><p><strong><br /></strong><img src="images/stories/powered_by.png" border="0" alt="Joomla! Logo" title="Example Caption" hspace="6" vspace="0" width="165" height="68" align="left" />Joomla! provides an easy-to-use graphical user interface that simplifies the management and publishing of large volumes of content including HTML, documents, and rich media.  Joomla! is used by organisations of all sizes for intranets and extranets and is supported by a community of tens of thousands of users. </p>', 'With a fully documented library of developer resources, Joomla! allows the customisation of every aspect of a Web site including presentation, layout, administration, and the rapid integration with third-party applications.<p>Joomla! now provides more developer power while making the user experience all the more friendly. For those who always wanted increased extensibility, Joomla! 1.5 can make this happen.</p><p>A new framework, ground-up refactoring, and a highly-active development team brings the excitement of ''the next generation CMS'' to your fingertips.  Whether you are a systems architect or a complete ''noob'' Joomla! can take you to the next level of content delivery. ''More than a CMS'' is something we have been playing with as a catchcry because the new Joomla! API has such incredible power and flexibility, you are free to take whatever direction your creative mind takes you and Joomla! can help you get there so much more easily than ever before.</p><p>Thinking Web publishing? Think Joomla!</p>', -2, 1, 0, 1, '2008-08-12 10:00:00', 62, '', '2008-08-12 10:00:00', 62, 0, '0000-00-00 00:00:00', '2006-01-03 01:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 29, 0, 0, '', '', 0, 92, 'robots=\nauthor='),
(2, 'Newsflash 1', 'newsflash-1', '', '<p>Joomla! makes it easy to launch a Web site of any kind. Whether you want a brochure site or you are building a large online community, Joomla! allows you to deploy a new site in minutes and add extra functionality as you need it. The hundreds of available Extensions will help to expand your site and allow you to deliver new services that extend your reach into the Internet.</p>', '', -2, 1, 0, 3, '2008-08-10 06:30:34', 62, '', '2008-08-10 06:30:34', 62, 0, '0000-00-00 00:00:00', '2004-08-09 10:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 7, 0, 0, '', '', 0, 1, 'robots=\nauthor='),
(3, 'Newsflash 2', 'newsflash-2', '', '<p>The one thing about a Web site, it always changes! Joomla! makes it easy to add Articles, content, images, videos, and more. Site administrators can edit and manage content ''in-context'' by clicking the ''Edit'' link. Webmasters can also edit content through a graphical Control Panel that gives you complete control over your site.</p>', '', -2, 1, 0, 3, '2008-08-09 22:30:34', 62, '', '2008-08-09 22:30:34', 62, 0, '0000-00-00 00:00:00', '2004-08-09 06:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 6, 0, 0, '', '', 0, 0, 'robots=\nauthor='),
(4, 'Newsflash 3', 'newsflash-3', '', '<p>With a library of thousands of free <a href="http://extensions.joomla.org" target="_blank" title="The Joomla! Extensions Directory">Extensions</a>, you can add what you need as your site grows. Don''t wait, look through the <a href="http://extensions.joomla.org/" target="_blank" title="Joomla! Extensions">Joomla! Extensions</a>  library today. </p>', '', -2, 1, 0, 3, '2008-08-10 06:30:34', 62, '', '2008-08-10 06:30:34', 62, 0, '0000-00-00 00:00:00', '2004-08-09 10:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 7, 0, 0, '', '', 0, 1, 'robots=\nauthor='),
(5, 'Joomla! License Guidelines', 'joomla-license-guidelines', 'joomla-license-guidelines', '<p>This Web site is powered by <a href="http://joomla.org/" target="_blank" title="Joomla!">Joomla!</a> The software and default templates on which it runs are Copyright 2005-2008 <a href="http://www.opensourcematters.org/" target="_blank" title="Open Source Matters">Open Source Matters</a>. The sample content distributed with Joomla! is licensed under the <a href="http://docs.joomla.org/JEDL" target="_blank" title="Joomla! Electronic Document License">Joomla! Electronic Documentation License.</a> All data entered into this Web site and templates added after installation, are copyrighted by their respective copyright owners.</p> <p>If you want to distribute, copy, or modify Joomla!, you are welcome to do so under the terms of the <a href="http://www.gnu.org/licenses/old-licenses/gpl-2.0.html#SEC1" target="_blank" title="GNU General Public License"> GNU General Public License</a>. If you are unfamiliar with this license, you might want to read <a href="http://www.gnu.org/licenses/old-licenses/gpl-2.0.html#SEC4" target="_blank" title="How To Apply These Terms To Your Program">''How To Apply These Terms To Your Program''</a> and the <a href="http://www.gnu.org/licenses/old-licenses/gpl-2.0-faq.html" target="_blank" title="GNU General Public License FAQ">''GNU General Public License FAQ''</a>.</p> <p>The Joomla! licence has always been GPL.</p>', '', -2, 4, 0, 25, '2008-08-20 10:11:07', 62, '', '2008-08-20 10:11:07', 62, 0, '0000-00-00 00:00:00', '2004-08-19 06:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 7, 0, 0, '', '', 0, 100, 'robots=\nauthor='),
(6, 'We are Volunteers', 'we-are-volunteers', '', '<p>The Joomla Core Team and Working Group members are volunteer developers, designers, administrators and managers who have worked together to take Joomla! to new heights in its relatively short life. Joomla! has some wonderfully talented people taking Open Source concepts to the forefront of industry standards.  Joomla! 1.5 is a major leap forward and represents the most exciting Joomla! release in the history of the project. </p>', '', -2, 1, 0, 1, '2007-07-07 09:54:06', 62, '', '2007-07-07 09:54:06', 62, 0, '0000-00-00 00:00:00', '2004-07-06 22:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 10, 0, 0, '', '', 0, 54, 'robots=\nauthor='),
(9, 'Millions of Smiles', 'millions-of-smiles', '', '<p>The Joomla! team has millions of good reasons to be smiling about the Joomla! 1.5. In its current incarnation, it''s had millions of downloads, taking it to an unprecedented level of popularity.  The new code base is almost an entire re-factor of the old code base.  The user experience is still extremely slick but for developers the API is a dream.  A proper framework for real PHP architects seeking the best of the best.</p><p>If you''re a former Mambo User or a 1.0 series Joomla! User, 1.5 is the future of CMSs for a number of reasons.  It''s more powerful, more flexible, more secure, and intuitive.  Our developers and interface designers have worked countless hours to make this the most exciting release in the content management system sphere.</p><p>Go on ... get your FREE copy of Joomla! today and spread the word about this benchmark project. </p>', '', -2, 1, 0, 1, '2007-07-07 09:54:06', 62, '', '2007-07-07 09:54:06', 62, 0, '0000-00-00 00:00:00', '2004-07-06 22:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 5, 0, 0, '', '', 0, 23, 'robots=\nauthor='),
(10, 'How do I localise Joomla! to my language?', 'how-do-i-localise-joomla-to-my-language', '', '<h4>General<br /></h4><p>In Joomla! 1.5 all User interfaces can be localised. This includes the installation, the Back-end Control Panel and the Front-end Site.</p><p>The core release of Joomla! 1.5 is shipped with multiple language choices in the installation but, other than English (the default), languages for the Site and Administration interfaces need to be added after installation. Links to such language packs exist below.</p>', '<p>Translation Teams for Joomla! 1.5 may have also released fully localised installation packages where site, administrator and sample data are in the local language. These localised releases can be found in the specific team projects on the <a href="http://extensions.joomla.org/component/option,com_mtree/task,listcats/cat_id,1837/Itemid,35/" target="_blank" title="JED">Joomla! Extensions Directory</a>.</p><h4>How do I install language packs?</h4><ul><li>First download both the admin and the site language packs that you require.</li><li>Install each pack separately using the Extensions-&gt;Install/Uninstall Menu selection and then the package file upload facility.</li><li>Go to the Language Manager and be sure to select Site or Admin in the sub-menu. Then select the appropriate language and make it the default one using the Toolbar button.</li></ul><h4>How do I select languages?</h4><ul><li>Default languages can be independently set for Site and for Administrator</li><li>In addition, users can define their preferred language for each Site and Administrator. This takes affect after logging in.</li><li>While logging in to the Administrator Back-end, a language can also be selected for the particular session.</li></ul><h4>Where can I find Language Packs and Localised Releases?</h4><p><em>Please note that Joomla! 1.5 is new and language packs for this version may have not been released at this time.</em> </p><ul><li><a href="http://joomlacode.org/gf/project/jtranslation/" target="_blank" title="Accredited Translations">The Joomla! Accredited Translations Project</a>  - This is a joint repository for language packs that were developed by teams that are members of the Joomla! Translations Working Group.</li><li><a href="http://extensions.joomla.org/component/option,com_mtree/task,listcats/cat_id,1837/Itemid,35/" target="_blank" title="Translations">The Joomla! Extensions Site - Translations</a>  </li><li><a href="http://community.joomla.org/translations.html" target="_blank" title="Translation Work Group Teams">List of Translation Teams and Translation Partner Sites for Joomla! 1.5</a> </li></ul>', -2, 3, 0, 32, '2008-07-30 14:06:37', 62, '', '2008-07-30 14:06:37', 62, 0, '0000-00-00 00:00:00', '2006-09-29 10:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 9, 0, 0, '', '', 0, 10, 'robots=\nauthor='),
(11, 'How do I upgrade to Joomla! 1.5 ?', 'how-do-i-upgrade-to-joomla-15', '', '<p>Joomla! 1.5 does not provide an upgrade path from earlier versions. Converting an older site to a Joomla! 1.5 site requires creation of a new empty site using Joomla! 1.5 and then populating the new site with the content from the old site. This migration of content is not a one-to-one process and involves conversions and modifications to the content dump.</p> <p>There are two ways to perform the migration:</p>', ' <div id="post_content-107"><li>An automated method of migration has been provided which uses a migrator Component to create the migration dump out of the old site (Mambo 4.5.x up to Joomla! 1.0.x) and a smart import facility in the Joomla! 1.5 Installation that performs required conversions and modifications during the installation process.</li> <li>Migration can be performed manually. This involves exporting the required tables, manually performing required conversions and modifications and then importing the content to the new site after it is installed.</li>  <p><!--more--></p> <h2><strong> Automated migration</strong></h2>  <p>This is a two phased process using two tools. The first tool is a migration Component named <font face="courier new,courier">com_migrator</font>. This Component has been contributed by Harald Baer and is based on his <strong>eBackup </strong>Component. The migrator needs to be installed on the old site and when activated it prepares the required export dump of the old site''s data. The second tool is built into the Joomla! 1.5 installation process. The exported content dump is loaded to the new site and all conversions and modification are performed on-the-fly.</p> <h3><u> Step 1 - Using com_migrator to export data from old site:</u></h3> <li>Install the <font face="courier new,courier">com_migrator</font> Component on the <u><strong>old</strong></u> site. It can be found at the <a href="http://joomlacode.org/gf/project/pasamioprojects/frs/" target="_blank" title="JoomlaCode">JoomlaCode developers forge</a>.</li> <li>Select the Component in the Component Menu of the Control Panel.</li> <li>Click on the <strong>Dump it</strong> icon. Three exported <em>gzipped </em>export scripts will be created. The first is a complete backup of the old site. The second is the migration content of all core elements which will be imported to the new site. The third is a backup of all 3PD Component tables.</li> <li>Click on the download icon of the particular exports files needed and store locally.</li> <li>Multiple export sets can be created.</li> <li>The exported data is not modified in anyway and the original encoding is preserved. This makes the <font face="courier new,courier">com_migrator</font> tool a recommended tool to use for manual migration as well.</li> <h3><u> Step 2 - Using the migration facility to import and convert data during Joomla! 1.5 installation:</u></h3><p>Note: This function requires the use of the <em><font face="courier new,courier">iconv </font></em>function in PHP to convert encodings. If <em><font face="courier new,courier">iconv </font></em>is not found a warning will be provided.</p> <li>In step 6 - Configuration select the ''Load Migration Script'' option in the ''Load Sample Data, Restore or Migrate Backed Up Content'' section of the page.</li> <li>Enter the table prefix used in the content dump. For example: ''jos_'' or ''site2_'' are acceptable values.</li> <li>Select the encoding of the dumped content in the dropdown list. This should be the encoding used on the pages of the old site. (As defined in the _ISO variable in the language file or as seen in the browser page info/encoding/source)</li> <li>Browse the local host and select the migration export and click on <strong>Upload and Execute</strong></li> <li>A success message should appear or alternately a listing of database errors</li> <li>Complete the other required fields in the Configuration step such as Site Name and Admin details and advance to the final step of installation. (Admin details will be ignored as the imported data will take priority. Please remember admin name and password from the old site)</li> <p><u><br /></u></p></div>', -2, 3, 0, 28, '2008-07-30 20:27:52', 62, '', '2008-07-30 20:27:52', 62, 0, '0000-00-00 00:00:00', '2006-09-29 12:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 10, 0, 0, '', '', 0, 14, 'robots=\nauthor='),
(12, 'Why does Joomla! 1.5 use UTF-8 encoding?', 'why-does-joomla-15-use-utf-8-encoding', '', '<p>Well... how about never needing to mess with encoding settings again?</p><p>Ever needed to display several languages on one page or site and something always came up in Giberish?</p><p>With utf-8 (a variant of Unicode) glyphs (character forms) of basically all languages can be displayed with one single encoding setting. </p>', '', -2, 3, 0, 31, '2008-08-05 01:11:29', 62, '', '2008-08-05 01:11:29', 62, 0, '0000-00-00 00:00:00', '2006-10-03 10:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 8, 0, 0, '', '', 0, 29, 'robots=\nauthor='),
(13, 'What happened to the locale setting?', 'what-happened-to-the-locale-setting', '', 'This is now defined in the Language [<em>lang</em>].xml file in the Language metadata settings. If you are having locale problems such as dates do not appear in your language for example, you might want to check/edit the entries in the locale tag. Note that multiple locale strings can be set and the host will usually accept the first one recognised.', '', -2, 3, 0, 28, '2008-08-06 16:47:35', 62, '', '2008-08-06 16:47:35', 62, 0, '0000-00-00 00:00:00', '2006-10-05 14:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 7, 0, 0, '', '', 0, 11, 'robots=\nauthor='),
(14, 'What is the FTP layer for?', 'what-is-the-ftp-layer-for', '', '<p>The FTP Layer allows file operations (such as installing Extensions or updating the main configuration file) without having to make all the folders and files writable. This has been an issue on Linux and other Unix based platforms in respect of file permissions. This makes the site admin''s life a lot easier and increases security of the site.</p><p>You can check the write status of relevent folders by going to ''''Help-&gt;System Info" and then in the sub-menu to "Directory Permissions". With the FTP Layer enabled even if all directories are red, Joomla! will operate smoothly.</p><p>NOTE: the FTP layer is not required on a Windows host/server. </p>', '', -2, 3, 0, 31, '2008-08-06 21:27:49', 62, '', '2008-08-06 21:27:49', 62, 0, '0000-00-00 00:00:00', '2006-10-05 16:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=', 6, 0, 0, '', '', 0, 23, 'robots=\nauthor='),
(15, 'Can Joomla! 1.5 operate with PHP Safe Mode On?', 'can-joomla-15-operate-with-php-safe-mode-on', '', '<p>Yes it can! This is a significant security improvement.</p><p>The <em>safe mode</em> limits PHP to be able to perform actions only on files/folders who''s owner is the same as PHP is currently using (this is usually ''apache''). As files normally are created either by the Joomla! application or by FTP access, the combination of PHP file actions and the FTP Layer allows Joomla! to operate in PHP Safe Mode.</p>', '', -2, 3, 0, 31, '2008-08-06 19:28:35', 62, '', '2008-08-06 19:28:35', 62, 0, '0000-00-00 00:00:00', '2006-10-05 14:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 7, 0, 0, '', '', 0, 8, 'robots=\nauthor='),
(16, 'Only one edit window! How do I create "Read more..."?', 'only-one-edit-window-how-do-i-create-read-more', '', '<p>This is now implemented by inserting a <strong>Read more...</strong> tag (the button is located below the editor area) a dotted line appears in the edited text showing the split location for the <em>Read more....</em> A new Plugin takes care of the rest.</p><p>It is worth mentioning that this does not have a negative effect on migrated data from older sites. The new implementation is fully backward compatible.</p>', '', -2, 3, 0, 28, '2008-08-06 19:29:28', 62, '', '2008-08-06 19:29:28', 62, 0, '0000-00-00 00:00:00', '2006-10-05 14:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 7, 0, 0, '', '', 0, 20, 'robots=\nauthor='),
(17, 'My MySQL database does not support UTF-8. Do I have a problem?', 'my-mysql-database-does-not-support-utf-8-do-i-have-a-problem', '', 'No you don''t. Versions of MySQL lower than 4.1 do not have built in UTF-8 support. However, Joomla! 1.5 has made provisions for backward compatibility and is able to use UTF-8 on older databases. Let the installer take care of all the settings and there is no need to make any changes to the database (charset, collation, or any other).', '', -2, 3, 0, 31, '2008-08-07 09:30:37', 62, '', '2008-08-07 09:30:37', 62, 0, '0000-00-00 00:00:00', '2006-10-05 20:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 10, 0, 0, '', '', 0, 9, 'robots=\nauthor='),
(18, 'Joomla! Features', 'joomla-features', '', '<h4><font color="#ff6600">Joomla! features:</font></h4> <ul><li>Completely database driven site engines </li><li>News, products, or services sections fully editable and manageable</li><li>Topics sections can be added to by contributing Authors </li><li>Fully customisable layouts including <em>left</em>, <em>center</em>, and <em>right </em>Menu boxes </li><li>Browser upload of images to your own library for use anywhere in the site </li><li>Dynamic Forum/Poll/Voting booth for on-the-spot results </li><li>Runs on Linux, FreeBSD, MacOSX server, Solaris, and AIX', '  </li></ul> <h4>Extensive Administration:</h4> <ul><li>Change order of objects including news, FAQs, Articles etc. </li><li>Random Newsflash generator </li><li>Remote Author submission Module for News, Articles, FAQs, and Links </li><li>Object hierarchy - as many Sections, departments, divisions, and pages as you want </li><li>Image library - store all your PNGs, PDFs, DOCs, XLSs, GIFs, and JPEGs online for easy use </li><li>Automatic Path-Finder. Place a picture and let Joomla! fix the link </li><li>News Feed Manager. Easily integrate news feeds into your Web site.</li><li>E-mail a friend and Print format available for every story and Article </li><li>In-line Text editor similar to any basic word processor software </li><li>User editable look and feel </li><li>Polls/Surveys - Now put a different one on each page </li><li>Custom Page Modules. Download custom page Modules to spice up your site </li><li>Template Manager. Download Templates and implement them in seconds </li><li>Layout preview. See how it looks before going live </li><li>Banner Manager. Make money out of your site.</li></ul>', -2, 4, 0, 29, '2008-08-08 23:32:45', 62, '', '2008-08-08 23:32:45', 62, 0, '0000-00-00 00:00:00', '2006-10-07 06:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 11, 0, 0, '', '', 0, 59, 'robots=\nauthor='),
(19, 'PDMA Overview', 'pdma-overview', '', '<div id="dnn_ctr376_HtmlModule_HtmlModule_lblContent" class="Normal">\r\n<div><span style="font-size: x-small;"><span style="color: #333333;"><strong><span style="font-size: medium;"><span style="text-decoration: underline;">Provincial  Disaster  Management  Authority (PDMA),  Sindh</span></span> </strong></span></span></div>\r\n<p align="left"><span style="font-size: x-small;"><span style="color: #333333;"> </span></span><span style="font-size: x-small;"><span style="color: #333333;">Provincial  Disaster  Management   Authority (PDMA)  for  the Province of Sindh is established under  Sub-Section  (i)  of Section  15  of the  National  Disaster   Management  Ordinance 2006, with following terms of reference:-</span></span></p>\r\n<ul type="square">\r\n<li style="margin: 0in 0in 0pt; color: #333333; text-align: center;">\r\n<div><span style="font-size: 8.5pt;">Formulate  the   provincial  disaster management  policy  obtaining the approval of the   Provincial  Commission; </span></div>\r\n</li>\r\n<li style="margin: 0in 0in 0pt; color: #333333; text-align: center;">\r\n<div><span style="font-size: 8.5pt;">Coordinate  and  monitor  the implementation  of the National  Policy, National Plan   and  Provincial  Plan; </span></div>\r\n</li>\r\n<li style="margin: 0in 0in 0pt; color: #333333; text-align: center;">\r\n<div><span style="font-size: 8.5pt;">Examine  the  vulnerability  of different  parts  of the province  to different   disasters  and specify  prevention or  mitigation  measures; </span></div>\r\n</li>\r\n<li style="margin: 0in 0in 0pt; color: #333333; text-align: center;">\r\n<div><span style="font-size: 8.5pt;">Lay down   guidelines to be  followed  for  preparation  of disaster  management   plans  by the  Provincial  Department and District  Authorities; </span></div>\r\n</li>\r\n<li style="margin: 0in 0in 0pt; color: #333333; text-align: center;">\r\n<div><span style="font-size: 8.5pt;">Evaluate   preparedness  at all governmental  or  non-levels to respond to  disaster  and  enhance  preparedness; </span></div>\r\n</li>\r\n<li style="margin: 0in 0in 0pt; color: #333333; text-align: center;">\r\n<div><span style="font-size: 8.5pt;">Coordinate   response  in the event  of disaster; </span></div>\r\n</li>\r\n<li style="margin: 0in 0in 0pt; color: #333333; text-align: center;">\r\n<div><span style="font-size: 8.5pt;">Give  directions  to any  Provincial  department  or authority  regarding actions  to be  taken in response  to disaster; </span></div>\r\n</li>\r\n<li style="margin: 0in 0in 0pt; color: #333333; text-align: center;">\r\n<div><span style="font-size: 8.5pt;">Promote  general   education, awareness  and community  training in this regard; </span></div>\r\n</li>\r\n<li style="margin: 0in 0in 0pt; color: #333333; text-align: center;">\r\n<div><span style="font-size: 8.5pt;">Provide   necessary  technical  assistance  or give  advice  to district   authority  and local  authorities  for conveying  out their  functions  effectively; </span></div>\r\n</li>\r\n<li style="margin: 0in 0in 0pt; color: #333333; text-align: center;">\r\n<div><span style="font-size: 8.5pt;">Advice  the  Provincial  Government  regarding  all financial  matters in relation to  disaster  management; </span></div>\r\n</li>\r\n<li style="margin: 0in 0in 0pt; color: #333333; text-align: center;">\r\n<div><span style="font-size: 8.5pt;">Examine  the  construction  in the area  and if  it is of the  opinion  that the   standard laid  down  have  not been  flowed  it may  direct  the same   to secure compliance  of such  standards; </span></div>\r\n</li>\r\n<li style="margin: 0in 0in 0pt; color: #333333; text-align: center;">\r\n<div><span style="font-size: 8.5pt;">Ensure  that   communication  systems are  in order  and disaster  management  drills  are  being  carried  out  regularly; and </span><span style="font-size: 8.5pt; color: #333333;">Perform  such  other  functions as may  be assigned  to it by  the National  or  Provincial  Authority. </span></div>\r\n</li>\r\n</ul>\r\n</div>', '', 1, 4, 0, 29, '2008-08-09 07:49:20', 62, '', '2010-04-18 07:16:43', 62, 0, '0000-00-00 00:00:00', '2006-10-07 10:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=0\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 16, 0, 4, '', '', 0, 159, 'robots=\nauthor='),
(20, 'Support and Documentation', 'support-and-documentation', '', '<h1>Support </h1><p>Support for the Joomla! CMS can be found on several places. The best place to start would be the <a href="http://docs.joomla.org/" target="_blank" title="Joomla! Official Documentation Wiki">Joomla! Official Documentation Wiki</a>. Here you can help yourself to the information that is regularly published and updated as Joomla! develops. There is much more to come too!</p> <p>Of course you should not forget the Help System of the CMS itself. On the <em>topmenu </em>in the Back-end Control panel you find the Help button which will provide you with lots of explanation on features.</p> <p>Another great place would of course be the <a href="http://forum.joomla.org/" target="_blank" title="Forum">Forum</a> . On the Joomla! Forum you can find help and support from Community members as well as from Joomla! Core members and Working Group members. The forum contains a lot of information, FAQ''s, just about anything you are looking for in terms of support.</p> <p>Two other resources for Support are the <a href="http://developer.joomla.org/" target="_blank" title="Joomla! Developer Site">Joomla! Developer Site</a> and the <a href="http://extensions.joomla.org/" target="_blank" title="Joomla! Extensions Directory">Joomla! Extensions Directory</a> (JED). The Joomla! Developer Site provides lots of technical information for the experienced Developer as well as those new to Joomla! and development work in general. The JED whilst not a support site in the strictest sense has many of the Extensions that you will need as you develop your own Web site.</p> <p>The Joomla! Developers and Bug Squad members are regularly posting their blog reports about several topics such as programming techniques and security issues.</p> <h1>Documentation</h1> <p>Joomla! Documentation can of course be found on the <a href="http://docs.joomla.org/" target="_blank" title="Joomla! Official Documentation Wiki">Joomla! Official Documentation Wiki</a>. You can find information for beginners, installation, upgrade, Frequently Asked Questions, developer topics, and a lot more. The Documentation Team helps oversee the wiki but you are invited to contribute content, as well.</p> <p>There are also books written about Joomla! You can find a listing of these books in the <a href="http://shop.joomla.org/" target="_blank" title="Joomla! Shop">Joomla! Shop</a>.</p>', '', -2, 4, 0, 25, '2008-08-09 08:33:57', 62, '', '2008-08-09 08:33:57', 62, 0, '0000-00-00 00:00:00', '2006-10-07 10:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 13, 0, 0, '', '', 0, 6, 'robots=\nauthor='),
(21, 'Joomla! Facts', 'joomla-facts', '', '<p>Here are some interesting facts about Joomla!</p><ul><li><span>Over 210,000 active registered Users on the <a href="http://forum.joomla.org" target="_blank" title="Joomla Forums">Official Joomla! community forum</a> and more on the many international community sites.</span><ul><li><span>over 1,000,000 posts in over 200,000 topics</span></li><li>over 1,200 posts per day</li><li>growing at 150 new participants each day!</li></ul></li><li><span>1168 Projects on the JoomlaCode (<a href="http://joomlacode.org/" target="_blank" title="JoomlaCode">joomlacode.org</a> ). All for open source addons by third party developers.</span><ul><li><span>Well over 6,000,000 downloads of Joomla! since the migration to JoomlaCode in March 2007.<br /></span></li></ul></li><li><span>Nearly 4,000 extensions for Joomla! have been registered on the <a href="http://extensions.joomla.org" target="_blank" title="http://extensions.joomla.org">Joomla! Extension Directory</a>  </span></li><li><span>Joomla.org exceeds 2 TB of traffic per month!</span></li></ul>', '', -2, 4, 0, 30, '2008-08-09 16:46:37', 62, '', '2008-08-09 16:46:37', 62, 0, '0000-00-00 00:00:00', '2006-10-07 14:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 13, 0, 0, '', '', 0, 50, 'robots=\nauthor='),
(22, 'What''s New in 1.5?', 'whats-new-in-15', '', '<p>As with previous releases, Joomla! provides a unified and easy-to-use framework for delivering content for Web sites of all kinds. To support the changing nature of the Internet and emerging Web technologies, Joomla! required substantial restructuring of its core functionality and we also used this effort to simplify many challenges within the current user interface. Joomla! 1.5 has many new features.</p>', '<p style="margin-bottom: 0in">In Joomla! 1.5, you''ll notice: </p>    <ul><li>     <p style="margin-bottom: 0in">       Substantially improved usability, manageability, and scalability far beyond the original Mambo foundations</p>   </li><li>     <p style="margin-bottom: 0in"> Expanded accessibility to support internationalisation, double-byte characters and right-to-left support for Arabic, Farsi, and Hebrew languages among others</p>   </li><li>     <p style="margin-bottom: 0in"> Extended integration of external applications through Web services and remote authentication such as the Lightweight Directory Access Protocol (LDAP)</p>   </li><li>     <p style="margin-bottom: 0in"> Enhanced content delivery, template and presentation capabilities to support accessibility standards and content delivery to any destination</p>   </li><li>     <p style="margin-bottom: 0in">       A more sustainable and flexible framework for Component and Extension developers</p>   </li><li>     <p style="margin-bottom: 0in">Backward compatibility with previous releases of Components, Templates, Modules, and other Extensions</p></li></ul>', -2, 4, 0, 29, '2008-08-11 22:13:58', 62, '', '2008-08-11 22:13:58', 62, 0, '0000-00-00 00:00:00', '2006-10-10 18:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 10, 0, 0, '', '', 0, 92, 'robots=\nauthor='),
(23, 'Platforms and Open Standards', 'platforms-and-open-standards', '', '<p class="MsoNormal">Joomla! runs on any platform including Windows, most flavours of Linux, several Unix versions, and the Apple OS/X platform.  Joomla! depends on PHP and the MySQL database to deliver dynamic content.  </p>            <p class="MsoNormal">The minimum requirements are:</p>      <ul><li>Apache 1.x, 2.x and higher</li><li>PHP 4.3 and higher</li><li>MySQL 3.23 and higher</li></ul>It will also run on alternative server platforms such as Windows IIS - provided they support PHP and MySQL - but these require additional configuration in order for the Joomla! core package to be successful installed and operated.', '', -2, 4, 0, 25, '2008-08-11 04:22:14', 62, '', '2008-08-11 04:22:14', 62, 0, '0000-00-00 00:00:00', '2006-10-10 08:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 7, 0, 0, '', '', 0, 11, 'robots=\nauthor='),
(24, 'Content Layouts', 'content-layouts', '', '<p>Joomla! provides plenty of flexibility when displaying your Web content. Whether you are using Joomla! for a blog site, news or a Web site for a company, you''ll find one or more content styles to showcase your information. You can also change the style of content dynamically depending on your preferences. Joomla! calls how a page is laid out a <strong>layout</strong>. Use the guide below to understand which layouts are available and how you might use them. </p> <h2>Content </h2> <p>Joomla! makes it extremely easy to add and display content. All content  is placed where your mainbody tag in your template is located. There are three main types of layouts available in Joomla! and all of them can be customised via parameters. The display and parameters are set in the Menu Item used to display the content your working on. You create these layouts by creating a Menu Item and choosing how you want the content to display.</p> <h3>Blog Layout<br /> </h3> <p>Blog layout will show a listing of all Articles of the selected blog type (Section or Category) in the mainbody position of your template. It will give you the standard title, and Intro of each Article in that particular Category and/or Section. You can customise this layout via the use of the Preferences and Parameters, (See Article Parameters) this is done from the Menu not the Section Manager!</p> <h3>Blog Archive Layout<br /> </h3> <p>A Blog Archive layout will give you a similar output of Articles as the normal Blog Display but will add, at the top, two drop down lists for month and year plus a search button to allow Users to search for all Archived Articles from a specific month and year.</p> <h3>List Layout<br /> </h3> <p>Table layout will simply give you a <em>tabular </em>list<em> </em>of all the titles in that particular Section or Category. No Intro text will be displayed just the titles. You can set how many titles will be displayed in this table by Parameters. The table layout will also provide a filter Section so that Users can reorder, filter, and set how many titles are listed on a single page (up to 50)</p> <h2>Wrapper</h2> <p>Wrappers allow you to place stand alone applications and Third Party Web sites inside your Joomla! site. The content within a Wrapper appears within the primary content area defined by the "mainbody" tag and allows you to display their content as a part of your own site. A Wrapper will place an IFRAME into the content Section of your Web site and wrap your standard template navigation around it so it appears in the same way an Article would.</p> <h2>Content Parameters</h2> <p>The parameters for each layout type can be found on the right hand side of the editor boxes in the Menu Item configuration screen. The parameters available depend largely on what kind of layout you are configuring.</p>', '', -2, 4, 0, 29, '2008-08-12 22:33:10', 62, '', '2008-08-12 22:33:10', 62, 0, '0000-00-00 00:00:00', '2006-10-11 06:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 11, 0, 0, '', '', 0, 70, 'robots=\nauthor='),
(25, 'What are the requirements to run Joomla! 1.5?', 'what-are-the-requirements-to-run-joomla-15', '', '<p>Joomla! runs on the PHP pre-processor. PHP comes in many flavours, for a lot of operating systems. Beside PHP you will need a Web server. Joomla! is optimized for the Apache Web server, but it can run on different Web servers like Microsoft IIS it just requires additional configuration of PHP and MySQL. Joomla! also depends on a database, for this currently you can only use MySQL. </p>Many people know from their own experience that it''s not easy to install an Apache Web server and it gets harder if you want to add MySQL, PHP and Perl. XAMPP, WAMP, and MAMP are easy to install distributions containing Apache, MySQL, PHP and Perl for the Windows, Mac OSX and Linux operating systems. These packages are for localhost installations on non-public servers only.<br />The minimum version requirements are:<br /><ul><li>Apache 1.x or 2.x</li><li>PHP 4.3 or up</li><li>MySQL 3.23 or up</li></ul>For the latest minimum requirements details, see <a href="http://www.joomla.org/about-joomla/technical-requirements.html" target="_blank" title="Joomla! Technical Requirements">Joomla! Technical Requirements</a>.', '', -2, 3, 0, 31, '2008-08-11 00:42:31', 62, '', '2008-08-11 00:42:31', 62, 0, '0000-00-00 00:00:00', '2006-10-10 06:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 6, 0, 0, '', '', 0, 26, 'robots=\nauthor=');
INSERT INTO `jos_content` (`id`, `title`, `alias`, `title_alias`, `introtext`, `fulltext`, `state`, `sectionid`, `mask`, `catid`, `created`, `created_by`, `created_by_alias`, `modified`, `modified_by`, `checked_out`, `checked_out_time`, `publish_up`, `publish_down`, `images`, `urls`, `attribs`, `version`, `parentid`, `ordering`, `metakey`, `metadesc`, `access`, `hits`, `metadata`) VALUES
(26, 'Extensions', 'extensions', '', '<p>Out of the box, Joomla! does a great job of managing the content needed to make your Web site sing. But for many people, the true power of Joomla! lies in the application framework that makes it possible for developers all around the world to create powerful add-ons that are called <strong>Extensions</strong>. An Extension is used to add capabilities to Joomla! that do not exist in the base core code. Here are just some examples of the hundreds of available Extensions:</p> <ul>   <li>Dynamic form builders</li>   <li>Business or organisational directories</li>   <li>Document management</li>   <li>Image and multimedia galleries</li>   <li>E-commerce and shopping cart engines</li>   <li>Forums and chat software</li>   <li>Calendars</li>   <li>E-mail newsletters</li>   <li>Data collection and reporting tools</li>   <li>Banner advertising systems</li>   <li>Paid subscription services</li>   <li>and many, many, more</li> </ul> <p>You can find more examples over at our ever growing <a href="http://extensions.joomla.org" target="_blank" title="Joomla! Extensions Directory">Joomla! Extensions Directory</a>. Prepare to be amazed at the amount of exciting work produced by our active developer community!</p><p>A useful guide to the Extension site can be found at:<br /><a href="http://extensions.joomla.org/content/view/15/63/" target="_blank" title="Guide to the Joomla! Extension site">http://extensions.joomla.org/content/view/15/63/</a> </p> <h3>Types of Extensions </h3><p>There are five types of extensions:</p> <ul>   <li>Components</li>   <li>Modules</li>   <li>Templates</li>   <li>Plugins</li>   <li>Languages</li> </ul> <p>You can read more about the specifics of these using the links in the Article Index - a Table of Contents (yet another useful feature of Joomla!) - at the top right or by clicking on the <strong>Next </strong>link below.<br /> </p> <hr title="Components" class="system-pagebreak" /> <h3><img src="images/stories/ext_com.png" border="0" alt="Component - Joomla! Extension Directory" title="Component - Joomla! Extension Directory" width="17" height="17" /> Components</h3> <p>A Component is the largest and most complex of the Extension types.  Components are like mini-applications that render the main body of the  page. An analogy that might make the relationship easier to understand  would be that Joomla! is a book and all the Components are chapters in  the book. The core Article Component (<font face="courier new,courier">com_content</font>), for example, is the  mini-application that handles all core Article rendering just as the  core registration Component (<font face="courier new,courier">com_user</font>) is the mini-application  that handles User registration.</p> <p>Many of Joomla!''s core features are provided by the use of default Components such as:</p> <ul>   <li>Contacts</li>   <li>Front Page</li>   <li>News Feeds</li>   <li>Banners</li>   <li>Mass Mail</li>   <li>Polls</li></ul><p>A Component will manage data, set displays, provide functions, and in general can perform any operation that does not fall under the general functions of the core code.</p> <p>Components work hand in hand with Modules and Plugins to provide a rich variety of content display and functionality aside from the standard Article and content display. They make it possible to completely transform Joomla! and greatly expand its capabilities.</p>  <hr title="Modules" class="system-pagebreak" /> <h3><img src="images/stories/ext_mod.png" border="0" alt="Module - Joomla! Extension Directory" title="Module - Joomla! Extension Directory" width="17" height="17" /> Modules</h3> <p>A more lightweight and flexible Extension used for page rendering is a Module. Modules are used for small bits of the page that are generally  less complex and able to be seen across different Components. To  continue in our book analogy, a Module can be looked at as a footnote  or header block, or perhaps an image/caption block that can be rendered  on a particular page. Obviously you can have a footnote on any page but  not all pages will have them. Footnotes also might appear regardless of  which chapter you are reading. Simlarly Modules can be rendered  regardless of which Component you have loaded.</p> <p>Modules are like little mini-applets that can be placed anywhere on your site. They work in conjunction with Components in some cases and in others are complete stand alone snippets of code used to display some data from the database such as Articles (Newsflash) Modules are usually used to output data but they can also be interactive form items to input data for example the Login Module or Polls.</p> <p>Modules can be assigned to Module positions which are defined in your Template and in the back-end using the Module Manager and editing the Module Position settings. For example, "left" and "right" are common for a 3 column layout. </p> <h4>Displaying Modules</h4> <p>Each Module is assigned to a Module position on your site. If you wish it to display in two different locations you must copy the Module and assign the copy to display at the new location. You can also set which Menu Items (and thus pages) a Module will display on, you can select all Menu Items or you can pick and choose by holding down the control key and selecting multiple locations one by one in the Modules [Edit] screen</p> <p>Note: Your Main Menu is a Module! When you create a new Menu in the Menu Manager you are actually copying the Main Menu Module (<font face="courier new,courier">mod_mainmenu</font>) code and giving it the name of your new Menu. When you copy a Module you do not copy all of its parameters, you simply allow Joomla! to use the same code with two separate settings.</p> <h4>Newsflash Example</h4> <p>Newsflash is a Module which will display Articles from your site in an assignable Module position. It can be used and configured to display one Category, all Categories, or to randomly choose Articles to highlight to Users. It will display as much of an Article as you set, and will show a <em>Read more...</em> link to take the User to the full Article.</p> <p>The Newsflash Component is particularly useful for things like Site News or to show the latest Article added to your Web site.</p>  <hr title="Plugins" class="system-pagebreak" /> <h3><img src="images/stories/ext_plugin.png" border="0" alt="Plugin - Joomla! Extension Directory" title="Plugin - Joomla! Extension Directory" width="17" height="17" /> Plugins</h3> <p>One  of the more advanced Extensions for Joomla! is the Plugin. In previous  versions of Joomla! Plugins were known as Mambots. Aside from changing their name their  functionality has been expanded. A Plugin is a section of code that  runs when a pre-defined event happens within Joomla!. Editors are Plugins, for example, that execute when the Joomla! event <font face="courier new,courier">onGetEditorArea</font> occurs. Using a Plugin allows a developer to change  the way their code behaves depending upon which Plugins are installed  to react to an event.</p>  <hr title="Languages" class="system-pagebreak" /> <h3><img src="images/stories/ext_lang.png" border="0" alt="Language - Joomla! Extensions Directory" title="Language - Joomla! Extensions Directory" width="17" height="17" /> Languages</h3> <p>New  to Joomla! 1.5 and perhaps the most basic and critical Extension is a Language. Joomla! is released with multiple Installation Languages but the base Site and Administrator are packaged in just the one Language <strong>en-GB</strong> - being English with GB spelling for example. To include all the translations currently available would bloat the core package and make it unmanageable for uploading purposes. The Language files enable all the User interfaces both Front-end and Back-end to be presented in the local preferred language. Note these packs do not have any impact on the actual content such as Articles. </p> <p>More information on languages is available from the <br />   <a href="http://community.joomla.org/translations.html" target="_blank" title="Joomla! Translation Teams">http://community.joomla.org/translations.html</a></p>', '', -2, 4, 0, 29, '2008-08-11 06:00:00', 62, '', '2008-08-11 06:00:00', 62, 0, '0000-00-00 00:00:00', '2006-10-10 22:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 24, 0, 0, 'About Joomla!, General, Extensions', '', 0, 103, 'robots=\nauthor='),
(27, 'The Joomla! Community', 'the-joomla-community', '', '<p><strong>Got a question? </strong>With more than 210,000 members, the Joomla! Discussion Forums at <a href="http://forum.joomla.org/" target="_blank" title="Forums">forum.joomla.org</a> are a great resource for both new and experienced users. Ask your toughest questions the community is waiting to see what you''ll do with your Joomla! site.</p><p><strong>Do you want to show off your new Joomla! Web site?</strong> Visit the <a href="http://forum.joomla.org/viewforum.php?f=514" target="_blank" title="Site Showcase">Site Showcase</a> section of our forum.</p><p><strong>Do you want to contribute?</strong></p><p>If you think working with Joomla is fun, wait until you start working on it. We''re passionate about helping Joomla users become contributors. There are many ways you can help Joomla''s development:</p><ul>	<li>Submit news about Joomla. We syndicate Joomla-related news on <a href="http://news.joomla.org" target="_blank" title="JoomlaConnect">JoomlaConnect<sup>TM</sup></a>. If you have Joomla news that you would like to share with the community, find out how to get connected <a href="http://community.joomla.org/connect.html" target="_blank" title="JoomlaConnect">here</a>.</li>	<li>Report bugs and request features in our <a href="http://joomlacode.org/gf/project/joomla/tracker/" target="_blank" title="Joomla! developement trackers">trackers</a>. Please read <a href="http://docs.joomla.org/Filing_bugs_and_issues" target="_blank" title="Reporting Bugs">Reporting Bugs</a>, for details on how we like our bug reports served up</li><li>Submit patches for new and/or fixed behaviour. Please read <a href="http://docs.joomla.org/Patch_submission_guidelines" target="_blank" title="Submitting Patches">Submitting Patches</a>, for details on how to submit a patch.</li><li>Join the <a href="http://forum.joomla.org/viewforum.php?f=509" target="_blank" title="Joomla! development forums">developer forums</a> and share your ideas for how to improve Joomla. We''re always open to suggestions, although we''re likely to be sceptical of large-scale suggestions without some code to back it up.</li><li>Join any of the <a href="http://www.joomla.org/about-joomla/the-project/working-groups.html" target="_blank" title="Joomla! working groups">Joomla Working Groups</a> and bring your personal expertise to the Joomla community. </li></ul><p>These are just a few ways you can contribute. See <a href="http://www.joomla.org/about-joomla/contribute-to-joomla.html" target="_blank" title="Contribute">Contribute to Joomla</a> for many more ways.</p>', '', -2, 4, 0, 30, '2008-08-12 16:50:48', 62, '', '2008-08-12 16:50:48', 62, 0, '0000-00-00 00:00:00', '2006-10-11 02:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 12, 0, 0, '', '', 0, 52, 'robots=\nauthor='),
(28, 'How do I install Joomla! 1.5?', 'how-do-i-install-joomla-15', '', '<p>Installing of Joomla! 1.5 is pretty easy. We assume you have set-up your Web site, and it is accessible with your browser.<br /><br />Download Joomla! 1.5, unzip it and upload/copy the files into the directory you Web site points to, fire up your browser and enter your Web site address and the installation will start.  </p><p>For full details on the installation processes check out the <a href="http://help.joomla.org/content/category/48/268/302" target="_blank" title="Joomla! 1.5 Installation Manual">Installation Manual</a> on the <a href="http://help.joomla.org" target="_blank" title="Joomla! Help Site">Joomla! Help Site</a> where you will also find download instructions for a PDF version too. </p>', '', -2, 3, 0, 31, '2008-08-11 01:10:59', 62, '', '2008-08-11 01:10:59', 62, 0, '0000-00-00 00:00:00', '2006-10-10 06:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 5, 0, 0, '', '', 0, 5, 'robots=\nauthor='),
(29, 'What is the purpose of the collation selection in the installation screen?', 'what-is-the-purpose-of-the-collation-selection-in-the-installation-screen', '', 'The collation option determines the way ordering in the database is done. In languages that use special characters, for instance the German umlaut, the database collation determines the sorting order. If you don''t know which collation you need, select the "utf8_general_ci" as most languages use this. The other collations listed are exceptions in regards to the general collation. If your language is not listed in the list of collations it most likely means that "utf8_general_ci is suitable.', '', -2, 3, 0, 32, '2008-08-11 03:11:38', 62, '', '2008-08-11 03:11:38', 62, 0, '0000-00-00 00:00:00', '2006-10-10 08:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=', 4, 0, 0, '', '', 0, 6, 'robots=\nauthor='),
(30, 'What languages are supported by Joomla! 1.5?', 'what-languages-are-supported-by-joomla-15', '', 'Within the Installer you will find a wide collection of languages. The installer currently supports the following languages: Arabic, Bulgarian, Bengali, Czech, Danish, German, Greek, English, Spanish, Finnish, French, Hebrew, Devanagari(India), Croatian(Croatia), Magyar (Hungary), Italian, Malay, Norwegian bokmal, Dutch, Portuguese(Brasil), Portugues(Portugal), Romanian, Russian, Serbian, Svenska, Thai and more are being added all the time.<br />By default the English language is installed for the Back and Front-ends. You can download additional language files from the <a href="http://extensions.joomla.org" target="_blank" title="Joomla! Extensions Directory">Joomla!Extensions Directory</a>. ', '', -2, 3, 0, 32, '2008-08-11 01:12:18', 62, '', '2008-08-11 01:12:18', 62, 0, '0000-00-00 00:00:00', '2006-10-10 06:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 5, 0, 0, '', '', 0, 8, 'robots=\nauthor='),
(31, 'Is it useful to install the sample data?', 'is-it-useful-to-install-the-sample-data', '', 'Well you are reading it right now! This depends on what you want to achieve. If you are new to Joomla! and have no clue how it all fits together, just install the sample data. If you don''t like the English sample data because you - for instance - speak Chinese, then leave it out.', '', -2, 3, 0, 27, '2008-08-11 09:12:55', 62, '', '2008-08-11 09:12:55', 62, 0, '0000-00-00 00:00:00', '2006-10-10 10:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 6, 0, 0, '', '', 0, 3, 'robots=\nauthor='),
(32, 'Where is the Static Content Item?', 'where-is-the-static-content', '', '<p>In Joomla! versions prior to 1.5 there were separate processes for creating a Static Content Item and normal Content Items. The processes have been combined now and whilst both content types are still around they are renamed as Articles for Content Items and Uncategorized Articles for Static Content Items. </p><p>If you want to create a static item, create a new Article in the same way as for standard content and rather than relating this to a particular Section and Category just select <span style="font-style: italic">Uncategorized</span> as the option in the Section and Category drop down lists.</p>', '', -2, 3, 0, 28, '2008-08-10 23:13:33', 62, '', '2008-08-10 23:13:33', 62, 0, '0000-00-00 00:00:00', '2006-10-10 04:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 6, 0, 0, '', '', 0, 5, 'robots=\nauthor='),
(33, 'What is an Uncategorised Article?', 'what-is-uncategorised-article', '', 'Most Articles will be assigned to a Section and Category. In many cases, you might not know where you want it to appear so put the Article in the <em>Uncategorized </em>Section/Category. The Articles marked as <em>Uncategorized </em>are handled as static content.', '', -2, 3, 0, 31, '2008-08-11 15:14:11', 62, '', '2008-08-11 15:14:11', 62, 0, '0000-00-00 00:00:00', '2006-10-10 12:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 8, 0, 0, '', '', 0, 6, 'robots=\nauthor='),
(34, 'Does the PDF icon render pictures and special characters?', 'does-the-pdf-icon-render-pictures-and-special-characters', '', 'Yes! Prior to Joomla! 1.5, only the text values of an Article and only for ISO-8859-1 encoding was allowed in the PDF rendition. With the new PDF library in place, the complete Article including images is rendered and applied to the PDF. The PDF generator also handles the UTF-8 texts and can handle any character sets from any language. The appropriate fonts must be installed but this is done automatically during a language pack installation.', '', -2, 3, 0, 32, '2008-08-11 17:14:57', 62, '', '2008-08-11 17:14:57', 62, 0, '0000-00-00 00:00:00', '2006-10-10 14:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 7, 0, 0, '', '', 0, 6, 'robots=\nauthor='),
(35, 'Is it possible to change A Menu Item''s Type?', 'is-it-possible-to-change-the-types-of-menu-entries', '', '<p>You indeed can change the Menu Item''s Type to whatever you want, even after they have been created. </p><p>If, for instance, you want to change the Blog Section of a Menu link, go to the Control Panel-&gt;Menus Menu-&gt;[menuname]-&gt;Menu Item Manager and edit the Menu Item. Select the <strong>Change Type</strong> button and choose the new style of Menu Item Type from the available list. Thereafter, alter the Details and Parameters to reconfigure the display for the new selection  as you require it.</p>', '', -2, 3, 0, 31, '2008-08-10 23:15:36', 62, '', '2008-08-10 23:15:36', 62, 0, '0000-00-00 00:00:00', '2006-10-10 04:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 6, 0, 0, '', '', 0, 18, 'robots=\nauthor='),
(36, 'Where did the Installers go?', 'where-did-the-installer-go', '', 'The improved Installer can be found under the Extensions Menu. With versions prior to Joomla! 1.5 you needed to select a specific Extension type when you wanted to install it and use the Installer associated with it, with Joomla! 1.5 you just select the Extension you want to upload, and click on install. The Installer will do all the hard work for you.', '', -2, 3, 0, 28, '2008-08-10 23:16:20', 62, '', '2008-08-10 23:16:20', 62, 0, '0000-00-00 00:00:00', '2006-10-10 04:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 6, 0, 0, '', '', 0, 4, 'robots=\nauthor='),
(37, 'Where did the Mambots go?', 'where-did-the-mambots-go', '', '<p>Mambots have been renamed as Plugins. </p><p>Mambots were introduced in Mambo and offered possibilities to add plug-in logic to your site mainly for the purpose of manipulating content. In Joomla! 1.5, Plugins will now have much broader capabilities than Mambots. Plugins are able to extend functionality at the framework layer as well.</p>', '', -2, 3, 0, 28, '2008-08-11 09:17:00', 62, '', '2008-08-11 09:17:00', 62, 0, '0000-00-00 00:00:00', '2006-10-10 10:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 6, 0, 0, '', '', 0, 4, 'robots=\nauthor='),
(38, 'I installed with my own language, but the Back-end is still in English', 'i-installed-with-my-own-language-but-the-back-end-is-still-in-english', '', '<p>A lot of different languages are available for the Back-end, but by default this language may not be installed. If you want a translated Back-end, get your language pack and install it using the Extension Installer. After this, go to the Extensions Menu, select Language Manager and make your language the default one. Your Back-end will be translated immediately.</p><p>Users who have access rights to the Back-end may choose the language they prefer in their Personal Details parameters. This is of also true for the Front-end language.</p><p> A good place to find where to download your languages and localised versions of Joomla! is <a href="http://extensions.joomla.org/index.php?option=com_mtree&task=listcats&cat_id=1837&Itemid=35" target="_blank" title="Translations for Joomla!">Translations for Joomla!</a> on JED.</p>', '', -2, 3, 0, 32, '2008-08-11 17:18:14', 62, '', '2008-08-11 17:18:14', 62, 0, '0000-00-00 00:00:00', '2006-10-10 14:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 7, 0, 0, '', '', 0, 7, 'robots=\nauthor='),
(39, 'How do I remove an Article?', 'how-do-i-remove-an-article', '', '<p>To completely remove an Article, select the Articles that you want to delete and move them to the Trash. Next, open the Article Trash in the Content Menu and select the Articles you want to delete. After deleting an Article, it is no longer available as it has been deleted from the database and it is not possible to undo this operation.  </p>', '', -2, 3, 0, 27, '2008-08-11 09:19:01', 62, '', '2008-08-11 09:19:01', 62, 0, '0000-00-00 00:00:00', '2006-10-10 10:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 6, 0, 0, '', '', 0, 4, 'robots=\nauthor='),
(40, 'What is the difference between Archiving and Trashing an Article? ', 'what-is-the-difference-between-archiving-and-trashing-an-article', '', '<p>When you <em>Archive </em>an Article, the content is put into a state which removes it from your site as published content. The Article is still available from within the Control Panel and can be <em>retrieved </em>for editing or republishing purposes. Trashed Articles are just one step from being permanently deleted but are still available until you Remove them from the Trash Manager. You should use Archive if you consider an Article important, but not current. Trash should be used when you want to delete the content entirely from your site and from future search results.  </p>', '', -2, 3, 0, 27, '2008-08-11 05:19:43', 62, '', '2008-08-11 05:19:43', 62, 0, '0000-00-00 00:00:00', '2006-10-10 06:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 8, 0, 0, '', '', 0, 5, 'robots=\nauthor='),
(41, 'Newsflash 5', 'newsflash-5', '', 'Joomla! 1.5 - ''Experience the Freedom''!. It has never been easier to create your own dynamic Web site. Manage all your content from the best CMS admin interface and in virtually any language you speak.', '', -2, 1, 0, 3, '2008-08-12 00:17:31', 62, '', '2008-08-12 00:17:31', 62, 0, '0000-00-00 00:00:00', '2006-10-11 06:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 5, 0, 0, '', '', 0, 4, 'robots=\nauthor='),
(42, 'Newsflash 4', 'newsflash-4', '', 'Yesterday all servers in the U.S. went out on strike in a bid to get more RAM and better CPUs. A spokes person said that the need for better RAM was due to some fool increasing the front-side bus speed. In future, buses will be told to slow down in residential motherboards.', '', -2, 1, 0, 3, '2008-08-12 00:25:50', 62, '', '2008-08-12 00:25:50', 62, 0, '0000-00-00 00:00:00', '2006-10-11 06:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 5, 0, 0, '', '', 0, 5, 'robots=\nauthor='),
(43, 'Example Pages and Menu Links', 'example-pages-and-menu-links', '', '<p>This page is an example of content that is <em>Uncategorized</em>; that is, it does not belong to any Section or Category. You will see there is a new Menu in the left column. It shows links to the same content presented in 4 different page layouts.</p><ul><li>Section Blog</li><li>Section Table</li><li> Blog Category</li><li>Category Table</li></ul><p>Follow the links in the <strong>Example Pages</strong> Menu to see some of the options available to you to present all the different types of content included within the default installation of Joomla!.</p><p>This includes Components and individual Articles. These links or Menu Item Types (to give them their proper name) are all controlled from within the <strong><font face="courier new,courier">Menu Manager-&gt;[menuname]-&gt;Menu Items Manager</font></strong>. </p>', '', -2, 0, 0, 0, '2008-08-12 09:26:52', 62, '', '2008-08-12 09:26:52', 62, 0, '0000-00-00 00:00:00', '2006-10-11 10:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 7, 0, 0, 'Uncategorized, Uncategorized, Example Pages and Menu Links', '', 0, 43, 'robots=\nauthor='),
(44, 'Joomla! Security Strike Team', 'joomla-security-strike-team', '', '<p>The Joomla! Project has assembled a top-notch team of experts to form the new Joomla! Security Strike Team. This new team will solely focus on investigating and resolving security issues. Instead of working in relative secrecy, the JSST will have a strong public-facing presence at the <a href="http://developer.joomla.org/security.html" target="_blank" title="Joomla! Security Center">Joomla! Security Center</a>.</p>', '<p>The new JSST will call the new <a href="http://developer.joomla.org/security.html" target="_blank" title="Joomla! Security Center">Joomla! Security Center</a> their home base. The Security Center provides a public presence for <a href="http://developer.joomla.org/security/news.html" target="_blank" title="Joomla! Security News">security issues</a> and a platform for the JSST to <a href="http://developer.joomla.org/security/articles-tutorials.html" target="_blank" title="Joomla! Security Articles">help the general public better understand security</a> and how it relates to Joomla!. The Security Center also offers users a clearer understanding of how security issues are handled. There''s also a <a href="http://feeds.joomla.org/JoomlaSecurityNews" target="_blank" title="Joomla! Security News Feed">news feed</a>, which provides subscribers an up-to-the-minute notification of security issues as they arise.</p>', -2, 1, 0, 1, '2007-07-07 09:54:06', 62, '', '2007-07-07 09:54:06', 62, 0, '0000-00-00 00:00:00', '2004-07-06 22:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 1, 0, 0, '', '', 0, 0, 'robots=\nauthor='),
(45, 'Joomla! Community Portal', 'joomla-community-portal', '', '<p>The <a href="http://community.joomla.org/" target="_blank" title="Joomla! Community Portal">Joomla! Community Portal</a> is now online. There, you will find a constant source of information about the activities of contributors powering the Joomla! Project. Learn about <a href="http://community.joomla.org/events.html" target="_blank" title="Joomla! Events">Joomla! Events</a> worldwide, and see if there is a <a href="http://community.joomla.org/user-groups.html" target="_blank" title="Joomla! User Groups">Joomla! User Group</a> nearby.</p><p>The <a href="http://community.joomla.org/magazine.html" target="_blank" title="Joomla! Community Magazine">Joomla! Community Magazine</a> promises an interesting overview of feature articles, community accomplishments, learning topics, and project updates each month. Also, check out <a href="http://community.joomla.org/connect.html" target="_blank" title="JoomlaConnect">JoomlaConnect&#0153;</a>. This aggregated RSS feed brings together Joomla! news from all over the world in your language. Get the latest and greatest by clicking <a href="http://community.joomla.org/connect.html" target="_blank" title="JoomlaConnect">here</a>.</p>', '', -2, 1, 0, 1, '2007-07-07 09:54:06', 62, '', '2007-07-07 09:54:06', 62, 0, '0000-00-00 00:00:00', '2004-07-06 22:00:00', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 2, 0, 0, '', '', 0, 5, 'robots=\nauthor='),
(46, 'News', 'news', '', '<p>we need volunteer for  these projects.</p>\r\n<p>1.</p>\r\n<p>Project Code:01</p>\r\n<p>Project Details:   abc</p>\r\n<p>Area:  karachi</p>\r\n<p>Launch Date:  23/04/2010</p>\r\n<p>Required Number Of Volunteers: 30</p>\r\n<p> </p>', '', 1, 4, 0, 29, '2010-04-18 06:52:26', 62, '', '2010-04-19 09:08:58', 62, 0, '0000-00-00 00:00:00', '2010-04-18 06:52:26', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=0\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 5, 0, 3, '', '', 0, 11, 'robots=\nauthor='),
(47, 'Contact us', 'contact-us', '', '<p align="left"><span style="font-size: x-small;"><span style="color: #333333;">Postal Address:         <strong>No.C-52, Block II, KDA Scheme No.5, Clifton,  Karachi, 75600</strong> </span></span></p>\r\n<p align="left"><span style="font-size: x-small;"><span style="color: #333333;">Exchange Numbers:   +92-21-99251458-9, 35830193-4.</span></span></p>\r\n<p align="left"><span style="font-size: x-small;"><span style="color: #333333;"><br /> </span></span><span style="color: #333333; font-size: x-small;">Fax Number:-             +92-21-35830087 </span></p>\r\n<p align="left">e-mail:                <span style="font-size: x-small;"><a href="mailto:info@pdma.gos.pk"><span style="color: #0000ff;">info@pdma.gos.pk</span></a><span style="color: #0000ff;"> </span></span></p>\r\n<p align="left"><span style="font-size: x-small;">URL:                          <a href="http://www.pdma.gos.pk/"><span style="color: #0000ff;">www.pdma.gos.pk</span></a><span style="color: #0000ff;"> </span></span></p>', '', 1, 4, 0, 29, '2010-04-18 06:56:04', 62, '', '2010-04-18 07:17:15', 62, 0, '0000-00-00 00:00:00', '2010-04-18 06:56:04', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=0\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 3, 0, 2, '', '', 0, 5, 'robots=\nauthor='),
(48, 'Privacy Statement', 'ps', '', '<p><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal">PDMA is committed  to protecting your privacy and developing  technology that gives you the most powerful and safe online experience.  This  Statement of Privacy applies to the PDMA Web  site and governs data collection and usage. By using the PDMA  website, you consent to the data practices described in this statement.<br /><br /> </span></p>\r\n<h2><strong><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"><span class="SubHead">Collection of your Personal Information</span></span></strong></h2>\r\n<h2><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"> </span></h2>\r\n<p><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"><br /> PDMA collects personally  identifiable information, such as your e-mail address, name, home or  work  address or telephone number. PDMA also collects anonymous  demographic information, which is not unique to you, such as your ZIP  code,  age, gender, preferences, interests and favorites.<br /><br /> There is also information about your computer hardware and  software that is automatically collected by PDMA. This information  can include: your IP address, browser type, domain names, access times  and  referring Web site addresses. This information is used by PDMA for  the operation of the service, to maintain quality of the service, and to   provide general statistics regarding use of the PDMA Web site.<br /><br /> Please keep in mind that if you directly disclose personally  identifiable  information or personally sensitive data through PDMA public  message boards, this information may be collected and used by others.  Note:  PDMA does not read any of your private online communications.<br /><br /> PDMA encourages you to review the privacy statements of Web sites  you choose to link to from PDMA so that you can understand how  those Web sites collect, use and share your information. PDMA is  not responsible for the privacy statements or other content on Web sites   outside of the PDMA and PDMA family of Web sites.<br /><br /> </span></p>\r\n<h2><strong><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"><span class="SubHead">Use of your Personal Information</span></span></strong></h2>\r\n<h2><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"> </span></h2>\r\n<p><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"><br /> PDMA collects and uses your personal  information to operate the PDMA Web site and deliver the services  you have requested. PDMA also uses your personally identifiable  information to inform you of other products or services available from  PDMA and its affiliates. PDMA may also contact you  via surveys to conduct research about your opinion of current services  or of  potential new services that may be offered.<br /><br /> PDMA does not sell,  rent or lease its customer lists to third parties. PDMA may, from  time to time, contact you on behalf of external business partners about a   particular offering that may be of interest to you. In those cases, your  unique  personally identifiable information (e-mail, name, address, telephone  number)  is not transferred to the third party. In addition, PDMA may share  data with trusted partners to help us perform statistical analysis, send  you  email or postal mail, provide customer support, or arrange for  deliveries. All  such third parties are prohibited from using your personal information  except  to provide these services to PDMA, and they are required to  maintain the confidentiality of your information.<br /><br /> PDMA does not  use or disclose sensitive personal information, such as race, religion,  or  political affiliations, without your explicit consent.<br /><br /> PDMA keeps  track of the Web sites and pages our customers visit within PDMA,  in order to determine what PDMA services are the most popular.  This data is used to deliver customized content and advertising within  PDMA to customers whose behavior indicates that they are  interested in a particular subject area.<br /><br /> PDMA Web sites will  disclose your personal information, without notice, only if required to  do so  by law or in the good faith belief that such action is necessary to: (a)   conform to the edicts of the law or comply with legal process served on  PDMA or the site; (b) protect and defend the rights or property of  PDMA; and, (c) act under exigent circumstances to protect the  personal safety of users of PDMA, or the public.<br /><br /> </span></p>\r\n<h2><strong><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"><span class="SubHead">Use of Cookies</span></span></strong></h2>\r\n<h2><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"> </span></h2>\r\n<p><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"><br /> The PDMA Web site use "cookies" to help you personalize your  online experience. A cookie is a text file that is placed on your hard  disk by  a Web page server. Cookies cannot be used to run programs or deliver  viruses to  your computer. Cookies are uniquely assigned to you, and can only be  read by a  web server in the domain that issued the cookie to you.<br /><br /> One of the primary  purposes of cookies is to provide a convenience feature to save you  time. The  purpose of a cookie is to tell the Web server that you have returned to a   specific page. For example, if you personalize PDMA pages, or  register with PDMA site or services, a cookie helps  PDMA to recall your specific information on subsequent visits.  This simplifies the process of recording your personal information, such  as  billing addresses, shipping addresses, and so on. When you return to the  same  PDMA Web site, the information you previously provided can be  retrieved, so you can easily use the PDMA features that you  customized.<br /><br /> You have the ability to accept or decline cookies. Most Web  browsers automatically accept cookies, but you can usually modify your  browser  setting to decline cookies if you prefer. If you choose to decline  cookies, you  may not be able to fully experience the interactive features of the  PDMA services or Web sites you visit.<br /><br /> </span></p>\r\n<h2><strong><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"><span class="SubHead">Security of your Personal Information</span></span></strong></h2>\r\n<h2><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"> </span></h2>\r\n<p><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"><br /> PDMA secures your personal information from  unauthorized access, use or disclosure. PDMA secures the  personally identifiable information you provide on computer servers in a   controlled, secure environment, protected from unauthorized access, use  or  disclosure. When personal information (such as a credit card number) is  transmitted to other Web sites, it is protected through the use of  encryption,  such as the Secure Socket Layer (SSL) protocol.<br /><br /> </span></p>\r\n<h2><strong><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"><span class="SubHead">Changes to this Statement</span></span></strong></h2>\r\n<h2><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"> </span></h2>\r\n<p><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"><br /> PDMA will occasionally update this Statement of Privacy to reflect  company and customer feedback. PDMA encourages you to periodically  review this Statement to be informed of how PDMA is protecting  your information.<br /><br /> </span></p>\r\n<h2><strong><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"><span class="SubHead">Contact Information</span></span></strong></h2>\r\n<h2><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"> </span></h2>\r\n<p><span id="dnn_ctr_Privacy_lblPrivacy" class="Normal"><br /> PDMA welcomes your comments  regarding this Statement of Privacy. If you believe that PDMA has  not adhered to this Statement, please contact PDMA at <a href="mailto:mehrabpuri@yahoo.com">mehrabpuri@yahoo.com</a>. We  will use commercially reasonable efforts to promptly determine and  remedy the  problem. </span></p>', '', 1, 4, 0, 29, '2010-04-18 07:05:21', 62, '', '2010-04-18 07:15:49', 62, 0, '0000-00-00 00:00:00', '2010-04-18 07:05:21', '0000-00-00 00:00:00', '', '', 'show_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_vote=\nshow_author=0\nshow_create_date=\nshow_modify_date=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nlanguage=\nkeyref=\nreadmore=', 4, 0, 1, '', '', 0, 9, 'robots=\nauthor=');

-- --------------------------------------------------------

--
-- Table structure for table `jos_content_frontpage`
--

CREATE TABLE `jos_content_frontpage` (
  `content_id` int(11) NOT NULL default '0',
  `ordering` int(11) NOT NULL default '0',
  PRIMARY KEY  (`content_id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_content_frontpage`
--

INSERT INTO `jos_content_frontpage` (`content_id`, `ordering`) VALUES
(6, 2),
(44, 3),
(5, 4),
(9, 5),
(30, 6),
(16, 7),
(19, 1);

-- --------------------------------------------------------

--
-- Table structure for table `jos_content_rating`
--

CREATE TABLE `jos_content_rating` (
  `content_id` int(11) NOT NULL default '0',
  `rating_sum` int(11) unsigned NOT NULL default '0',
  `rating_count` int(11) unsigned NOT NULL default '0',
  `lastip` varchar(50) NOT NULL default '',
  PRIMARY KEY  (`content_id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_content_rating`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_core_acl_aro`
--

CREATE TABLE `jos_core_acl_aro` (
  `id` int(11) NOT NULL auto_increment,
  `section_value` varchar(240) NOT NULL default '0',
  `value` varchar(240) NOT NULL default '',
  `order_value` int(11) NOT NULL default '0',
  `name` varchar(255) NOT NULL default '',
  `hidden` int(11) NOT NULL default '0',
  PRIMARY KEY  (`id`),
  UNIQUE KEY `jos_section_value_value_aro` (`section_value`(100),`value`(100)),
  KEY `jos_gacl_hidden_aro` (`hidden`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=15 ;

--
-- Dumping data for table `jos_core_acl_aro`
--

INSERT INTO `jos_core_acl_aro` (`id`, `section_value`, `value`, `order_value`, `name`, `hidden`) VALUES
(10, 'users', '62', 0, 'Super Administrator', 0),
(11, 'users', '63', 0, 'saeed ahmed', 0),
(12, 'users', '64', 0, 'atif kamran', 0),
(13, 'users', '65', 0, 'Waseem', 0),
(14, 'users', '66', 0, 'Administrator', 0);

-- --------------------------------------------------------

--
-- Table structure for table `jos_core_acl_aro_groups`
--

CREATE TABLE `jos_core_acl_aro_groups` (
  `id` int(11) NOT NULL auto_increment,
  `parent_id` int(11) NOT NULL default '0',
  `name` varchar(255) NOT NULL default '',
  `lft` int(11) NOT NULL default '0',
  `rgt` int(11) NOT NULL default '0',
  `value` varchar(255) NOT NULL default '',
  PRIMARY KEY  (`id`),
  KEY `jos_gacl_parent_id_aro_groups` (`parent_id`),
  KEY `jos_gacl_lft_rgt_aro_groups` (`lft`,`rgt`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=31 ;

--
-- Dumping data for table `jos_core_acl_aro_groups`
--

INSERT INTO `jos_core_acl_aro_groups` (`id`, `parent_id`, `name`, `lft`, `rgt`, `value`) VALUES
(17, 0, 'ROOT', 1, 22, 'ROOT'),
(28, 17, 'USERS', 2, 21, 'USERS'),
(29, 28, 'Public Frontend', 3, 12, 'Public Frontend'),
(18, 29, 'Registered', 4, 11, 'Registered'),
(19, 18, 'Author', 5, 10, 'Author'),
(20, 19, 'Editor', 6, 9, 'Editor'),
(21, 20, 'Publisher', 7, 8, 'Publisher'),
(30, 28, 'Public Backend', 13, 20, 'Public Backend'),
(23, 30, 'Manager', 14, 19, 'Manager'),
(24, 23, 'Administrator', 15, 18, 'Administrator'),
(25, 24, 'Super Administrator', 16, 17, 'Super Administrator');

-- --------------------------------------------------------

--
-- Table structure for table `jos_core_acl_aro_map`
--

CREATE TABLE `jos_core_acl_aro_map` (
  `acl_id` int(11) NOT NULL default '0',
  `section_value` varchar(230) NOT NULL default '0',
  `value` varchar(100) NOT NULL,
  PRIMARY KEY  (`acl_id`,`section_value`,`value`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_core_acl_aro_map`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_core_acl_aro_sections`
--

CREATE TABLE `jos_core_acl_aro_sections` (
  `id` int(11) NOT NULL auto_increment,
  `value` varchar(230) NOT NULL default '',
  `order_value` int(11) NOT NULL default '0',
  `name` varchar(230) NOT NULL default '',
  `hidden` int(11) NOT NULL default '0',
  PRIMARY KEY  (`id`),
  UNIQUE KEY `jos_gacl_value_aro_sections` (`value`),
  KEY `jos_gacl_hidden_aro_sections` (`hidden`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=11 ;

--
-- Dumping data for table `jos_core_acl_aro_sections`
--

INSERT INTO `jos_core_acl_aro_sections` (`id`, `value`, `order_value`, `name`, `hidden`) VALUES
(10, 'users', 1, 'Users', 0);

-- --------------------------------------------------------

--
-- Table structure for table `jos_core_acl_groups_aro_map`
--

CREATE TABLE `jos_core_acl_groups_aro_map` (
  `group_id` int(11) NOT NULL default '0',
  `section_value` varchar(240) NOT NULL default '',
  `aro_id` int(11) NOT NULL default '0',
  UNIQUE KEY `group_id_aro_id_groups_aro_map` (`group_id`,`section_value`,`aro_id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_core_acl_groups_aro_map`
--

INSERT INTO `jos_core_acl_groups_aro_map` (`group_id`, `section_value`, `aro_id`) VALUES
(18, '', 11),
(18, '', 12),
(18, '', 13),
(24, '', 14),
(25, '', 10);

-- --------------------------------------------------------

--
-- Table structure for table `jos_core_log_items`
--

CREATE TABLE `jos_core_log_items` (
  `time_stamp` date NOT NULL default '0000-00-00',
  `item_table` varchar(50) NOT NULL default '',
  `item_id` int(11) unsigned NOT NULL default '0',
  `hits` int(11) unsigned NOT NULL default '0'
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_core_log_items`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_core_log_searches`
--

CREATE TABLE `jos_core_log_searches` (
  `search_term` varchar(128) NOT NULL default '',
  `hits` int(11) unsigned NOT NULL default '0'
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_core_log_searches`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_extending_field_list`
--

CREATE TABLE `jos_extending_field_list` (
  `id` int(11) NOT NULL auto_increment,
  `title` varchar(255) NOT NULL default '',
  `published` tinyint(1) NOT NULL default '1',
  `required` tinyint(1) NOT NULL default '0',
  `validate` varchar(255) NOT NULL default '',
  `type` varchar(255) NOT NULL default '',
  `size` int(11) NOT NULL default '30',
  `size_vertical` int(11) NOT NULL default '10',
  `uvalues` text NOT NULL,
  `table_align` varchar(50) NOT NULL default '',
  `changeable` tinyint(1) NOT NULL default '1',
  `unique_field` tinyint(1) NOT NULL default '0',
  `search_by_this_field` tinyint(1) NOT NULL default '0',
  `description` varchar(250) NOT NULL default '',
  `valid_error_msg` varchar(250) NOT NULL default '',
  `count_cols` int(6) NOT NULL default '0',
  `show_at_reg` tinyint(1) NOT NULL default '1',
  `show_at_edit` tinyint(1) NOT NULL default '1',
  `display_at_users_list` int(11) NOT NULL default '1',
  `ordering` int(6) NOT NULL default '0',
  `alternative_value` int(6) NOT NULL default '0',
  `default_value` text NOT NULL,
  `access` int(11) unsigned NOT NULL default '0',
  `checked_out` int(11) NOT NULL default '0',
  `checked_out_time` datetime NOT NULL default '0000-00-00 00:00:00',
  `catid` int(11) NOT NULL default '0',
  PRIMARY KEY  (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=6 ;

--
-- Dumping data for table `jos_extending_field_list`
--

INSERT INTO `jos_extending_field_list` (`id`, `title`, `published`, `required`, `validate`, `type`, `size`, `size_vertical`, `uvalues`, `table_align`, `changeable`, `unique_field`, `search_by_this_field`, `description`, `valid_error_msg`, `count_cols`, `show_at_reg`, `show_at_edit`, `display_at_users_list`, `ordering`, `alternative_value`, `default_value`, `access`, `checked_out`, `checked_out_time`, `catid`) VALUES
(1, 'Age: ', 1, 1, '', 'select', 0, 0, '18-25\r\n26-35\r\n36-45\r\n46-55\r\n56-65\r\n66-75\r\n75-85\r\n86-95\r\n96-105\r\n106-115', '', 1, 0, 0, '', '', 0, 1, 1, 1, 1, 0, '', 0, 0, '0000-00-00 00:00:00', 900),
(2, 'Country: ', 1, 1, '', 'select', 0, 0, 'Afghanistan\r\nAlbania\r\nAlgeria\r\nAmerican Samoa\r\nAndorra\r\nAngola\r\nAnguilla\r\nAntigua\r\nAntilles\r\nArgentina\r\nArmenia\r\nAruba\r\nAscension Island\r\nAustralia\r\nAustria\r\nAzerbaijan\r\nBahamas\r\nBahrain\r\nBangladesh\r\nBarbados\r\nBarbuda\r\nBelarus\r\nBelgium\r\nBelize\r\nBenin\r\nBermuda\r\nBhutan\r\nBolivia\r\nBotswana\r\nBrazil\r\nBrunei\r\nBulgaria\r\nBurkina Faso\r\nBurundi\r\nCambodia\r\nCameroon\r\nCanada\r\nCanary Islands\r\nCayman Islands\r\nChad\r\nChile, Rep. of\r\nChina\r\nChristmas Island\r\nColombia\r\nComoros\r\nCook Islands\r\nCosta Rica\r\nCroatia\r\nCuba\r\nCyprus\r\nCzech Rep.\r\nDenmark\r\nDiego Garcia\r\nDjibouti\r\nDominica\r\nDominican Rep.\r\nEcuador\r\nEgypt\r\nEl Salvador\r\nEritrea\r\nEstonia\r\nEthiopia\r\nFaeroe Islands\r\nFalkland Islands\r\nFiji\r\nFinland\r\nFrance\r\nFrench Antilles\r\nFrench Guiana\r\nFrench Polynesia\r\nGabon\r\nGambia\r\nGeorgia\r\nGermany\r\nGhana\r\nGibraltar\r\nGreece\r\nGreenland\r\nGrenada\r\nGuadeloupe\r\nGuatemala\r\nGuinea\r\nGuinea-Bissau\r\nGuyana\r\nHaiti\r\nHonduras\r\nHong Kong\r\nHungary\r\nIceland\r\nIndia\r\nIndonesia\r\nIraq\r\nIreland\r\nIsrael\r\nItaly\r\nJamaica\r\nJapan\r\nJordan\r\nKazakhstan\r\nKenya\r\nKiribati\r\nKorea, North\r\nKorea, South\r\nKuwait\r\nKyrgyzstan\r\nLaos\r\nLatvia\r\nLebanon\r\nLesotho\r\nLiberia\r\nLiechtenstein\r\nLithuania\r\nLuxembourg\r\nMacau\r\nMadagascar\r\nMalawi\r\nMalaysia\r\nMaldives\r\nMali\r\nMalta\r\nMarshall Islands\r\nMartinique\r\nMauritania\r\nMauritius\r\nMayotte Island\r\nMexico\r\nMoldova, Rep. of\r\nMonaco\r\nMongolia\r\nMontserrat\r\nMorocco\r\nMozambique\r\nMyanmar\r\nNamibia\r\nNauru\r\nNepal\r\nNetherlands\r\nNevis\r\nNew Caledonia\r\nNew Zealand\r\nNicaragua\r\nNiger\r\nNigeria\r\nNiue\r\nNorfolk Island\r\nNorway\r\nOman\r\nPakistan\r\nPalau\r\nPanama\r\nPapua New Guinea\r\nParaguay\r\nPeru\r\nPhilippines\r\nPoland\r\nPortugal\r\nPuerto Rico\r\nQatar\r\nReunion Island\r\nRomania\r\nRota Island\r\nRussia\r\nRwanda\r\nSaint Lucia\r\nSaipan Island\r\nSan Marino\r\nSaudi Arabia\r\nScotland\r\nSenegal\r\nSeychelles\r\nSierra Leone\r\nSingapore\r\nSlovakia\r\nSlovenia\r\nSolomon Islands\r\nSomalia\r\nSouth Africa\r\nSpain\r\nSri Lanka\r\nSt. Helena\r\nSt. Kitts\r\nSudan\r\nSuriname\r\nSwaziland\r\nSweden\r\nSwitzerland\r\nSyrian Arab Rep.\r\nTaiwan\r\nTajikistan\r\nTanzania\r\nThailand\r\nTinian Island\r\nTogo\r\nTokelau\r\nTonga\r\nTunisia\r\nTurkey\r\nTurkmenistan\r\nTuvalu\r\nUganda\r\nUkraine\r\nUnited Kingdom\r\nUruguay\r\nUSA\r\nUzbekistan\r\nVanuatu\r\nVatican City\r\nVenezuela\r\nViet Nam\r\nWales\r\nWestern Samoa\r\nYemen\r\nYugoslavia\r\nZambia\r\nZimbabwe', '', 1, 0, 0, '', '', 0, 1, 1, 1, 2, 0, '', 0, 0, '0000-00-00 00:00:00', 900),
(3, 'Occupation: ', 1, 1, '', 'select', 0, 0, 'Aircraft pilot (private)\r\nComputer programming, information technology, etc.\r\nDentist\r\nEngineer or computer scientist\r\nFarming, ranching, forestry, or fishing\r\nInternet programming, web design, ISP, webmaster, etc.\r\nMilitary (Army, Marines, Air Force or other special corps)\r\nNurse, nursing, or similar health caretaker\r\nPharmacist\r\nProfessor, instructor or teacher in college/university\r\nStock broker, stock analyst, investment analyst\r\nStudent\r\nOther occupation', '', 1, 0, 0, '', '', 0, 1, 1, 1, 3, 0, '', 0, 0, '0000-00-00 00:00:00', 900),
(4, 'Time set: ', 1, 1, '', 'select', 0, 0, '(GMT -12:00) Eniwetok, Kwajalein\r\n(GMT -11:00) Midway Island, Samoa\r\n(GMT -10:00) Hawaii\r\n(GMT -9:00) Alaska\r\n(GMT -8:00) Pacific Time (US & Canada)\r\n(GMT -7:00) Mountain Time (US & Canada)\r\n(GMT -6:00) Central Time (US & Canada), Mexico City\r\n(GMT -5:00) Eastern Time (US & Canada), Bogota, Lima\r\n(GMT -4:00) Atlantic Time (Canada), Caracas, La Paz\r\n(GMT -3:30) Newfoundland\r\n(GMT -3:00) Brazil, Buenos Aires, Georgetown\r\n(GMT -2:00) Mid-Atlantic\r\n(GMT -1:00) Azores, Cape Verde Islands\r\n(GMT) Western Europe Time, London, Lisbon, Casablanca\r\n(GMT +1:00) Brussels, Copenhagen, Madrid, Paris\r\n(GMT +2:00) Kaliningrad, South Africa\r\n(GMT +3:00) Baghdad, Riyadh, Moscow, St. Petersburg\r\n(GMT +3:30) Tehran\r\n(GMT +4:00) Abu Dhabi, Muscat, Baku, Tbilisi\r\n(GMT +4:30) Kabul\r\n(GMT +5:00) Ekaterinburg, Islamabad, Karachi, Tashkent\r\n(GMT +5:30) Bombay, Calcutta, Madras, New Delhi\r\n(GMT +6:00) Almaty, Dhaka, Colombo\r\n(GMT +7:00) Bangkok, Hanoi, Jakarta\r\n(GMT +8:00) Beijing, Perth, Singapore, Hong Kong\r\n(GMT +9:00) Tokyo, Seoul, Osaka, Sapporo, Yakutsk\r\n(GMT +9:30) Adelaide, Darwin\r\n(GMT +10:00) Eastern Australia, Guam, Vladivostok\r\n(GMT +11:00) Magadan, Solomon Islands, New Caledonia\r\n(GMT +12:00) Auckland, Wellington, Fiji, Kamchatka', '', 1, 0, 0, '', '', 0, 1, 1, 1, 4, 0, '', 0, 0, '0000-00-00 00:00:00', 900),
(5, 'State: ', 1, 1, '', 'select', 0, 0, 'Alaska\r\nArizona\r\nArkansas\r\nCalifornia\r\nColorado\r\nConnecticut\r\nDelaware\r\nDistrict of Columbia\r\nFlorida\r\nGeorgia\r\nHawaii\r\nIdaho\r\nIllinois\r\nIndiana\r\nIowa\r\nKansas\r\nKentucky\r\nLouisiana\r\nMaine\r\nMaryland\r\nMassachusetts\r\nMichigan\r\nMinnesota\r\nMississippi\r\nMissouri\r\nMontana\r\nNebraska\r\nNevada\r\nNew Hampshire\r\nNew Jersey\r\nNew Mexico\r\nNew York\r\nNorth Carolina\r\nNorth Dakota\r\nOhio\r\nOklahoma\r\nOregon\r\nPennsylvania\r\nRhode Island\r\nSouth Carolina\r\nSouth Dakota\r\nTennessee\r\nTexas\r\nUtah\r\nVermont\r\nVirginia\r\nWashington\r\nWest Virginia\r\nWisconsin\r\nWyoming', '', 1, 0, 0, '', '', 0, 1, 1, 1, 5, 0, '', 0, 0, '0000-00-00 00:00:00', 900);

-- --------------------------------------------------------

--
-- Table structure for table `jos_groups`
--

CREATE TABLE `jos_groups` (
  `id` tinyint(3) unsigned NOT NULL default '0',
  `name` varchar(50) NOT NULL default '',
  PRIMARY KEY  (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_groups`
--

INSERT INTO `jos_groups` (`id`, `name`) VALUES
(0, 'Public'),
(1, 'Registered'),
(2, 'Special');

-- --------------------------------------------------------

--
-- Table structure for table `jos_je_config`
--

CREATE TABLE `jos_je_config` (
  `id` int(10) unsigned NOT NULL auto_increment,
  `component` varchar(30) NOT NULL default '',
  `section` varchar(45) NOT NULL default '',
  `lable` varchar(255) NOT NULL default '',
  `name` varchar(45) NOT NULL default '',
  `type` set('selectlist','yesno','dropdown','text','textarea','page','directory','sections','static_content','categories_multiple') NOT NULL,
  `description` tinytext NOT NULL,
  `values` tinytext NOT NULL,
  `selected` tinytext NOT NULL,
  `hidden` enum('Y','N') NOT NULL default 'N',
  `fieldset` varchar(45) NOT NULL default '',
  PRIMARY KEY  (`id`),
  UNIQUE KEY `name` (`name`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=33 ;

--
-- Dumping data for table `jos_je_config`
--

INSERT INTO `jos_je_config` (`id`, `component`, `section`, `lable`, `name`, `type`, `description`, `values`, `selected`, `hidden`, `fieldset`) VALUES
(1, 'com_juser', 'general', 'Required field', 'required_field', 'selectlist', 'Mark required fields', 'bold, sign *, border,underline', 'sign *', 'N', 'Field list'),
(2, 'com_juser', 'general', 'Required color', 'required_color', 'text', 'Required color', '', '', 'N', 'Field list'),
(3, 'com_juser', 'general', 'Title position', 'title_position', 'selectlist', 'Title position', 'Over field, On the left', 'On the left', 'N', 'Field list'),
(4, 'com_juser', 'general', 'Registraton policy', 'registraton_policy', 'page', 'Registraton policy', '', '5', 'N', 'Field list'),
(5, 'com_juser', 'general', 'Registraton policy display type', 'registraton_policy_display_type', 'selectlist', 'Registraton policy display type', 'Link, Text, ScrollText', 'ScrollText', 'N', 'Field list'),
(6, 'com_juser', 'general', 'Uploaded file directory', 'uploaded_file_directory', 'directory', 'Uploaded file directory', '/administrator/components/com_juser/files/', 'C:wampwwwvms/administrator/components/com_juser/files/', 'N', 'Uploaded file'),
(7, 'com_juser', 'general', 'Allowed extends', 'allowed_extends', 'textarea', 'Allowed extends', '', 'jpg\r\npng\r\ngif', 'N', 'Uploaded file'),
(8, 'com_juser', 'general', 'Newsletters Categories', 'newsletters_categories', 'categories_multiple', 'Newsletters Categories', 'Over field, On the left', '', 'N', 'News Letters'),
(9, 'com_juser', 'general', 'Show users list', 'show_users_list', 'yesno', 'Show users list', '', '0', 'N', 'Users List'),
(10, 'com_juser', 'general', 'Cards on one page', 'count_cards', 'dropdown', 'Cards on one page', '5, 10, 15, 20, 25, 30, 50', '5', 'N', 'Users List'),
(11, 'com_juser', 'general', 'Show name', 'show_name_at_userlist', 'yesno', 'Show name', '', '0', 'N', 'Users List'),
(12, 'com_juser', 'general', 'Show Email', 'show_email_at_userlist', 'yesno', 'Show Email', '', '0', 'N', 'Users List'),
(13, 'com_juser', 'general', 'Show Data Registration', 'show_reg_date_at_userlist', 'yesno', 'Show Data Registration', '', '1', 'N', 'Users List'),
(14, 'com_juser', 'general', 'Show Last Visit', 'show_last_visit_at_userlist', 'yesno', 'Show Last Visit', '', '1', 'N', 'Users List'),
(15, 'com_juser', 'general', 'Show User Type', 'show_usertype_at_userlist', 'yesno', 'Show User Type', '', '1', 'N', 'Users List'),
(16, 'com_juser', 'general', 'Show Avatar', 'show_avatar_at_userlist', 'yesno', 'Show Avatar', '', '1', 'N', 'Users List'),
(17, 'com_juser', 'general', 'Enable avatar', 'enable_avatar', 'yesno', 'Enable avatar', '', '0', 'N', 'Avatar'),
(18, 'com_juser', 'general', 'Required avatar', 'required_avatar', 'yesno', 'Required avatar', '', '0', 'N', 'Avatar'),
(19, 'com_juser', 'general', 'Max size (pixels)', 'max_size', 'dropdown', 'Max size (pixels)', '80, 90,100,110,120,130,140,150', '100', 'N', 'Avatar'),
(20, 'com_juser', 'general', 'Uploaded Avatar Directory', 'uploaded_avatar_directory', 'directory', 'Uploaded Avatar Directory', '/images/', 'C:wampwwwvms/images/stories/Avatars/juser_avatars/', 'N', 'Avatar'),
(21, 'com_juser', 'general', 'Allowed extends', 'avatar_allowed_extends', 'textarea', 'Allowed extends', '', 'jpg\r\npng\r\ngif', 'N', 'Avatar'),
(22, 'com_juser', 'general', 'Show search filter', 'filters_show_search', 'yesno', 'Show search filter', ' ', '1', 'N', 'User Filters'),
(23, 'com_juser', 'general', 'Show core filters', 'filters_show_corefilters', 'yesno', 'Show core filters', ' ', '1', 'N', 'User Filters'),
(24, 'com_juser', 'general', 'Show additional filters', 'filters_show_additionalfilters', 'yesno', 'Show additional filters', ' ', '1', 'N', 'User Filters'),
(25, 'com_juser', 'general', 'Manual activation user', 'activationuser_manual', 'yesno', 'Manual activation user', ' ', '0', 'N', 'Activation Users'),
(26, 'com_juser', 'general', 'Content after registration', 'content_after_registration', 'static_content', 'Static content, which show after user registration', ' ', '0', 'N', 'User Registration'),
(27, 'com_juser', 'general', 'Count chars in captcha', 'count_chars_captcha', 'selectlist', 'Count chars in captcha', '4, 5, 6, 7, 8, 9, 10', '4', 'N', 'Captcha'),
(28, 'com_juser', 'general', 'Character set', 'captcha_character_set', 'selectlist', 'Character set', 'letters and numerals, letters only, numerals only', 'letters and numerals', 'N', 'Captcha'),
(29, 'com_juser', 'general', 'Captcha on/off', 'captcha_on', 'yesno', 'Captcha on/off', '', '1', 'N', 'Captcha'),
(30, 'com_juser', 'general', 'Date format', 'date_format', 'selectlist', 'Date format', 'YYYY-MM-DD, YYYY-DD-MM, MM-DD-YYYY, MM-YYYY-DD, DD-MM-YYYY, DD-YYYY-MM', 'YYYY-MM-DD', 'N', 'Other'),
(31, 'com_juser', 'general', 'Newsletters Sections', 'newsletters_sections', 'sections', '', '', '', 'N', 'News Letters'),
(32, 'com_juser', 'general', 'Allowed extends', 'avatar_allowed_extendstory', 'textarea', '', 'jpg\r\ngif\r\npng', '', 'N', 'Avatar');

-- --------------------------------------------------------

--
-- Table structure for table `jos_juser_integration`
--

CREATE TABLE `jos_juser_integration` (
  `id` int(11) NOT NULL auto_increment,
  `component` varchar(50) NOT NULL default '',
  `published` tinyint(1) NOT NULL default '0',
  `export_status` int(11) NOT NULL default '0',
  `import_status` int(11) NOT NULL default '0',
  `integration_data` datetime NOT NULL default '0000-00-00 00:00:00',
  PRIMARY KEY  (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

--
-- Dumping data for table `jos_juser_integration`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_juser_integration_cash`
--

CREATE TABLE `jos_juser_integration_cash` (
  `id` int(11) NOT NULL auto_increment,
  `name` varchar(30) NOT NULL default '',
  `component_id` int(11) NOT NULL default '0',
  `user_id` int(11) NOT NULL default '0',
  `value` text NOT NULL,
  `mdate` datetime NOT NULL default '0000-00-00 00:00:00',
  PRIMARY KEY  (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

--
-- Dumping data for table `jos_juser_integration_cash`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_juser_integration_comparisons`
--

CREATE TABLE `jos_juser_integration_comparisons` (
  `id` int(11) NOT NULL auto_increment,
  `ident` text NOT NULL,
  `name` text NOT NULL,
  `component_id` int(11) NOT NULL default '0',
  `juser_field_id` int(11) NOT NULL default '0',
  `static_juser_field` text NOT NULL,
  `default_value` text NOT NULL,
  `integrate` varchar(30) NOT NULL default '0',
  `m_date` datetime NOT NULL default '0000-00-00 00:00:00',
  PRIMARY KEY  (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

--
-- Dumping data for table `jos_juser_integration_comparisons`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_juser_users_additional_data`
--

CREATE TABLE `jos_juser_users_additional_data` (
  `id` int(11) NOT NULL auto_increment,
  `user_id` int(11) NOT NULL default '0',
  `avatar` text NOT NULL,
  `email_valid` int(11) default NULL,
  `mtime` datetime NOT NULL default '0000-00-00 00:00:00',
  PRIMARY KEY  (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

--
-- Dumping data for table `jos_juser_users_additional_data`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_menu`
--

CREATE TABLE `jos_menu` (
  `id` int(11) NOT NULL auto_increment,
  `menutype` varchar(75) default NULL,
  `name` varchar(255) default NULL,
  `alias` varchar(255) NOT NULL default '',
  `link` text,
  `type` varchar(50) NOT NULL default '',
  `published` tinyint(1) NOT NULL default '0',
  `parent` int(11) unsigned NOT NULL default '0',
  `componentid` int(11) unsigned NOT NULL default '0',
  `sublevel` int(11) default '0',
  `ordering` int(11) default '0',
  `checked_out` int(11) unsigned NOT NULL default '0',
  `checked_out_time` datetime NOT NULL default '0000-00-00 00:00:00',
  `pollid` int(11) NOT NULL default '0',
  `browserNav` tinyint(4) default '0',
  `access` tinyint(3) unsigned NOT NULL default '0',
  `utaccess` tinyint(3) unsigned NOT NULL default '0',
  `params` text NOT NULL,
  `lft` int(11) unsigned NOT NULL default '0',
  `rgt` int(11) unsigned NOT NULL default '0',
  `home` int(1) unsigned NOT NULL default '0',
  PRIMARY KEY  (`id`),
  KEY `componentid` (`componentid`,`menutype`,`published`,`access`),
  KEY `menutype` (`menutype`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=62 ;

--
-- Dumping data for table `jos_menu`
--

INSERT INTO `jos_menu` (`id`, `menutype`, `name`, `alias`, `link`, `type`, `published`, `parent`, `componentid`, `sublevel`, `ordering`, `checked_out`, `checked_out_time`, `pollid`, `browserNav`, `access`, `utaccess`, `params`, `lft`, `rgt`, `home`) VALUES
(1, 'mainmenu', 'Home', 'home', 'index.php?option=com_content&view=frontpage', 'component', 1, 0, 20, 0, 7, 0, '0000-00-00 00:00:00', 0, 0, 0, 3, 'num_leading_articles=1\nnum_intro_articles=4\nnum_columns=2\nnum_links=4\norderby_pri=\norderby_sec=front\nmulti_column_order=1\nshow_pagination=2\nshow_pagination_results=1\nshow_feed_link=1\nshow_noauth=0\nshow_title=1\nlink_titles=0\nshow_intro=1\nshow_section=0\nlink_section=0\nshow_category=0\nlink_category=0\nshow_author=1\nshow_create_date=1\nshow_modify_date=1\nshow_item_navigation=0\nshow_readmore=1\nshow_vote=0\nshow_icons=1\nshow_pdf_icon=1\nshow_print_icon=1\nshow_email_icon=1\nshow_hits=1\nfeed_summary=\npage_title=Welcome to the Frontpage\nshow_page_title=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\n\n', 0, 0, 1),
(2, 'mainmenu', 'Joomla! License', 'joomla-license', 'index.php?option=com_content&view=article&id=5', 'component', -2, 0, 20, 0, 4, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'pageclass_sfx=\nmenu_image=-1\nsecure=0\nshow_noauth=0\nlink_titles=0\nshow_intro=1\nshow_section=0\nlink_section=0\nshow_category=0\nlink_category=0\nshow_author=1\nshow_create_date=1\nshow_modify_date=1\nshow_item_navigation=0\nshow_readmore=1\nshow_vote=0\nshow_icons=1\nshow_pdf_icon=1\nshow_print_icon=1\nshow_email_icon=1\nshow_hits=1\n\n', 0, 0, 0),
(41, 'mainmenu', 'FAQ', 'faq', 'index.php?option=com_content&view=section&id=3', 'component', -2, 0, 20, 0, 1, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'show_page_title=1\nshow_description=0\nshow_description_image=0\nshow_categories=1\nshow_empty_categories=0\nshow_cat_num_articles=1\nshow_category_description=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\norderby=\nshow_noauth=0\nshow_title=1\nlink_titles=0\nshow_intro=1\nshow_section=0\nlink_section=0\nshow_category=0\nlink_category=0\nshow_author=1\nshow_create_date=1\nshow_modify_date=1\nshow_item_navigation=0\nshow_readmore=1\nshow_vote=0\nshow_icons=1\nshow_pdf_icon=1\nshow_print_icon=1\nshow_email_icon=1\nshow_hits=1', 0, 0, 0),
(11, 'othermenu', 'Joomla! Home', 'joomla-home', 'http://www.joomla.org', 'url', -2, 0, 0, 0, 1, 0, '0000-00-00 00:00:00', 0, 0, 0, 3, 'menu_image=-1\n\n', 0, 0, 0),
(12, 'othermenu', 'Joomla! Forums', 'joomla-forums', 'http://forum.joomla.org', 'url', -2, 0, 0, 0, 2, 0, '0000-00-00 00:00:00', 0, 0, 0, 3, 'menu_image=-1\n\n', 0, 0, 0),
(13, 'othermenu', 'Joomla! Documentation', 'joomla-documentation', 'http://docs.joomla.org', 'url', -2, 0, 0, 0, 3, 0, '0000-00-00 00:00:00', 0, 0, 0, 3, 'menu_image=-1\n\n', 0, 0, 0),
(14, 'othermenu', 'Joomla! Community', 'joomla-community', 'http://community.joomla.org', 'url', -2, 0, 0, 0, 4, 0, '0000-00-00 00:00:00', 0, 0, 0, 3, 'menu_image=-1\n\n', 0, 0, 0),
(15, 'othermenu', 'Joomla! Magazine', 'joomla-community-magazine', 'http://community.joomla.org/magazine.html', 'url', -2, 0, 0, 0, 5, 0, '0000-00-00 00:00:00', 0, 0, 0, 3, 'menu_image=-1\n\n', 0, 0, 0),
(16, 'othermenu', 'OSM Home', 'osm-home', 'http://www.opensourcematters.org', 'url', -2, 0, 0, 0, 6, 0, '0000-00-00 00:00:00', 0, 0, 0, 6, 'menu_image=-1\n\n', 0, 0, 0),
(17, 'othermenu', 'Super Administrator', 'administrator', 'administrator/', 'url', 1, 0, 0, 0, 7, 0, '0000-00-00 00:00:00', 0, 0, 0, 3, 'menu_image=-1\n\n', 0, 0, 0),
(18, 'topmenu', 'News', 'news', 'index.php?option=com_content&view=article&id=46', 'component', 1, 0, 20, 0, 4, 0, '0000-00-00 00:00:00', 0, 0, 0, 3, 'show_noauth=\nshow_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_item_navigation=\nshow_readmore=\nshow_vote=\nshow_icons=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nshow_hits=\nfeed_summary=\npage_title=News\nshow_page_title=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\n\n', 0, 0, 0),
(20, 'usermenu', 'Your Details', 'your-details', 'index.php?option=com_comprofiler&task=userdetails', 'component', 1, 0, 34, 0, 1, 0, '0000-00-00 00:00:00', 0, 0, 1, 3, 'page_title=\nshow_page_title=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\n\n', 0, 0, 0),
(24, 'usermenu', 'Logout', 'logout', 'index.php?option=com_comprofiler&task=logout', 'component', 1, 0, 34, 0, 4, 0, '0000-00-00 00:00:00', 0, 0, 1, 3, 'page_title=\nshow_page_title=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\n\n', 0, 0, 0),
(38, 'keyconcepts', 'Content Layouts', 'content-layouts', 'index.php?option=com_content&view=article&id=24', 'component', 0, 0, 20, 0, 2, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'pageclass_sfx=\nmenu_image=-1\nsecure=0\nshow_noauth=0\nlink_titles=0\nshow_intro=1\nshow_section=0\nlink_section=0\nshow_category=0\nlink_category=0\nshow_author=1\nshow_create_date=1\nshow_modify_date=1\nshow_item_navigation=0\nshow_readmore=1\nshow_vote=0\nshow_icons=1\nshow_pdf_icon=1\nshow_print_icon=1\nshow_email_icon=1\nshow_hits=1\n\n', 0, 0, 0),
(27, 'mainmenu', 'Joomla! Overview', 'joomla-overview', 'index.php?option=com_content&view=article&id=19', 'component', -2, 0, 20, 0, 5, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'pageclass_sfx=\nmenu_image=-1\nsecure=0\nshow_noauth=0\nlink_titles=0\nshow_intro=1\nshow_section=0\nlink_section=0\nshow_category=0\nlink_category=0\nshow_author=1\nshow_create_date=1\nshow_modify_date=1\nshow_item_navigation=0\nshow_readmore=1\nshow_vote=0\nshow_icons=1\nshow_pdf_icon=1\nshow_print_icon=1\nshow_email_icon=1\nshow_hits=1\n\n', 0, 0, 0),
(28, 'topmenu', 'About PDMA', 'about-pdma', 'index.php?option=com_content&view=article&id=19', 'component', 1, 0, 20, 0, 3, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'show_noauth=0\nshow_title=\nlink_titles=0\nshow_intro=1\nshow_section=0\nlink_section=0\nshow_category=0\nlink_category=0\nshow_author=1\nshow_create_date=1\nshow_modify_date=1\nshow_item_navigation=0\nshow_readmore=1\nshow_vote=0\nshow_icons=1\nshow_pdf_icon=1\nshow_print_icon=1\nshow_email_icon=1\nshow_hits=1\nfeed_summary=\npage_title=\nshow_page_title=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\n\n', 0, 0, 0),
(29, 'topmenu', 'Features', 'features', 'index.php?option=com_content&view=article&id=22', 'component', -2, 0, 20, 0, 1, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'pageclass_sfx=\nmenu_image=-1\nsecure=0\nshow_noauth=0\nlink_titles=0\nshow_intro=1\nshow_section=0\nlink_section=0\nshow_category=0\nlink_category=0\nshow_author=1\nshow_create_date=1\nshow_modify_date=1\nshow_item_navigation=0\nshow_readmore=1\nshow_vote=0\nshow_icons=1\nshow_pdf_icon=1\nshow_print_icon=1\nshow_email_icon=1\nshow_hits=1\n\n', 0, 0, 0),
(30, 'topmenu', 'Contact Us', 'contact-us', 'index.php?option=com_content&view=article&id=47', 'component', 1, 0, 20, 0, 5, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'show_noauth=0\nshow_title=\nlink_titles=0\nshow_intro=1\nshow_section=0\nlink_section=0\nshow_category=0\nlink_category=0\nshow_author=1\nshow_create_date=1\nshow_modify_date=1\nshow_item_navigation=0\nshow_readmore=1\nshow_vote=0\nshow_icons=1\nshow_pdf_icon=1\nshow_print_icon=1\nshow_email_icon=1\nshow_hits=1\nfeed_summary=\npage_title=\nshow_page_title=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\n\n', 0, 0, 0),
(34, 'mainmenu', 'What''s New in 1.5?', 'what-is-new-in-1-5', 'index.php?option=com_content&view=article&id=22', 'component', -2, 0, 20, 1, 6, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'pageclass_sfx=\nmenu_image=-1\nsecure=0\nshow_noauth=0\nshow_title=1\nlink_titles=0\nshow_intro=1\nshow_section=0\nlink_section=0\nshow_category=0\nlink_category=0\nshow_author=1\nshow_create_date=1\nshow_modify_date=1\nshow_item_navigation=0\nshow_readmore=1\nshow_vote=0\nshow_icons=1\nshow_pdf_icon=1\nshow_print_icon=1\nshow_email_icon=1\nshow_hits=1\n\n', 0, 0, 0),
(40, 'keyconcepts', 'Extensions', 'extensions', 'index.php?option=com_content&view=article&id=26', 'component', 0, 0, 20, 0, 1, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'pageclass_sfx=\nmenu_image=-1\nsecure=0\nshow_noauth=0\nlink_titles=0\nshow_intro=1\nshow_section=0\nlink_section=0\nshow_category=0\nlink_category=0\nshow_author=1\nshow_create_date=1\nshow_modify_date=1\nshow_item_navigation=0\nshow_readmore=1\nshow_vote=0\nshow_icons=1\nshow_pdf_icon=1\nshow_print_icon=1\nshow_email_icon=1\nshow_hits=1\n\n', 0, 0, 0),
(37, 'mainmenu', 'More about Joomla!', 'more-about-joomla', 'index.php?option=com_content&view=section&id=4', 'component', -2, 0, 20, 0, 8, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'show_page_title=1\nshow_description=0\nshow_description_image=0\nshow_categories=1\nshow_empty_categories=0\nshow_cat_num_articles=1\nshow_category_description=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\norderby=\nshow_noauth=0\nshow_title=1\nlink_titles=0\nshow_intro=1\nshow_section=0\nlink_section=0\nshow_category=0\nlink_category=0\nshow_author=1\nshow_create_date=1\nshow_modify_date=1\nshow_item_navigation=0\nshow_readmore=1\nshow_vote=0\nshow_icons=1\nshow_pdf_icon=1\nshow_print_icon=1\nshow_email_icon=1\nshow_hits=1', 0, 0, 0),
(43, 'keyconcepts', 'Example Pages', 'example-pages', 'index.php?option=com_content&view=article&id=43', 'component', 0, 0, 20, 0, 3, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'pageclass_sfx=\nmenu_image=-1\nsecure=0\nshow_noauth=0\nlink_titles=0\nshow_intro=1\nshow_section=0\nlink_section=0\nshow_category=0\nlink_category=0\nshow_author=1\nshow_create_date=1\nshow_modify_date=1\nshow_item_navigation=0\nshow_readmore=1\nshow_vote=0\nshow_icons=1\nshow_pdf_icon=1\nshow_print_icon=1\nshow_email_icon=1\nshow_hits=1\n\n', 0, 0, 0),
(60, 'topmenu', 'Privacy Statement', 'ps', 'index.php?option=com_content&view=article&id=48', 'component', 1, 0, 20, 0, 6, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'show_noauth=\nshow_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_item_navigation=\nshow_readmore=\nshow_vote=\nshow_icons=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nshow_hits=\nfeed_summary=\npage_title=\nshow_page_title=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\n\n', 0, 0, 0),
(59, 'topmenu', 'Home', 'home', 'index.php?option=com_content&view=frontpage', 'component', 1, 0, 20, 0, 2, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'num_leading_articles=1\nnum_intro_articles=4\nnum_columns=2\nnum_links=4\norderby_pri=\norderby_sec=front\nmulti_column_order=1\nshow_pagination=2\nshow_pagination_results=1\nshow_feed_link=1\nshow_noauth=\nshow_title=\nlink_titles=\nshow_intro=\nshow_section=\nlink_section=\nshow_category=\nlink_category=\nshow_author=\nshow_create_date=\nshow_modify_date=\nshow_item_navigation=\nshow_readmore=\nshow_vote=\nshow_icons=\nshow_pdf_icon=\nshow_print_icon=\nshow_email_icon=\nshow_hits=\nfeed_summary=\npage_title=\nshow_page_title=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\n\n', 0, 0, 0),
(48, 'mainmenu', 'Web Links', 'web-links', 'index.php?option=com_weblinks&view=categories', 'component', -2, 0, 4, 0, 3, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'page_title=Weblinks\nimage=-1\nimage_align=right\npageclass_sfx=\nmenu_image=-1\nsecure=0\nshow_comp_description=1\ncomp_description=\nshow_link_hits=1\nshow_link_description=1\nshow_other_cats=1\nshow_headings=1\nshow_page_title=1\nlink_target=0\nlink_icons=\n\n', 0, 0, 0),
(49, 'mainmenu', 'News Feeds', 'news-feeds', 'index.php?option=com_newsfeeds&view=categories', 'component', -2, 0, 11, 0, 10, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'show_page_title=1\npage_title=Newsfeeds\nshow_comp_description=1\ncomp_description=\nimage=-1\nimage_align=right\npageclass_sfx=\nmenu_image=-1\nsecure=0\nshow_headings=1\nshow_name=1\nshow_articles=1\nshow_link=1\nshow_other_cats=1\nshow_cat_description=1\nshow_cat_items=1\nshow_feed_image=1\nshow_feed_description=1\nshow_item_description=1\nfeed_word_count=0\n\n', 0, 0, 0),
(50, 'mainmenu', 'The News', 'the-news', 'index.php?option=com_content&view=category&layout=blog&id=1', 'component', 0, 0, 20, 0, 11, 62, '2010-04-15 12:17:12', 0, 0, 0, 0, 'show_page_title=1\npage_title=The News\nshow_description=0\nshow_description_image=0\nnum_leading_articles=1\nnum_intro_articles=4\nnum_columns=2\nnum_links=4\nshow_title=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\norderby_pri=\norderby_sec=\nshow_pagination=2\nshow_pagination_results=1\nshow_noauth=0\nlink_titles=0\nshow_intro=1\nshow_section=0\nlink_section=0\nshow_category=0\nlink_category=0\nshow_author=1\nshow_create_date=1\nshow_modify_date=1\nshow_item_navigation=0\nshow_readmore=1\nshow_vote=0\nshow_icons=1\nshow_pdf_icon=1\nshow_print_icon=1\nshow_email_icon=1\nshow_hits=1\n\n', 0, 0, 0),
(51, 'usermenu', 'Submit an Article', 'submit-an-article', 'index.php?option=com_content&view=article&layout=form', 'component', 0, 0, 20, 0, 2, 0, '0000-00-00 00:00:00', 0, 0, 2, 0, '', 0, 0, 0),
(52, 'usermenu', 'Submit a Web Link', 'submit-a-web-link', 'index.php?option=com_weblinks&view=weblink&layout=form', 'component', 0, 0, 4, 0, 3, 0, '0000-00-00 00:00:00', 0, 0, 2, 0, '', 0, 0, 0),
(53, 'mainmenu', 'Register', 'register', 'index.php?option=com_comprofiler&task=registers', 'component', 1, 0, 34, 0, 9, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'page_title=\nshow_page_title=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\n\n', 0, 0, 0),
(54, 'mainmenu', 'Update Profile', 'up', 'index.php?option=com_comprofiler&task=userdetails', 'component', 1, 0, 34, 0, 13, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'page_title=\nshow_page_title=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\n\n', 0, 0, 0),
(55, 'mainmenu', 'Volunteer', 'v', '', 'separator', 0, 0, 0, 0, 12, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'menu_image=-1\n\n', 0, 0, 0),
(57, 'mainmenu', 'Search', 's', 'index.php?option=com_comprofiler&task=userslist', 'component', 1, 0, 34, 0, 14, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'page_title=\nshow_page_title=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\n\n', 0, 0, 0),
(58, 'othermenu', 'Administrator', 'admin', 'index.php?option=com_comprofiler&task=login', 'component', 1, 0, 34, 0, 8, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'page_title=\nshow_page_title=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\n\n', 0, 0, 0),
(61, 'mainmenu', 'View Profile', 'vp', 'index.php?option=com_comprofiler', 'component', 1, 1, 34, 1, 1, 0, '0000-00-00 00:00:00', 0, 0, 0, 0, 'page_title=\nshow_page_title=1\npageclass_sfx=\nmenu_image=-1\nsecure=0\n\n', 0, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `jos_menu_types`
--

CREATE TABLE `jos_menu_types` (
  `id` int(10) unsigned NOT NULL auto_increment,
  `menutype` varchar(75) NOT NULL default '',
  `title` varchar(255) NOT NULL default '',
  `description` varchar(255) NOT NULL default '',
  PRIMARY KEY  (`id`),
  UNIQUE KEY `menutype` (`menutype`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=7 ;

--
-- Dumping data for table `jos_menu_types`
--

INSERT INTO `jos_menu_types` (`id`, `menutype`, `title`, `description`) VALUES
(1, 'mainmenu', 'Main Menu', 'The main menu for the site'),
(2, 'usermenu', 'User Menu', 'A Menu for logged in Users'),
(3, 'topmenu', 'Top Menu', 'Top level navigation'),
(4, 'othermenu', 'Resources', 'Additional links'),
(6, 'keyconcepts', 'Key Concepts', 'This describes some critical information for new Users.');

-- --------------------------------------------------------

--
-- Table structure for table `jos_messages`
--

CREATE TABLE `jos_messages` (
  `message_id` int(10) unsigned NOT NULL auto_increment,
  `user_id_from` int(10) unsigned NOT NULL default '0',
  `user_id_to` int(10) unsigned NOT NULL default '0',
  `folder_id` int(10) unsigned NOT NULL default '0',
  `date_time` datetime NOT NULL default '0000-00-00 00:00:00',
  `state` int(11) NOT NULL default '0',
  `priority` int(1) unsigned NOT NULL default '0',
  `subject` text NOT NULL,
  `message` text NOT NULL,
  PRIMARY KEY  (`message_id`),
  KEY `useridto_state` (`user_id_to`,`state`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

--
-- Dumping data for table `jos_messages`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_messages_cfg`
--

CREATE TABLE `jos_messages_cfg` (
  `user_id` int(10) unsigned NOT NULL default '0',
  `cfg_name` varchar(100) NOT NULL default '',
  `cfg_value` varchar(255) NOT NULL default '',
  UNIQUE KEY `idx_user_var_name` (`user_id`,`cfg_name`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_messages_cfg`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_migration_backlinks`
--

CREATE TABLE `jos_migration_backlinks` (
  `itemid` int(11) NOT NULL,
  `name` varchar(100) NOT NULL,
  `url` text NOT NULL,
  `sefurl` text NOT NULL,
  `newurl` text NOT NULL,
  PRIMARY KEY  (`itemid`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_migration_backlinks`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_modules`
--

CREATE TABLE `jos_modules` (
  `id` int(11) NOT NULL auto_increment,
  `title` text NOT NULL,
  `content` text NOT NULL,
  `ordering` int(11) NOT NULL default '0',
  `position` varchar(50) default NULL,
  `checked_out` int(11) unsigned NOT NULL default '0',
  `checked_out_time` datetime NOT NULL default '0000-00-00 00:00:00',
  `published` tinyint(1) NOT NULL default '0',
  `module` varchar(50) default NULL,
  `numnews` int(11) NOT NULL default '0',
  `access` tinyint(3) unsigned NOT NULL default '0',
  `showtitle` tinyint(3) unsigned NOT NULL default '1',
  `params` text NOT NULL,
  `iscore` tinyint(4) NOT NULL default '0',
  `client_id` tinyint(4) NOT NULL default '0',
  `control` text NOT NULL,
  PRIMARY KEY  (`id`),
  KEY `published` (`published`,`access`),
  KEY `newsfeeds` (`module`,`published`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=47 ;

--
-- Dumping data for table `jos_modules`
--

INSERT INTO `jos_modules` (`id`, `title`, `content`, `ordering`, `position`, `checked_out`, `checked_out_time`, `published`, `module`, `numnews`, `access`, `showtitle`, `params`, `iscore`, `client_id`, `control`) VALUES
(1, 'Main Menu', '', 0, 'left', 0, '0000-00-00 00:00:00', 1, 'mod_mainmenu', 0, 0, 1, 'menutype=mainmenu\nmoduleclass_sfx=_menu\n', 1, 0, ''),
(2, 'Login', '', 1, 'login', 0, '0000-00-00 00:00:00', 1, 'mod_login', 0, 0, 1, '', 1, 1, ''),
(3, 'Popular', '', 3, 'cpanel', 0, '0000-00-00 00:00:00', 1, 'mod_popular', 0, 2, 1, '', 0, 1, ''),
(4, 'Recent added Articles', '', 4, 'cpanel', 0, '0000-00-00 00:00:00', 1, 'mod_latest', 0, 2, 1, 'ordering=c_dsc\nuser_id=0\ncache=0\n\n', 0, 1, ''),
(5, 'Menu Stats', '', 5, 'cpanel', 0, '0000-00-00 00:00:00', 1, 'mod_stats', 0, 2, 1, '', 0, 1, ''),
(6, 'Unread Messages', '', 1, 'header', 0, '0000-00-00 00:00:00', 1, 'mod_unread', 0, 2, 1, '', 1, 1, ''),
(7, 'Online Users', '', 2, 'header', 0, '0000-00-00 00:00:00', 1, 'mod_online', 0, 2, 1, '', 1, 1, ''),
(8, 'Toolbar', '', 1, 'toolbar', 0, '0000-00-00 00:00:00', 1, 'mod_toolbar', 0, 2, 1, '', 1, 1, ''),
(9, 'Quick Icons', '', 1, 'icon', 0, '0000-00-00 00:00:00', 1, 'mod_quickicon', 0, 2, 1, '', 1, 1, ''),
(10, 'Logged in Users', '', 2, 'cpanel', 0, '0000-00-00 00:00:00', 1, 'mod_logged', 0, 2, 1, '', 0, 1, ''),
(11, 'Footer', '', 0, 'footer', 0, '0000-00-00 00:00:00', 0, 'mod_footer', 0, 0, 1, '', 1, 1, ''),
(12, 'Admin Menu', '', 1, 'menu', 0, '0000-00-00 00:00:00', 1, 'mod_menu', 0, 2, 1, '', 0, 1, ''),
(13, 'Admin SubMenu', '', 1, 'submenu', 0, '0000-00-00 00:00:00', 1, 'mod_submenu', 0, 2, 1, '', 0, 1, ''),
(14, 'User Status', '', 1, 'status', 0, '0000-00-00 00:00:00', 1, 'mod_status', 0, 2, 1, '', 0, 1, ''),
(15, 'Title', '', 1, 'title', 0, '0000-00-00 00:00:00', 1, 'mod_title', 0, 2, 1, '', 0, 1, ''),
(16, 'Polls', '', 1, 'right', 0, '0000-00-00 00:00:00', 1, 'mod_poll', 0, 0, 1, 'id=14\ncache=1', 0, 0, ''),
(17, 'User Menu', '', 3, 'left', 0, '0000-00-00 00:00:00', 1, 'mod_mainmenu', 0, 0, 1, 'menutype=usermenu\nmoduleclass_sfx=_menu\ncache=1', 1, 0, ''),
(18, 'Login Form', '', 8, 'left', 0, '0000-00-00 00:00:00', 0, 'mod_login', 0, 0, 1, 'greeting=1\nname=0', 1, 0, ''),
(19, 'Latest News', '', 4, 'user1', 0, '0000-00-00 00:00:00', 1, 'mod_latestnews', 0, 0, 1, 'cache=1', 1, 0, ''),
(20, 'Statistics', '', 6, 'left', 0, '0000-00-00 00:00:00', 0, 'mod_stats', 0, 0, 1, 'serverinfo=1\nsiteinfo=1\ncounter=1\nincrease=0\nmoduleclass_sfx=', 0, 0, ''),
(21, 'Who''s Online', '', 1, 'right', 0, '0000-00-00 00:00:00', 1, 'mod_whosonline', 0, 0, 1, 'online=1\nusers=1\nmoduleclass_sfx=', 0, 0, ''),
(22, 'Popular', '', 6, 'user2', 0, '0000-00-00 00:00:00', 1, 'mod_mostread', 0, 0, 1, 'cache=1', 0, 0, ''),
(23, 'Archive', '', 9, 'left', 0, '0000-00-00 00:00:00', 0, 'mod_archive', 0, 0, 1, 'cache=1', 1, 0, ''),
(24, 'Sections', '', 10, 'left', 0, '0000-00-00 00:00:00', 0, 'mod_sections', 0, 0, 1, 'cache=1', 1, 0, ''),
(25, 'Newsflash', '', 1, 'top', 0, '0000-00-00 00:00:00', 1, 'mod_newsflash', 0, 0, 1, 'catid=3\r\nstyle=random\r\nitems=\r\nmoduleclass_sfx=', 0, 0, ''),
(26, 'Related Items', '', 11, 'left', 0, '0000-00-00 00:00:00', 0, 'mod_related_items', 0, 0, 1, '', 0, 0, ''),
(27, 'Search', '', 1, 'user4', 0, '0000-00-00 00:00:00', 0, 'mod_search', 0, 0, 0, 'cache=1', 0, 0, ''),
(28, 'Random Image', '', 9, 'right', 0, '0000-00-00 00:00:00', 1, 'mod_random_image', 0, 0, 1, '', 0, 0, ''),
(29, 'Top Menu', '', 1, 'user3', 0, '0000-00-00 00:00:00', 1, 'mod_mainmenu', 0, 0, 0, 'cache=1\nmenutype=topmenu\nmenu_style=list_flat\nmenu_images=n\nmenu_images_align=left\nexpand_menu=n\nclass_sfx=-nav\nmoduleclass_sfx=\nindent_image1=0\nindent_image2=0\nindent_image3=0\nindent_image4=0\nindent_image5=0\nindent_image6=0', 1, 0, ''),
(30, 'Banners', '', 1, 'footer', 0, '0000-00-00 00:00:00', 1, 'mod_banners', 0, 0, 0, 'target=1\ncount=1\ncid=1\ncatid=33\ntag_search=0\nordering=random\nheader_text=\nfooter_text=\nmoduleclass_sfx=\ncache=1\ncache_time=15\n\n', 1, 0, ''),
(31, 'Resources', '', 1, 'left', 0, '0000-00-00 00:00:00', 1, 'mod_mainmenu', 0, 0, 1, 'menutype=othermenu\nmenu_style=list\nstartLevel=0\nendLevel=0\nshowAllChildren=0\nwindow_open=\nshow_whitespace=0\ncache=1\ntag_id=\nclass_sfx=\nmoduleclass_sfx=_menu\nmaxdepth=10\nmenu_images=0\nmenu_images_align=0\nexpand_menu=0\nactivate_parent=0\nfull_active_id=0\nindent_image=0\nindent_image1=\nindent_image2=\nindent_image3=\nindent_image4=\nindent_image5=\nindent_image6=\nspacer=\nend_spacer=\n\n', 0, 0, ''),
(32, 'Wrapper', '', 12, 'left', 0, '0000-00-00 00:00:00', 0, 'mod_wrapper', 0, 0, 1, '', 0, 0, ''),
(33, 'Footer', '', 2, 'footer', 0, '0000-00-00 00:00:00', 0, 'mod_footer', 0, 0, 0, 'cache=1\n\n', 1, 0, ''),
(34, 'Feed Display', '', 13, 'left', 0, '0000-00-00 00:00:00', 0, 'mod_feed', 0, 0, 1, '', 1, 0, ''),
(35, 'Breadcrumbs', '', 1, 'breadcrumb', 0, '0000-00-00 00:00:00', 1, 'mod_breadcrumbs', 0, 0, 1, 'moduleclass_sfx=\ncache=0\nshowHome=1\nhomeText=Home\nshowComponent=1\nseparator=\n\n', 1, 0, ''),
(36, 'Syndication', '', 3, 'syndicate', 0, '0000-00-00 00:00:00', 1, 'mod_syndicate', 0, 0, 0, '', 1, 0, ''),
(38, 'Advertisement', '', 3, 'right', 0, '0000-00-00 00:00:00', 1, 'mod_banners', 0, 0, 1, 'target=1\ncount=4\ncid=0\ncatid=14\ntag_search=0\nordering=0\nheader_text=Featured Links:\nfooter_text=\nmoduleclass_sfx=_text\ncache=0\ncache_time=900\n\n', 0, 0, ''),
(40, 'Key Concepts', '', 2, 'left', 0, '0000-00-00 00:00:00', 0, 'mod_mainmenu', 0, 0, 1, 'cache=1\nclass_sfx=\nmoduleclass_sfx=_menu\nmenutype=keyconcepts\nmenu_style=list\nstartLevel=0\nendLevel=0\nshowAllChildren=0\nfull_active_id=0\nmenu_images=0\nmenu_images_align=0\nexpand_menu=0\nactivate_parent=0\nindent_image=0\nindent_image1=\nindent_image2=\nindent_image3=\nindent_image4=\nindent_image5=\nindent_image6=\nspacer=\nend_spacer=\nwindow_open=\n\n', 0, 0, ''),
(42, 'Joomla! Security Newsfeed', '', 6, 'cpanel', 62, '2008-10-25 20:15:17', 1, 'mod_feed', 0, 0, 1, 'cache=1\ncache_time=15\nmoduleclass_sfx=\nrssurl=http://feeds.joomla.org/JoomlaSecurityNews\nrssrtl=0\nrsstitle=1\nrssdesc=0\nrssimage=1\nrssitems=1\nrssitemdesc=1\nword_count=0\n\n', 0, 1, ''),
(44, ' Login Form', '', 4, 'left', 0, '0000-00-00 00:00:00', 1, 'mod_cblogin', 0, 0, 1, 'moduleclass_sfx=\nhorizontal=0\ncompact=0\npretext=\nposttext=\nlogoutpretext=\nlogoutposttext=\nlogin=\nlogout=index.php\nshow_lostpass=1\nshow_newaccount=1\nshow_username_pass_icons=0\nname_lenght=14\npass_lenght=14\nshow_buttons_icons=0\nshow_remind_register_icons=0\nlogin_message=0\nlogout_message=0\nremember_enabled=1\ngreeting=1\nname=0\nshow_avatar=0\navatar_position=default\ntext_show_profile=\ntext_edit_profile=\npms_type=0\nshow_pms=0\nshow_connection_notifications=0\nhttps_post=0\ncb_plugins=0\n\n', 0, 0, '');

-- --------------------------------------------------------

--
-- Table structure for table `jos_modules_menu`
--

CREATE TABLE `jos_modules_menu` (
  `moduleid` int(11) NOT NULL default '0',
  `menuid` int(11) NOT NULL default '0',
  PRIMARY KEY  (`moduleid`,`menuid`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_modules_menu`
--

INSERT INTO `jos_modules_menu` (`moduleid`, `menuid`) VALUES
(1, 0),
(16, 1),
(17, 0),
(18, 1),
(19, 1),
(19, 2),
(19, 4),
(19, 27),
(19, 36),
(21, 1),
(22, 1),
(22, 2),
(22, 4),
(22, 27),
(22, 36),
(25, 0),
(27, 0),
(29, 0),
(30, 0),
(31, 1),
(32, 0),
(33, 0),
(34, 0),
(35, 0),
(36, 0),
(38, 1),
(39, 43),
(39, 44),
(39, 45),
(39, 46),
(39, 47),
(40, 0),
(44, 0);

-- --------------------------------------------------------

--
-- Table structure for table `jos_newsfeeds`
--

CREATE TABLE `jos_newsfeeds` (
  `catid` int(11) NOT NULL default '0',
  `id` int(11) NOT NULL auto_increment,
  `name` text NOT NULL,
  `alias` varchar(255) NOT NULL default '',
  `link` text NOT NULL,
  `filename` varchar(200) default NULL,
  `published` tinyint(1) NOT NULL default '0',
  `numarticles` int(11) unsigned NOT NULL default '1',
  `cache_time` int(11) unsigned NOT NULL default '3600',
  `checked_out` tinyint(3) unsigned NOT NULL default '0',
  `checked_out_time` datetime NOT NULL default '0000-00-00 00:00:00',
  `ordering` int(11) NOT NULL default '0',
  `rtl` tinyint(4) NOT NULL default '0',
  PRIMARY KEY  (`id`),
  KEY `published` (`published`),
  KEY `catid` (`catid`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=15 ;

--
-- Dumping data for table `jos_newsfeeds`
--

INSERT INTO `jos_newsfeeds` (`catid`, `id`, `name`, `alias`, `link`, `filename`, `published`, `numarticles`, `cache_time`, `checked_out`, `checked_out_time`, `ordering`, `rtl`) VALUES
(4, 1, 'Joomla! Announcements', 'joomla-official-news', 'http://feeds.joomla.org/JoomlaAnnouncements', '', 0, 5, 3600, 0, '0000-00-00 00:00:00', 1, 0),
(4, 2, 'Joomla! Core Team Blog', 'joomla-core-team-blog', 'http://feeds.joomla.org/JoomlaCommunityCoreTeamBlog', '', 0, 5, 3600, 0, '0000-00-00 00:00:00', 2, 0),
(4, 3, 'Joomla! Community Magazine', 'joomla-community-magazine', 'http://feeds.joomla.org/JoomlaMagazine', '', 0, 20, 3600, 0, '0000-00-00 00:00:00', 3, 0),
(4, 4, 'Joomla! Developer News', 'joomla-developer-news', 'http://feeds.joomla.org/JoomlaDeveloper', '', 0, 5, 3600, 0, '0000-00-00 00:00:00', 4, 0),
(4, 5, 'Joomla! Security News', 'joomla-security-news', 'http://feeds.joomla.org/JoomlaSecurityNews', '', 0, 5, 3600, 0, '0000-00-00 00:00:00', 5, 0),
(5, 6, 'Free Software Foundation Blogs', 'free-software-foundation-blogs', 'http://www.fsf.org/blogs/RSS', NULL, 0, 5, 3600, 0, '0000-00-00 00:00:00', 4, 0),
(5, 7, 'Free Software Foundation', 'free-software-foundation', 'http://www.fsf.org/news/RSS', NULL, 0, 5, 3600, 62, '2008-09-14 00:24:25', 3, 0),
(5, 8, 'Software Freedom Law Center Blog', 'software-freedom-law-center-blog', 'http://www.softwarefreedom.org/feeds/blog/', NULL, 0, 5, 3600, 0, '0000-00-00 00:00:00', 2, 0),
(5, 9, 'Software Freedom Law Center News', 'software-freedom-law-center', 'http://www.pdma.gos.pk/pdma/Home', NULL, 0, 5, 3600, 0, '0000-00-00 00:00:00', 1, 0),
(5, 10, 'Open Source Initiative Blog', 'open-source-initiative-blog', 'http://www.opensource.org/blog/feed', NULL, 0, 5, 3600, 0, '0000-00-00 00:00:00', 5, 0),
(6, 11, 'PHP News and Announcements', 'php-news-and-announcements', 'http://www.php.net/feed.atom', NULL, 0, 5, 3600, 62, '2008-09-14 00:25:37', 1, 0),
(6, 12, 'Planet MySQL', 'planet-mysql', 'http://www.planetmysql.org/rss20.xml', NULL, 0, 5, 3600, 62, '2008-09-14 00:25:51', 2, 0),
(6, 13, 'Linux Foundation Announcements', 'linux-foundation-announcements', 'http://www.linuxfoundation.org/press/rss20.xml', NULL, 0, 5, 3600, 62, '2008-09-14 00:26:11', 3, 0),
(6, 14, 'Mootools Blog', 'mootools-blog', 'http://feeds.feedburner.com/mootools-blog', NULL, 0, 5, 3600, 62, '2008-09-14 00:26:51', 4, 0);

-- --------------------------------------------------------

--
-- Table structure for table `jos_plugins`
--

CREATE TABLE `jos_plugins` (
  `id` int(11) NOT NULL auto_increment,
  `name` varchar(100) NOT NULL default '',
  `element` varchar(100) NOT NULL default '',
  `folder` varchar(100) NOT NULL default '',
  `access` tinyint(3) unsigned NOT NULL default '0',
  `ordering` int(11) NOT NULL default '0',
  `published` tinyint(3) NOT NULL default '0',
  `iscore` tinyint(3) NOT NULL default '0',
  `client_id` tinyint(3) NOT NULL default '0',
  `checked_out` int(11) unsigned NOT NULL default '0',
  `checked_out_time` datetime NOT NULL default '0000-00-00 00:00:00',
  `params` text NOT NULL,
  PRIMARY KEY  (`id`),
  KEY `idx_folder` (`published`,`client_id`,`access`,`folder`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=39 ;

--
-- Dumping data for table `jos_plugins`
--

INSERT INTO `jos_plugins` (`id`, `name`, `element`, `folder`, `access`, `ordering`, `published`, `iscore`, `client_id`, `checked_out`, `checked_out_time`, `params`) VALUES
(1, 'Authentication - Joomla', 'joomla', 'authentication', 0, 1, 1, 1, 0, 0, '0000-00-00 00:00:00', ''),
(2, 'Authentication - LDAP', 'ldap', 'authentication', 0, 2, 0, 1, 0, 0, '0000-00-00 00:00:00', 'host=\nport=389\nuse_ldapV3=0\nnegotiate_tls=0\nno_referrals=0\nauth_method=bind\nbase_dn=\nsearch_string=\nusers_dn=\nusername=\npassword=\nldap_fullname=fullName\nldap_email=mail\nldap_uid=uid\n\n'),
(3, 'Authentication - GMail', 'gmail', 'authentication', 0, 4, 0, 0, 0, 0, '0000-00-00 00:00:00', ''),
(4, 'Authentication - OpenID', 'openid', 'authentication', 0, 3, 0, 0, 0, 0, '0000-00-00 00:00:00', ''),
(5, 'User - Joomla!', 'joomla', 'user', 0, 0, 1, 0, 0, 0, '0000-00-00 00:00:00', 'autoregister=1\n\n'),
(6, 'Search - Content', 'content', 'search', 0, 1, 1, 1, 0, 0, '0000-00-00 00:00:00', 'search_limit=50\nsearch_content=1\nsearch_uncategorised=1\nsearch_archived=1\n\n'),
(7, 'Search - Contacts', 'contacts', 'search', 0, 3, 1, 1, 0, 0, '0000-00-00 00:00:00', 'search_limit=50\n\n'),
(8, 'Search - Categories', 'categories', 'search', 0, 4, 1, 0, 0, 0, '0000-00-00 00:00:00', 'search_limit=50\n\n'),
(9, 'Search - Sections', 'sections', 'search', 0, 5, 1, 0, 0, 0, '0000-00-00 00:00:00', 'search_limit=50\n\n'),
(10, 'Search - Newsfeeds', 'newsfeeds', 'search', 0, 6, 1, 0, 0, 0, '0000-00-00 00:00:00', 'search_limit=50\n\n'),
(11, 'Search - Weblinks', 'weblinks', 'search', 0, 2, 1, 1, 0, 0, '0000-00-00 00:00:00', 'search_limit=50\n\n'),
(12, 'Content - Pagebreak', 'pagebreak', 'content', 0, 10000, 1, 1, 0, 0, '0000-00-00 00:00:00', 'enabled=1\ntitle=1\nmultipage_toc=1\nshowall=1\n\n'),
(13, 'Content - Rating', 'vote', 'content', 0, 4, 1, 1, 0, 0, '0000-00-00 00:00:00', ''),
(14, 'Content - Email Cloaking', 'emailcloak', 'content', 0, 5, 1, 0, 0, 0, '0000-00-00 00:00:00', 'mode=1\n\n'),
(15, 'Content - Code Hightlighter (GeSHi)', 'geshi', 'content', 0, 5, 0, 0, 0, 0, '0000-00-00 00:00:00', ''),
(16, 'Content - Load Module', 'loadmodule', 'content', 0, 6, 1, 0, 0, 0, '0000-00-00 00:00:00', 'enabled=1\nstyle=0\n\n'),
(17, 'Content - Page Navigation', 'pagenavigation', 'content', 0, 2, 1, 1, 0, 0, '0000-00-00 00:00:00', 'position=1\n\n'),
(18, 'Editor - No Editor', 'none', 'editors', 0, 0, 1, 1, 0, 0, '0000-00-00 00:00:00', ''),
(19, 'Editor - TinyMCE', 'tinymce', 'editors', 0, 0, 1, 1, 0, 0, '0000-00-00 00:00:00', 'mode=advanced\nskin=0\ncompressed=0\ncleanup_startup=0\ncleanup_save=2\nentity_encoding=raw\nlang_mode=0\nlang_code=en\ntext_direction=ltr\ncontent_css=1\ncontent_css_custom=\nrelative_urls=1\nnewlines=0\ninvalid_elements=applet\nextended_elements=\ntoolbar=top\ntoolbar_align=left\nhtml_height=550\nhtml_width=750\nelement_path=1\nfonts=1\npaste=1\nsearchreplace=1\ninsertdate=1\nformat_date=%Y-%m-%d\ninserttime=1\nformat_time=%H:%M:%S\ncolors=1\ntable=1\nsmilies=1\nmedia=1\nhr=1\ndirectionality=1\nfullscreen=1\nstyle=1\nlayer=1\nxhtmlxtras=1\nvisualchars=1\nnonbreaking=1\ntemplate=0\nadvimage=1\nadvlink=1\nautosave=1\ncontextmenu=1\ninlinepopups=1\nsafari=1\ncustom_plugin=\ncustom_button=\n\n'),
(20, 'Editor - XStandard Lite 2.0', 'xstandard', 'editors', 0, 0, 0, 1, 0, 0, '0000-00-00 00:00:00', ''),
(21, 'Editor Button - Image', 'image', 'editors-xtd', 0, 0, 1, 0, 0, 0, '0000-00-00 00:00:00', ''),
(22, 'Editor Button - Pagebreak', 'pagebreak', 'editors-xtd', 0, 0, 1, 0, 0, 0, '0000-00-00 00:00:00', ''),
(23, 'Editor Button - Readmore', 'readmore', 'editors-xtd', 0, 0, 1, 0, 0, 0, '0000-00-00 00:00:00', ''),
(24, 'XML-RPC - Joomla', 'joomla', 'xmlrpc', 0, 7, 0, 1, 0, 0, '0000-00-00 00:00:00', ''),
(25, 'XML-RPC - Blogger API', 'blogger', 'xmlrpc', 0, 7, 0, 1, 0, 0, '0000-00-00 00:00:00', 'catid=1\nsectionid=0\n\n'),
(27, 'System - SEF', 'sef', 'system', 0, 1, 1, 0, 0, 0, '0000-00-00 00:00:00', ''),
(28, 'System - Debug', 'debug', 'system', 0, 2, 1, 0, 0, 0, '0000-00-00 00:00:00', 'queries=1\nmemory=1\nlangauge=1\n\n'),
(29, 'System - Legacy', 'legacy', 'system', 0, 3, 0, 1, 0, 0, '0000-00-00 00:00:00', 'route=0\n\n'),
(30, 'System - Cache', 'cache', 'system', 0, 4, 0, 1, 0, 0, '0000-00-00 00:00:00', 'browsercache=0\ncachetime=15\n\n'),
(31, 'System - Log', 'log', 'system', 0, 5, 0, 1, 0, 0, '0000-00-00 00:00:00', ''),
(32, 'System - Remember Me', 'remember', 'system', 0, 6, 1, 1, 0, 0, '0000-00-00 00:00:00', ''),
(33, 'System - Backlink', 'backlink', 'system', 0, 7, 0, 1, 0, 0, '0000-00-00 00:00:00', ''),
(38, 'Content - Picture Cube Plugin', 'plg_picturecube', 'content', 0, 0, 0, 0, 0, 0, '0000-00-00 00:00:00', 'enabled=1\nsrc=http://vatlieu.us/plugins/content/plg_picturecube/picturecube06.jpg|http://vatlieu.us/plugins/content/plg_picturecube/picturecube01.jpg|http://vatlieu.us/plugins/content/plg_picturecube/picturecube02.jpg|http://vatlieu.us/plugins/content/plg_picturecube/picturecube03.jpg|http://vatlieu.us/plugins/content/plg_picturecube/picturecube04.jpg|http://vatlieu.us/plugins/content/plg_picturecube/picturecube05.jpg\nwidth=450\nheight=350\ncubesize=200\n');

-- --------------------------------------------------------

--
-- Table structure for table `jos_polls`
--

CREATE TABLE `jos_polls` (
  `id` int(11) unsigned NOT NULL auto_increment,
  `title` varchar(255) NOT NULL default '',
  `alias` varchar(255) NOT NULL default '',
  `voters` int(9) NOT NULL default '0',
  `checked_out` int(11) NOT NULL default '0',
  `checked_out_time` datetime NOT NULL default '0000-00-00 00:00:00',
  `published` tinyint(1) NOT NULL default '0',
  `access` int(11) NOT NULL default '0',
  `lag` int(11) NOT NULL default '0',
  PRIMARY KEY  (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=15 ;

--
-- Dumping data for table `jos_polls`
--

INSERT INTO `jos_polls` (`id`, `title`, `alias`, `voters`, `checked_out`, `checked_out_time`, `published`, `access`, `lag`) VALUES
(14, 'Joomla! is used for?', 'joomla-is-used-for', 11, 0, '0000-00-00 00:00:00', 0, 0, 86400);

-- --------------------------------------------------------

--
-- Table structure for table `jos_poll_data`
--

CREATE TABLE `jos_poll_data` (
  `id` int(11) NOT NULL auto_increment,
  `pollid` int(11) NOT NULL default '0',
  `text` text NOT NULL,
  `hits` int(11) NOT NULL default '0',
  PRIMARY KEY  (`id`),
  KEY `pollid` (`pollid`,`text`(1))
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=13 ;

--
-- Dumping data for table `jos_poll_data`
--

INSERT INTO `jos_poll_data` (`id`, `pollid`, `text`, `hits`) VALUES
(1, 14, 'Community Sites', 2),
(2, 14, 'Public Brand Sites', 3),
(3, 14, 'eCommerce', 1),
(4, 14, 'Blogs', 0),
(5, 14, 'Intranets', 0),
(6, 14, 'Photo and Media Sites', 2),
(7, 14, 'All of the Above!', 3),
(8, 14, '', 0),
(9, 14, '', 0),
(10, 14, '', 0),
(11, 14, '', 0),
(12, 14, '', 0);

-- --------------------------------------------------------

--
-- Table structure for table `jos_poll_date`
--

CREATE TABLE `jos_poll_date` (
  `id` bigint(20) NOT NULL auto_increment,
  `date` datetime NOT NULL default '0000-00-00 00:00:00',
  `vote_id` int(11) NOT NULL default '0',
  `poll_id` int(11) NOT NULL default '0',
  PRIMARY KEY  (`id`),
  KEY `poll_id` (`poll_id`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=12 ;

--
-- Dumping data for table `jos_poll_date`
--

INSERT INTO `jos_poll_date` (`id`, `date`, `vote_id`, `poll_id`) VALUES
(1, '2006-10-09 13:01:58', 1, 14),
(2, '2006-10-10 15:19:43', 7, 14),
(3, '2006-10-11 11:08:16', 7, 14),
(4, '2006-10-11 15:02:26', 2, 14),
(5, '2006-10-11 15:43:03', 7, 14),
(6, '2006-10-11 15:43:38', 7, 14),
(7, '2006-10-12 00:51:13', 2, 14),
(8, '2007-05-10 19:12:29', 3, 14),
(9, '2007-05-14 14:18:00', 6, 14),
(10, '2007-06-10 15:20:29', 6, 14),
(11, '2007-07-03 12:37:53', 2, 14);

-- --------------------------------------------------------

--
-- Table structure for table `jos_poll_menu`
--

CREATE TABLE `jos_poll_menu` (
  `pollid` int(11) NOT NULL default '0',
  `menuid` int(11) NOT NULL default '0',
  PRIMARY KEY  (`pollid`,`menuid`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_poll_menu`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_sections`
--

CREATE TABLE `jos_sections` (
  `id` int(11) NOT NULL auto_increment,
  `title` varchar(255) NOT NULL default '',
  `name` varchar(255) NOT NULL default '',
  `alias` varchar(255) NOT NULL default '',
  `image` text NOT NULL,
  `scope` varchar(50) NOT NULL default '',
  `image_position` varchar(30) NOT NULL default '',
  `description` text NOT NULL,
  `published` tinyint(1) NOT NULL default '0',
  `checked_out` int(11) unsigned NOT NULL default '0',
  `checked_out_time` datetime NOT NULL default '0000-00-00 00:00:00',
  `ordering` int(11) NOT NULL default '0',
  `access` tinyint(3) unsigned NOT NULL default '0',
  `count` int(11) NOT NULL default '0',
  `params` text NOT NULL,
  PRIMARY KEY  (`id`),
  KEY `idx_scope` (`scope`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=5 ;

--
-- Dumping data for table `jos_sections`
--

INSERT INTO `jos_sections` (`id`, `title`, `name`, `alias`, `image`, `scope`, `image_position`, `description`, `published`, `checked_out`, `checked_out_time`, `ordering`, `access`, `count`, `params`) VALUES
(1, 'News', '', 'news', 'articles.jpg', 'content', 'right', '<p>Select a news topic from the list below, then select a news article to read.</p>', 1, 0, '0000-00-00 00:00:00', 3, 0, 3, ''),
(3, 'FAQs', '', 'faqs', 'key.jpg', 'content', 'left', 'From the list below choose one of our FAQs topics, then select an FAQ to read. If you have a question which is not in this section, please contact us.', 1, 0, '0000-00-00 00:00:00', 5, 0, 23, ''),
(4, 'About PDMA', '', 'about-pdma', '', 'content', 'left', '', 1, 0, '0000-00-00 00:00:00', 2, 0, 15, '');

-- --------------------------------------------------------

--
-- Table structure for table `jos_session`
--

CREATE TABLE `jos_session` (
  `username` varchar(150) default '',
  `time` varchar(14) default '',
  `session_id` varchar(200) NOT NULL default '0',
  `guest` tinyint(4) default '1',
  `userid` int(11) default '0',
  `usertype` varchar(50) default '',
  `gid` tinyint(3) unsigned NOT NULL default '0',
  `client_id` tinyint(3) unsigned NOT NULL default '0',
  `data` longtext,
  PRIMARY KEY  (`session_id`(64)),
  KEY `whosonline` (`guest`,`usertype`),
  KEY `userid` (`userid`),
  KEY `time` (`time`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_session`
--

INSERT INTO `jos_session` (`username`, `time`, `session_id`, `guest`, `userid`, `usertype`, `gid`, `client_id`, `data`) VALUES
('', '1272641912', 'd210n4a5ps0l648d4bftkgtsa5', 1, 0, '', 0, 0, '__default|a:7:{s:15:"session.counter";i:13;s:19:"session.timer.start";i:1272641462;s:18:"session.timer.last";i:1272641868;s:17:"session.timer.now";i:1272641912;s:22:"session.client.browser";s:84:"Mozilla/5.0 (Windows; U; Windows NT 6.1; en-US; rv:1.9.2) Gecko/20100115 Firefox/3.6";s:8:"registry";O:9:"JRegistry":3:{s:17:"_defaultNameSpace";s:7:"session";s:9:"_registry";a:1:{s:7:"session";a:1:{s:4:"data";O:8:"stdClass":0:{}}}s:7:"_errors";a:0:{}}s:4:"user";O:5:"JUser":19:{s:2:"id";i:0;s:4:"name";N;s:8:"username";N;s:5:"email";N;s:8:"password";N;s:14:"password_clear";s:0:"";s:8:"usertype";N;s:5:"block";N;s:9:"sendEmail";i:0;s:3:"gid";i:0;s:12:"registerDate";N;s:13:"lastvisitDate";N;s:10:"activation";N;s:6:"params";N;s:3:"aid";i:0;s:5:"guest";i:1;s:7:"_params";O:10:"JParameter":7:{s:4:"_raw";s:0:"";s:4:"_xml";N;s:9:"_elements";a:0:{}s:12:"_elementPath";a:1:{i:0;s:55:"C:\\wamp\\www\\vms\\libraries\\joomla\\html\\parameter\\element";}s:17:"_defaultNameSpace";s:8:"_default";s:9:"_registry";a:1:{s:8:"_default";a:1:{s:4:"data";O:8:"stdClass":0:{}}}s:7:"_errors";a:0:{}}s:9:"_errorMsg";N;s:7:"_errors";a:0:{}}}'),
('', '1272641933', 'gafbr92vkc99ec3k2hpukc1u60', 1, 0, '', 0, 1, '__default|a:8:{s:15:"session.counter";i:1;s:19:"session.timer.start";i:1272641933;s:18:"session.timer.last";i:1272641933;s:17:"session.timer.now";i:1272641933;s:22:"session.client.browser";s:84:"Mozilla/5.0 (Windows; U; Windows NT 6.1; en-US; rv:1.9.2) Gecko/20100115 Firefox/3.6";s:8:"registry";O:9:"JRegistry":3:{s:17:"_defaultNameSpace";s:7:"session";s:9:"_registry";a:1:{s:7:"session";a:1:{s:4:"data";O:8:"stdClass":0:{}}}s:7:"_errors";a:0:{}}s:4:"user";O:5:"JUser":19:{s:2:"id";i:0;s:4:"name";N;s:8:"username";N;s:5:"email";N;s:8:"password";N;s:14:"password_clear";s:0:"";s:8:"usertype";N;s:5:"block";N;s:9:"sendEmail";i:0;s:3:"gid";i:0;s:12:"registerDate";N;s:13:"lastvisitDate";N;s:10:"activation";N;s:6:"params";N;s:3:"aid";i:0;s:5:"guest";i:1;s:7:"_params";O:10:"JParameter":7:{s:4:"_raw";s:0:"";s:4:"_xml";N;s:9:"_elements";a:0:{}s:12:"_elementPath";a:1:{i:0;s:55:"C:\\wamp\\www\\vms\\libraries\\joomla\\html\\parameter\\element";}s:17:"_defaultNameSpace";s:8:"_default";s:9:"_registry";a:1:{s:8:"_default";a:1:{s:4:"data";O:8:"stdClass":0:{}}}s:7:"_errors";a:0:{}}s:9:"_errorMsg";N;s:7:"_errors";a:0:{}}s:13:"session.token";s:32:"e28e93046e511a3d89cd6855aa30f1b1";}');

-- --------------------------------------------------------

--
-- Table structure for table `jos_stats_agents`
--

CREATE TABLE `jos_stats_agents` (
  `agent` varchar(255) NOT NULL default '',
  `type` tinyint(1) unsigned NOT NULL default '0',
  `hits` int(11) unsigned NOT NULL default '1'
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_stats_agents`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_templates_menu`
--

CREATE TABLE `jos_templates_menu` (
  `template` varchar(255) NOT NULL default '',
  `menuid` int(11) NOT NULL default '0',
  `client_id` tinyint(4) NOT NULL default '0',
  PRIMARY KEY  (`menuid`,`client_id`,`template`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `jos_templates_menu`
--

INSERT INTO `jos_templates_menu` (`template`, `menuid`, `client_id`) VALUES
('siteground-j15-14', 0, 0),
('khepri', 0, 1);

-- --------------------------------------------------------

--
-- Table structure for table `jos_users`
--

CREATE TABLE `jos_users` (
  `id` int(11) NOT NULL auto_increment,
  `name` varchar(255) NOT NULL default '',
  `username` varchar(150) NOT NULL default '',
  `email` varchar(100) NOT NULL default '',
  `password` varchar(100) NOT NULL default '',
  `usertype` varchar(25) NOT NULL default '',
  `block` tinyint(4) NOT NULL default '0',
  `sendEmail` tinyint(4) default '0',
  `gid` tinyint(3) unsigned NOT NULL default '1',
  `registerDate` datetime NOT NULL default '0000-00-00 00:00:00',
  `lastvisitDate` datetime NOT NULL default '0000-00-00 00:00:00',
  `activation` varchar(100) NOT NULL default '',
  `params` text NOT NULL,
  PRIMARY KEY  (`id`),
  KEY `usertype` (`usertype`),
  KEY `idx_name` (`name`),
  KEY `gid_block` (`gid`,`block`),
  KEY `username` (`username`),
  KEY `email` (`email`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=67 ;

--
-- Dumping data for table `jos_users`
--

INSERT INTO `jos_users` (`id`, `name`, `username`, `email`, `password`, `usertype`, `block`, `sendEmail`, `gid`, `registerDate`, `lastvisitDate`, `activation`, `params`) VALUES
(62, 'Super Administrator', 'admin', 'saeedlayyah393@yahoo.com', '962dc4b6c84195fd090f8437468ee374:lFc30RAMT2STtdo7yE84yame58sqEVlI', 'Super Administrator', 0, 1, 25, '2010-04-11 16:47:04', '2010-04-30 15:38:53', '', 'admin_language=\nlanguage=\neditor=\nhelpsite=\ntimezone=0\n\n'),
(63, 'saeed ahmed', 'saeed', 'saeed@yahoo.com', 'b2bc51af2cb7c2b69af10fd4777ad2e2:9aZKx70LYeVydzokrHUDH1EB3nhs5oqm', 'Registered', 0, 0, 18, '2010-04-13 19:03:05', '2010-04-29 13:53:56', '094d284fa361c8e2030cb23fa3cf72ed', 'language=\ntimezone=0\n\n'),
(64, 'atif kamran', 'atif', 'atif@yahoo.com', '293dcfbc3130cb6644187596b11e6858:DCiFCO3axWTWX44uydfe32EL7Ie2QS0z', 'Registered', 0, 0, 18, '2010-04-13 19:03:55', '2010-04-19 19:11:49', '3c97a3a0fd12dc0e1615b85851b3c9d3', 'language=\ntimezone=0\n\n'),
(65, 'Waseem', 'waseem', 'waseem@yahoo.com', '0a796e7855204bcc4f95521ad1fbae0a:ENvddaQ3VH1GcpmsDcvrxjS2QVHoxqfL', 'Registered', 0, 0, 18, '2010-04-14 15:34:22', '2010-04-16 16:56:29', '', 'language=en-GB\ntimezone=0\n\n'),
(66, 'Administrator', 'administrator', 'admin@yahoo.com', '7c43583089af312dde3968f1668b6462:zPF8yQVH238poWIpN6Fri2Tvzvn89bP9', 'Administrator', 0, 0, 24, '2010-04-17 15:30:50', '2010-04-29 13:59:27', '', 'admin_language=\nlanguage=\neditor=\nhelpsite=\ntimezone=0\n\n');

-- --------------------------------------------------------

--
-- Table structure for table `jos_users_extended_data`
--

CREATE TABLE `jos_users_extended_data` (
  `id` int(11) NOT NULL auto_increment,
  `user_id` int(11) NOT NULL default '0',
  `field_id` int(11) NOT NULL default '0',
  `uvalue` text NOT NULL,
  `ctime` datetime NOT NULL default '0000-00-00 00:00:00',
  PRIMARY KEY  (`id`),
  KEY `second` (`user_id`),
  KEY `third` (`field_id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

--
-- Dumping data for table `jos_users_extended_data`
--


-- --------------------------------------------------------

--
-- Table structure for table `jos_weblinks`
--

CREATE TABLE `jos_weblinks` (
  `id` int(11) unsigned NOT NULL auto_increment,
  `catid` int(11) NOT NULL default '0',
  `sid` int(11) NOT NULL default '0',
  `title` varchar(250) NOT NULL default '',
  `alias` varchar(255) NOT NULL default '',
  `url` varchar(250) NOT NULL default '',
  `description` text NOT NULL,
  `date` datetime NOT NULL default '0000-00-00 00:00:00',
  `hits` int(11) NOT NULL default '0',
  `published` tinyint(1) NOT NULL default '0',
  `checked_out` int(11) NOT NULL default '0',
  `checked_out_time` datetime NOT NULL default '0000-00-00 00:00:00',
  `ordering` int(11) NOT NULL default '0',
  `archived` tinyint(1) NOT NULL default '0',
  `approved` tinyint(1) NOT NULL default '1',
  `params` text NOT NULL,
  PRIMARY KEY  (`id`),
  KEY `catid` (`catid`,`published`,`archived`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=7 ;

--
-- Dumping data for table `jos_weblinks`
--

INSERT INTO `jos_weblinks` (`id`, `catid`, `sid`, `title`, `alias`, `url`, `description`, `date`, `hits`, `published`, `checked_out`, `checked_out_time`, `ordering`, `archived`, `approved`, `params`) VALUES
(1, 2, 0, 'Joomla!', 'joomla', 'http://www.joomla.org', 'Home of Joomla!', '2005-02-14 15:19:02', 3, 0, 0, '0000-00-00 00:00:00', 1, 0, 1, 'target=0'),
(2, 2, 0, 'php.net', 'php', 'http://www.php.net', 'The language that Joomla! is developed in', '2004-07-07 11:33:24', 6, 0, 0, '0000-00-00 00:00:00', 3, 0, 1, ''),
(3, 2, 0, 'MySQL', 'mysql', 'http://www.mysql.com', 'The database that Joomla! uses', '2004-07-07 10:18:31', 1, 0, 0, '0000-00-00 00:00:00', 5, 0, 1, ''),
(4, 2, 0, 'OpenSourceMatters', 'opensourcematters', 'http://www.opensourcematters.org', 'Home of OSM', '2005-02-14 15:19:02', 11, 0, 0, '0000-00-00 00:00:00', 2, 0, 1, 'target=0'),
(5, 2, 0, 'Joomla! - Forums', 'joomla-forums', 'http://forum.joomla.org', 'Joomla! Forums', '2005-02-14 15:19:02', 4, 0, 0, '0000-00-00 00:00:00', 4, 0, 1, 'target=0'),
(6, 2, 0, 'Ohloh Tracking of Joomla!', 'ohloh-tracking-of-joomla', 'http://www.ohloh.net/projects/20', 'Objective reports from Ohloh about Joomla''s development activity. Joomla! has some star developers with serious kudos.', '2007-07-19 09:28:31', 1, 0, 0, '0000-00-00 00:00:00', 6, 0, 1, 'target=0\n\n');
