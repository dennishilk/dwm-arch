<!DOCTYPE html>
<html lang="de-DE" data-theme="codeberg-auto">
<head>
	<meta name="viewport" content="width=device-width, initial-scale=1">
	
	<title>dwm-setup/suckless/st/config.def.h an main - justaguylinux/dwm-setup - Codeberg.org</title>
	<link rel="manifest" href="data:application/json;base64,eyJuYW1lIjoiQ29kZWJlcmcub3JnIiwic2hvcnRfbmFtZSI6IkNvZGViZXJnLm9yZyIsInN0YXJ0X3VybCI6Imh0dHBzOi8vY29kZWJlcmcub3JnLyIsImljb25zIjpbeyJzcmMiOiJodHRwczovL2NvZGViZXJnLm9yZy9hc3NldHMvaW1nL2xvZ28ucG5nIiwidHlwZSI6ImltYWdlL3BuZyIsInNpemVzIjoiNTEyeDUxMiJ9LHsic3JjIjoiaHR0cHM6Ly9jb2RlYmVyZy5vcmcvYXNzZXRzL2ltZy9sb2dvLnN2ZyIsInR5cGUiOiJpbWFnZS9zdmcreG1sIiwic2l6ZXMiOiI1MTJ4NTEyIn1dfQ==">
	<meta name="author" content="justaguylinux">
	<meta name="description" content="dwm-setup - Minimalist DWM build with curated patches, themes, and sxhkd-powered keybindings.">
	<meta name="keywords" content="git,non-profit,foss,oss,free,software,open,source,code,hosting">
	<meta name="referrer" content="no-referrer">


	<link rel="alternate" type="application/atom+xml" title="" href="/justaguylinux/dwm-setup.atom">
	<link rel="alternate" type="application/rss+xml" title="" href="/justaguylinux/dwm-setup.rss">

	<link rel="icon" href="/assets/img/favicon.svg" type="image/svg+xml">
	<link rel="alternate icon" href="/assets/img/favicon.png" type="image/png">
	
<script>
	
	window.addEventListener('error', function(e) {window._globalHandlerErrors=window._globalHandlerErrors||[]; window._globalHandlerErrors.push(e);});
	window.addEventListener('unhandledrejection', function(e) {window._globalHandlerErrors=window._globalHandlerErrors||[]; window._globalHandlerErrors.push(e);});
	window.config = {
		appUrl: 'https:\/\/codeberg.org\/',
		appSubUrl: '',
		assetVersionEncoded: encodeURIComponent('13.0.0-dev-623-c059966a~gitea-1.22.0'), 
		assetUrlPrefix: '\/assets',
		runModeIsProd:  true ,
		customEmojis: new Set(["git","gitea","codeberg","gitlab","github","gogs","forgejo"]),
		csrfToken: 'OeK5RTGXoEgoNCjwge7_u6F21MA6MTc2MjYxNjMzNzMyNTgyOTM0MA',
		pageData: {"DATETIMESTRINGS":{"FUTURE":"in der Zukunft","NOW":"jetzt","relativetime.1day":"gestern","relativetime.1month":"letzten Monat","relativetime.1week":"letzte Woche","relativetime.1year":"letztes Jahr","relativetime.2days":"vorgestern","relativetime.2months":"vor zwei Monaten","relativetime.2weeks":"vor zwei Wochen","relativetime.2years":"vor zwei Jahren"},"PLURALSTRINGS_FALLBACK":{},"PLURALSTRINGS_LANG":{"relativetime.days":["vor %d Tag","vor %d Tagen"],"relativetime.hours":["vor %d Stunde","vor %d Stunden"],"relativetime.mins":["vor %d Minute","vor %d Minuten"],"relativetime.months":["vor %d Monat","vor %d Monaten"],"relativetime.weeks":["vor %d Woche","vor %d Wochen"],"relativetime.years":["vor %d Jahr","vor %d Jahren"]},"PLURAL_RULE_FALLBACK":0,"PLURAL_RULE_LANG":0},
		notificationSettings: {"EventSourceUpdateTime":10000,"MaxTimeout":60000,"MinTimeout":10000,"TimeoutStep":10000}, 
		enableTimeTracking:  true ,
		
		mermaidMaxSourceCharacters:  50000 ,
		
		i18n: {
			copy_success: "Kopiert!",
			copy_error: "Kopieren fehlgeschlagen",
			error_occurred: "Ein Fehler ist aufgetreten",
			network_error: "Netzwerkfehler",
			remove_label_str: "Element „%s“ entfernen",
			modal_confirm: "Bestätigen",
			modal_cancel: "Abbrechen",
			more_items: "Mehr Einträge",
			incorrect_root_url: "Diese Forgejo-Instanz ist konfiguriert, auf „https://codeberg.org/“ bereitgestellt zu werden. Du rufst Forgejo über einen anderen URL auf, was dazu führen könnte, dass einige Bereiche nicht funktionieren. Der anerkannte URL wird durch die Forgejo-Admins mittels der Einstellung ROOT_URL in der app.ini kontrolliert.",
		},
	};
	
	window.config.pageData = window.config.pageData || {};
</script>
<script src="/assets/js/webcomponents.js?v=13.0.0-dev-623-c059966a~gitea-1.22.0"></script>

	

	
	<meta property="og:title" content="dwm-setup/suckless/st/config.def.h an main">


	<meta property="og:url" content="https://codeberg.org//justaguylinux/dwm-setup/src/branch/main/suckless/st/config.def.h">


	<meta property="og:type" content="object">


	<meta property="og:image" content="https://codeberg.org/justaguylinux/dwm-setup/-/summary-card">
	
		<meta property="og:image:width" content="1200">
	
	
		<meta property="og:image:height" content="600">
	
	
		<meta property="og:image:alt" content="Zusammenfassungskarte des Repositorys justaguylinux/dwm-setup, beschrieben als Minimalist DWM build with curated patches, themes, and sxhkd-powered keybindings.">
	

<meta property="og:site_name" content="Codeberg.org">

	<link rel="stylesheet" href="/assets/css/index.css?v=13.0.0-dev-623-c059966a~gitea-1.22.0">
<link rel="stylesheet" href="/assets/css/theme-codeberg-auto.css?v=13.0.0-dev-623-c059966a~gitea-1.22.0">

	
</head>
<body class="no-js" hx-headers='{"x-csrf-token": "OeK5RTGXoEgoNCjwge7_u6F21MA6MTc2MjYxNjMzNzMyNTgyOTM0MA"}' hx-swap="outerHTML" hx-ext="morph" hx-push-url="false">
	

	<div class="full height">
		<noscript>
			<div class="tw-ml-2 tw-mr-2 tw-text-center tw-text-text-light-2">Diese Website benötigt JavaScript.</div>
		</noscript>

		

		
			


<nav id="navbar" aria-label="Navigationsleiste">
	<div class="navbar-left ui secondary menu">
		
		<a class="item" id="navbar-logo" href="/" aria-label="Startseite">
			<img width="30" height="30" src="https://design.codeberg.org/logo-kit/icon_inverted.svg" aria-hidden="true">
		</a>

		
		<div class="ui secondary menu item navbar-mobile-right only-mobile">
			
			<button class="item tw-w-auto ui icon mini button tw-p-2 tw-m-0" id="navbar-expand-toggle" aria-label="Menü umschalten"><svg viewBox="0 0 16 16" class="svg octicon-three-bars" aria-hidden="true" width="16" height="16"><path d="M1 2.75A.75.75 0 0 1 1.75 2h12.5a.75.75 0 0 1 0 1.5H1.75A.75.75 0 0 1 1 2.75m0 5A.75.75 0 0 1 1.75 7h12.5a.75.75 0 0 1 0 1.5H1.75A.75.75 0 0 1 1 7.75M1.75 12h12.5a.75.75 0 0 1 0 1.5H1.75a.75.75 0 0 1 0-1.5"/></svg></button>
		</div>

		
		
			<a class="item" href="/explore/repos">Erkunden</a>
		

		
			<a class="item" target="_blank" href="https://docs.codeberg.org/getting-started/what-is-codeberg/#what-is-codeberg-e.v.%3F">About</a>
			<a class="item" target="_blank" href="https://docs.codeberg.org/getting-started/faq/">FAQ</a>
			<a class="item" target="_blank" rel="noopener noreferrer" href="https://docs.codeberg.org">Hilfe</a>
		

		<a class="item donation-pretty" href="https://donate.codeberg.org">Donate</a>

	</div>

	
	<div class="navbar-right ui secondary menu">
		
			
				<a class="item" href="/user/sign_up">
					<svg viewBox="0 0 16 16" class="tw-mr-1 svg octicon-person" aria-hidden="true" width="16" height="16"><path d="M10.561 8.073a6 6 0 0 1 3.432 5.142.75.75 0 1 1-1.498.07 4.5 4.5 0 0 0-8.99 0 .75.75 0 0 1-1.498-.07 6 6 0 0 1 3.431-5.142 3.999 3.999 0 1 1 5.123 0M10.5 5a2.5 2.5 0 1 0-5 0 2.5 2.5 0 0 0 5 0"/></svg>
					<span>Registrieren</span>
				</a>
			
			<a class="item" rel="nofollow" href="/user/login?redirect_to=%2fjustaguylinux%2fdwm-setup%2fsrc%2fbranch%2fmain%2fsuckless%2fst%2fconfig.def.h">
				<svg viewBox="0 0 16 16" class="tw-mr-1 svg octicon-sign-in" aria-hidden="true" width="16" height="16"><path d="M2 2.75C2 1.784 2.784 1 3.75 1h2.5a.75.75 0 0 1 0 1.5h-2.5a.25.25 0 0 0-.25.25v10.5c0 .138.112.25.25.25h2.5a.75.75 0 0 1 0 1.5h-2.5A1.75 1.75 0 0 1 2 13.25Zm6.56 4.5h5.69a.75.75 0 0 1 0 1.5H8.56l1.97 1.97a.749.749 0 0 1-.326 1.275.75.75 0 0 1-.734-.215L6.22 8.53a.75.75 0 0 1 0-1.06l3.25-3.25a.749.749 0 0 1 1.275.326.75.75 0 0 1-.215.734Z"/></svg>
				<span>Anmelden</span>
			</a>
		
	</div>
</nav>

		



<div role="main" aria-label="dwm-setup/suckless/st/config.def.h an main" class="page-content repository file list ">
	<div class="secondary-nav">

	<div class="ui container">
		<div class="repo-header">
			<div class="flex-item tw-items-center">
				<div class="flex-item-leading">
					

	<svg viewBox="0 0 16 16" class="svg octicon-repo" aria-hidden="true" width="24" height="24"><path d="M2 2.5A2.5 2.5 0 0 1 4.5 0h8.75a.75.75 0 0 1 .75.75v12.5a.75.75 0 0 1-.75.75h-2.5a.75.75 0 0 1 0-1.5h1.75v-2h-8a1 1 0 0 0-.714 1.7.75.75 0 1 1-1.072 1.05A2.5 2.5 0 0 1 2 11.5Zm10.5-1h-8a1 1 0 0 0-1 1v6.708A2.5 2.5 0 0 1 4.5 9h8ZM5 12.25a.25.25 0 0 1 .25-.25h3.5a.25.25 0 0 1 .25.25v3.25a.25.25 0 0 1-.4.2l-1.45-1.087a.25.25 0 0 0-.3 0L5.4 15.7a.25.25 0 0 1-.4-.2Z"/></svg>


				</div>
				<div class="flex-item-main">
					<div class="flex-item-title gt-font-18">
						<a class="muted gt-font-normal" href="/justaguylinux">justaguylinux</a>/<a class="muted" href="/justaguylinux/dwm-setup">dwm-setup</a>
					</div>
				</div>
				<div class="flex-item-trailing">
					
					
						
					
					
					
				</div>
			</div>
			
				<div class="repo-buttons button-row">
					
					
					
					
					<a class="ui compact small basic button" href="/justaguylinux/dwm-setup.rss" data-tooltip-content="RSS-Feed">
						<svg viewBox="0 0 16 16" class="svg octicon-rss" aria-hidden="true" width="16" height="16"><path d="M2.002 2.725a.75.75 0 0 1 .797-.699C8.79 2.42 13.58 7.21 13.974 13.201a.75.75 0 0 1-1.497.098 10.5 10.5 0 0 0-9.776-9.776.747.747 0 0 1-.7-.798ZM2.84 7.05h-.002a7 7 0 0 1 6.113 6.111.75.75 0 0 1-1.49.178 5.5 5.5 0 0 0-4.8-4.8.75.75 0 0 1 .179-1.489M2 13a1 1 0 1 1 2 0 1 1 0 0 1-2 0"/></svg>
					</a>
					
					<form hx-boost="true" hx-target="this" method="post" action="/justaguylinux/dwm-setup/action/watch">
	<div class="ui labeled button" data-tooltip-content="Melde dich an, um dieses Repository zu beobachten.">
		<button type="submit" class="ui compact small basic button" disabled>
			
				<svg viewBox="0 0 16 16" class="svg octicon-eye" aria-hidden="true" width="16" height="16"><path d="M8 2c1.981 0 3.671.992 4.933 2.078 1.27 1.091 2.187 2.345 2.637 3.023a1.62 1.62 0 0 1 0 1.798c-.45.678-1.367 1.932-2.637 3.023C11.67 13.008 9.981 14 8 14s-3.671-.992-4.933-2.078C1.797 10.83.88 9.576.43 8.898a1.62 1.62 0 0 1 0-1.798c.45-.677 1.367-1.931 2.637-3.022C4.33 2.992 6.019 2 8 2M1.679 7.932a.12.12 0 0 0 0 .136c.411.622 1.241 1.75 2.366 2.717C5.176 11.758 6.527 12.5 8 12.5s2.825-.742 3.955-1.715c1.124-.967 1.954-2.096 2.366-2.717a.12.12 0 0 0 0-.136c-.412-.621-1.242-1.75-2.366-2.717C10.824 4.242 9.473 3.5 8 3.5s-2.825.742-3.955 1.715c-1.124.967-1.954 2.096-2.366 2.717M8 10a2 2 0 1 1-.001-3.999A2 2 0 0 1 8 10"/></svg><span class="text not-mobile">Beobachten</span>
			
		</button>
		<a hx-boost="false" class="ui basic label" href="/justaguylinux/dwm-setup/watchers">
			1
		</a>
	</div>
</form>

					
					<form hx-boost="true" hx-target="this" method="post" action="/justaguylinux/dwm-setup/action/star">
	<div class="ui labeled button" data-tooltip-content="Melde dich an, um dieses Repository zu favorisieren.">
		<button type="submit" class="ui compact small basic button" disabled>
			
				<svg viewBox="0 0 16 16" class="svg octicon-star" aria-hidden="true" width="16" height="16"><path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25m0 2.445L6.615 5.5a.75.75 0 0 1-.564.41l-3.097.45 2.24 2.184a.75.75 0 0 1 .216.664l-.528 3.084 2.769-1.456a.75.75 0 0 1 .698 0l2.77 1.456-.53-3.084a.75.75 0 0 1 .216-.664l2.24-2.183-3.096-.45a.75.75 0 0 1-.564-.41z"/></svg><span class="text not-mobile">Favorisieren</span>
			
		</button>
		<a hx-boost="false" class="ui basic label" href="/justaguylinux/dwm-setup/stars">
			2
		</a>
	</div>
</form>

					
					
					

	<div class="ui labeled button
		
			disabled
		"
		
			data-tooltip-content="Melde dich an, um dieses Repository zu forken."
		
	>
		<a class="ui compact small basic button"
			
				
			
		>
			<svg viewBox="0 0 16 16" class="svg octicon-repo-forked" aria-hidden="true" width="16" height="16"><path d="M5 5.372v.878c0 .414.336.75.75.75h4.5a.75.75 0 0 0 .75-.75v-.878a2.25 2.25 0 1 1 1.5 0v.878a2.25 2.25 0 0 1-2.25 2.25h-1.5v2.128a2.251 2.251 0 1 1-1.5 0V8.5h-1.5A2.25 2.25 0 0 1 3.5 6.25v-.878a2.25 2.25 0 1 1 1.5 0M5 3.25a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0m6.75.75a.75.75 0 1 0 0-1.5.75.75 0 0 0 0 1.5m-3 8.75a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0"/></svg><span class="text not-mobile">Fork</span>
		</a>
		<div class="ui small modal" id="fork-repo-modal">
			<div class="header">
				Du hast bereits einen Fork von dwm-setup erstellt
			</div>
			<div class="content tw-text-left">
				<div class="ui list">
					
				</div>
				
			</div>
		</div>
		<a class="ui basic label" href="/justaguylinux/dwm-setup/forks">
			2
		</a>
	</div>



					
					
				</div>
			
		</div>
		
		
		
	</div>

	<overflow-menu class="ui container secondary pointing tabular top attached borderless menu tw-pt-0 tw-my-0">
		
			<div class="overflow-menu-items">
				
					<a class="active item" href="/justaguylinux/dwm-setup">
						<svg viewBox="0 0 16 16" class="svg octicon-code" aria-hidden="true" width="16" height="16"><path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.75.75 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.75.75 0 0 1 .734.215m-6.56 0a.75.75 0 0 1 1.042.018.75.75 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.75.75 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"/></svg> Code
					</a>
				

				
					<a class="item" href="/justaguylinux/dwm-setup/issues">
						<svg viewBox="0 0 16 16" class="svg octicon-issue-opened" aria-hidden="true" width="16" height="16"><path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3"/><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0M1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0"/></svg> Issues
						
					</a>
				

				

				
					<a class="item" href="/justaguylinux/dwm-setup/pulls">
						<svg viewBox="0 0 16 16" class="svg octicon-git-pull-request" aria-hidden="true" width="16" height="16"><path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25m5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354M3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5m0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5m8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0"/></svg> Pull-Requests
						
					</a>
				

				

				

				

				

				

				
					<a class="item" href="/justaguylinux/dwm-setup/activity">
						<svg viewBox="0 0 16 16" class="svg octicon-pulse" aria-hidden="true" width="16" height="16"><path d="M6 2c.306 0 .582.187.696.471L10 10.731l1.304-3.26A.75.75 0 0 1 12 7h3.25a.75.75 0 0 1 0 1.5h-2.742l-1.812 4.528a.751.751 0 0 1-1.392 0L6 4.77 4.696 8.03A.75.75 0 0 1 4 8.5H.75a.75.75 0 0 1 0-1.5h2.742l1.812-4.529A.75.75 0 0 1 6 2"/></svg> Aktivität
					</a>
				

				

				

				

				
			</div>
		
	</overflow-menu>
	<div class="ui tabs divider"></div>
</div>

	<div class="ui container ">
		




	<div id="flash-message" hx-swap-oob="true"></div>


		
		

		
		










		
		

		
		
		
		<div class="repo-button-row">
			<div class="tw-gap-y-2 button-sequence">
				






	




<script type="module">
	const data = {
		'textReleaseCompare': "Vergleichen",
		'textCreateTag': "Tag %s erstellen",
		'textCreateBranch': "Erstelle Branch %s",
		'textCreateBranchFrom': "von „%s“",
		'textBranches': "Branches",
		'textTags': "Tags",
		'textDefaultBranchLabel': "Standard",

		'mode': 'branches',
		'showBranchesInDropdown':  true ,
		'searchFieldPlaceholder': 'Branch oder Tag filtern...',
		'branchForm':  null ,
		'disableCreateBranch':  true ,
		'setAction':  null ,
		'submitForm':  null ,
		'viewType': "branch",
		'refName': "main",
		'commitIdShort': "2a1d3bf690",
		'tagName': "",
		'branchName': "main",
		'noTag':  null ,
		'defaultSelectedRefName': "main",
		'repoDefaultBranch': "main",
		'enableFeed':  true ,
		'rssURLPrefix': '\/justaguylinux\/dwm-setup/rss/branch/',
		'branchURLPrefix': '\/justaguylinux\/dwm-setup/src/branch/',
		'branchURLSuffix': '/suckless\/st\/config.def.h',
		'tagURLPrefix': '\/justaguylinux\/dwm-setup/src/tag/',
		'tagURLSuffix': '/suckless\/st\/config.def.h',
		'repoLink': "/justaguylinux/dwm-setup",
		'treePath': "suckless/st/config.def.h",
		'branchNameSubURL': "branch/main",
		'noResults': "Keine Ergebnisse verfügbar.",
	};
	
	window.config.pageData.branchDropdownDataList = window.config.pageData.branchDropdownDataList || [];
	window.config.pageData.branchDropdownDataList.push(data);
</script>

<div class="js-branch-tag-selector ">
	
	<div class="ui dropdown custom">
		<button class="branch-dropdown-button gt-ellipsis ui basic small compact button tw-flex tw-m-0">
			<span class="text tw-flex tw-items-center tw-mr-1 gt-ellipsis">
				
					
						<svg viewBox="0 0 16 16" class="svg octicon-git-branch" aria-hidden="true" width="16" height="16"><path d="M9.5 3.25a2.25 2.25 0 1 1 3 2.122V6A2.5 2.5 0 0 1 10 8.5H6a1 1 0 0 0-1 1v1.128a2.251 2.251 0 1 1-1.5 0V5.372a2.25 2.25 0 1 1 1.5 0v1.836A2.5 2.5 0 0 1 6 7h4a1 1 0 0 0 1-1v-.628A2.25 2.25 0 0 1 9.5 3.25m-6 0a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0m8.25-.75a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5M4.25 12a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5"/></svg>
					
					<strong ref="dropdownRefName" class="tw-ml-2 tw-inline-block gt-ellipsis">main</strong>
				
			</span>
			<svg viewBox="0 0 16 16" class="dropdown icon svg octicon-triangle-down" aria-hidden="true" width="14" height="14"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427"/></svg>
		</button>
	</div>
</div>

				
					
					
					
					
					<a id="new-pull-request" role="button" class="ui compact basic button" href="/justaguylinux/dwm-setup/compare/main...main"
						data-tooltip-content="Vergleichen">
						<svg viewBox="0 0 16 16" class="svg octicon-git-pull-request" aria-hidden="true" width="16" height="16"><path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25m5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354M3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5m0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5m8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0"/></svg>
					</a>
				
				
				

				

				
				
					<span class="breadcrumb repo-path tw-ml-1">
						<a class="section" href="/justaguylinux/dwm-setup/src/branch/main" title="dwm-setup">dwm-setup</a><span class="breadcrumb-divider">/</span><span class="section"><a href="/justaguylinux/dwm-setup/src/branch/main/suckless" title="suckless">suckless</a></span><span class="breadcrumb-divider">/</span><span class="section"><a href="/justaguylinux/dwm-setup/src/branch/main/suckless/st" title="st">st</a></span><span class="breadcrumb-divider">/</span><span class="active section" title="config.def.h">config.def.h</span>
								<button class="btn interact-fg tw-p-2" data-clipboard-text="suckless/st/config.def.h" data-tooltip-content="Pfad kopieren"><svg viewBox="0 0 16 16" class="svg octicon-copy" aria-hidden="true" width="14" height="14"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"/><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"/></svg></button></span>
				
			</div>
			<div class="tw-flex tw-items-center">
				
				
				
			</div>
		</div>

		

		


		
			<div class="tab-size-4 non-diff-file-content">

	
		<div id="repo-file-commit-box" class="ui segment list-header tw-mb-4 tw-flex tw-justify-between">
			<div class="latest-commit">
				
	
		<img loading="lazy" alt="" class="ui avatar tw-align-middle tw-mr-2" src="/avatars/79dbcd4791f7701ea7d361d974222c6ed6122450e299ff91899e20364579c041?size=48" title="justaguylinux" width="24" height="24"/>
		
			<a class="muted author-wrapper" title="JustAGuyLinux" href="/justaguylinux"><strong>JustAGuyLinux</strong></a>
		
	
	

<a href="/justaguylinux/dwm-setup/commit/e887949fbebeda7ebec362792e9ba77a02f4f788" rel="nofollow" class="sha label">
	<span class="shortsha">e887949fbe</span></a>

	

	
	<span class="grey commit-summary" title="new st build"><span class="message-wrapper"><a href="/justaguylinux/dwm-setup/commit/e887949fbebeda7ebec362792e9ba77a02f4f788" class="default-link muted">new st build</a></span>
		
	</span>


			</div>
			
				
					<div class="text grey age">
						<relative-time prefix="" tense="past" datetime="2025-05-15T14:25:15-04:00" data-tooltip-content data-tooltip-interactive="true">2025-05-15 14:25:15 -04:00</relative-time>
					</div>
				
			
		</div>
	

	<h4 class="file-header ui top attached header tw-flex tw-items-center tw-justify-between tw-flex-wrap">
		<div class="file-header-left tw-flex tw-items-center tw-py-2 tw-pr-4">
			
				<div class="file-info tw-font-mono">
	
	
		<div class="file-info-entry">
			493 Zeilen
		</div>
	
	
	
		<div class="file-info-entry">
			22 KiB
		</div>
	
	
	
		<div class="file-info-entry">
			C
		</div>
	
	
	
	
	
</div>

			
		</div>
		<div class="file-header-right file-actions tw-flex tw-items-center tw-flex-wrap">
			
			
				<div class="ui buttons tw-mr-1">
					
					<a class="ui mini basic button" href="/justaguylinux/dwm-setup/raw/branch/main/suckless/st/config.def.h">Originalformat</a>
					
						<a class="ui mini basic button" href="/justaguylinux/dwm-setup/src/commit/2a1d3bf690bff7f76924f99136b948b539e84d31/suckless/st/config.def.h">Permalink</a>
					
					
						<a class="ui mini basic button" href="/justaguylinux/dwm-setup/blame/branch/main/suckless/st/config.def.h">Blame</a>
					
					<a class="ui mini basic button" href="/justaguylinux/dwm-setup/commits/branch/main/suckless/st/config.def.h">Verlauf</a>
					
				</div>
				<a download class="btn-octicon" href="/justaguylinux/dwm-setup/raw/branch/main/suckless/st/config.def.h" data-tooltip-content="Datei herunterladen">
					<svg viewBox="0 0 16 16" class="svg octicon-download" aria-hidden="true" width="16" height="16"><path d="M2.75 14A1.75 1.75 0 0 1 1 12.25v-2.5a.75.75 0 0 1 1.5 0v2.5c0 .138.112.25.25.25h10.5a.25.25 0 0 0 .25-.25v-2.5a.75.75 0 0 1 1.5 0v2.5A1.75 1.75 0 0 1 13.25 14Z"/><path d="M7.25 7.689V2a.75.75 0 0 1 1.5 0v5.689l1.97-1.969a.749.749 0 1 1 1.06 1.06l-3.25 3.25a.75.75 0 0 1-1.06 0L4.22 6.78a.749.749 0 1 1 1.06-1.06z"/></svg>
				</a>
				<a href="#" id="copy-content" class="btn-octicon " data-tooltip-content="Inhalt kopieren">
					<svg viewBox="0 0 16 16" class="svg octicon-copy" aria-hidden="true" width="14" height="14"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"/><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"/></svg>
				</a>
				
					
						<a class="btn-octicon" href="/justaguylinux/dwm-setup/rss/branch/main/suckless/st/config.def.h" data-tooltip-content="RSS-Feed">
							<svg viewBox="0 0 16 16" class="svg octicon-rss" aria-hidden="true" width="14" height="14"><path d="M2.002 2.725a.75.75 0 0 1 .797-.699C8.79 2.42 13.58 7.21 13.974 13.201a.75.75 0 0 1-1.497.098 10.5 10.5 0 0 0-9.776-9.776.747.747 0 0 1-.7-.798ZM2.84 7.05h-.002a7 7 0 0 1 6.113 6.111.75.75 0 0 1-1.49.178 5.5 5.5 0 0 0-4.8-4.8.75.75 0 0 1 .179-1.489M2 13a1 1 0 1 1 2 0 1 1 0 0 1-2 0"/></svg>
						</a>
					
				
				
					
						<span class="btn-octicon disabled" data-tooltip-content="Du musst dieses Repository forken, um Änderungen an dieser Datei vorzuschlagen oder vorzunehmen.">
							<svg viewBox="0 0 16 16" class="svg octicon-pencil" aria-hidden="true" width="16" height="16"><path d="M11.013 1.427a1.75 1.75 0 0 1 2.474 0l1.086 1.086a1.75 1.75 0 0 1 0 2.474l-8.61 8.61c-.21.21-.47.364-.756.445l-3.251.93a.75.75 0 0 1-.927-.928l.929-3.25c.081-.286.235-.547.445-.758l8.61-8.61Zm.176 4.823L9.75 4.81l-6.286 6.287a.25.25 0 0 0-.064.108l-.558 1.953 1.953-.558a.25.25 0 0 0 .108-.064Zm1.238-3.763a.25.25 0 0 0-.354 0L10.811 3.75l1.439 1.44 1.263-1.263a.25.25 0 0 0 0-.354Z"/></svg>
						</span>
					
					
						<span class="btn-octicon disabled" data-tooltip-content="Du benötigst Schreibzugriff, um Änderungen an dieser Datei vorzuschlagen oder vorzunehmen.">
							<svg viewBox="0 0 16 16" class="svg octicon-trash" aria-hidden="true" width="16" height="16"><path d="M11 1.75V3h2.25a.75.75 0 0 1 0 1.5H2.75a.75.75 0 0 1 0-1.5H5V1.75C5 .784 5.784 0 6.75 0h2.5C10.216 0 11 .784 11 1.75M4.496 6.675l.66 6.6a.25.25 0 0 0 .249.225h5.19a.25.25 0 0 0 .249-.225l.66-6.6a.75.75 0 0 1 1.492.149l-.66 6.6A1.75 1.75 0 0 1 10.595 15h-5.19a1.75 1.75 0 0 1-1.741-1.575l-.66-6.6a.75.75 0 1 1 1.492-.15M6.5 1.75V3h3V1.75a.25.25 0 0 0-.25-.25h-2.5a.25.25 0 0 0-.25.25"/></svg>
						</span>
					
				
			
			
		</div>
	</h4>
	<div class="ui bottom attached table unstackable segment">
		
			
	


		
		<div class="file-view code-view">
			
				
				<table>
					<tbody>
						
						
						<tr>
							<td class="lines-num"><span id="L1" data-line-number="1"></span></td>
							
							<td rel="L1" class="lines-code chroma"><code class="code-inner"><span class="cm">/* See LICENSE file for copyright and license details. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2" data-line-number="2"></span></td>
							
							<td rel="L2" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L3" data-line-number="3"></span></td>
							
							<td rel="L3" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L4" data-line-number="4"></span></td>
							
							<td rel="L4" class="lines-code chroma"><code class="code-inner"><span class="cm">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L5" data-line-number="5"></span></td>
							
							<td rel="L5" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L6" data-line-number="6"></span></td>
							
							<td rel="L6" class="lines-code chroma"><code class="code-inner"><span class="cm"> * What program is execed by st depends of these precedence rules:
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L7" data-line-number="7"></span></td>
							
							<td rel="L7" class="lines-code chroma"><code class="code-inner"><span class="cm"> * 1: program passed with -e
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L8" data-line-number="8"></span></td>
							
							<td rel="L8" class="lines-code chroma"><code class="code-inner"><span class="cm"> * 2: scroll and/or utmp
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L9" data-line-number="9"></span></td>
							
							<td rel="L9" class="lines-code chroma"><code class="code-inner"><span class="cm"> * 3: SHELL environment variable
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L10" data-line-number="10"></span></td>
							
							<td rel="L10" class="lines-code chroma"><code class="code-inner"><span class="cm"> * 4: value of shell in /etc/passwd
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L11" data-line-number="11"></span></td>
							
							<td rel="L11" class="lines-code chroma"><code class="code-inner"><span class="cm"> * 5: value of shell in config.h
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L12" data-line-number="12"></span></td>
							
							<td rel="L12" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L13" data-line-number="13"></span></td>
							
							<td rel="L13" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">char</span> <span class="o">*</span><span class="n">shell</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">/bin/sh</span><span class="s">&#34;</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L14" data-line-number="14"></span></td>
							
							<td rel="L14" class="lines-code chroma"><code class="code-inner"><span class="kt">char</span> <span class="o">*</span><span class="n">utmp</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L15" data-line-number="15"></span></td>
							
							<td rel="L15" class="lines-code chroma"><code class="code-inner"><span class="cm">/* scroll program: to enable use a string like &#34;scroll&#34; */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L16" data-line-number="16"></span></td>
							
							<td rel="L16" class="lines-code chroma"><code class="code-inner"><span class="kt">char</span> <span class="o">*</span><span class="n">scroll</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L17" data-line-number="17"></span></td>
							
							<td rel="L17" class="lines-code chroma"><code class="code-inner"><span class="kt">char</span> <span class="o">*</span><span class="n">stty_args</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">stty raw pass8 nl -echo -iexten -cstopb 38400</span><span class="s">&#34;</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L18" data-line-number="18"></span></td>
							
							<td rel="L18" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L19" data-line-number="19"></span></td>
							
							<td rel="L19" class="lines-code chroma"><code class="code-inner"><span class="cm">/* identification sequence returned in DA and DECID */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L20" data-line-number="20"></span></td>
							
							<td rel="L20" class="lines-code chroma"><code class="code-inner"><span class="kt">char</span> <span class="o">*</span><span class="n">vtiden</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[?6c</span><span class="s">&#34;</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L21" data-line-number="21"></span></td>
							
							<td rel="L21" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L22" data-line-number="22"></span></td>
							
							<td rel="L22" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L23" data-line-number="23"></span></td>
							
							<td rel="L23" class="lines-code chroma"><code class="code-inner"><span class="cm"> * word delimiter string
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L24" data-line-number="24"></span></td>
							
							<td rel="L24" class="lines-code chroma"><code class="code-inner"><span class="cm"> *
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L25" data-line-number="25"></span></td>
							
							<td rel="L25" class="lines-code chroma"><code class="code-inner"><span class="cm"> * More advanced example: L&#34; `&#39;\&#34;()[]{}&#34;
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L26" data-line-number="26"></span></td>
							
							<td rel="L26" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L27" data-line-number="27"></span></td>
							
							<td rel="L27" class="lines-code chroma"><code class="code-inner"><span class="kt">wchar_t</span> <span class="o">*</span><span class="n">worddelimiters</span> <span class="o">=</span> <span class="sa">L</span><span class="s">&#34;</span><span class="s"> </span><span class="s">&#34;</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L28" data-line-number="28"></span></td>
							
							<td rel="L28" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L29" data-line-number="29"></span></td>
							
							<td rel="L29" class="lines-code chroma"><code class="code-inner"><span class="cm">/* selection timeouts (in milliseconds) */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L30" data-line-number="30"></span></td>
							
							<td rel="L30" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">doubleclicktimeout</span> <span class="o">=</span> <span class="mi">300</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L31" data-line-number="31"></span></td>
							
							<td rel="L31" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">tripleclicktimeout</span> <span class="o">=</span> <span class="mi">600</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L32" data-line-number="32"></span></td>
							
							<td rel="L32" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L33" data-line-number="33"></span></td>
							
							<td rel="L33" class="lines-code chroma"><code class="code-inner"><span class="cm">/* alt screens */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L34" data-line-number="34"></span></td>
							
							<td rel="L34" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span> <span class="n">allowaltscreen</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L35" data-line-number="35"></span></td>
							
							<td rel="L35" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L36" data-line-number="36"></span></td>
							
							<td rel="L36" class="lines-code chroma"><code class="code-inner"><span class="cm">/* allow certain non-interactive (insecure) window operations such as:
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L37" data-line-number="37"></span></td>
							
							<td rel="L37" class="lines-code chroma"><code class="code-inner"><span class="cm">   setting the clipboard text */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L38" data-line-number="38"></span></td>
							
							<td rel="L38" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span> <span class="n">allowwindowops</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L39" data-line-number="39"></span></td>
							
							<td rel="L39" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L40" data-line-number="40"></span></td>
							
							<td rel="L40" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L41" data-line-number="41"></span></td>
							
							<td rel="L41" class="lines-code chroma"><code class="code-inner"><span class="cm"> * draw latency range in ms - from new content/keypress/etc until drawing.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L42" data-line-number="42"></span></td>
							
							<td rel="L42" class="lines-code chroma"><code class="code-inner"><span class="cm"> * within this range, st draws when content stops arriving (idle). mostly it&#39;s
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L43" data-line-number="43"></span></td>
							
							<td rel="L43" class="lines-code chroma"><code class="code-inner"><span class="cm"> * near minlatency, but it waits longer for slow updates to avoid partial draw.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L44" data-line-number="44"></span></td>
							
							<td rel="L44" class="lines-code chroma"><code class="code-inner"><span class="cm"> * low minlatency will tear/flicker more, as it can &#34;detect&#34; idle too early.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L45" data-line-number="45"></span></td>
							
							<td rel="L45" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L46" data-line-number="46"></span></td>
							
							<td rel="L46" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">double</span> <span class="n">minlatency</span> <span class="o">=</span> <span class="mi">2</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L47" data-line-number="47"></span></td>
							
							<td rel="L47" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">double</span> <span class="n">maxlatency</span> <span class="o">=</span> <span class="mi">33</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L48" data-line-number="48"></span></td>
							
							<td rel="L48" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L49" data-line-number="49"></span></td>
							
							<td rel="L49" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L50" data-line-number="50"></span></td>
							
							<td rel="L50" class="lines-code chroma"><code class="code-inner"><span class="cm"> * blinking timeout (set to 0 to disable blinking) for the terminal blinking
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L51" data-line-number="51"></span></td>
							
							<td rel="L51" class="lines-code chroma"><code class="code-inner"><span class="cm"> * attribute.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L52" data-line-number="52"></span></td>
							
							<td rel="L52" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L53" data-line-number="53"></span></td>
							
							<td rel="L53" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">blinktimeout</span> <span class="o">=</span> <span class="mi">800</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L54" data-line-number="54"></span></td>
							
							<td rel="L54" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L55" data-line-number="55"></span></td>
							
							<td rel="L55" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L56" data-line-number="56"></span></td>
							
							<td rel="L56" class="lines-code chroma"><code class="code-inner"><span class="cm"> * thickness of underline and bar cursors
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L57" data-line-number="57"></span></td>
							
							<td rel="L57" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L58" data-line-number="58"></span></td>
							
							<td rel="L58" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cursorthickness</span> <span class="o">=</span> <span class="mi">2</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L59" data-line-number="59"></span></td>
							
							<td rel="L59" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L60" data-line-number="60"></span></td>
							
							<td rel="L60" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L61" data-line-number="61"></span></td>
							
							<td rel="L61" class="lines-code chroma"><code class="code-inner"><span class="cm"> * 1: render most of the lines/blocks characters without using the font for
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L62" data-line-number="62"></span></td>
							
							<td rel="L62" class="lines-code chroma"><code class="code-inner"><span class="cm"> *    perfect alignment between cells (U2500 - U259F except dashes/diagonals).
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L63" data-line-number="63"></span></td>
							
							<td rel="L63" class="lines-code chroma"><code class="code-inner"><span class="cm"> *    Bold affects lines thickness if boxdraw_bold is not 0. Italic is ignored.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L64" data-line-number="64"></span></td>
							
							<td rel="L64" class="lines-code chroma"><code class="code-inner"><span class="cm"> * 0: disable (render all U25XX glyphs normally from the font).
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L65" data-line-number="65"></span></td>
							
							<td rel="L65" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L66" data-line-number="66"></span></td>
							
							<td rel="L66" class="lines-code chroma"><code class="code-inner"><span class="k">const</span> <span class="kt">int</span> <span class="n">boxdraw</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L67" data-line-number="67"></span></td>
							
							<td rel="L67" class="lines-code chroma"><code class="code-inner"><span class="k">const</span> <span class="kt">int</span> <span class="n">boxdraw_bold</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L68" data-line-number="68"></span></td>
							
							<td rel="L68" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L69" data-line-number="69"></span></td>
							
							<td rel="L69" class="lines-code chroma"><code class="code-inner"><span class="cm">/* braille (U28XX):  1: render as adjacent &#34;pixels&#34;,  0: use font */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L70" data-line-number="70"></span></td>
							
							<td rel="L70" class="lines-code chroma"><code class="code-inner"><span class="k">const</span> <span class="kt">int</span> <span class="n">boxdraw_braille</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L71" data-line-number="71"></span></td>
							
							<td rel="L71" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L72" data-line-number="72"></span></td>
							
							<td rel="L72" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L73" data-line-number="73"></span></td>
							
							<td rel="L73" class="lines-code chroma"><code class="code-inner"><span class="cm"> * bell volume. It must be a value between -100 and 100. Use 0 for disabling
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L74" data-line-number="74"></span></td>
							
							<td rel="L74" class="lines-code chroma"><code class="code-inner"><span class="cm"> * it
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L75" data-line-number="75"></span></td>
							
							<td rel="L75" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L76" data-line-number="76"></span></td>
							
							<td rel="L76" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">int</span> <span class="n">bellvolume</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L77" data-line-number="77"></span></td>
							
							<td rel="L77" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L78" data-line-number="78"></span></td>
							
							<td rel="L78" class="lines-code chroma"><code class="code-inner"><span class="cm">/* default TERM value */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L79" data-line-number="79"></span></td>
							
							<td rel="L79" class="lines-code chroma"><code class="code-inner"><span class="kt">char</span> <span class="o">*</span><span class="n">termname</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">st-256color</span><span class="s">&#34;</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L80" data-line-number="80"></span></td>
							
							<td rel="L80" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L81" data-line-number="81"></span></td>
							
							<td rel="L81" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L82" data-line-number="82"></span></td>
							
							<td rel="L82" class="lines-code chroma"><code class="code-inner"><span class="cm"> * spaces per tab
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L83" data-line-number="83"></span></td>
							
							<td rel="L83" class="lines-code chroma"><code class="code-inner"><span class="cm"> *
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L84" data-line-number="84"></span></td>
							
							<td rel="L84" class="lines-code chroma"><code class="code-inner"><span class="cm"> * When you are changing this value, don&#39;t forget to adapt the »it« value in
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L85" data-line-number="85"></span></td>
							
							<td rel="L85" class="lines-code chroma"><code class="code-inner"><span class="cm"> * the st.info and appropriately install the st.info in the environment where
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L86" data-line-number="86"></span></td>
							
							<td rel="L86" class="lines-code chroma"><code class="code-inner"><span class="cm"> * you use this st version.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L87" data-line-number="87"></span></td>
							
							<td rel="L87" class="lines-code chroma"><code class="code-inner"><span class="cm"> *
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L88" data-line-number="88"></span></td>
							
							<td rel="L88" class="lines-code chroma"><code class="code-inner"><span class="cm"> *	it#$tabspaces,
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L89" data-line-number="89"></span></td>
							
							<td rel="L89" class="lines-code chroma"><code class="code-inner"><span class="cm"> *
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L90" data-line-number="90"></span></td>
							
							<td rel="L90" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Secondly make sure your kernel is not expanding tabs. When running `stty
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L91" data-line-number="91"></span></td>
							
							<td rel="L91" class="lines-code chroma"><code class="code-inner"><span class="cm"> * -a` »tab0« should appear. You can tell the terminal to not expand tabs by
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L92" data-line-number="92"></span></td>
							
							<td rel="L92" class="lines-code chroma"><code class="code-inner"><span class="cm"> *  running following command:
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L93" data-line-number="93"></span></td>
							
							<td rel="L93" class="lines-code chroma"><code class="code-inner"><span class="cm"> *
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L94" data-line-number="94"></span></td>
							
							<td rel="L94" class="lines-code chroma"><code class="code-inner"><span class="cm"> *	stty tabs
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L95" data-line-number="95"></span></td>
							
							<td rel="L95" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L96" data-line-number="96"></span></td>
							
							<td rel="L96" class="lines-code chroma"><code class="code-inner"><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">tabspaces</span> <span class="o">=</span> <span class="mi">8</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L97" data-line-number="97"></span></td>
							
							<td rel="L97" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L98" data-line-number="98"></span></td>
							
							<td rel="L98" class="lines-code chroma"><code class="code-inner"><span class="cm">/* Terminal colors (16 first used in escape sequence) */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L99" data-line-number="99"></span></td>
							
							<td rel="L99" class="lines-code chroma"><code class="code-inner"><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">colorname</span><span class="p">[</span><span class="p">]</span> <span class="o">=</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L100" data-line-number="100"></span></td>
							
							<td rel="L100" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* 8 normal colors */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L101" data-line-number="101"></span></td>
							
							<td rel="L101" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#2f363d</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* black (invisibles) */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L102" data-line-number="102"></span></td>
							
							<td rel="L102" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#ff7b72</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* red */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L103" data-line-number="103"></span></td>
							
							<td rel="L103" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">2</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#3fb950</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* green */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L104" data-line-number="104"></span></td>
							
							<td rel="L104" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">3</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#d29922</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* yellow */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L105" data-line-number="105"></span></td>
							
							<td rel="L105" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">4</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#539bf5</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* blue */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L106" data-line-number="106"></span></td>
							
							<td rel="L106" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">5</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#bc8cff</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* magenta */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L107" data-line-number="107"></span></td>
							
							<td rel="L107" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">6</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#39c5cf</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* cyan */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L108" data-line-number="108"></span></td>
							
							<td rel="L108" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">7</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#d0d7de</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* white (foreground) */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L109" data-line-number="109"></span></td>
							
							<td rel="L109" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L110" data-line-number="110"></span></td>
							
							<td rel="L110" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* 8 bright colors */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L111" data-line-number="111"></span></td>
							
							<td rel="L111" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">8</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#8b949e</span><span class="s">&#34;</span><span class="p">,</span>  <span class="cm">/* black (comment) */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L112" data-line-number="112"></span></td>
							
							<td rel="L112" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">9</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#ff9790</span><span class="s">&#34;</span><span class="p">,</span>  <span class="cm">/* red */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L113" data-line-number="113"></span></td>
							
							<td rel="L113" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">10</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#6af28c</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* green */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L114" data-line-number="114"></span></td>
							
							<td rel="L114" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">11</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#e3b341</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* yellow */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L115" data-line-number="115"></span></td>
							
							<td rel="L115" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">12</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#79c0ff</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* blue */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L116" data-line-number="116"></span></td>
							
							<td rel="L116" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">13</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#d2a8ff</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* magenta */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L117" data-line-number="117"></span></td>
							
							<td rel="L117" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">14</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#56d4dd</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* cyan */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L118" data-line-number="118"></span></td>
							
							<td rel="L118" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">15</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#ffffff</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* white */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L119" data-line-number="119"></span></td>
							
							<td rel="L119" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L120" data-line-number="120"></span></td>
							
							<td rel="L120" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* special colors */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L121" data-line-number="121"></span></td>
							
							<td rel="L121" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">256</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#0d1117</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* background */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L122" data-line-number="122"></span></td>
							
							<td rel="L122" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">257</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#d0d7de</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* foreground */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L123" data-line-number="123"></span></td>
							
							<td rel="L123" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="mi">258</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">#58a6ff</span><span class="s">&#34;</span><span class="p">,</span> <span class="cm">/* cursor */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L124" data-line-number="124"></span></td>
							
							<td rel="L124" class="lines-code chroma"><code class="code-inner"><span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L125" data-line-number="125"></span></td>
							
							<td rel="L125" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L126" data-line-number="126"></span></td>
							
							<td rel="L126" class="lines-code chroma"><code class="code-inner"><span class="cm">/* Default colors (colorname index) - DO NOT use static for these in st 0.9.2 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L127" data-line-number="127"></span></td>
							
							<td rel="L127" class="lines-code chroma"><code class="code-inner"><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">defaultfg</span> <span class="o">=</span> <span class="mi">257</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L128" data-line-number="128"></span></td>
							
							<td rel="L128" class="lines-code chroma"><code class="code-inner"><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">defaultbg</span> <span class="o">=</span> <span class="mi">256</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L129" data-line-number="129"></span></td>
							
							<td rel="L129" class="lines-code chroma"><code class="code-inner"><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">defaultcs</span> <span class="o">=</span> <span class="mi">258</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L130" data-line-number="130"></span></td>
							
							<td rel="L130" class="lines-code chroma"><code class="code-inner"><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">defaultrcs</span> <span class="o">=</span> <span class="mi">258</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L131" data-line-number="131"></span></td>
							
							<td rel="L131" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L132" data-line-number="132"></span></td>
							
							<td rel="L132" class="lines-code chroma"><code class="code-inner"><span class="cm">/* Terminal opacity */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L133" data-line-number="133"></span></td>
							
							<td rel="L133" class="lines-code chroma"><code class="code-inner"><span class="kt">float</span> <span class="n">alpha</span> <span class="o">=</span> <span class="mf">0.95</span><span class="p">;</span> <span class="cm">/* For st 0.9.2, use decimal alpha value */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L134" data-line-number="134"></span></td>
							
							<td rel="L134" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L135" data-line-number="135"></span></td>
							
							<td rel="L135" class="lines-code chroma"><code class="code-inner"><span class="cm">/* Font configuration */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L136" data-line-number="136"></span></td>
							
							<td rel="L136" class="lines-code chroma"><code class="code-inner"><span class="cm">/* Note: newer st versions may handle font differently. Adjust as needed. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L137" data-line-number="137"></span></td>
							
							<td rel="L137" class="lines-code chroma"><code class="code-inner"><span class="kt">char</span> <span class="o">*</span><span class="n">font</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">SauceCodePro Nerd Font Mono:size=16:antialias=true:autohint=true</span><span class="s">&#34;</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L138" data-line-number="138"></span></td>
							
							<td rel="L138" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L139" data-line-number="139"></span></td>
							
							<td rel="L139" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">char</span> <span class="o">*</span><span class="n">font2</span><span class="p">[</span><span class="p">]</span> <span class="o">=</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L140" data-line-number="140"></span></td>
							
							<td rel="L140" class="lines-code chroma"><code class="code-inner">    <span class="sa"></span><span class="s">&#34;</span><span class="s">FiraCode Nerd Font Mono:pixelsize=16:antialias=true:autohint=true</span><span class="s">&#34;</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L141" data-line-number="141"></span></td>
							
							<td rel="L141" class="lines-code chroma"><code class="code-inner">    <span class="sa"></span><span class="s">&#34;</span><span class="s">Symbols Nerd Font Mono:pixelsize=16:antialias=true:autohint=true</span><span class="s">&#34;</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L142" data-line-number="142"></span></td>
							
							<td rel="L142" class="lines-code chroma"><code class="code-inner"><span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L143" data-line-number="143"></span></td>
							
							<td rel="L143" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L144" data-line-number="144"></span></td>
							
							<td rel="L144" class="lines-code chroma"><code class="code-inner"><span class="cm">/* Other settings */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L145" data-line-number="145"></span></td>
							
							<td rel="L145" class="lines-code chroma"><code class="code-inner"><span class="kt">float</span> <span class="n">cwscale</span> <span class="o">=</span> <span class="mf">1.0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L146" data-line-number="146"></span></td>
							
							<td rel="L146" class="lines-code chroma"><code class="code-inner"><span class="kt">float</span> <span class="n">chscale</span> <span class="o">=</span> <span class="mf">1.1</span><span class="p">;</span> <span class="cm">/* Line height similar to your WezTerm */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L147" data-line-number="147"></span></td>
							
							<td rel="L147" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L148" data-line-number="148"></span></td>
							
							<td rel="L148" class="lines-code chroma"><code class="code-inner"><span class="cm">/* Border and spacing */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L149" data-line-number="149"></span></td>
							
							<td rel="L149" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span> <span class="n">borderpx</span> <span class="o">=</span> <span class="mi">2</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L150" data-line-number="150"></span></td>
							
							<td rel="L150" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L151" data-line-number="151"></span></td>
							
							<td rel="L151" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L152" data-line-number="152"></span></td>
							
							<td rel="L152" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L153" data-line-number="153"></span></td>
							
							<td rel="L153" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Default shape of cursor
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L154" data-line-number="154"></span></td>
							
							<td rel="L154" class="lines-code chroma"><code class="code-inner"><span class="cm"> * 2: Block (&#34;█&#34;)
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L155" data-line-number="155"></span></td>
							
							<td rel="L155" class="lines-code chroma"><code class="code-inner"><span class="cm"> * 4: Underline (&#34;_&#34;)
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L156" data-line-number="156"></span></td>
							
							<td rel="L156" class="lines-code chroma"><code class="code-inner"><span class="cm"> * 6: Bar (&#34;|&#34;)
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L157" data-line-number="157"></span></td>
							
							<td rel="L157" class="lines-code chroma"><code class="code-inner"><span class="cm"> * 7: Snowman (&#34;☃&#34;)
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L158" data-line-number="158"></span></td>
							
							<td rel="L158" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L159" data-line-number="159"></span></td>
							
							<td rel="L159" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cursorshape</span> <span class="o">=</span> <span class="mi">2</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L160" data-line-number="160"></span></td>
							
							<td rel="L160" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L161" data-line-number="161"></span></td>
							
							<td rel="L161" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L162" data-line-number="162"></span></td>
							
							<td rel="L162" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Default columns and rows numbers
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L163" data-line-number="163"></span></td>
							
							<td rel="L163" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L164" data-line-number="164"></span></td>
							
							<td rel="L164" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L165" data-line-number="165"></span></td>
							
							<td rel="L165" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cols</span> <span class="o">=</span> <span class="mi">80</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L166" data-line-number="166"></span></td>
							
							<td rel="L166" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">rows</span> <span class="o">=</span> <span class="mi">24</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L167" data-line-number="167"></span></td>
							
							<td rel="L167" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L168" data-line-number="168"></span></td>
							
							<td rel="L168" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L169" data-line-number="169"></span></td>
							
							<td rel="L169" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Default colour and shape of the mouse cursor
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L170" data-line-number="170"></span></td>
							
							<td rel="L170" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L171" data-line-number="171"></span></td>
							
							<td rel="L171" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">mouseshape</span> <span class="o">=</span> <span class="n">XC_xterm</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L172" data-line-number="172"></span></td>
							
							<td rel="L172" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">mousefg</span> <span class="o">=</span> <span class="mi">7</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L173" data-line-number="173"></span></td>
							
							<td rel="L173" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">mousebg</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L174" data-line-number="174"></span></td>
							
							<td rel="L174" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L175" data-line-number="175"></span></td>
							
							<td rel="L175" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L176" data-line-number="176"></span></td>
							
							<td rel="L176" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Color used to display font attributes when fontconfig selected a font which
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L177" data-line-number="177"></span></td>
							
							<td rel="L177" class="lines-code chroma"><code class="code-inner"><span class="cm"> * doesn&#39;t match the ones requested.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L178" data-line-number="178"></span></td>
							
							<td rel="L178" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L179" data-line-number="179"></span></td>
							
							<td rel="L179" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">defaultattr</span> <span class="o">=</span> <span class="mi">11</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L180" data-line-number="180"></span></td>
							
							<td rel="L180" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L181" data-line-number="181"></span></td>
							
							<td rel="L181" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L182" data-line-number="182"></span></td>
							
							<td rel="L182" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Force mouse select/shortcuts while mask is active (when MODE_MOUSE is set).
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L183" data-line-number="183"></span></td>
							
							<td rel="L183" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Note that if you want to use ShiftMask with selmasks, set this to an other
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L184" data-line-number="184"></span></td>
							
							<td rel="L184" class="lines-code chroma"><code class="code-inner"><span class="cm"> * modifier, set to 0 to not use it.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L185" data-line-number="185"></span></td>
							
							<td rel="L185" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L186" data-line-number="186"></span></td>
							
							<td rel="L186" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="n">uint</span> <span class="n">forcemousemod</span> <span class="o">=</span> <span class="n">ShiftMask</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L187" data-line-number="187"></span></td>
							
							<td rel="L187" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L188" data-line-number="188"></span></td>
							
							<td rel="L188" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L189" data-line-number="189"></span></td>
							
							<td rel="L189" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Internal mouse shortcuts.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L190" data-line-number="190"></span></td>
							
							<td rel="L190" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Beware that overloading Button1 will disable the selection.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L191" data-line-number="191"></span></td>
							
							<td rel="L191" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L192" data-line-number="192"></span></td>
							
							<td rel="L192" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="n">MouseShortcut</span> <span class="n">mshortcuts</span><span class="p">[</span><span class="p">]</span> <span class="o">=</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L193" data-line-number="193"></span></td>
							
							<td rel="L193" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* mask                 button   function        argument       release */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L194" data-line-number="194"></span></td>
							
							<td rel="L194" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">ShiftMask</span><span class="p">,</span>            <span class="n">Button4</span><span class="p">,</span> <span class="n">kscrollup</span><span class="p">,</span>      <span class="p">{</span><span class="p">.</span><span class="n">i</span> <span class="o">=</span> <span class="mi">1</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L195" data-line-number="195"></span></td>
							
							<td rel="L195" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">ShiftMask</span><span class="p">,</span>            <span class="n">Button5</span><span class="p">,</span> <span class="n">kscrolldown</span><span class="p">,</span>    <span class="p">{</span><span class="p">.</span><span class="n">i</span> <span class="o">=</span> <span class="mi">1</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L196" data-line-number="196"></span></td>
							
							<td rel="L196" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_ANY_MOD</span><span class="p">,</span>           <span class="n">Button2</span><span class="p">,</span> <span class="n">selpaste</span><span class="p">,</span>       <span class="p">{</span><span class="p">.</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">}</span><span class="p">,</span>      <span class="mi">1</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L197" data-line-number="197"></span></td>
							
							<td rel="L197" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">ShiftMask</span><span class="p">,</span>            <span class="n">Button4</span><span class="p">,</span> <span class="n">ttysend</span><span class="p">,</span>        <span class="p">{</span><span class="p">.</span><span class="n">s</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[5;2~</span><span class="s">&#34;</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L198" data-line-number="198"></span></td>
							
							<td rel="L198" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_ANY_MOD</span><span class="p">,</span>           <span class="n">Button4</span><span class="p">,</span> <span class="n">ttysend</span><span class="p">,</span>        <span class="p">{</span><span class="p">.</span><span class="n">s</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="se">\031</span><span class="s">&#34;</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L199" data-line-number="199"></span></td>
							
							<td rel="L199" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">ShiftMask</span><span class="p">,</span>            <span class="n">Button5</span><span class="p">,</span> <span class="n">ttysend</span><span class="p">,</span>        <span class="p">{</span><span class="p">.</span><span class="n">s</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[6;2~</span><span class="s">&#34;</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L200" data-line-number="200"></span></td>
							
							<td rel="L200" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_ANY_MOD</span><span class="p">,</span>           <span class="n">Button5</span><span class="p">,</span> <span class="n">ttysend</span><span class="p">,</span>        <span class="p">{</span><span class="p">.</span><span class="n">s</span> <span class="o">=</span> <span class="sa"></span><span class="s">&#34;</span><span class="se">\005</span><span class="s">&#34;</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L201" data-line-number="201"></span></td>
							
							<td rel="L201" class="lines-code chroma"><code class="code-inner"><span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L202" data-line-number="202"></span></td>
							
							<td rel="L202" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L203" data-line-number="203"></span></td>
							
							<td rel="L203" class="lines-code chroma"><code class="code-inner"><span class="cm">/* Internal keyboard shortcuts. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L204" data-line-number="204"></span></td>
							
							<td rel="L204" class="lines-code chroma"><code class="code-inner"><span class="cp">#</span><span class="cp">define MODKEY Mod1Mask</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L205" data-line-number="205"></span></td>
							
							<td rel="L205" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define TERMMOD (ControlMask|ShiftMask)</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L206" data-line-number="206"></span></td>
							
							<td rel="L206" class="lines-code chroma"><code class="code-inner"><span class="cp"></span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L207" data-line-number="207"></span></td>
							
							<td rel="L207" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="n">Shortcut</span> <span class="n">shortcuts</span><span class="p">[</span><span class="p">]</span> <span class="o">=</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L208" data-line-number="208"></span></td>
							
							<td rel="L208" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* mask                 keysym          function        argument */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L209" data-line-number="209"></span></td>
							
							<td rel="L209" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_ANY_MOD</span><span class="p">,</span>           <span class="n">XK_Break</span><span class="p">,</span>       <span class="n">sendbreak</span><span class="p">,</span>      <span class="p">{</span><span class="p">.</span><span class="n">i</span> <span class="o">=</span>  <span class="mi">0</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L210" data-line-number="210"></span></td>
							
							<td rel="L210" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">ControlMask</span><span class="p">,</span>          <span class="n">XK_Print</span><span class="p">,</span>       <span class="n">toggleprinter</span><span class="p">,</span>  <span class="p">{</span><span class="p">.</span><span class="n">i</span> <span class="o">=</span>  <span class="mi">0</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L211" data-line-number="211"></span></td>
							
							<td rel="L211" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">ShiftMask</span><span class="p">,</span>            <span class="n">XK_Print</span><span class="p">,</span>       <span class="n">printscreen</span><span class="p">,</span>    <span class="p">{</span><span class="p">.</span><span class="n">i</span> <span class="o">=</span>  <span class="mi">0</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L212" data-line-number="212"></span></td>
							
							<td rel="L212" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_ANY_MOD</span><span class="p">,</span>           <span class="n">XK_Print</span><span class="p">,</span>       <span class="n">printsel</span><span class="p">,</span>       <span class="p">{</span><span class="p">.</span><span class="n">i</span> <span class="o">=</span>  <span class="mi">0</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L213" data-line-number="213"></span></td>
							
							<td rel="L213" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">TERMMOD</span><span class="p">,</span>              <span class="n">XK_Prior</span><span class="p">,</span>       <span class="n">zoom</span><span class="p">,</span>           <span class="p">{</span><span class="p">.</span><span class="n">f</span> <span class="o">=</span> <span class="o">+</span><span class="mi">1</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L214" data-line-number="214"></span></td>
							
							<td rel="L214" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">TERMMOD</span><span class="p">,</span>              <span class="n">XK_Next</span><span class="p">,</span>        <span class="n">zoom</span><span class="p">,</span>           <span class="p">{</span><span class="p">.</span><span class="n">f</span> <span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L215" data-line-number="215"></span></td>
							
							<td rel="L215" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">TERMMOD</span><span class="p">,</span>              <span class="n">XK_Home</span><span class="p">,</span>        <span class="n">zoomreset</span><span class="p">,</span>      <span class="p">{</span><span class="p">.</span><span class="n">f</span> <span class="o">=</span>  <span class="mi">0</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L216" data-line-number="216"></span></td>
							
							<td rel="L216" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">TERMMOD</span><span class="p">,</span>              <span class="n">XK_C</span><span class="p">,</span>           <span class="n">clipcopy</span><span class="p">,</span>       <span class="p">{</span><span class="p">.</span><span class="n">i</span> <span class="o">=</span>  <span class="mi">0</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L217" data-line-number="217"></span></td>
							
							<td rel="L217" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">TERMMOD</span><span class="p">,</span>              <span class="n">XK_V</span><span class="p">,</span>           <span class="n">clippaste</span><span class="p">,</span>      <span class="p">{</span><span class="p">.</span><span class="n">i</span> <span class="o">=</span>  <span class="mi">0</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L218" data-line-number="218"></span></td>
							
							<td rel="L218" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">TERMMOD</span><span class="p">,</span>              <span class="n">XK_Y</span><span class="p">,</span>           <span class="n">selpaste</span><span class="p">,</span>       <span class="p">{</span><span class="p">.</span><span class="n">i</span> <span class="o">=</span>  <span class="mi">0</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L219" data-line-number="219"></span></td>
							
							<td rel="L219" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">ShiftMask</span><span class="p">,</span>            <span class="n">XK_Insert</span><span class="p">,</span>      <span class="n">selpaste</span><span class="p">,</span>       <span class="p">{</span><span class="p">.</span><span class="n">i</span> <span class="o">=</span>  <span class="mi">0</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L220" data-line-number="220"></span></td>
							
							<td rel="L220" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">TERMMOD</span><span class="p">,</span>              <span class="n">XK_Num_Lock</span><span class="p">,</span>    <span class="n">numlock</span><span class="p">,</span>        <span class="p">{</span><span class="p">.</span><span class="n">i</span> <span class="o">=</span>  <span class="mi">0</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L221" data-line-number="221"></span></td>
							
							<td rel="L221" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">ShiftMask</span><span class="p">,</span>            <span class="n">XK_Page_Up</span><span class="p">,</span>     <span class="n">kscrollup</span><span class="p">,</span>      <span class="p">{</span><span class="p">.</span><span class="n">i</span> <span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L222" data-line-number="222"></span></td>
							
							<td rel="L222" class="lines-code chroma"><code class="code-inner">    <span class="p">{</span> <span class="n">ShiftMask</span><span class="p">,</span>            <span class="n">XK_Page_Down</span><span class="p">,</span>   <span class="n">kscrolldown</span><span class="p">,</span>    <span class="p">{</span><span class="p">.</span><span class="n">i</span> <span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">}</span> <span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L223" data-line-number="223"></span></td>
							
							<td rel="L223" class="lines-code chroma"><code class="code-inner"><span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L224" data-line-number="224"></span></td>
							
							<td rel="L224" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L225" data-line-number="225"></span></td>
							
							<td rel="L225" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L226" data-line-number="226"></span></td>
							
							<td rel="L226" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Special keys (change &amp; recompile st.info accordingly)
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L227" data-line-number="227"></span></td>
							
							<td rel="L227" class="lines-code chroma"><code class="code-inner"><span class="cm"> *
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L228" data-line-number="228"></span></td>
							
							<td rel="L228" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Mask value:
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L229" data-line-number="229"></span></td>
							
							<td rel="L229" class="lines-code chroma"><code class="code-inner"><span class="cm"> * * Use XK_ANY_MOD to match the key no matter modifiers state
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L230" data-line-number="230"></span></td>
							
							<td rel="L230" class="lines-code chroma"><code class="code-inner"><span class="cm"> * * Use XK_NO_MOD to match the key alone (no modifiers)
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L231" data-line-number="231"></span></td>
							
							<td rel="L231" class="lines-code chroma"><code class="code-inner"><span class="cm"> * appkey value:
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L232" data-line-number="232"></span></td>
							
							<td rel="L232" class="lines-code chroma"><code class="code-inner"><span class="cm"> * * 0: no value
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L233" data-line-number="233"></span></td>
							
							<td rel="L233" class="lines-code chroma"><code class="code-inner"><span class="cm"> * * &gt; 0: keypad application mode enabled
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L234" data-line-number="234"></span></td>
							
							<td rel="L234" class="lines-code chroma"><code class="code-inner"><span class="cm"> * *   = 2: term.numlock = 1
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L235" data-line-number="235"></span></td>
							
							<td rel="L235" class="lines-code chroma"><code class="code-inner"><span class="cm"> * * &lt; 0: keypad application mode disabled
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L236" data-line-number="236"></span></td>
							
							<td rel="L236" class="lines-code chroma"><code class="code-inner"><span class="cm"> * appcursor value:
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L237" data-line-number="237"></span></td>
							
							<td rel="L237" class="lines-code chroma"><code class="code-inner"><span class="cm"> * * 0: no value
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L238" data-line-number="238"></span></td>
							
							<td rel="L238" class="lines-code chroma"><code class="code-inner"><span class="cm"> * * &gt; 0: cursor application mode enabled
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L239" data-line-number="239"></span></td>
							
							<td rel="L239" class="lines-code chroma"><code class="code-inner"><span class="cm"> * * &lt; 0: cursor application mode disabled
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L240" data-line-number="240"></span></td>
							
							<td rel="L240" class="lines-code chroma"><code class="code-inner"><span class="cm"> *
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L241" data-line-number="241"></span></td>
							
							<td rel="L241" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Be careful with the order of the definitions because st searches in
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L242" data-line-number="242"></span></td>
							
							<td rel="L242" class="lines-code chroma"><code class="code-inner"><span class="cm"> * this table sequentially, so any XK_ANY_MOD must be in the last
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L243" data-line-number="243"></span></td>
							
							<td rel="L243" class="lines-code chroma"><code class="code-inner"><span class="cm"> * position for a key.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L244" data-line-number="244"></span></td>
							
							<td rel="L244" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L245" data-line-number="245"></span></td>
							
							<td rel="L245" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L246" data-line-number="246"></span></td>
							
							<td rel="L246" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L247" data-line-number="247"></span></td>
							
							<td rel="L247" class="lines-code chroma"><code class="code-inner"><span class="cm"> * If you want keys other than the X11 function keys (0xFD00 - 0xFFFF)
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L248" data-line-number="248"></span></td>
							
							<td rel="L248" class="lines-code chroma"><code class="code-inner"><span class="cm"> * to be mapped below, add them to this array.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L249" data-line-number="249"></span></td>
							
							<td rel="L249" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L250" data-line-number="250"></span></td>
							
							<td rel="L250" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="n">KeySym</span> <span class="n">mappedkeys</span><span class="p">[</span><span class="p">]</span> <span class="o">=</span> <span class="p">{</span> <span class="o">-</span><span class="mi">1</span> <span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L251" data-line-number="251"></span></td>
							
							<td rel="L251" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L252" data-line-number="252"></span></td>
							
							<td rel="L252" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L253" data-line-number="253"></span></td>
							
							<td rel="L253" class="lines-code chroma"><code class="code-inner"><span class="cm"> * State bits to ignore when matching key or button events.  By default,
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L254" data-line-number="254"></span></td>
							
							<td rel="L254" class="lines-code chroma"><code class="code-inner"><span class="cm"> * numlock (Mod2Mask) and keyboard layout (XK_SWITCH_MOD) are ignored.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L255" data-line-number="255"></span></td>
							
							<td rel="L255" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L256" data-line-number="256"></span></td>
							
							<td rel="L256" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="n">uint</span> <span class="n">ignoremod</span> <span class="o">=</span> <span class="n">Mod2Mask</span><span class="o">|</span><span class="n">XK_SWITCH_MOD</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L257" data-line-number="257"></span></td>
							
							<td rel="L257" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L258" data-line-number="258"></span></td>
							
							<td rel="L258" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L259" data-line-number="259"></span></td>
							
							<td rel="L259" class="lines-code chroma"><code class="code-inner"><span class="cm"> * This is the huge key array which defines all compatibility to the Linux
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L260" data-line-number="260"></span></td>
							
							<td rel="L260" class="lines-code chroma"><code class="code-inner"><span class="cm"> * world. Please decide about changes wisely.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L261" data-line-number="261"></span></td>
							
							<td rel="L261" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L262" data-line-number="262"></span></td>
							
							<td rel="L262" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="n">Key</span> <span class="n">key</span><span class="p">[</span><span class="p">]</span> <span class="o">=</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L263" data-line-number="263"></span></td>
							
							<td rel="L263" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* keysym           mask            string      appkey appcursor */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L264" data-line-number="264"></span></td>
							
							<td rel="L264" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Home</span><span class="p">,</span>       <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[2J</span><span class="s">&#34;</span><span class="p">,</span>       <span class="mi">0</span><span class="p">,</span>   <span class="o">-</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L265" data-line-number="265"></span></td>
							
							<td rel="L265" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Home</span><span class="p">,</span>       <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2H</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>   <span class="o">+</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L266" data-line-number="266"></span></td>
							
							<td rel="L266" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Home</span><span class="p">,</span>       <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[H</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">-</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L267" data-line-number="267"></span></td>
							
							<td rel="L267" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Home</span><span class="p">,</span>       <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1~</span><span class="s">&#34;</span><span class="p">,</span>       <span class="mi">0</span><span class="p">,</span>   <span class="o">+</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L268" data-line-number="268"></span></td>
							
							<td rel="L268" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Up</span><span class="p">,</span>         <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Ox</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L269" data-line-number="269"></span></td>
							
							<td rel="L269" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Up</span><span class="p">,</span>         <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[A</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">-</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L270" data-line-number="270"></span></td>
							
							<td rel="L270" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Up</span><span class="p">,</span>         <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">OA</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">+</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L271" data-line-number="271"></span></td>
							
							<td rel="L271" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Down</span><span class="p">,</span>       <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Or</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L272" data-line-number="272"></span></td>
							
							<td rel="L272" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Down</span><span class="p">,</span>       <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[B</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">-</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L273" data-line-number="273"></span></td>
							
							<td rel="L273" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Down</span><span class="p">,</span>       <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">OB</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">+</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L274" data-line-number="274"></span></td>
							
							<td rel="L274" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Left</span><span class="p">,</span>       <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Ot</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L275" data-line-number="275"></span></td>
							
							<td rel="L275" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Left</span><span class="p">,</span>       <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[D</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">-</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L276" data-line-number="276"></span></td>
							
							<td rel="L276" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Left</span><span class="p">,</span>       <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">OD</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">+</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L277" data-line-number="277"></span></td>
							
							<td rel="L277" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Right</span><span class="p">,</span>      <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Ov</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L278" data-line-number="278"></span></td>
							
							<td rel="L278" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Right</span><span class="p">,</span>      <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[C</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">-</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L279" data-line-number="279"></span></td>
							
							<td rel="L279" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Right</span><span class="p">,</span>      <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">OC</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">+</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L280" data-line-number="280"></span></td>
							
							<td rel="L280" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Prior</span><span class="p">,</span>      <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[5;2~</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L281" data-line-number="281"></span></td>
							
							<td rel="L281" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Prior</span><span class="p">,</span>      <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[5~</span><span class="s">&#34;</span><span class="p">,</span>       <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L282" data-line-number="282"></span></td>
							
							<td rel="L282" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Begin</span><span class="p">,</span>      <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[E</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L283" data-line-number="283"></span></td>
							
							<td rel="L283" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_End</span><span class="p">,</span>        <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[J</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L284" data-line-number="284"></span></td>
							
							<td rel="L284" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_End</span><span class="p">,</span>        <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;5F</span><span class="s">&#34;</span><span class="p">,</span>    <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L285" data-line-number="285"></span></td>
							
							<td rel="L285" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_End</span><span class="p">,</span>        <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[K</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L286" data-line-number="286"></span></td>
							
							<td rel="L286" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_End</span><span class="p">,</span>        <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2F</span><span class="s">&#34;</span><span class="p">,</span>    <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L287" data-line-number="287"></span></td>
							
							<td rel="L287" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_End</span><span class="p">,</span>        <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[4~</span><span class="s">&#34;</span><span class="p">,</span>       <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L288" data-line-number="288"></span></td>
							
							<td rel="L288" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Next</span><span class="p">,</span>       <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[6;2~</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L289" data-line-number="289"></span></td>
							
							<td rel="L289" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Next</span><span class="p">,</span>       <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[6~</span><span class="s">&#34;</span><span class="p">,</span>       <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L290" data-line-number="290"></span></td>
							
							<td rel="L290" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Insert</span><span class="p">,</span>     <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[2;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L291" data-line-number="291"></span></td>
							
							<td rel="L291" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Insert</span><span class="p">,</span>     <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[4l</span><span class="s">&#34;</span><span class="p">,</span>      <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L292" data-line-number="292"></span></td>
							
							<td rel="L292" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Insert</span><span class="p">,</span>     <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[L</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L293" data-line-number="293"></span></td>
							
							<td rel="L293" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Insert</span><span class="p">,</span>     <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[2;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L294" data-line-number="294"></span></td>
							
							<td rel="L294" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Insert</span><span class="p">,</span>     <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[4h</span><span class="s">&#34;</span><span class="p">,</span>      <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L295" data-line-number="295"></span></td>
							
							<td rel="L295" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Insert</span><span class="p">,</span>     <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[2~</span><span class="s">&#34;</span><span class="p">,</span>      <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L296" data-line-number="296"></span></td>
							
							<td rel="L296" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Delete</span><span class="p">,</span>     <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[M</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L297" data-line-number="297"></span></td>
							
							<td rel="L297" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Delete</span><span class="p">,</span>     <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[3;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L298" data-line-number="298"></span></td>
							
							<td rel="L298" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Delete</span><span class="p">,</span>     <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[2K</span><span class="s">&#34;</span><span class="p">,</span>      <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L299" data-line-number="299"></span></td>
							
							<td rel="L299" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Delete</span><span class="p">,</span>     <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[3;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L300" data-line-number="300"></span></td>
							
							<td rel="L300" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Delete</span><span class="p">,</span>     <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[3~</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L301" data-line-number="301"></span></td>
							
							<td rel="L301" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Delete</span><span class="p">,</span>     <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[3~</span><span class="s">&#34;</span><span class="p">,</span>      <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L302" data-line-number="302"></span></td>
							
							<td rel="L302" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Multiply</span><span class="p">,</span>   <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Oj</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L303" data-line-number="303"></span></td>
							
							<td rel="L303" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Add</span><span class="p">,</span>        <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Ok</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L304" data-line-number="304"></span></td>
							
							<td rel="L304" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Enter</span><span class="p">,</span>      <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">OM</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L305" data-line-number="305"></span></td>
							
							<td rel="L305" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Enter</span><span class="p">,</span>      <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\r</span><span class="s">&#34;</span><span class="p">,</span>           <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L306" data-line-number="306"></span></td>
							
							<td rel="L306" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Subtract</span><span class="p">,</span>   <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Om</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L307" data-line-number="307"></span></td>
							
							<td rel="L307" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Decimal</span><span class="p">,</span>    <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">On</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L308" data-line-number="308"></span></td>
							
							<td rel="L308" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_Divide</span><span class="p">,</span>     <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Oo</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L309" data-line-number="309"></span></td>
							
							<td rel="L309" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_0</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Op</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L310" data-line-number="310"></span></td>
							
							<td rel="L310" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_1</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Oq</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L311" data-line-number="311"></span></td>
							
							<td rel="L311" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_2</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Or</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L312" data-line-number="312"></span></td>
							
							<td rel="L312" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_3</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Os</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L313" data-line-number="313"></span></td>
							
							<td rel="L313" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_4</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Ot</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L314" data-line-number="314"></span></td>
							
							<td rel="L314" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_5</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Ou</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L315" data-line-number="315"></span></td>
							
							<td rel="L315" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_6</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Ov</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L316" data-line-number="316"></span></td>
							
							<td rel="L316" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_7</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Ow</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L317" data-line-number="317"></span></td>
							
							<td rel="L317" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_8</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Ox</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L318" data-line-number="318"></span></td>
							
							<td rel="L318" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_KP_9</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">Oy</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">+</span><span class="mi">2</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L319" data-line-number="319"></span></td>
							
							<td rel="L319" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Up</span><span class="p">,</span>            <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2A</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L320" data-line-number="320"></span></td>
							
							<td rel="L320" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Up</span><span class="p">,</span>            <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;3A</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L321" data-line-number="321"></span></td>
							
							<td rel="L321" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Up</span><span class="p">,</span>         <span class="n">ShiftMask</span><span class="o">|</span><span class="n">Mod1Mask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;4A</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L322" data-line-number="322"></span></td>
							
							<td rel="L322" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Up</span><span class="p">,</span>            <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;5A</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L323" data-line-number="323"></span></td>
							
							<td rel="L323" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Up</span><span class="p">,</span>      <span class="n">ShiftMask</span><span class="o">|</span><span class="n">ControlMask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;6A</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L324" data-line-number="324"></span></td>
							
							<td rel="L324" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Up</span><span class="p">,</span>       <span class="n">ControlMask</span><span class="o">|</span><span class="n">Mod1Mask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;7A</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L325" data-line-number="325"></span></td>
							
							<td rel="L325" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Up</span><span class="p">,</span><span class="n">ShiftMask</span><span class="o">|</span><span class="n">ControlMask</span><span class="o">|</span><span class="n">Mod1Mask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;8A</span><span class="s">&#34;</span><span class="p">,</span>  <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L326" data-line-number="326"></span></td>
							
							<td rel="L326" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Up</span><span class="p">,</span>            <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[A</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">-</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L327" data-line-number="327"></span></td>
							
							<td rel="L327" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Up</span><span class="p">,</span>            <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">OA</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">+</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L328" data-line-number="328"></span></td>
							
							<td rel="L328" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Down</span><span class="p">,</span>          <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2B</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L329" data-line-number="329"></span></td>
							
							<td rel="L329" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Down</span><span class="p">,</span>          <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;3B</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L330" data-line-number="330"></span></td>
							
							<td rel="L330" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Down</span><span class="p">,</span>       <span class="n">ShiftMask</span><span class="o">|</span><span class="n">Mod1Mask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;4B</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L331" data-line-number="331"></span></td>
							
							<td rel="L331" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Down</span><span class="p">,</span>          <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;5B</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L332" data-line-number="332"></span></td>
							
							<td rel="L332" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Down</span><span class="p">,</span>    <span class="n">ShiftMask</span><span class="o">|</span><span class="n">ControlMask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;6B</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L333" data-line-number="333"></span></td>
							
							<td rel="L333" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Down</span><span class="p">,</span>     <span class="n">ControlMask</span><span class="o">|</span><span class="n">Mod1Mask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;7B</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L334" data-line-number="334"></span></td>
							
							<td rel="L334" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Down</span><span class="p">,</span><span class="n">ShiftMask</span><span class="o">|</span><span class="n">ControlMask</span><span class="o">|</span><span class="n">Mod1Mask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;8B</span><span class="s">&#34;</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L335" data-line-number="335"></span></td>
							
							<td rel="L335" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Down</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[B</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">-</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L336" data-line-number="336"></span></td>
							
							<td rel="L336" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Down</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">OB</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">+</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L337" data-line-number="337"></span></td>
							
							<td rel="L337" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Left</span><span class="p">,</span>          <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2D</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L338" data-line-number="338"></span></td>
							
							<td rel="L338" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Left</span><span class="p">,</span>          <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;3D</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L339" data-line-number="339"></span></td>
							
							<td rel="L339" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Left</span><span class="p">,</span>       <span class="n">ShiftMask</span><span class="o">|</span><span class="n">Mod1Mask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;4D</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L340" data-line-number="340"></span></td>
							
							<td rel="L340" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Left</span><span class="p">,</span>          <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;5D</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L341" data-line-number="341"></span></td>
							
							<td rel="L341" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Left</span><span class="p">,</span>    <span class="n">ShiftMask</span><span class="o">|</span><span class="n">ControlMask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;6D</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L342" data-line-number="342"></span></td>
							
							<td rel="L342" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Left</span><span class="p">,</span>     <span class="n">ControlMask</span><span class="o">|</span><span class="n">Mod1Mask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;7D</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L343" data-line-number="343"></span></td>
							
							<td rel="L343" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Left</span><span class="p">,</span><span class="n">ShiftMask</span><span class="o">|</span><span class="n">ControlMask</span><span class="o">|</span><span class="n">Mod1Mask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;8D</span><span class="s">&#34;</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L344" data-line-number="344"></span></td>
							
							<td rel="L344" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Left</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[D</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">-</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L345" data-line-number="345"></span></td>
							
							<td rel="L345" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Left</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">OD</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">+</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L346" data-line-number="346"></span></td>
							
							<td rel="L346" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Right</span><span class="p">,</span>         <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2C</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L347" data-line-number="347"></span></td>
							
							<td rel="L347" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Right</span><span class="p">,</span>         <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;3C</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L348" data-line-number="348"></span></td>
							
							<td rel="L348" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Right</span><span class="p">,</span>      <span class="n">ShiftMask</span><span class="o">|</span><span class="n">Mod1Mask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;4C</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L349" data-line-number="349"></span></td>
							
							<td rel="L349" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Right</span><span class="p">,</span>         <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;5C</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L350" data-line-number="350"></span></td>
							
							<td rel="L350" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Right</span><span class="p">,</span>   <span class="n">ShiftMask</span><span class="o">|</span><span class="n">ControlMask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;6C</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L351" data-line-number="351"></span></td>
							
							<td rel="L351" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Right</span><span class="p">,</span>    <span class="n">ControlMask</span><span class="o">|</span><span class="n">Mod1Mask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;7C</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L352" data-line-number="352"></span></td>
							
							<td rel="L352" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Right</span><span class="p">,</span><span class="n">ShiftMask</span><span class="o">|</span><span class="n">ControlMask</span><span class="o">|</span><span class="n">Mod1Mask</span><span class="p">,</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;8C</span><span class="s">&#34;</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span>   <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L353" data-line-number="353"></span></td>
							
							<td rel="L353" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Right</span><span class="p">,</span>         <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[C</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">-</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L354" data-line-number="354"></span></td>
							
							<td rel="L354" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Right</span><span class="p">,</span>         <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">OC</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">+</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L355" data-line-number="355"></span></td>
							
							<td rel="L355" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_ISO_Left_Tab</span><span class="p">,</span>  <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[Z</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L356" data-line-number="356"></span></td>
							
							<td rel="L356" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Return</span><span class="p">,</span>        <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="se">\r</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L357" data-line-number="357"></span></td>
							
							<td rel="L357" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Return</span><span class="p">,</span>        <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\r</span><span class="s">&#34;</span><span class="p">,</span>            <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L358" data-line-number="358"></span></td>
							
							<td rel="L358" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Insert</span><span class="p">,</span>        <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[4l</span><span class="s">&#34;</span><span class="p">,</span>      <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L359" data-line-number="359"></span></td>
							
							<td rel="L359" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Insert</span><span class="p">,</span>        <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[2;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L360" data-line-number="360"></span></td>
							
							<td rel="L360" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Insert</span><span class="p">,</span>        <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[L</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L361" data-line-number="361"></span></td>
							
							<td rel="L361" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Insert</span><span class="p">,</span>        <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[2;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L362" data-line-number="362"></span></td>
							
							<td rel="L362" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Insert</span><span class="p">,</span>        <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[4h</span><span class="s">&#34;</span><span class="p">,</span>      <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L363" data-line-number="363"></span></td>
							
							<td rel="L363" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Insert</span><span class="p">,</span>        <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[2~</span><span class="s">&#34;</span><span class="p">,</span>      <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L364" data-line-number="364"></span></td>
							
							<td rel="L364" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Delete</span><span class="p">,</span>        <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[M</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L365" data-line-number="365"></span></td>
							
							<td rel="L365" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Delete</span><span class="p">,</span>        <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[3;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L366" data-line-number="366"></span></td>
							
							<td rel="L366" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Delete</span><span class="p">,</span>        <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[2K</span><span class="s">&#34;</span><span class="p">,</span>      <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L367" data-line-number="367"></span></td>
							
							<td rel="L367" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Delete</span><span class="p">,</span>        <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[3;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L368" data-line-number="368"></span></td>
							
							<td rel="L368" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Delete</span><span class="p">,</span>        <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[3~</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L369" data-line-number="369"></span></td>
							
							<td rel="L369" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Delete</span><span class="p">,</span>        <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[3~</span><span class="s">&#34;</span><span class="p">,</span>      <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L370" data-line-number="370"></span></td>
							
							<td rel="L370" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_BackSpace</span><span class="p">,</span>     <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\177</span><span class="s">&#34;</span><span class="p">,</span>          <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L371" data-line-number="371"></span></td>
							
							<td rel="L371" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_BackSpace</span><span class="p">,</span>     <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="se">\177</span><span class="s">&#34;</span><span class="p">,</span>      <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L372" data-line-number="372"></span></td>
							
							<td rel="L372" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Home</span><span class="p">,</span>          <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[2J</span><span class="s">&#34;</span><span class="p">,</span>       <span class="mi">0</span><span class="p">,</span>   <span class="o">-</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L373" data-line-number="373"></span></td>
							
							<td rel="L373" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Home</span><span class="p">,</span>          <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2H</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>   <span class="o">+</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L374" data-line-number="374"></span></td>
							
							<td rel="L374" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Home</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[H</span><span class="s">&#34;</span><span class="p">,</span>        <span class="mi">0</span><span class="p">,</span>   <span class="o">-</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L375" data-line-number="375"></span></td>
							
							<td rel="L375" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Home</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1~</span><span class="s">&#34;</span><span class="p">,</span>       <span class="mi">0</span><span class="p">,</span>   <span class="o">+</span><span class="mi">1</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L376" data-line-number="376"></span></td>
							
							<td rel="L376" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_End</span><span class="p">,</span>           <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[J</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L377" data-line-number="377"></span></td>
							
							<td rel="L377" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_End</span><span class="p">,</span>           <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;5F</span><span class="s">&#34;</span><span class="p">,</span>    <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L378" data-line-number="378"></span></td>
							
							<td rel="L378" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_End</span><span class="p">,</span>           <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[K</span><span class="s">&#34;</span><span class="p">,</span>       <span class="o">-</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L379" data-line-number="379"></span></td>
							
							<td rel="L379" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_End</span><span class="p">,</span>           <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2F</span><span class="s">&#34;</span><span class="p">,</span>    <span class="o">+</span><span class="mi">1</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L380" data-line-number="380"></span></td>
							
							<td rel="L380" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_End</span><span class="p">,</span>           <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[4~</span><span class="s">&#34;</span><span class="p">,</span>       <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L381" data-line-number="381"></span></td>
							
							<td rel="L381" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Prior</span><span class="p">,</span>         <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[5;5~</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L382" data-line-number="382"></span></td>
							
							<td rel="L382" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Prior</span><span class="p">,</span>         <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[5;2~</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L383" data-line-number="383"></span></td>
							
							<td rel="L383" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Prior</span><span class="p">,</span>         <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[5~</span><span class="s">&#34;</span><span class="p">,</span>       <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L384" data-line-number="384"></span></td>
							
							<td rel="L384" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Next</span><span class="p">,</span>          <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[6;5~</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L385" data-line-number="385"></span></td>
							
							<td rel="L385" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Next</span><span class="p">,</span>          <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[6;2~</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L386" data-line-number="386"></span></td>
							
							<td rel="L386" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_Next</span><span class="p">,</span>          <span class="n">XK_ANY_MOD</span><span class="p">,</span>     <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[6~</span><span class="s">&#34;</span><span class="p">,</span>       <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L387" data-line-number="387"></span></td>
							
							<td rel="L387" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F1</span><span class="p">,</span>            <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">OP</span><span class="s">&#34;</span> <span class="p">,</span>       <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L388" data-line-number="388"></span></td>
							
							<td rel="L388" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F1</span><span class="p">,</span> <span class="cm">/* F13 */</span>  <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2P</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L389" data-line-number="389"></span></td>
							
							<td rel="L389" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F1</span><span class="p">,</span> <span class="cm">/* F25 */</span>  <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;5P</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L390" data-line-number="390"></span></td>
							
							<td rel="L390" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F1</span><span class="p">,</span> <span class="cm">/* F37 */</span>  <span class="n">Mod4Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;6P</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L391" data-line-number="391"></span></td>
							
							<td rel="L391" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F1</span><span class="p">,</span> <span class="cm">/* F49 */</span>  <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;3P</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L392" data-line-number="392"></span></td>
							
							<td rel="L392" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F1</span><span class="p">,</span> <span class="cm">/* F61 */</span>  <span class="n">Mod3Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;4P</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L393" data-line-number="393"></span></td>
							
							<td rel="L393" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F2</span><span class="p">,</span>            <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">OQ</span><span class="s">&#34;</span> <span class="p">,</span>       <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L394" data-line-number="394"></span></td>
							
							<td rel="L394" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F2</span><span class="p">,</span> <span class="cm">/* F14 */</span>  <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2Q</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L395" data-line-number="395"></span></td>
							
							<td rel="L395" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F2</span><span class="p">,</span> <span class="cm">/* F26 */</span>  <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;5Q</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L396" data-line-number="396"></span></td>
							
							<td rel="L396" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F2</span><span class="p">,</span> <span class="cm">/* F38 */</span>  <span class="n">Mod4Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;6Q</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L397" data-line-number="397"></span></td>
							
							<td rel="L397" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F2</span><span class="p">,</span> <span class="cm">/* F50 */</span>  <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;3Q</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L398" data-line-number="398"></span></td>
							
							<td rel="L398" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F2</span><span class="p">,</span> <span class="cm">/* F62 */</span>  <span class="n">Mod3Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;4Q</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L399" data-line-number="399"></span></td>
							
							<td rel="L399" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F3</span><span class="p">,</span>            <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">OR</span><span class="s">&#34;</span> <span class="p">,</span>       <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L400" data-line-number="400"></span></td>
							
							<td rel="L400" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F3</span><span class="p">,</span> <span class="cm">/* F15 */</span>  <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2R</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L401" data-line-number="401"></span></td>
							
							<td rel="L401" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F3</span><span class="p">,</span> <span class="cm">/* F27 */</span>  <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;5R</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L402" data-line-number="402"></span></td>
							
							<td rel="L402" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F3</span><span class="p">,</span> <span class="cm">/* F39 */</span>  <span class="n">Mod4Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;6R</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L403" data-line-number="403"></span></td>
							
							<td rel="L403" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F3</span><span class="p">,</span> <span class="cm">/* F51 */</span>  <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;3R</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L404" data-line-number="404"></span></td>
							
							<td rel="L404" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F3</span><span class="p">,</span> <span class="cm">/* F63 */</span>  <span class="n">Mod3Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;4R</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L405" data-line-number="405"></span></td>
							
							<td rel="L405" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F4</span><span class="p">,</span>            <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">OS</span><span class="s">&#34;</span> <span class="p">,</span>       <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L406" data-line-number="406"></span></td>
							
							<td rel="L406" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F4</span><span class="p">,</span> <span class="cm">/* F16 */</span>  <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2S</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L407" data-line-number="407"></span></td>
							
							<td rel="L407" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F4</span><span class="p">,</span> <span class="cm">/* F28 */</span>  <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;5S</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L408" data-line-number="408"></span></td>
							
							<td rel="L408" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F4</span><span class="p">,</span> <span class="cm">/* F40 */</span>  <span class="n">Mod4Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;6S</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L409" data-line-number="409"></span></td>
							
							<td rel="L409" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F4</span><span class="p">,</span> <span class="cm">/* F52 */</span>  <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;3S</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L410" data-line-number="410"></span></td>
							
							<td rel="L410" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F5</span><span class="p">,</span>            <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[15~</span><span class="s">&#34;</span><span class="p">,</span>      <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L411" data-line-number="411"></span></td>
							
							<td rel="L411" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F5</span><span class="p">,</span> <span class="cm">/* F17 */</span>  <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[15;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L412" data-line-number="412"></span></td>
							
							<td rel="L412" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F5</span><span class="p">,</span> <span class="cm">/* F29 */</span>  <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[15;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L413" data-line-number="413"></span></td>
							
							<td rel="L413" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F5</span><span class="p">,</span> <span class="cm">/* F41 */</span>  <span class="n">Mod4Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[15;6~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L414" data-line-number="414"></span></td>
							
							<td rel="L414" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F5</span><span class="p">,</span> <span class="cm">/* F53 */</span>  <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[15;3~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L415" data-line-number="415"></span></td>
							
							<td rel="L415" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F6</span><span class="p">,</span>            <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[17~</span><span class="s">&#34;</span><span class="p">,</span>      <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L416" data-line-number="416"></span></td>
							
							<td rel="L416" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F6</span><span class="p">,</span> <span class="cm">/* F18 */</span>  <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[17;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L417" data-line-number="417"></span></td>
							
							<td rel="L417" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F6</span><span class="p">,</span> <span class="cm">/* F30 */</span>  <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[17;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L418" data-line-number="418"></span></td>
							
							<td rel="L418" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F6</span><span class="p">,</span> <span class="cm">/* F42 */</span>  <span class="n">Mod4Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[17;6~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L419" data-line-number="419"></span></td>
							
							<td rel="L419" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F6</span><span class="p">,</span> <span class="cm">/* F54 */</span>  <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[17;3~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L420" data-line-number="420"></span></td>
							
							<td rel="L420" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F7</span><span class="p">,</span>            <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[18~</span><span class="s">&#34;</span><span class="p">,</span>      <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L421" data-line-number="421"></span></td>
							
							<td rel="L421" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F7</span><span class="p">,</span> <span class="cm">/* F19 */</span>  <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[18;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L422" data-line-number="422"></span></td>
							
							<td rel="L422" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F7</span><span class="p">,</span> <span class="cm">/* F31 */</span>  <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[18;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L423" data-line-number="423"></span></td>
							
							<td rel="L423" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F7</span><span class="p">,</span> <span class="cm">/* F43 */</span>  <span class="n">Mod4Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[18;6~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L424" data-line-number="424"></span></td>
							
							<td rel="L424" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F7</span><span class="p">,</span> <span class="cm">/* F55 */</span>  <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[18;3~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L425" data-line-number="425"></span></td>
							
							<td rel="L425" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F8</span><span class="p">,</span>            <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[19~</span><span class="s">&#34;</span><span class="p">,</span>      <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L426" data-line-number="426"></span></td>
							
							<td rel="L426" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F8</span><span class="p">,</span> <span class="cm">/* F20 */</span>  <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[19;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L427" data-line-number="427"></span></td>
							
							<td rel="L427" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F8</span><span class="p">,</span> <span class="cm">/* F32 */</span>  <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[19;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L428" data-line-number="428"></span></td>
							
							<td rel="L428" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F8</span><span class="p">,</span> <span class="cm">/* F44 */</span>  <span class="n">Mod4Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[19;6~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L429" data-line-number="429"></span></td>
							
							<td rel="L429" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F8</span><span class="p">,</span> <span class="cm">/* F56 */</span>  <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[19;3~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L430" data-line-number="430"></span></td>
							
							<td rel="L430" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F9</span><span class="p">,</span>            <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[20~</span><span class="s">&#34;</span><span class="p">,</span>      <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L431" data-line-number="431"></span></td>
							
							<td rel="L431" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F9</span><span class="p">,</span> <span class="cm">/* F21 */</span>  <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[20;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L432" data-line-number="432"></span></td>
							
							<td rel="L432" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F9</span><span class="p">,</span> <span class="cm">/* F33 */</span>  <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[20;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L433" data-line-number="433"></span></td>
							
							<td rel="L433" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F9</span><span class="p">,</span> <span class="cm">/* F45 */</span>  <span class="n">Mod4Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[20;6~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L434" data-line-number="434"></span></td>
							
							<td rel="L434" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F9</span><span class="p">,</span> <span class="cm">/* F57 */</span>  <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[20;3~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L435" data-line-number="435"></span></td>
							
							<td rel="L435" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F10</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[21~</span><span class="s">&#34;</span><span class="p">,</span>      <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L436" data-line-number="436"></span></td>
							
							<td rel="L436" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F10</span><span class="p">,</span> <span class="cm">/* F22 */</span> <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[21;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L437" data-line-number="437"></span></td>
							
							<td rel="L437" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F10</span><span class="p">,</span> <span class="cm">/* F34 */</span> <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[21;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L438" data-line-number="438"></span></td>
							
							<td rel="L438" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F10</span><span class="p">,</span> <span class="cm">/* F46 */</span> <span class="n">Mod4Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[21;6~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L439" data-line-number="439"></span></td>
							
							<td rel="L439" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F10</span><span class="p">,</span> <span class="cm">/* F58 */</span> <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[21;3~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L440" data-line-number="440"></span></td>
							
							<td rel="L440" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F11</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[23~</span><span class="s">&#34;</span><span class="p">,</span>      <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L441" data-line-number="441"></span></td>
							
							<td rel="L441" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F11</span><span class="p">,</span> <span class="cm">/* F23 */</span> <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[23;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L442" data-line-number="442"></span></td>
							
							<td rel="L442" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F11</span><span class="p">,</span> <span class="cm">/* F35 */</span> <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[23;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L443" data-line-number="443"></span></td>
							
							<td rel="L443" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F11</span><span class="p">,</span> <span class="cm">/* F47 */</span> <span class="n">Mod4Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[23;6~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L444" data-line-number="444"></span></td>
							
							<td rel="L444" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F11</span><span class="p">,</span> <span class="cm">/* F59 */</span> <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[23;3~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L445" data-line-number="445"></span></td>
							
							<td rel="L445" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F12</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[24~</span><span class="s">&#34;</span><span class="p">,</span>      <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L446" data-line-number="446"></span></td>
							
							<td rel="L446" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F12</span><span class="p">,</span> <span class="cm">/* F24 */</span> <span class="n">ShiftMask</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[24;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L447" data-line-number="447"></span></td>
							
							<td rel="L447" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F12</span><span class="p">,</span> <span class="cm">/* F36 */</span> <span class="n">ControlMask</span><span class="p">,</span>    <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[24;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L448" data-line-number="448"></span></td>
							
							<td rel="L448" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F12</span><span class="p">,</span> <span class="cm">/* F48 */</span> <span class="n">Mod4Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[24;6~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L449" data-line-number="449"></span></td>
							
							<td rel="L449" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F12</span><span class="p">,</span> <span class="cm">/* F60 */</span> <span class="n">Mod1Mask</span><span class="p">,</span>       <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[24;3~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L450" data-line-number="450"></span></td>
							
							<td rel="L450" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F13</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2P</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L451" data-line-number="451"></span></td>
							
							<td rel="L451" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F14</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2Q</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L452" data-line-number="452"></span></td>
							
							<td rel="L452" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F15</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2R</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L453" data-line-number="453"></span></td>
							
							<td rel="L453" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F16</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;2S</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L454" data-line-number="454"></span></td>
							
							<td rel="L454" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F17</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[15;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L455" data-line-number="455"></span></td>
							
							<td rel="L455" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F18</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[17;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L456" data-line-number="456"></span></td>
							
							<td rel="L456" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F19</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[18;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L457" data-line-number="457"></span></td>
							
							<td rel="L457" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F20</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[19;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L458" data-line-number="458"></span></td>
							
							<td rel="L458" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F21</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[20;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L459" data-line-number="459"></span></td>
							
							<td rel="L459" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F22</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[21;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L460" data-line-number="460"></span></td>
							
							<td rel="L460" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F23</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[23;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L461" data-line-number="461"></span></td>
							
							<td rel="L461" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F24</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[24;2~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L462" data-line-number="462"></span></td>
							
							<td rel="L462" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F25</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;5P</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L463" data-line-number="463"></span></td>
							
							<td rel="L463" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F26</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;5Q</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L464" data-line-number="464"></span></td>
							
							<td rel="L464" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F27</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;5R</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L465" data-line-number="465"></span></td>
							
							<td rel="L465" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F28</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[1;5S</span><span class="s">&#34;</span><span class="p">,</span>     <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L466" data-line-number="466"></span></td>
							
							<td rel="L466" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F29</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[15;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L467" data-line-number="467"></span></td>
							
							<td rel="L467" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F30</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[17;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L468" data-line-number="468"></span></td>
							
							<td rel="L468" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F31</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[18;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L469" data-line-number="469"></span></td>
							
							<td rel="L469" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F32</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[19;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L470" data-line-number="470"></span></td>
							
							<td rel="L470" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F33</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[20;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L471" data-line-number="471"></span></td>
							
							<td rel="L471" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F34</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[21;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L472" data-line-number="472"></span></td>
							
							<td rel="L472" class="lines-code chroma"><code class="code-inner">	<span class="p">{</span> <span class="n">XK_F35</span><span class="p">,</span>           <span class="n">XK_NO_MOD</span><span class="p">,</span>      <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[23;5~</span><span class="s">&#34;</span><span class="p">,</span>    <span class="mi">0</span><span class="p">,</span>    <span class="mi">0</span><span class="p">}</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L473" data-line-number="473"></span></td>
							
							<td rel="L473" class="lines-code chroma"><code class="code-inner"><span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L474" data-line-number="474"></span></td>
							
							<td rel="L474" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L475" data-line-number="475"></span></td>
							
							<td rel="L475" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L476" data-line-number="476"></span></td>
							
							<td rel="L476" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Selection types&#39; masks.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L477" data-line-number="477"></span></td>
							
							<td rel="L477" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Use the same masks as usual.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L478" data-line-number="478"></span></td>
							
							<td rel="L478" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Button1Mask is always unset, to make masks match between ButtonPress.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L479" data-line-number="479"></span></td>
							
							<td rel="L479" class="lines-code chroma"><code class="code-inner"><span class="cm"> * ButtonRelease and MotionNotify.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L480" data-line-number="480"></span></td>
							
							<td rel="L480" class="lines-code chroma"><code class="code-inner"><span class="cm"> * If no match is found, regular selection is used.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L481" data-line-number="481"></span></td>
							
							<td rel="L481" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L482" data-line-number="482"></span></td>
							
							<td rel="L482" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="n">uint</span> <span class="n">selmasks</span><span class="p">[</span><span class="p">]</span> <span class="o">=</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L483" data-line-number="483"></span></td>
							
							<td rel="L483" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">SEL_RECTANGULAR</span><span class="p">]</span> <span class="o">=</span> <span class="n">Mod1Mask</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L484" data-line-number="484"></span></td>
							
							<td rel="L484" class="lines-code chroma"><code class="code-inner"><span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L485" data-line-number="485"></span></td>
							
							<td rel="L485" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L486" data-line-number="486"></span></td>
							
							<td rel="L486" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L487" data-line-number="487"></span></td>
							
							<td rel="L487" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Printable characters in ASCII, used to estimate the advance width
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L488" data-line-number="488"></span></td>
							
							<td rel="L488" class="lines-code chroma"><code class="code-inner"><span class="cm"> * of single wide characters.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L489" data-line-number="489"></span></td>
							
							<td rel="L489" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L490" data-line-number="490"></span></td>
							
							<td rel="L490" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">char</span> <span class="n">ascii_printable</span><span class="p">[</span><span class="p">]</span> <span class="o">=</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L491" data-line-number="491"></span></td>
							
							<td rel="L491" class="lines-code chroma"><code class="code-inner">	<span class="sa"></span><span class="s">&#34;</span><span class="s"> !</span><span class="se">\&#34;</span><span class="s">#$%&amp;&#39;()*+,-./0123456789:;&lt;=&gt;?</span><span class="s">&#34;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L492" data-line-number="492"></span></td>
							
							<td rel="L492" class="lines-code chroma"><code class="code-inner">	<span class="sa"></span><span class="s">&#34;</span><span class="s">@ABCDEFGHIJKLMNOPQRSTUVWXYZ[</span><span class="se">\\</span><span class="s">]^_</span><span class="s">&#34;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L493" data-line-number="493"></span></td>
							
							<td rel="L493" class="lines-code chroma"><code class="code-inner">	<span class="sa"></span><span class="s">&#34;</span><span class="s">`abcdefghijklmnopqrstuvwxyz{|}~</span><span class="s">&#34;</span><span class="p">;</span>
</code></td>
						</tr>
						
					</tbody>
				</table>
				<div class="code-line-menu tippy-target">
					
						<a class="item ref-in-new-issue" role="menuitem" data-url-issue-new="/justaguylinux/dwm-setup/issues/new" data-url-param-body-link="/justaguylinux/dwm-setup/src/commit/2a1d3bf690bff7f76924f99136b948b539e84d31/suckless/st/config.def.h" rel="nofollow noindex">In neuem Issue referenzieren</a>
					
					<a class="item view_git_blame" role="menuitem" href="/justaguylinux/dwm-setup/blame/commit/2a1d3bf690bff7f76924f99136b948b539e84d31/suckless/st/config.def.h">„git blame“ ansehen</a>
					<a class="item copy-line-permalink" role="menuitem" data-url="/justaguylinux/dwm-setup/src/commit/2a1d3bf690bff7f76924f99136b948b539e84d31/suckless/st/config.def.h">Permalink kopieren</a>
				</div>
				
			
		</div>
	</div>
</div>

		
	</div>
</div>


	

	</div>

	

	<footer class="page-footer" role="group" aria-label="Fußzeile">
	<div class="grid" aria-label="Links">
		<div class="not-mobile">
			<div class="branding" aria-hidden="true">
				<img src="https://design.codeberg.org/logo-kit/icon_inverted.svg" alt="Logo">
			</div>
			<div class="powered-by">
				<div class="title">Powered by</div>
				<p class="tw-mb-0">
					<a target="_blank" rel="noopener noreferrer" href="https://forgejo.org" aria-label="Forgejo">
						<img class="light-logo" loading="lazy" src="/assets/img/svg/forgejo-wordmark.svg" alt="Forgejo logo">
						<img class="dark-logo" loading="lazy" src="/assets/img/svg/forgejo-wordmark-mono.svg" alt="Forgejo logo">
					</a>
				</p>
				with <a class="tw-mt-0" href="/Codeberg-Infrastructure/forgejo" target="_blank">modifications</a>
			</div>
		</div>
		<div>
			<b id="codeberg-codeberg">Codeberg</b>
			<ul>
				<a href="https://blog.codeberg.org" target="_blank">Blog</a>
				<li><a href="https://docs.codeberg.org" target="_blank">Documentation</a></li>
				<li><a href="/Codeberg/Community/issues">Community Issues</a></li>
				
				<li><a href="/Codeberg/Contributing">Contributing</a>
				<li><a href="https://docs.codeberg.org/contact/#abuse" target="_blank">Report Abuse</a>
			</ul>
		</div>
		<div>
			<b id="codeberg-association">Association</b>
			<ul>
				<li><a href="https://docs.codeberg.org/getting-started/what-is-codeberg/#what-is-codeberg-e.v.%3F" target="_blank">Who are we?</a></li>
				<li><a href="/codeberg/org/src/en/bylaws.md" target="_blank">Bylaws / Satzung</a></li>
				<li><a href="https://docs.codeberg.org/improving-codeberg/donate/" target="_blank">Donate</a></li>
				<li><a href="https://join.codeberg.org" target="_blank">Join / Support</a></li>
				<li><a href="https://docs.codeberg.org/contact/" target="_blank">Contact</a></li>
			</ul>
		</div>
		<div>
			<b id="codeberg-service">Services</b>
			<ul>
				<li><a href="https://codeberg.page" target="_blank">Codeberg Pages</a></li>
				<li><a href="https://translate.codeberg.org" target="_blank">Codeberg Translate</a></li>
				<li><a href="https://docs.codeberg.org/ci/#using-codeberg's-instance-of-woodpecker-ci" target="_blank">Woodpecker CI</a></li>
				
					<li><a href="/api/swagger">Forgejo API</a></li>
				
				<li><a href="https://status.codeberg.eu" target="_blank">Status Page</a></li>
			</ul>
		</div>
		<div>
			<b id="codeberg-legal">Legal</b>
			<ul>
				<li><a href="/codeberg/org/src/Imprint.md" target="_blank">Imprint / Impressum</a></li>
				<li><a href="/codeberg/org/src/PrivacyPolicy.md" target="_blank">Privacy Policy</a></li>
				<li><a href="/assets/licenses.txt">Lizenzen</a></li>
				<li><a href="/codeberg/org/src/TermsOfUse.md">Terms of Use</a></li>
			</ul>
		</div>
	</div>
	<div class="footer-bottom-grid">
		<div class="footer-social">
			<a href="https://social.anoxinon.de/@Codeberg" target="_blank" rel="noopener noreferrer">Mastodon</a> |
			<a href="matrix:r/codeberg-space:matrix.org?action=join" target="_blank" rel="noopener noreferrer">Matrix Space</a>
			<a href="https://matrix.to/#/#codeberg-space:matrix.org" target="_blank" rel="noopener noreferrer">(Web link)</a>
			<button class="btn interact-fg tw-p-2" data-clipboard-text="#codeberg-space:matrix.org" data-tooltip-content="Copy to clipboard"><svg viewBox="0 0 16 16" class="svg octicon-copy" aria-hidden="true" width="14" height="14"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"/><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"/></svg></button>
			<p class="only-mobile">
				<a target="_blank" rel="noopener noreferrer" href="https://forgejo.org">Betrieben mit Forgejo</a>
			</p>
		</div>
		<div class="footer-language-switch">
			<div class="ui language bottom floating slide up dropdown link item button">
				<svg viewBox="0 0 16 16" class="svg octicon-globe" aria-hidden="true" width="16" height="16"><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0M5.78 8.75a9.64 9.64 0 0 0 1.363 4.177q.383.64.857 1.215c.245-.296.551-.705.857-1.215A9.64 9.64 0 0 0 10.22 8.75Zm4.44-1.5a9.64 9.64 0 0 0-1.363-4.177c-.307-.51-.612-.919-.857-1.215a10 10 0 0 0-.857 1.215A9.64 9.64 0 0 0 5.78 7.25Zm-5.944 1.5H1.543a6.51 6.51 0 0 0 4.666 5.5q-.184-.271-.352-.552c-.715-1.192-1.437-2.874-1.581-4.948m-2.733-1.5h2.733c.144-2.074.866-3.756 1.58-4.948q.18-.295.353-.552a6.51 6.51 0 0 0-4.666 5.5m10.181 1.5c-.144 2.074-.866 3.756-1.58 4.948q-.18.296-.353.552a6.51 6.51 0 0 0 4.666-5.5Zm2.733-1.5a6.51 6.51 0 0 0-4.666-5.5q.184.272.353.552c.714 1.192 1.436 2.874 1.58 4.948Z"/></svg>
				<div class="text">Deutsch</div>
				<div class="menu language-menu">
					
						<a lang="id-ID" data-url="/?lang=id-ID" class="item ">Bahasa Indonesia</a>
					
						<a lang="da" data-url="/?lang=da" class="item ">Dansk</a>
					
						<a lang="de-DE" data-url="/?lang=de-DE" class="item active selected">Deutsch</a>
					
						<a lang="en-US" data-url="/?lang=en-US" class="item ">English</a>
					
						<a lang="es-ES" data-url="/?lang=es-ES" class="item ">Español</a>
					
						<a lang="eo" data-url="/?lang=eo" class="item ">Esperanto</a>
					
						<a lang="fil" data-url="/?lang=fil" class="item ">Filipino</a>
					
						<a lang="fr-FR" data-url="/?lang=fr-FR" class="item ">Français</a>
					
						<a lang="it-IT" data-url="/?lang=it-IT" class="item ">Italiano</a>
					
						<a lang="lv-LV" data-url="/?lang=lv-LV" class="item ">Latviešu</a>
					
						<a lang="hu-HU" data-url="/?lang=hu-HU" class="item ">Magyar nyelv</a>
					
						<a lang="nl-NL" data-url="/?lang=nl-NL" class="item ">Nederlands</a>
					
						<a lang="nds" data-url="/?lang=nds" class="item ">Plattdüütsch</a>
					
						<a lang="pl-PL" data-url="/?lang=pl-PL" class="item ">Polski</a>
					
						<a lang="pt-PT" data-url="/?lang=pt-PT" class="item ">Português de Portugal</a>
					
						<a lang="pt-BR" data-url="/?lang=pt-BR" class="item ">Português do Brasil</a>
					
						<a lang="sl" data-url="/?lang=sl" class="item ">Slovenščina</a>
					
						<a lang="fi-FI" data-url="/?lang=fi-FI" class="item ">Suomi</a>
					
						<a lang="sv-SE" data-url="/?lang=sv-SE" class="item ">Svenska</a>
					
						<a lang="tr-TR" data-url="/?lang=tr-TR" class="item ">Türkçe</a>
					
						<a lang="cs-CZ" data-url="/?lang=cs-CZ" class="item ">Čeština</a>
					
						<a lang="el-GR" data-url="/?lang=el-GR" class="item ">Ελληνικά</a>
					
						<a lang="bg" data-url="/?lang=bg" class="item ">Български</a>
					
						<a lang="ru-RU" data-url="/?lang=ru-RU" class="item ">Русский</a>
					
						<a lang="uk-UA" data-url="/?lang=uk-UA" class="item ">Українська</a>
					
						<a lang="fa-IR" data-url="/?lang=fa-IR" class="item ">فارسی</a>
					
						<a lang="ja-JP" data-url="/?lang=ja-JP" class="item ">日本語</a>
					
						<a lang="zh-CN" data-url="/?lang=zh-CN" class="item ">简体中文</a>
					
						<a lang="zh-TW" data-url="/?lang=zh-TW" class="item ">繁體中文（台灣）</a>
					
						<a lang="zh-HK" data-url="/?lang=zh-HK" class="item ">繁體中文（香港）</a>
					
						<a lang="ko-KR" data-url="/?lang=ko-KR" class="item ">한국어</a>
					
				</div>
			</div>
		</div>
	</div>
	<div class="tw-hidden">
		
			Seite: 108ms<br>
			Vorlage: 10ms
		
	</div>
    
	
		<div class="symbol-of-tolerance" role="img"></div>
	
</footer>


	<script src="/assets/js/index.js?v=13.0.0-dev-623-c059966a~gitea-1.22.0" onerror="alert('Konnte Asset-Dateien nicht von {path} laden. Bitte stelle sicher, dass auf die Asset-Dateien zugegriffen werden kann.'.replace('{path}', this.src))"></script>

	
</body>
</html>

