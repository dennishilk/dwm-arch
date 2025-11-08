<!DOCTYPE html>
<html lang="de-DE" data-theme="codeberg-auto">
<head>
	<meta name="viewport" content="width=device-width, initial-scale=1">
	
	<title>dwm-setup/suckless/st/x.c an main - justaguylinux/dwm-setup - Codeberg.org</title>
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

	

	
	<meta property="og:title" content="dwm-setup/suckless/st/x.c an main">


	<meta property="og:url" content="https://codeberg.org//justaguylinux/dwm-setup/src/branch/main/suckless/st/x.c">


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
			
			<a class="item" rel="nofollow" href="/user/login?redirect_to=%2fjustaguylinux%2fdwm-setup%2fsrc%2fbranch%2fmain%2fsuckless%2fst%2fx.c">
				<svg viewBox="0 0 16 16" class="tw-mr-1 svg octicon-sign-in" aria-hidden="true" width="16" height="16"><path d="M2 2.75C2 1.784 2.784 1 3.75 1h2.5a.75.75 0 0 1 0 1.5h-2.5a.25.25 0 0 0-.25.25v10.5c0 .138.112.25.25.25h2.5a.75.75 0 0 1 0 1.5h-2.5A1.75 1.75 0 0 1 2 13.25Zm6.56 4.5h5.69a.75.75 0 0 1 0 1.5H8.56l1.97 1.97a.749.749 0 0 1-.326 1.275.75.75 0 0 1-.734-.215L6.22 8.53a.75.75 0 0 1 0-1.06l3.25-3.25a.749.749 0 0 1 1.275.326.75.75 0 0 1-.215.734Z"/></svg>
				<span>Anmelden</span>
			</a>
		
	</div>
</nav>

		



<div role="main" aria-label="dwm-setup/suckless/st/x.c an main" class="page-content repository file list ">
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
		'branchURLSuffix': '/suckless\/st\/x.c',
		'tagURLPrefix': '\/justaguylinux\/dwm-setup/src/tag/',
		'tagURLSuffix': '/suckless\/st\/x.c',
		'repoLink': "/justaguylinux/dwm-setup",
		'treePath': "suckless/st/x.c",
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
						<a class="section" href="/justaguylinux/dwm-setup/src/branch/main" title="dwm-setup">dwm-setup</a><span class="breadcrumb-divider">/</span><span class="section"><a href="/justaguylinux/dwm-setup/src/branch/main/suckless" title="suckless">suckless</a></span><span class="breadcrumb-divider">/</span><span class="section"><a href="/justaguylinux/dwm-setup/src/branch/main/suckless/st" title="st">st</a></span><span class="breadcrumb-divider">/</span><span class="active section" title="x.c">x.c</span>
								<button class="btn interact-fg tw-p-2" data-clipboard-text="suckless/st/x.c" data-tooltip-content="Pfad kopieren"><svg viewBox="0 0 16 16" class="svg octicon-copy" aria-hidden="true" width="14" height="14"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"/><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"/></svg></button></span>
				
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
			2236 Zeilen
		</div>
	
	
	
		<div class="file-info-entry">
			50 KiB
		</div>
	
	
	
		<div class="file-info-entry">
			C
		</div>
	
	
	
	
	
</div>

			
		</div>
		<div class="file-header-right file-actions tw-flex tw-items-center tw-flex-wrap">
			
			
				<div class="ui buttons tw-mr-1">
					
					<a class="ui mini basic button" href="/justaguylinux/dwm-setup/raw/branch/main/suckless/st/x.c">Originalformat</a>
					
						<a class="ui mini basic button" href="/justaguylinux/dwm-setup/src/commit/2a1d3bf690bff7f76924f99136b948b539e84d31/suckless/st/x.c">Permalink</a>
					
					
						<a class="ui mini basic button" href="/justaguylinux/dwm-setup/blame/branch/main/suckless/st/x.c">Blame</a>
					
					<a class="ui mini basic button" href="/justaguylinux/dwm-setup/commits/branch/main/suckless/st/x.c">Verlauf</a>
					
				</div>
				<a download class="btn-octicon" href="/justaguylinux/dwm-setup/raw/branch/main/suckless/st/x.c" data-tooltip-content="Datei herunterladen">
					<svg viewBox="0 0 16 16" class="svg octicon-download" aria-hidden="true" width="16" height="16"><path d="M2.75 14A1.75 1.75 0 0 1 1 12.25v-2.5a.75.75 0 0 1 1.5 0v2.5c0 .138.112.25.25.25h10.5a.25.25 0 0 0 .25-.25v-2.5a.75.75 0 0 1 1.5 0v2.5A1.75 1.75 0 0 1 13.25 14Z"/><path d="M7.25 7.689V2a.75.75 0 0 1 1.5 0v5.689l1.97-1.969a.749.749 0 1 1 1.06 1.06l-3.25 3.25a.75.75 0 0 1-1.06 0L4.22 6.78a.749.749 0 1 1 1.06-1.06z"/></svg>
				</a>
				<a href="#" id="copy-content" class="btn-octicon " data-tooltip-content="Inhalt kopieren">
					<svg viewBox="0 0 16 16" class="svg octicon-copy" aria-hidden="true" width="14" height="14"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"/><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"/></svg>
				</a>
				
					
						<a class="btn-octicon" href="/justaguylinux/dwm-setup/rss/branch/main/suckless/st/x.c" data-tooltip-content="RSS-Feed">
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
							
							<td rel="L1" class="lines-code chroma"><code class="code-inner"><span class="cm">/* See LICENSE for license details. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2" data-line-number="2"></span></td>
							
							<td rel="L2" class="lines-code chroma"><code class="code-inner"><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;errno.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L3" data-line-number="3"></span></td>
							
							<td rel="L3" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;math.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L4" data-line-number="4"></span></td>
							
							<td rel="L4" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;limits.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L5" data-line-number="5"></span></td>
							
							<td rel="L5" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;locale.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L6" data-line-number="6"></span></td>
							
							<td rel="L6" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;signal.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L7" data-line-number="7"></span></td>
							
							<td rel="L7" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;sys/select.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L8" data-line-number="8"></span></td>
							
							<td rel="L8" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;time.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L9" data-line-number="9"></span></td>
							
							<td rel="L9" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;unistd.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L10" data-line-number="10"></span></td>
							
							<td rel="L10" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;libgen.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L11" data-line-number="11"></span></td>
							
							<td rel="L11" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;X11/Xatom.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L12" data-line-number="12"></span></td>
							
							<td rel="L12" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;X11/Xlib.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L13" data-line-number="13"></span></td>
							
							<td rel="L13" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;X11/cursorfont.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L14" data-line-number="14"></span></td>
							
							<td rel="L14" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;X11/keysym.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L15" data-line-number="15"></span></td>
							
							<td rel="L15" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;X11/Xft/Xft.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L16" data-line-number="16"></span></td>
							
							<td rel="L16" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;X11/XKBlib.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L17" data-line-number="17"></span></td>
							
							<td rel="L17" class="lines-code chroma"><code class="code-inner"><span class="cp"></span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L18" data-line-number="18"></span></td>
							
							<td rel="L18" class="lines-code chroma"><code class="code-inner"><span class="kt">char</span> <span class="o">*</span><span class="n">argv0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L19" data-line-number="19"></span></td>
							
							<td rel="L19" class="lines-code chroma"><code class="code-inner"><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&#34;arg.h&#34;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L20" data-line-number="20"></span></td>
							
							<td rel="L20" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&#34;st.h&#34;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L21" data-line-number="21"></span></td>
							
							<td rel="L21" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&#34;win.h&#34;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L22" data-line-number="22"></span></td>
							
							<td rel="L22" class="lines-code chroma"><code class="code-inner"><span class="cp"></span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L23" data-line-number="23"></span></td>
							
							<td rel="L23" class="lines-code chroma"><code class="code-inner"><span class="cm">/* types used in config.h */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L24" data-line-number="24"></span></td>
							
							<td rel="L24" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L25" data-line-number="25"></span></td>
							
							<td rel="L25" class="lines-code chroma"><code class="code-inner">	<span class="n">uint</span> <span class="n">mod</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L26" data-line-number="26"></span></td>
							
							<td rel="L26" class="lines-code chroma"><code class="code-inner">	<span class="n">KeySym</span> <span class="n">keysym</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L27" data-line-number="27"></span></td>
							
							<td rel="L27" class="lines-code chroma"><code class="code-inner">	<span class="kt">void</span> <span class="p">(</span><span class="o">*</span><span class="n">func</span><span class="p">)</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L28" data-line-number="28"></span></td>
							
							<td rel="L28" class="lines-code chroma"><code class="code-inner">	<span class="k">const</span> <span class="n">Arg</span> <span class="n">arg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L29" data-line-number="29"></span></td>
							
							<td rel="L29" class="lines-code chroma"><code class="code-inner"><span class="p">}</span> <span class="n">Shortcut</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L30" data-line-number="30"></span></td>
							
							<td rel="L30" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L31" data-line-number="31"></span></td>
							
							<td rel="L31" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L32" data-line-number="32"></span></td>
							
							<td rel="L32" class="lines-code chroma"><code class="code-inner">	<span class="n">uint</span> <span class="n">mod</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L33" data-line-number="33"></span></td>
							
							<td rel="L33" class="lines-code chroma"><code class="code-inner">	<span class="n">uint</span> <span class="n">button</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L34" data-line-number="34"></span></td>
							
							<td rel="L34" class="lines-code chroma"><code class="code-inner">	<span class="kt">void</span> <span class="p">(</span><span class="o">*</span><span class="n">func</span><span class="p">)</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L35" data-line-number="35"></span></td>
							
							<td rel="L35" class="lines-code chroma"><code class="code-inner">	<span class="k">const</span> <span class="n">Arg</span> <span class="n">arg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L36" data-line-number="36"></span></td>
							
							<td rel="L36" class="lines-code chroma"><code class="code-inner">	<span class="n">uint</span>  <span class="n">release</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L37" data-line-number="37"></span></td>
							
							<td rel="L37" class="lines-code chroma"><code class="code-inner"><span class="p">}</span> <span class="n">MouseShortcut</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L38" data-line-number="38"></span></td>
							
							<td rel="L38" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L39" data-line-number="39"></span></td>
							
							<td rel="L39" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L40" data-line-number="40"></span></td>
							
							<td rel="L40" class="lines-code chroma"><code class="code-inner">	<span class="n">KeySym</span> <span class="n">k</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L41" data-line-number="41"></span></td>
							
							<td rel="L41" class="lines-code chroma"><code class="code-inner">	<span class="n">uint</span> <span class="n">mask</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L42" data-line-number="42"></span></td>
							
							<td rel="L42" class="lines-code chroma"><code class="code-inner">	<span class="kt">char</span> <span class="o">*</span><span class="n">s</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L43" data-line-number="43"></span></td>
							
							<td rel="L43" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* three-valued logic variables: 0 indifferent, 1 on, -1 off */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L44" data-line-number="44"></span></td>
							
							<td rel="L44" class="lines-code chroma"><code class="code-inner">	<span class="kt">signed</span> <span class="kt">char</span> <span class="n">appkey</span><span class="p">;</span>    <span class="cm">/* application keypad */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L45" data-line-number="45"></span></td>
							
							<td rel="L45" class="lines-code chroma"><code class="code-inner">	<span class="kt">signed</span> <span class="kt">char</span> <span class="n">appcursor</span><span class="p">;</span> <span class="cm">/* application cursor */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L46" data-line-number="46"></span></td>
							
							<td rel="L46" class="lines-code chroma"><code class="code-inner"><span class="p">}</span> <span class="n">Key</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L47" data-line-number="47"></span></td>
							
							<td rel="L47" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L48" data-line-number="48"></span></td>
							
							<td rel="L48" class="lines-code chroma"><code class="code-inner"><span class="cm">/* X modifiers */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L49" data-line-number="49"></span></td>
							
							<td rel="L49" class="lines-code chroma"><code class="code-inner"><span class="cp">#</span><span class="cp">define XK_ANY_MOD    UINT_MAX</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L50" data-line-number="50"></span></td>
							
							<td rel="L50" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define XK_NO_MOD     0</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L51" data-line-number="51"></span></td>
							
							<td rel="L51" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define XK_SWITCH_MOD (1&lt;&lt;13|1&lt;&lt;14)</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L52" data-line-number="52"></span></td>
							
							<td rel="L52" class="lines-code chroma"><code class="code-inner"><span class="cp"></span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L53" data-line-number="53"></span></td>
							
							<td rel="L53" class="lines-code chroma"><code class="code-inner"><span class="cm">/* function definitions used in config.h */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L54" data-line-number="54"></span></td>
							
							<td rel="L54" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">clipcopy</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L55" data-line-number="55"></span></td>
							
							<td rel="L55" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">clippaste</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L56" data-line-number="56"></span></td>
							
							<td rel="L56" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">numlock</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L57" data-line-number="57"></span></td>
							
							<td rel="L57" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">selpaste</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L58" data-line-number="58"></span></td>
							
							<td rel="L58" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">zoom</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L59" data-line-number="59"></span></td>
							
							<td rel="L59" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">zoomabs</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L60" data-line-number="60"></span></td>
							
							<td rel="L60" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">zoomreset</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L61" data-line-number="61"></span></td>
							
							<td rel="L61" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">ttysend</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L62" data-line-number="62"></span></td>
							
							<td rel="L62" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L63" data-line-number="63"></span></td>
							
							<td rel="L63" class="lines-code chroma"><code class="code-inner"><span class="cm">/* config.h for applying patches and the configuration. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L64" data-line-number="64"></span></td>
							
							<td rel="L64" class="lines-code chroma"><code class="code-inner"><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&#34;config.h&#34;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L65" data-line-number="65"></span></td>
							
							<td rel="L65" class="lines-code chroma"><code class="code-inner"><span class="cp"></span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L66" data-line-number="66"></span></td>
							
							<td rel="L66" class="lines-code chroma"><code class="code-inner"><span class="cm">/* XEMBED messages */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L67" data-line-number="67"></span></td>
							
							<td rel="L67" class="lines-code chroma"><code class="code-inner"><span class="cp">#</span><span class="cp">define XEMBED_FOCUS_IN  4</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L68" data-line-number="68"></span></td>
							
							<td rel="L68" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define XEMBED_FOCUS_OUT 5</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L69" data-line-number="69"></span></td>
							
							<td rel="L69" class="lines-code chroma"><code class="code-inner"><span class="cp"></span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L70" data-line-number="70"></span></td>
							
							<td rel="L70" class="lines-code chroma"><code class="code-inner"><span class="cm">/* macros */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L71" data-line-number="71"></span></td>
							
							<td rel="L71" class="lines-code chroma"><code class="code-inner"><span class="cp">#</span><span class="cp">define IS_SET(flag)		((win.mode &amp; (flag)) != 0)</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L72" data-line-number="72"></span></td>
							
							<td rel="L72" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define TRUERED(x)		(((x) &amp; 0xff0000) &gt;&gt; 8)</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L73" data-line-number="73"></span></td>
							
							<td rel="L73" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define TRUEGREEN(x)		(((x) &amp; 0xff00))</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L74" data-line-number="74"></span></td>
							
							<td rel="L74" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define TRUEBLUE(x)		(((x) &amp; 0xff) &lt;&lt; 8)</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L75" data-line-number="75"></span></td>
							
							<td rel="L75" class="lines-code chroma"><code class="code-inner"><span class="cp"></span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L76" data-line-number="76"></span></td>
							
							<td rel="L76" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="n">XftDraw</span> <span class="o">*</span><span class="n">Draw</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L77" data-line-number="77"></span></td>
							
							<td rel="L77" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="n">XftColor</span> <span class="n">Color</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L78" data-line-number="78"></span></td>
							
							<td rel="L78" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="n">XftGlyphFontSpec</span> <span class="n">GlyphFontSpec</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L79" data-line-number="79"></span></td>
							
							<td rel="L79" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L80" data-line-number="80"></span></td>
							
							<td rel="L80" class="lines-code chroma"><code class="code-inner"><span class="cm">/* Purely graphic info */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L81" data-line-number="81"></span></td>
							
							<td rel="L81" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L82" data-line-number="82"></span></td>
							
							<td rel="L82" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">tw</span><span class="p">,</span> <span class="n">th</span><span class="p">;</span> <span class="cm">/* tty width and height */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L83" data-line-number="83"></span></td>
							
							<td rel="L83" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">w</span><span class="p">,</span> <span class="n">h</span><span class="p">;</span> <span class="cm">/* window width and height */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L84" data-line-number="84"></span></td>
							
							<td rel="L84" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">hborderpx</span><span class="p">,</span> <span class="n">vborderpx</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L85" data-line-number="85"></span></td>
							
							<td rel="L85" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">ch</span><span class="p">;</span> <span class="cm">/* char height */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L86" data-line-number="86"></span></td>
							
							<td rel="L86" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">cw</span><span class="p">;</span> <span class="cm">/* char width  */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L87" data-line-number="87"></span></td>
							
							<td rel="L87" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">mode</span><span class="p">;</span> <span class="cm">/* window state/mode flags */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L88" data-line-number="88"></span></td>
							
							<td rel="L88" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">cursor</span><span class="p">;</span> <span class="cm">/* cursor style */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L89" data-line-number="89"></span></td>
							
							<td rel="L89" class="lines-code chroma"><code class="code-inner"><span class="p">}</span> <span class="n">TermWindow</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L90" data-line-number="90"></span></td>
							
							<td rel="L90" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L91" data-line-number="91"></span></td>
							
							<td rel="L91" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L92" data-line-number="92"></span></td>
							
							<td rel="L92" class="lines-code chroma"><code class="code-inner">	<span class="n">Display</span> <span class="o">*</span><span class="n">dpy</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L93" data-line-number="93"></span></td>
							
							<td rel="L93" class="lines-code chroma"><code class="code-inner">	<span class="n">Colormap</span> <span class="n">cmap</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L94" data-line-number="94"></span></td>
							
							<td rel="L94" class="lines-code chroma"><code class="code-inner">	<span class="n">Window</span> <span class="n">win</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L95" data-line-number="95"></span></td>
							
							<td rel="L95" class="lines-code chroma"><code class="code-inner">	<span class="n">Drawable</span> <span class="n">buf</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L96" data-line-number="96"></span></td>
							
							<td rel="L96" class="lines-code chroma"><code class="code-inner">	<span class="n">GlyphFontSpec</span> <span class="o">*</span><span class="n">specbuf</span><span class="p">;</span> <span class="cm">/* font spec buffer used for rendering */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L97" data-line-number="97"></span></td>
							
							<td rel="L97" class="lines-code chroma"><code class="code-inner">	<span class="n">Atom</span> <span class="n">xembed</span><span class="p">,</span> <span class="n">wmdeletewin</span><span class="p">,</span> <span class="n">netwmname</span><span class="p">,</span> <span class="n">netwmiconname</span><span class="p">,</span> <span class="n">netwmpid</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L98" data-line-number="98"></span></td>
							
							<td rel="L98" class="lines-code chroma"><code class="code-inner">	<span class="k">struct</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L99" data-line-number="99"></span></td>
							
							<td rel="L99" class="lines-code chroma"><code class="code-inner">		<span class="n">XIM</span> <span class="n">xim</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L100" data-line-number="100"></span></td>
							
							<td rel="L100" class="lines-code chroma"><code class="code-inner">		<span class="n">XIC</span> <span class="n">xic</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L101" data-line-number="101"></span></td>
							
							<td rel="L101" class="lines-code chroma"><code class="code-inner">		<span class="n">XPoint</span> <span class="n">spot</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L102" data-line-number="102"></span></td>
							
							<td rel="L102" class="lines-code chroma"><code class="code-inner">		<span class="n">XVaNestedList</span> <span class="n">spotlist</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L103" data-line-number="103"></span></td>
							
							<td rel="L103" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="n">ime</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L104" data-line-number="104"></span></td>
							
							<td rel="L104" class="lines-code chroma"><code class="code-inner">	<span class="n">Draw</span> <span class="n">draw</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L105" data-line-number="105"></span></td>
							
							<td rel="L105" class="lines-code chroma"><code class="code-inner">	<span class="n">Visual</span> <span class="o">*</span><span class="n">vis</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L106" data-line-number="106"></span></td>
							
							<td rel="L106" class="lines-code chroma"><code class="code-inner">	<span class="n">XSetWindowAttributes</span> <span class="n">attrs</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L107" data-line-number="107"></span></td>
							
							<td rel="L107" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">scr</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L108" data-line-number="108"></span></td>
							
							<td rel="L108" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">isfixed</span><span class="p">;</span> <span class="cm">/* is fixed geometry? */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L109" data-line-number="109"></span></td>
							
							<td rel="L109" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">depth</span><span class="p">;</span> <span class="cm">/* bit depth */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L110" data-line-number="110"></span></td>
							
							<td rel="L110" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">l</span><span class="p">,</span> <span class="n">t</span><span class="p">;</span> <span class="cm">/* left and top offset */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L111" data-line-number="111"></span></td>
							
							<td rel="L111" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">gm</span><span class="p">;</span> <span class="cm">/* geometry mask */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L112" data-line-number="112"></span></td>
							
							<td rel="L112" class="lines-code chroma"><code class="code-inner"><span class="p">}</span> <span class="n">XWindow</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L113" data-line-number="113"></span></td>
							
							<td rel="L113" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L114" data-line-number="114"></span></td>
							
							<td rel="L114" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L115" data-line-number="115"></span></td>
							
							<td rel="L115" class="lines-code chroma"><code class="code-inner">	<span class="n">Atom</span> <span class="n">xtarget</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L116" data-line-number="116"></span></td>
							
							<td rel="L116" class="lines-code chroma"><code class="code-inner">	<span class="kt">char</span> <span class="o">*</span><span class="n">primary</span><span class="p">,</span> <span class="o">*</span><span class="n">clipboard</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L117" data-line-number="117"></span></td>
							
							<td rel="L117" class="lines-code chroma"><code class="code-inner">	<span class="k">struct</span> <span class="n">timespec</span> <span class="n">tclick1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L118" data-line-number="118"></span></td>
							
							<td rel="L118" class="lines-code chroma"><code class="code-inner">	<span class="k">struct</span> <span class="n">timespec</span> <span class="n">tclick2</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L119" data-line-number="119"></span></td>
							
							<td rel="L119" class="lines-code chroma"><code class="code-inner"><span class="p">}</span> <span class="n">XSelection</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L120" data-line-number="120"></span></td>
							
							<td rel="L120" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L121" data-line-number="121"></span></td>
							
							<td rel="L121" class="lines-code chroma"><code class="code-inner"><span class="cm">/* Font structure */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L122" data-line-number="122"></span></td>
							
							<td rel="L122" class="lines-code chroma"><code class="code-inner"><span class="cp">#</span><span class="cp">define Font Font_</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L123" data-line-number="123"></span></td>
							
							<td rel="L123" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L124" data-line-number="124"></span></td>
							
							<td rel="L124" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">height</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L125" data-line-number="125"></span></td>
							
							<td rel="L125" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">width</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L126" data-line-number="126"></span></td>
							
							<td rel="L126" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">ascent</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L127" data-line-number="127"></span></td>
							
							<td rel="L127" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">descent</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L128" data-line-number="128"></span></td>
							
							<td rel="L128" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">badslant</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L129" data-line-number="129"></span></td>
							
							<td rel="L129" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">badweight</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L130" data-line-number="130"></span></td>
							
							<td rel="L130" class="lines-code chroma"><code class="code-inner">	<span class="kt">short</span> <span class="n">lbearing</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L131" data-line-number="131"></span></td>
							
							<td rel="L131" class="lines-code chroma"><code class="code-inner">	<span class="kt">short</span> <span class="n">rbearing</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L132" data-line-number="132"></span></td>
							
							<td rel="L132" class="lines-code chroma"><code class="code-inner">	<span class="n">XftFont</span> <span class="o">*</span><span class="n">match</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L133" data-line-number="133"></span></td>
							
							<td rel="L133" class="lines-code chroma"><code class="code-inner">	<span class="n">FcFontSet</span> <span class="o">*</span><span class="n">set</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L134" data-line-number="134"></span></td>
							
							<td rel="L134" class="lines-code chroma"><code class="code-inner">	<span class="n">FcPattern</span> <span class="o">*</span><span class="n">pattern</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L135" data-line-number="135"></span></td>
							
							<td rel="L135" class="lines-code chroma"><code class="code-inner"><span class="p">}</span> <span class="n">Font</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L136" data-line-number="136"></span></td>
							
							<td rel="L136" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L137" data-line-number="137"></span></td>
							
							<td rel="L137" class="lines-code chroma"><code class="code-inner"><span class="cm">/* Drawing Context */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L138" data-line-number="138"></span></td>
							
							<td rel="L138" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L139" data-line-number="139"></span></td>
							
							<td rel="L139" class="lines-code chroma"><code class="code-inner">	<span class="n">Color</span> <span class="o">*</span><span class="n">col</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L140" data-line-number="140"></span></td>
							
							<td rel="L140" class="lines-code chroma"><code class="code-inner">	<span class="kt">size_t</span> <span class="n">collen</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L141" data-line-number="141"></span></td>
							
							<td rel="L141" class="lines-code chroma"><code class="code-inner">	<span class="n">Font</span> <span class="n">font</span><span class="p">,</span> <span class="n">bfont</span><span class="p">,</span> <span class="n">ifont</span><span class="p">,</span> <span class="n">ibfont</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L142" data-line-number="142"></span></td>
							
							<td rel="L142" class="lines-code chroma"><code class="code-inner">	<span class="n">GC</span> <span class="n">gc</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L143" data-line-number="143"></span></td>
							
							<td rel="L143" class="lines-code chroma"><code class="code-inner"><span class="p">}</span> <span class="n">DC</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L144" data-line-number="144"></span></td>
							
							<td rel="L144" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L145" data-line-number="145"></span></td>
							
							<td rel="L145" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kr">inline</span> <span class="n">ushort</span> <span class="nf">sixd_to_16bit</span><span class="p">(</span><span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L146" data-line-number="146"></span></td>
							
							<td rel="L146" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">int</span> <span class="nf">xmakeglyphfontspecs</span><span class="p">(</span><span class="n">XftGlyphFontSpec</span> <span class="o">*</span><span class="p">,</span> <span class="k">const</span> <span class="n">Glyph</span> <span class="o">*</span><span class="p">,</span> <span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L147" data-line-number="147"></span></td>
							
							<td rel="L147" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">xdrawglyphfontspecs</span><span class="p">(</span><span class="k">const</span> <span class="n">XftGlyphFontSpec</span> <span class="o">*</span><span class="p">,</span> <span class="n">Glyph</span><span class="p">,</span> <span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L148" data-line-number="148"></span></td>
							
							<td rel="L148" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">xdrawglyph</span><span class="p">(</span><span class="n">Glyph</span><span class="p">,</span> <span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L149" data-line-number="149"></span></td>
							
							<td rel="L149" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">xclear</span><span class="p">(</span><span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L150" data-line-number="150"></span></td>
							
							<td rel="L150" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">int</span> <span class="nf">xgeommasktogravity</span><span class="p">(</span><span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L151" data-line-number="151"></span></td>
							
							<td rel="L151" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">int</span> <span class="nf">ximopen</span><span class="p">(</span><span class="n">Display</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L152" data-line-number="152"></span></td>
							
							<td rel="L152" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">ximinstantiate</span><span class="p">(</span><span class="n">Display</span> <span class="o">*</span><span class="p">,</span> <span class="n">XPointer</span><span class="p">,</span> <span class="n">XPointer</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L153" data-line-number="153"></span></td>
							
							<td rel="L153" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">ximdestroy</span><span class="p">(</span><span class="n">XIM</span><span class="p">,</span> <span class="n">XPointer</span><span class="p">,</span> <span class="n">XPointer</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L154" data-line-number="154"></span></td>
							
							<td rel="L154" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">int</span> <span class="nf">xicdestroy</span><span class="p">(</span><span class="n">XIC</span><span class="p">,</span> <span class="n">XPointer</span><span class="p">,</span> <span class="n">XPointer</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L155" data-line-number="155"></span></td>
							
							<td rel="L155" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">xinit</span><span class="p">(</span><span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L156" data-line-number="156"></span></td>
							
							<td rel="L156" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">cresize</span><span class="p">(</span><span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L157" data-line-number="157"></span></td>
							
							<td rel="L157" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">xresize</span><span class="p">(</span><span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L158" data-line-number="158"></span></td>
							
							<td rel="L158" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">xhints</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L159" data-line-number="159"></span></td>
							
							<td rel="L159" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">int</span> <span class="nf">xloadcolor</span><span class="p">(</span><span class="kt">int</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="p">,</span> <span class="n">Color</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L160" data-line-number="160"></span></td>
							
							<td rel="L160" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">int</span> <span class="nf">xloadfont</span><span class="p">(</span><span class="n">Font</span> <span class="o">*</span><span class="p">,</span> <span class="n">FcPattern</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L161" data-line-number="161"></span></td>
							
							<td rel="L161" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">xloadfonts</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="p">,</span> <span class="kt">double</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L162" data-line-number="162"></span></td>
							
							<td rel="L162" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">int</span> <span class="nf">xloadsparefont</span><span class="p">(</span><span class="n">FcPattern</span> <span class="o">*</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L163" data-line-number="163"></span></td>
							
							<td rel="L163" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">xloadsparefonts</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L164" data-line-number="164"></span></td>
							
							<td rel="L164" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">xunloadfont</span><span class="p">(</span><span class="n">Font</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L165" data-line-number="165"></span></td>
							
							<td rel="L165" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">xunloadfonts</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L166" data-line-number="166"></span></td>
							
							<td rel="L166" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">xsetenv</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L167" data-line-number="167"></span></td>
							
							<td rel="L167" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">xseturgency</span><span class="p">(</span><span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L168" data-line-number="168"></span></td>
							
							<td rel="L168" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">int</span> <span class="nf">evcol</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L169" data-line-number="169"></span></td>
							
							<td rel="L169" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">int</span> <span class="nf">evrow</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L170" data-line-number="170"></span></td>
							
							<td rel="L170" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L171" data-line-number="171"></span></td>
							
							<td rel="L171" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">expose</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L172" data-line-number="172"></span></td>
							
							<td rel="L172" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">visibility</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L173" data-line-number="173"></span></td>
							
							<td rel="L173" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">unmap</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L174" data-line-number="174"></span></td>
							
							<td rel="L174" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">kpress</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L175" data-line-number="175"></span></td>
							
							<td rel="L175" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">cmessage</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L176" data-line-number="176"></span></td>
							
							<td rel="L176" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">resize</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L177" data-line-number="177"></span></td>
							
							<td rel="L177" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">focus</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L178" data-line-number="178"></span></td>
							
							<td rel="L178" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="n">uint</span> <span class="nf">buttonmask</span><span class="p">(</span><span class="n">uint</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L179" data-line-number="179"></span></td>
							
							<td rel="L179" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">int</span> <span class="nf">mouseaction</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">,</span> <span class="n">uint</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L180" data-line-number="180"></span></td>
							
							<td rel="L180" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">brelease</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L181" data-line-number="181"></span></td>
							
							<td rel="L181" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">bpress</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L182" data-line-number="182"></span></td>
							
							<td rel="L182" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">bmotion</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L183" data-line-number="183"></span></td>
							
							<td rel="L183" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">propnotify</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L184" data-line-number="184"></span></td>
							
							<td rel="L184" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">selnotify</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L185" data-line-number="185"></span></td>
							
							<td rel="L185" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">selclear_</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L186" data-line-number="186"></span></td>
							
							<td rel="L186" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">selrequest</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L187" data-line-number="187"></span></td>
							
							<td rel="L187" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">setsel</span><span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="p">,</span> <span class="n">Time</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L188" data-line-number="188"></span></td>
							
							<td rel="L188" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">mousesel</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L189" data-line-number="189"></span></td>
							
							<td rel="L189" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">mousereport</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L190" data-line-number="190"></span></td>
							
							<td rel="L190" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">char</span> <span class="o">*</span><span class="nf">kmap</span><span class="p">(</span><span class="n">KeySym</span><span class="p">,</span> <span class="n">uint</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L191" data-line-number="191"></span></td>
							
							<td rel="L191" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">int</span> <span class="nf">match</span><span class="p">(</span><span class="n">uint</span><span class="p">,</span> <span class="n">uint</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L192" data-line-number="192"></span></td>
							
							<td rel="L192" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L193" data-line-number="193"></span></td>
							
							<td rel="L193" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">run</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L194" data-line-number="194"></span></td>
							
							<td rel="L194" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">void</span> <span class="nf">usage</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L195" data-line-number="195"></span></td>
							
							<td rel="L195" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L196" data-line-number="196"></span></td>
							
							<td rel="L196" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="nf">void</span> <span class="p">(</span><span class="o">*</span><span class="n">handler</span><span class="p">[</span><span class="n">LASTEvent</span><span class="p">]</span><span class="p">)</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span> <span class="o">=</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L197" data-line-number="197"></span></td>
							
							<td rel="L197" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">KeyPress</span><span class="p">]</span> <span class="o">=</span> <span class="n">kpress</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L198" data-line-number="198"></span></td>
							
							<td rel="L198" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">ClientMessage</span><span class="p">]</span> <span class="o">=</span> <span class="n">cmessage</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L199" data-line-number="199"></span></td>
							
							<td rel="L199" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">ConfigureNotify</span><span class="p">]</span> <span class="o">=</span> <span class="n">resize</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L200" data-line-number="200"></span></td>
							
							<td rel="L200" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">VisibilityNotify</span><span class="p">]</span> <span class="o">=</span> <span class="n">visibility</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L201" data-line-number="201"></span></td>
							
							<td rel="L201" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">UnmapNotify</span><span class="p">]</span> <span class="o">=</span> <span class="n">unmap</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L202" data-line-number="202"></span></td>
							
							<td rel="L202" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">Expose</span><span class="p">]</span> <span class="o">=</span> <span class="n">expose</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L203" data-line-number="203"></span></td>
							
							<td rel="L203" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">FocusIn</span><span class="p">]</span> <span class="o">=</span> <span class="n">focus</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L204" data-line-number="204"></span></td>
							
							<td rel="L204" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">FocusOut</span><span class="p">]</span> <span class="o">=</span> <span class="n">focus</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L205" data-line-number="205"></span></td>
							
							<td rel="L205" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">MotionNotify</span><span class="p">]</span> <span class="o">=</span> <span class="n">bmotion</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L206" data-line-number="206"></span></td>
							
							<td rel="L206" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">ButtonPress</span><span class="p">]</span> <span class="o">=</span> <span class="n">bpress</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L207" data-line-number="207"></span></td>
							
							<td rel="L207" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">ButtonRelease</span><span class="p">]</span> <span class="o">=</span> <span class="n">brelease</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L208" data-line-number="208"></span></td>
							
							<td rel="L208" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L209" data-line-number="209"></span></td>
							
							<td rel="L209" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Uncomment if you want the selection to disappear when you select something
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L210" data-line-number="210"></span></td>
							
							<td rel="L210" class="lines-code chroma"><code class="code-inner"><span class="cm"> * different in another window.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L211" data-line-number="211"></span></td>
							
							<td rel="L211" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L212" data-line-number="212"></span></td>
							
							<td rel="L212" class="lines-code chroma"><code class="code-inner"><span class="cm">/*	[SelectionClear] = selclear_, */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L213" data-line-number="213"></span></td>
							
							<td rel="L213" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">SelectionNotify</span><span class="p">]</span> <span class="o">=</span> <span class="n">selnotify</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L214" data-line-number="214"></span></td>
							
							<td rel="L214" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L215" data-line-number="215"></span></td>
							
							<td rel="L215" class="lines-code chroma"><code class="code-inner"><span class="cm"> * PropertyNotify is only turned on when there is some INCR transfer happening
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L216" data-line-number="216"></span></td>
							
							<td rel="L216" class="lines-code chroma"><code class="code-inner"><span class="cm"> * for the selection retrieval.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L217" data-line-number="217"></span></td>
							
							<td rel="L217" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L218" data-line-number="218"></span></td>
							
							<td rel="L218" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">PropertyNotify</span><span class="p">]</span> <span class="o">=</span> <span class="n">propnotify</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L219" data-line-number="219"></span></td>
							
							<td rel="L219" class="lines-code chroma"><code class="code-inner">	<span class="p">[</span><span class="n">SelectionRequest</span><span class="p">]</span> <span class="o">=</span> <span class="n">selrequest</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L220" data-line-number="220"></span></td>
							
							<td rel="L220" class="lines-code chroma"><code class="code-inner"><span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L221" data-line-number="221"></span></td>
							
							<td rel="L221" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L222" data-line-number="222"></span></td>
							
							<td rel="L222" class="lines-code chroma"><code class="code-inner"><span class="cm">/* Globals */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L223" data-line-number="223"></span></td>
							
							<td rel="L223" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="n">DC</span> <span class="n">dc</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L224" data-line-number="224"></span></td>
							
							<td rel="L224" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="n">XWindow</span> <span class="n">xw</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L225" data-line-number="225"></span></td>
							
							<td rel="L225" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="n">XSelection</span> <span class="n">xsel</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L226" data-line-number="226"></span></td>
							
							<td rel="L226" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="n">TermWindow</span> <span class="n">win</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L227" data-line-number="227"></span></td>
							
							<td rel="L227" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L228" data-line-number="228"></span></td>
							
							<td rel="L228" class="lines-code chroma"><code class="code-inner"><span class="cm">/* Font Ring Cache */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L229" data-line-number="229"></span></td>
							
							<td rel="L229" class="lines-code chroma"><code class="code-inner"><span class="k">enum</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L230" data-line-number="230"></span></td>
							
							<td rel="L230" class="lines-code chroma"><code class="code-inner">	<span class="n">FRC_NORMAL</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L231" data-line-number="231"></span></td>
							
							<td rel="L231" class="lines-code chroma"><code class="code-inner">	<span class="n">FRC_ITALIC</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L232" data-line-number="232"></span></td>
							
							<td rel="L232" class="lines-code chroma"><code class="code-inner">	<span class="n">FRC_BOLD</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L233" data-line-number="233"></span></td>
							
							<td rel="L233" class="lines-code chroma"><code class="code-inner">	<span class="n">FRC_ITALICBOLD</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L234" data-line-number="234"></span></td>
							
							<td rel="L234" class="lines-code chroma"><code class="code-inner"><span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L235" data-line-number="235"></span></td>
							
							<td rel="L235" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L236" data-line-number="236"></span></td>
							
							<td rel="L236" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L237" data-line-number="237"></span></td>
							
							<td rel="L237" class="lines-code chroma"><code class="code-inner">	<span class="n">XftFont</span> <span class="o">*</span><span class="n">font</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L238" data-line-number="238"></span></td>
							
							<td rel="L238" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">flags</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L239" data-line-number="239"></span></td>
							
							<td rel="L239" class="lines-code chroma"><code class="code-inner">	<span class="n">Rune</span> <span class="n">unicodep</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L240" data-line-number="240"></span></td>
							
							<td rel="L240" class="lines-code chroma"><code class="code-inner"><span class="p">}</span> <span class="n">Fontcache</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L241" data-line-number="241"></span></td>
							
							<td rel="L241" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L242" data-line-number="242"></span></td>
							
							<td rel="L242" class="lines-code chroma"><code class="code-inner"><span class="cm">/* Fontcache is an array now. A new font will be appended to the array. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L243" data-line-number="243"></span></td>
							
							<td rel="L243" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="n">Fontcache</span> <span class="o">*</span><span class="n">frc</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L244" data-line-number="244"></span></td>
							
							<td rel="L244" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">int</span> <span class="n">frclen</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L245" data-line-number="245"></span></td>
							
							<td rel="L245" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">int</span> <span class="n">frccap</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L246" data-line-number="246"></span></td>
							
							<td rel="L246" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">char</span> <span class="o">*</span><span class="n">usedfont</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L247" data-line-number="247"></span></td>
							
							<td rel="L247" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">double</span> <span class="n">usedfontsize</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L248" data-line-number="248"></span></td>
							
							<td rel="L248" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">double</span> <span class="n">defaultfontsize</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L249" data-line-number="249"></span></td>
							
							<td rel="L249" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L250" data-line-number="250"></span></td>
							
							<td rel="L250" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">char</span> <span class="o">*</span><span class="n">opt_class</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L251" data-line-number="251"></span></td>
							
							<td rel="L251" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">char</span> <span class="o">*</span><span class="o">*</span><span class="n">opt_cmd</span>  <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L252" data-line-number="252"></span></td>
							
							<td rel="L252" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">char</span> <span class="o">*</span><span class="n">opt_embed</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L253" data-line-number="253"></span></td>
							
							<td rel="L253" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">char</span> <span class="o">*</span><span class="n">opt_font</span>  <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L254" data-line-number="254"></span></td>
							
							<td rel="L254" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">char</span> <span class="o">*</span><span class="n">opt_io</span>    <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L255" data-line-number="255"></span></td>
							
							<td rel="L255" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">char</span> <span class="o">*</span><span class="n">opt_line</span>  <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L256" data-line-number="256"></span></td>
							
							<td rel="L256" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">char</span> <span class="o">*</span><span class="n">opt_name</span>  <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L257" data-line-number="257"></span></td>
							
							<td rel="L257" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="kt">char</span> <span class="o">*</span><span class="n">opt_title</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L258" data-line-number="258"></span></td>
							
							<td rel="L258" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L259" data-line-number="259"></span></td>
							
							<td rel="L259" class="lines-code chroma"><code class="code-inner"><span class="k">static</span> <span class="n">uint</span> <span class="n">buttons</span><span class="p">;</span> <span class="cm">/* bit field of pressed buttons */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L260" data-line-number="260"></span></td>
							
							<td rel="L260" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L261" data-line-number="261"></span></td>
							
							<td rel="L261" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L262" data-line-number="262"></span></td>
							
							<td rel="L262" class="lines-code chroma"><code class="code-inner"><span class="nf">clipcopy</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="n">dummy</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L263" data-line-number="263"></span></td>
							
							<td rel="L263" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L264" data-line-number="264"></span></td>
							
							<td rel="L264" class="lines-code chroma"><code class="code-inner">	<span class="n">Atom</span> <span class="n">clipboard</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L265" data-line-number="265"></span></td>
							
							<td rel="L265" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L266" data-line-number="266"></span></td>
							
							<td rel="L266" class="lines-code chroma"><code class="code-inner">	<span class="nf">free</span><span class="p">(</span><span class="n">xsel</span><span class="p">.</span><span class="n">clipboard</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L267" data-line-number="267"></span></td>
							
							<td rel="L267" class="lines-code chroma"><code class="code-inner">	<span class="n">xsel</span><span class="p">.</span><span class="n">clipboard</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L268" data-line-number="268"></span></td>
							
							<td rel="L268" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L269" data-line-number="269"></span></td>
							
							<td rel="L269" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">xsel</span><span class="p">.</span><span class="n">primary</span> <span class="o">!</span><span class="o">=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L270" data-line-number="270"></span></td>
							
							<td rel="L270" class="lines-code chroma"><code class="code-inner">		<span class="n">xsel</span><span class="p">.</span><span class="n">clipboard</span> <span class="o">=</span> <span class="nf">xstrdup</span><span class="p">(</span><span class="n">xsel</span><span class="p">.</span><span class="n">primary</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L271" data-line-number="271"></span></td>
							
							<td rel="L271" class="lines-code chroma"><code class="code-inner">		<span class="n">clipboard</span> <span class="o">=</span> <span class="nf">XInternAtom</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">CLIPBOARD</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L272" data-line-number="272"></span></td>
							
							<td rel="L272" class="lines-code chroma"><code class="code-inner">		<span class="nf">XSetSelectionOwner</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">clipboard</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">CurrentTime</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L273" data-line-number="273"></span></td>
							
							<td rel="L273" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L274" data-line-number="274"></span></td>
							
							<td rel="L274" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L275" data-line-number="275"></span></td>
							
							<td rel="L275" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L276" data-line-number="276"></span></td>
							
							<td rel="L276" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L277" data-line-number="277"></span></td>
							
							<td rel="L277" class="lines-code chroma"><code class="code-inner"><span class="nf">clippaste</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="n">dummy</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L278" data-line-number="278"></span></td>
							
							<td rel="L278" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L279" data-line-number="279"></span></td>
							
							<td rel="L279" class="lines-code chroma"><code class="code-inner">	<span class="n">Atom</span> <span class="n">clipboard</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L280" data-line-number="280"></span></td>
							
							<td rel="L280" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L281" data-line-number="281"></span></td>
							
							<td rel="L281" class="lines-code chroma"><code class="code-inner">	<span class="n">clipboard</span> <span class="o">=</span> <span class="nf">XInternAtom</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">CLIPBOARD</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L282" data-line-number="282"></span></td>
							
							<td rel="L282" class="lines-code chroma"><code class="code-inner">	<span class="nf">XConvertSelection</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">clipboard</span><span class="p">,</span> <span class="n">xsel</span><span class="p">.</span><span class="n">xtarget</span><span class="p">,</span> <span class="n">clipboard</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L283" data-line-number="283"></span></td>
							
							<td rel="L283" class="lines-code chroma"><code class="code-inner">			<span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">CurrentTime</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L284" data-line-number="284"></span></td>
							
							<td rel="L284" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L285" data-line-number="285"></span></td>
							
							<td rel="L285" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L286" data-line-number="286"></span></td>
							
							<td rel="L286" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L287" data-line-number="287"></span></td>
							
							<td rel="L287" class="lines-code chroma"><code class="code-inner"><span class="nf">selpaste</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="n">dummy</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L288" data-line-number="288"></span></td>
							
							<td rel="L288" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L289" data-line-number="289"></span></td>
							
							<td rel="L289" class="lines-code chroma"><code class="code-inner">	<span class="nf">XConvertSelection</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">XA_PRIMARY</span><span class="p">,</span> <span class="n">xsel</span><span class="p">.</span><span class="n">xtarget</span><span class="p">,</span> <span class="n">XA_PRIMARY</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L290" data-line-number="290"></span></td>
							
							<td rel="L290" class="lines-code chroma"><code class="code-inner">			<span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">CurrentTime</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L291" data-line-number="291"></span></td>
							
							<td rel="L291" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L292" data-line-number="292"></span></td>
							
							<td rel="L292" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L293" data-line-number="293"></span></td>
							
							<td rel="L293" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L294" data-line-number="294"></span></td>
							
							<td rel="L294" class="lines-code chroma"><code class="code-inner"><span class="nf">numlock</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="n">dummy</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L295" data-line-number="295"></span></td>
							
							<td rel="L295" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L296" data-line-number="296"></span></td>
							
							<td rel="L296" class="lines-code chroma"><code class="code-inner">	<span class="n">win</span><span class="p">.</span><span class="n">mode</span> <span class="o">^</span><span class="o">=</span> <span class="n">MODE_NUMLOCK</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L297" data-line-number="297"></span></td>
							
							<td rel="L297" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L298" data-line-number="298"></span></td>
							
							<td rel="L298" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L299" data-line-number="299"></span></td>
							
							<td rel="L299" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L300" data-line-number="300"></span></td>
							
							<td rel="L300" class="lines-code chroma"><code class="code-inner"><span class="nf">zoom</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="n">arg</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L301" data-line-number="301"></span></td>
							
							<td rel="L301" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L302" data-line-number="302"></span></td>
							
							<td rel="L302" class="lines-code chroma"><code class="code-inner">	<span class="n">Arg</span> <span class="n">larg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L303" data-line-number="303"></span></td>
							
							<td rel="L303" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L304" data-line-number="304"></span></td>
							
							<td rel="L304" class="lines-code chroma"><code class="code-inner">	<span class="n">larg</span><span class="p">.</span><span class="n">f</span> <span class="o">=</span> <span class="n">usedfontsize</span> <span class="o">+</span> <span class="n">arg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">f</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L305" data-line-number="305"></span></td>
							
							<td rel="L305" class="lines-code chroma"><code class="code-inner">	<span class="nf">zoomabs</span><span class="p">(</span><span class="o">&amp;</span><span class="n">larg</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L306" data-line-number="306"></span></td>
							
							<td rel="L306" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L307" data-line-number="307"></span></td>
							
							<td rel="L307" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L308" data-line-number="308"></span></td>
							
							<td rel="L308" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L309" data-line-number="309"></span></td>
							
							<td rel="L309" class="lines-code chroma"><code class="code-inner"><span class="nf">zoomabs</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="n">arg</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L310" data-line-number="310"></span></td>
							
							<td rel="L310" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L311" data-line-number="311"></span></td>
							
							<td rel="L311" class="lines-code chroma"><code class="code-inner">	<span class="nf">xunloadfonts</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L312" data-line-number="312"></span></td>
							
							<td rel="L312" class="lines-code chroma"><code class="code-inner">	<span class="nf">xloadfonts</span><span class="p">(</span><span class="n">usedfont</span><span class="p">,</span> <span class="n">arg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">f</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L313" data-line-number="313"></span></td>
							
							<td rel="L313" class="lines-code chroma"><code class="code-inner">	<span class="nf">xloadsparefonts</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L314" data-line-number="314"></span></td>
							
							<td rel="L314" class="lines-code chroma"><code class="code-inner">	<span class="nf">cresize</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L315" data-line-number="315"></span></td>
							
							<td rel="L315" class="lines-code chroma"><code class="code-inner">	<span class="nf">redraw</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L316" data-line-number="316"></span></td>
							
							<td rel="L316" class="lines-code chroma"><code class="code-inner">	<span class="nf">xhints</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L317" data-line-number="317"></span></td>
							
							<td rel="L317" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L318" data-line-number="318"></span></td>
							
							<td rel="L318" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L319" data-line-number="319"></span></td>
							
							<td rel="L319" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L320" data-line-number="320"></span></td>
							
							<td rel="L320" class="lines-code chroma"><code class="code-inner"><span class="nf">zoomreset</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="n">arg</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L321" data-line-number="321"></span></td>
							
							<td rel="L321" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L322" data-line-number="322"></span></td>
							
							<td rel="L322" class="lines-code chroma"><code class="code-inner">	<span class="n">Arg</span> <span class="n">larg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L323" data-line-number="323"></span></td>
							
							<td rel="L323" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L324" data-line-number="324"></span></td>
							
							<td rel="L324" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">defaultfontsize</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L325" data-line-number="325"></span></td>
							
							<td rel="L325" class="lines-code chroma"><code class="code-inner">		<span class="n">larg</span><span class="p">.</span><span class="n">f</span> <span class="o">=</span> <span class="n">defaultfontsize</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L326" data-line-number="326"></span></td>
							
							<td rel="L326" class="lines-code chroma"><code class="code-inner">		<span class="nf">zoomabs</span><span class="p">(</span><span class="o">&amp;</span><span class="n">larg</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L327" data-line-number="327"></span></td>
							
							<td rel="L327" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L328" data-line-number="328"></span></td>
							
							<td rel="L328" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L329" data-line-number="329"></span></td>
							
							<td rel="L329" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L330" data-line-number="330"></span></td>
							
							<td rel="L330" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L331" data-line-number="331"></span></td>
							
							<td rel="L331" class="lines-code chroma"><code class="code-inner"><span class="nf">ttysend</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="n">arg</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L332" data-line-number="332"></span></td>
							
							<td rel="L332" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L333" data-line-number="333"></span></td>
							
							<td rel="L333" class="lines-code chroma"><code class="code-inner">	<span class="nf">ttywrite</span><span class="p">(</span><span class="n">arg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">s</span><span class="p">,</span> <span class="nf">strlen</span><span class="p">(</span><span class="n">arg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">s</span><span class="p">)</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L334" data-line-number="334"></span></td>
							
							<td rel="L334" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L335" data-line-number="335"></span></td>
							
							<td rel="L335" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L336" data-line-number="336"></span></td>
							
							<td rel="L336" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L337" data-line-number="337"></span></td>
							
							<td rel="L337" class="lines-code chroma"><code class="code-inner"><span class="nf">evcol</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">e</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L338" data-line-number="338"></span></td>
							
							<td rel="L338" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L339" data-line-number="339"></span></td>
							
							<td rel="L339" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">x</span> <span class="o">=</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xbutton</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">win</span><span class="p">.</span><span class="n">hborderpx</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L340" data-line-number="340"></span></td>
							
							<td rel="L340" class="lines-code chroma"><code class="code-inner">	<span class="nf">LIMIT</span><span class="p">(</span><span class="n">x</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">tw</span> <span class="o">-</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L341" data-line-number="341"></span></td>
							
							<td rel="L341" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="n">x</span> <span class="o">/</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L342" data-line-number="342"></span></td>
							
							<td rel="L342" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L343" data-line-number="343"></span></td>
							
							<td rel="L343" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L344" data-line-number="344"></span></td>
							
							<td rel="L344" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L345" data-line-number="345"></span></td>
							
							<td rel="L345" class="lines-code chroma"><code class="code-inner"><span class="nf">evrow</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">e</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L346" data-line-number="346"></span></td>
							
							<td rel="L346" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L347" data-line-number="347"></span></td>
							
							<td rel="L347" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">y</span> <span class="o">=</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xbutton</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L348" data-line-number="348"></span></td>
							
							<td rel="L348" class="lines-code chroma"><code class="code-inner">	<span class="nf">LIMIT</span><span class="p">(</span><span class="n">y</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">th</span> <span class="o">-</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L349" data-line-number="349"></span></td>
							
							<td rel="L349" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="n">y</span> <span class="o">/</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L350" data-line-number="350"></span></td>
							
							<td rel="L350" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L351" data-line-number="351"></span></td>
							
							<td rel="L351" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L352" data-line-number="352"></span></td>
							
							<td rel="L352" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L353" data-line-number="353"></span></td>
							
							<td rel="L353" class="lines-code chroma"><code class="code-inner"><span class="nf">mousesel</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">e</span><span class="p">,</span> <span class="kt">int</span> <span class="n">done</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L354" data-line-number="354"></span></td>
							
							<td rel="L354" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L355" data-line-number="355"></span></td>
							
							<td rel="L355" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">type</span><span class="p">,</span> <span class="n">seltype</span> <span class="o">=</span> <span class="n">SEL_REGULAR</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L356" data-line-number="356"></span></td>
							
							<td rel="L356" class="lines-code chroma"><code class="code-inner">	<span class="n">uint</span> <span class="n">state</span> <span class="o">=</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xbutton</span><span class="p">.</span><span class="n">state</span> <span class="o">&amp;</span> <span class="o">~</span><span class="p">(</span><span class="n">Button1Mask</span> <span class="o">|</span> <span class="n">forcemousemod</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L357" data-line-number="357"></span></td>
							
							<td rel="L357" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L358" data-line-number="358"></span></td>
							
							<td rel="L358" class="lines-code chroma"><code class="code-inner">	<span class="k">for</span> <span class="p">(</span><span class="n">type</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span> <span class="n">type</span> <span class="o">&lt;</span> <span class="nf">LEN</span><span class="p">(</span><span class="n">selmasks</span><span class="p">)</span><span class="p">;</span> <span class="o">+</span><span class="o">+</span><span class="n">type</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L359" data-line-number="359"></span></td>
							
							<td rel="L359" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">match</span><span class="p">(</span><span class="n">selmasks</span><span class="p">[</span><span class="n">type</span><span class="p">]</span><span class="p">,</span> <span class="n">state</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L360" data-line-number="360"></span></td>
							
							<td rel="L360" class="lines-code chroma"><code class="code-inner">			<span class="n">seltype</span> <span class="o">=</span> <span class="n">type</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L361" data-line-number="361"></span></td>
							
							<td rel="L361" class="lines-code chroma"><code class="code-inner">			<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L362" data-line-number="362"></span></td>
							
							<td rel="L362" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L363" data-line-number="363"></span></td>
							
							<td rel="L363" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L364" data-line-number="364"></span></td>
							
							<td rel="L364" class="lines-code chroma"><code class="code-inner">	<span class="nf">selextend</span><span class="p">(</span><span class="nf">evcol</span><span class="p">(</span><span class="n">e</span><span class="p">)</span><span class="p">,</span> <span class="nf">evrow</span><span class="p">(</span><span class="n">e</span><span class="p">)</span><span class="p">,</span> <span class="n">seltype</span><span class="p">,</span> <span class="n">done</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L365" data-line-number="365"></span></td>
							
							<td rel="L365" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">done</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L366" data-line-number="366"></span></td>
							
							<td rel="L366" class="lines-code chroma"><code class="code-inner">		<span class="nf">setsel</span><span class="p">(</span><span class="nf">getsel</span><span class="p">(</span><span class="p">)</span><span class="p">,</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xbutton</span><span class="p">.</span><span class="n">time</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L367" data-line-number="367"></span></td>
							
							<td rel="L367" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L368" data-line-number="368"></span></td>
							
							<td rel="L368" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L369" data-line-number="369"></span></td>
							
							<td rel="L369" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L370" data-line-number="370"></span></td>
							
							<td rel="L370" class="lines-code chroma"><code class="code-inner"><span class="nf">mousereport</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">e</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L371" data-line-number="371"></span></td>
							
							<td rel="L371" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L372" data-line-number="372"></span></td>
							
							<td rel="L372" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">len</span><span class="p">,</span> <span class="n">btn</span><span class="p">,</span> <span class="n">code</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L373" data-line-number="373"></span></td>
							
							<td rel="L373" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">x</span> <span class="o">=</span> <span class="nf">evcol</span><span class="p">(</span><span class="n">e</span><span class="p">)</span><span class="p">,</span> <span class="n">y</span> <span class="o">=</span> <span class="nf">evrow</span><span class="p">(</span><span class="n">e</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L374" data-line-number="374"></span></td>
							
							<td rel="L374" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">state</span> <span class="o">=</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xbutton</span><span class="p">.</span><span class="n">state</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L375" data-line-number="375"></span></td>
							
							<td rel="L375" class="lines-code chroma"><code class="code-inner">	<span class="kt">char</span> <span class="n">buf</span><span class="p">[</span><span class="mi">40</span><span class="p">]</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L376" data-line-number="376"></span></td>
							
							<td rel="L376" class="lines-code chroma"><code class="code-inner">	<span class="k">static</span> <span class="kt">int</span> <span class="n">ox</span><span class="p">,</span> <span class="n">oy</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L377" data-line-number="377"></span></td>
							
							<td rel="L377" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L378" data-line-number="378"></span></td>
							
							<td rel="L378" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">type</span> <span class="o">=</span><span class="o">=</span> <span class="n">MotionNotify</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L379" data-line-number="379"></span></td>
							
							<td rel="L379" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">x</span> <span class="o">=</span><span class="o">=</span> <span class="n">ox</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">y</span> <span class="o">=</span><span class="o">=</span> <span class="n">oy</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L380" data-line-number="380"></span></td>
							
							<td rel="L380" class="lines-code chroma"><code class="code-inner">			<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L381" data-line-number="381"></span></td>
							
							<td rel="L381" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_MOUSEMOTION</span><span class="p">)</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="o">!</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_MOUSEMANY</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L382" data-line-number="382"></span></td>
							
							<td rel="L382" class="lines-code chroma"><code class="code-inner">			<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L383" data-line-number="383"></span></td>
							
							<td rel="L383" class="lines-code chroma"><code class="code-inner">		<span class="cm">/* MODE_MOUSEMOTION: no reporting if no button is pressed */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L384" data-line-number="384"></span></td>
							
							<td rel="L384" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_MOUSEMOTION</span><span class="p">)</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">buttons</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L385" data-line-number="385"></span></td>
							
							<td rel="L385" class="lines-code chroma"><code class="code-inner">			<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L386" data-line-number="386"></span></td>
							
							<td rel="L386" class="lines-code chroma"><code class="code-inner">		<span class="cm">/* Set btn to lowest-numbered pressed button, or 12 if no
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L387" data-line-number="387"></span></td>
							
							<td rel="L387" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * buttons are pressed. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L388" data-line-number="388"></span></td>
							
							<td rel="L388" class="lines-code chroma"><code class="code-inner">		<span class="k">for</span> <span class="p">(</span><span class="n">btn</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span> <span class="n">btn</span> <span class="o">&lt;</span><span class="o">=</span> <span class="mi">11</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="o">!</span><span class="p">(</span><span class="n">buttons</span> <span class="o">&amp;</span> <span class="p">(</span><span class="mi">1</span><span class="o">&lt;</span><span class="o">&lt;</span><span class="p">(</span><span class="n">btn</span><span class="o">-</span><span class="mi">1</span><span class="p">)</span><span class="p">)</span><span class="p">)</span><span class="p">;</span> <span class="n">btn</span><span class="o">+</span><span class="o">+</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L389" data-line-number="389"></span></td>
							
							<td rel="L389" class="lines-code chroma"><code class="code-inner">			<span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L390" data-line-number="390"></span></td>
							
							<td rel="L390" class="lines-code chroma"><code class="code-inner">		<span class="n">code</span> <span class="o">=</span> <span class="mi">32</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L391" data-line-number="391"></span></td>
							
							<td rel="L391" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L392" data-line-number="392"></span></td>
							
							<td rel="L392" class="lines-code chroma"><code class="code-inner">		<span class="n">btn</span> <span class="o">=</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xbutton</span><span class="p">.</span><span class="n">button</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L393" data-line-number="393"></span></td>
							
							<td rel="L393" class="lines-code chroma"><code class="code-inner">		<span class="cm">/* Only buttons 1 through 11 can be encoded */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L394" data-line-number="394"></span></td>
							
							<td rel="L394" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">btn</span> <span class="o">&lt;</span> <span class="mi">1</span> <span class="o">|</span><span class="o">|</span> <span class="n">btn</span> <span class="o">&gt;</span> <span class="mi">11</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L395" data-line-number="395"></span></td>
							
							<td rel="L395" class="lines-code chroma"><code class="code-inner">			<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L396" data-line-number="396"></span></td>
							
							<td rel="L396" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">type</span> <span class="o">=</span><span class="o">=</span> <span class="n">ButtonRelease</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L397" data-line-number="397"></span></td>
							
							<td rel="L397" class="lines-code chroma"><code class="code-inner">			<span class="cm">/* MODE_MOUSEX10: no button release reporting */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L398" data-line-number="398"></span></td>
							
							<td rel="L398" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_MOUSEX10</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L399" data-line-number="399"></span></td>
							
							<td rel="L399" class="lines-code chroma"><code class="code-inner">				<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L400" data-line-number="400"></span></td>
							
							<td rel="L400" class="lines-code chroma"><code class="code-inner">			<span class="cm">/* Don&#39;t send release events for the scroll wheel */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L401" data-line-number="401"></span></td>
							
							<td rel="L401" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="n">btn</span> <span class="o">=</span><span class="o">=</span> <span class="mi">4</span> <span class="o">|</span><span class="o">|</span> <span class="n">btn</span> <span class="o">=</span><span class="o">=</span> <span class="mi">5</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L402" data-line-number="402"></span></td>
							
							<td rel="L402" class="lines-code chroma"><code class="code-inner">				<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L403" data-line-number="403"></span></td>
							
							<td rel="L403" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L404" data-line-number="404"></span></td>
							
							<td rel="L404" class="lines-code chroma"><code class="code-inner">		<span class="n">code</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L405" data-line-number="405"></span></td>
							
							<td rel="L405" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L406" data-line-number="406"></span></td>
							
							<td rel="L406" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L407" data-line-number="407"></span></td>
							
							<td rel="L407" class="lines-code chroma"><code class="code-inner">	<span class="n">ox</span> <span class="o">=</span> <span class="n">x</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L408" data-line-number="408"></span></td>
							
							<td rel="L408" class="lines-code chroma"><code class="code-inner">	<span class="n">oy</span> <span class="o">=</span> <span class="n">y</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L409" data-line-number="409"></span></td>
							
							<td rel="L409" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L410" data-line-number="410"></span></td>
							
							<td rel="L410" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Encode btn into code. If no button is pressed for a motion event in
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L411" data-line-number="411"></span></td>
							
							<td rel="L411" class="lines-code chroma"><code class="code-inner"><span class="cm">	 * MODE_MOUSEMANY, then encode it as a release. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L412" data-line-number="412"></span></td>
							
							<td rel="L412" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="p">(</span><span class="o">!</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_MOUSESGR</span><span class="p">)</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">type</span> <span class="o">=</span><span class="o">=</span> <span class="n">ButtonRelease</span><span class="p">)</span> <span class="o">|</span><span class="o">|</span> <span class="n">btn</span> <span class="o">=</span><span class="o">=</span> <span class="mi">12</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L413" data-line-number="413"></span></td>
							
							<td rel="L413" class="lines-code chroma"><code class="code-inner">		<span class="n">code</span> <span class="o">+</span><span class="o">=</span> <span class="mi">3</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L414" data-line-number="414"></span></td>
							
							<td rel="L414" class="lines-code chroma"><code class="code-inner">	<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">btn</span> <span class="o">&gt;</span><span class="o">=</span> <span class="mi">8</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L415" data-line-number="415"></span></td>
							
							<td rel="L415" class="lines-code chroma"><code class="code-inner">		<span class="n">code</span> <span class="o">+</span><span class="o">=</span> <span class="mi">128</span> <span class="o">+</span> <span class="n">btn</span> <span class="o">-</span> <span class="mi">8</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L416" data-line-number="416"></span></td>
							
							<td rel="L416" class="lines-code chroma"><code class="code-inner">	<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">btn</span> <span class="o">&gt;</span><span class="o">=</span> <span class="mi">4</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L417" data-line-number="417"></span></td>
							
							<td rel="L417" class="lines-code chroma"><code class="code-inner">		<span class="n">code</span> <span class="o">+</span><span class="o">=</span> <span class="mi">64</span> <span class="o">+</span> <span class="n">btn</span> <span class="o">-</span> <span class="mi">4</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L418" data-line-number="418"></span></td>
							
							<td rel="L418" class="lines-code chroma"><code class="code-inner">	<span class="k">else</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L419" data-line-number="419"></span></td>
							
							<td rel="L419" class="lines-code chroma"><code class="code-inner">		<span class="n">code</span> <span class="o">+</span><span class="o">=</span> <span class="n">btn</span> <span class="o">-</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L420" data-line-number="420"></span></td>
							
							<td rel="L420" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L421" data-line-number="421"></span></td>
							
							<td rel="L421" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_MOUSEX10</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L422" data-line-number="422"></span></td>
							
							<td rel="L422" class="lines-code chroma"><code class="code-inner">		<span class="n">code</span> <span class="o">+</span><span class="o">=</span> <span class="p">(</span><span class="p">(</span><span class="n">state</span> <span class="o">&amp;</span> <span class="n">ShiftMask</span>  <span class="p">)</span> <span class="o">?</span>  <span class="mi">4</span> <span class="o">:</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L423" data-line-number="423"></span></td>
							
							<td rel="L423" class="lines-code chroma"><code class="code-inner">		      <span class="o">+</span> <span class="p">(</span><span class="p">(</span><span class="n">state</span> <span class="o">&amp;</span> <span class="n">Mod1Mask</span>   <span class="p">)</span> <span class="o">?</span>  <span class="mi">8</span> <span class="o">:</span> <span class="mi">0</span><span class="p">)</span> <span class="cm">/* meta key: alt */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L424" data-line-number="424"></span></td>
							
							<td rel="L424" class="lines-code chroma"><code class="code-inner">		      <span class="o">+</span> <span class="p">(</span><span class="p">(</span><span class="n">state</span> <span class="o">&amp;</span> <span class="n">ControlMask</span><span class="p">)</span> <span class="o">?</span> <span class="mi">16</span> <span class="o">:</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L425" data-line-number="425"></span></td>
							
							<td rel="L425" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L426" data-line-number="426"></span></td>
							
							<td rel="L426" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L427" data-line-number="427"></span></td>
							
							<td rel="L427" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_MOUSESGR</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L428" data-line-number="428"></span></td>
							
							<td rel="L428" class="lines-code chroma"><code class="code-inner">		<span class="n">len</span> <span class="o">=</span> <span class="nf">snprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">buf</span><span class="p">)</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[&lt;%d;%d;%d%c</span><span class="s">&#34;</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L429" data-line-number="429"></span></td>
							
							<td rel="L429" class="lines-code chroma"><code class="code-inner">				<span class="n">code</span><span class="p">,</span> <span class="n">x</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span> <span class="n">y</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L430" data-line-number="430"></span></td>
							
							<td rel="L430" class="lines-code chroma"><code class="code-inner">				<span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">type</span> <span class="o">=</span><span class="o">=</span> <span class="n">ButtonRelease</span> <span class="o">?</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">m</span><span class="sc">&#39;</span> <span class="o">:</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">M</span><span class="sc">&#39;</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L431" data-line-number="431"></span></td>
							
							<td rel="L431" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">x</span> <span class="o">&lt;</span> <span class="mi">223</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">y</span> <span class="o">&lt;</span> <span class="mi">223</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L432" data-line-number="432"></span></td>
							
							<td rel="L432" class="lines-code chroma"><code class="code-inner">		<span class="n">len</span> <span class="o">=</span> <span class="nf">snprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">buf</span><span class="p">)</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[M%c%c%c</span><span class="s">&#34;</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L433" data-line-number="433"></span></td>
							
							<td rel="L433" class="lines-code chroma"><code class="code-inner">				<span class="mi">32</span><span class="o">+</span><span class="n">code</span><span class="p">,</span> <span class="mi">32</span><span class="o">+</span><span class="n">x</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span> <span class="mi">32</span><span class="o">+</span><span class="n">y</span><span class="o">+</span><span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L434" data-line-number="434"></span></td>
							
							<td rel="L434" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L435" data-line-number="435"></span></td>
							
							<td rel="L435" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L436" data-line-number="436"></span></td>
							
							<td rel="L436" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L437" data-line-number="437"></span></td>
							
							<td rel="L437" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L438" data-line-number="438"></span></td>
							
							<td rel="L438" class="lines-code chroma"><code class="code-inner">	<span class="nf">ttywrite</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="n">len</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L439" data-line-number="439"></span></td>
							
							<td rel="L439" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L440" data-line-number="440"></span></td>
							
							<td rel="L440" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L441" data-line-number="441"></span></td>
							
							<td rel="L441" class="lines-code chroma"><code class="code-inner"><span class="n">uint</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L442" data-line-number="442"></span></td>
							
							<td rel="L442" class="lines-code chroma"><code class="code-inner"><span class="nf">buttonmask</span><span class="p">(</span><span class="n">uint</span> <span class="n">button</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L443" data-line-number="443"></span></td>
							
							<td rel="L443" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L444" data-line-number="444"></span></td>
							
							<td rel="L444" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="n">button</span> <span class="o">=</span><span class="o">=</span> <span class="n">Button1</span> <span class="o">?</span> <span class="nl">Button1Mask</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L445" data-line-number="445"></span></td>
							
							<td rel="L445" class="lines-code chroma"><code class="code-inner">	     <span class="p">:</span> <span class="n">button</span> <span class="o">=</span><span class="o">=</span> <span class="n">Button2</span> <span class="o">?</span> <span class="nl">Button2Mask</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L446" data-line-number="446"></span></td>
							
							<td rel="L446" class="lines-code chroma"><code class="code-inner">	     <span class="p">:</span> <span class="n">button</span> <span class="o">=</span><span class="o">=</span> <span class="n">Button3</span> <span class="o">?</span> <span class="nl">Button3Mask</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L447" data-line-number="447"></span></td>
							
							<td rel="L447" class="lines-code chroma"><code class="code-inner">	     <span class="p">:</span> <span class="n">button</span> <span class="o">=</span><span class="o">=</span> <span class="n">Button4</span> <span class="o">?</span> <span class="nl">Button4Mask</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L448" data-line-number="448"></span></td>
							
							<td rel="L448" class="lines-code chroma"><code class="code-inner">	     <span class="p">:</span> <span class="n">button</span> <span class="o">=</span><span class="o">=</span> <span class="n">Button5</span> <span class="o">?</span> <span class="nl">Button5Mask</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L449" data-line-number="449"></span></td>
							
							<td rel="L449" class="lines-code chroma"><code class="code-inner">	     <span class="p">:</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L450" data-line-number="450"></span></td>
							
							<td rel="L450" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L451" data-line-number="451"></span></td>
							
							<td rel="L451" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L452" data-line-number="452"></span></td>
							
							<td rel="L452" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L453" data-line-number="453"></span></td>
							
							<td rel="L453" class="lines-code chroma"><code class="code-inner"><span class="nf">mouseaction</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">e</span><span class="p">,</span> <span class="n">uint</span> <span class="n">release</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L454" data-line-number="454"></span></td>
							
							<td rel="L454" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L455" data-line-number="455"></span></td>
							
							<td rel="L455" class="lines-code chroma"><code class="code-inner">	<span class="n">MouseShortcut</span> <span class="o">*</span><span class="n">ms</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L456" data-line-number="456"></span></td>
							
							<td rel="L456" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L457" data-line-number="457"></span></td>
							
							<td rel="L457" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* ignore Button&lt;N&gt;mask for Button&lt;N&gt; - it&#39;s set on release */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L458" data-line-number="458"></span></td>
							
							<td rel="L458" class="lines-code chroma"><code class="code-inner">	<span class="n">uint</span> <span class="n">state</span> <span class="o">=</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xbutton</span><span class="p">.</span><span class="n">state</span> <span class="o">&amp;</span> <span class="o">~</span><span class="nf">buttonmask</span><span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xbutton</span><span class="p">.</span><span class="n">button</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L459" data-line-number="459"></span></td>
							
							<td rel="L459" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L460" data-line-number="460"></span></td>
							
							<td rel="L460" class="lines-code chroma"><code class="code-inner">	<span class="k">for</span> <span class="p">(</span><span class="n">ms</span> <span class="o">=</span> <span class="n">mshortcuts</span><span class="p">;</span> <span class="n">ms</span> <span class="o">&lt;</span> <span class="n">mshortcuts</span> <span class="o">+</span> <span class="nf">LEN</span><span class="p">(</span><span class="n">mshortcuts</span><span class="p">)</span><span class="p">;</span> <span class="n">ms</span><span class="o">+</span><span class="o">+</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L461" data-line-number="461"></span></td>
							
							<td rel="L461" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">ms</span><span class="o">-</span><span class="o">&gt;</span><span class="n">release</span> <span class="o">=</span><span class="o">=</span> <span class="n">release</span> <span class="o">&amp;</span><span class="o">&amp;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L462" data-line-number="462"></span></td>
							
							<td rel="L462" class="lines-code chroma"><code class="code-inner">		    <span class="n">ms</span><span class="o">-</span><span class="o">&gt;</span><span class="n">button</span> <span class="o">=</span><span class="o">=</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xbutton</span><span class="p">.</span><span class="n">button</span> <span class="o">&amp;</span><span class="o">&amp;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L463" data-line-number="463"></span></td>
							
							<td rel="L463" class="lines-code chroma"><code class="code-inner">		    <span class="p">(</span><span class="nf">match</span><span class="p">(</span><span class="n">ms</span><span class="o">-</span><span class="o">&gt;</span><span class="n">mod</span><span class="p">,</span> <span class="n">state</span><span class="p">)</span> <span class="o">|</span><span class="o">|</span>  <span class="cm">/* exact or forced */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L464" data-line-number="464"></span></td>
							
							<td rel="L464" class="lines-code chroma"><code class="code-inner">		     <span class="nf">match</span><span class="p">(</span><span class="n">ms</span><span class="o">-</span><span class="o">&gt;</span><span class="n">mod</span><span class="p">,</span> <span class="n">state</span> <span class="o">&amp;</span> <span class="o">~</span><span class="n">forcemousemod</span><span class="p">)</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L465" data-line-number="465"></span></td>
							
							<td rel="L465" class="lines-code chroma"><code class="code-inner">			<span class="n">ms</span><span class="o">-</span><span class="o">&gt;</span><span class="nf">func</span><span class="p">(</span><span class="o">&amp;</span><span class="p">(</span><span class="n">ms</span><span class="o">-</span><span class="o">&gt;</span><span class="n">arg</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L466" data-line-number="466"></span></td>
							
							<td rel="L466" class="lines-code chroma"><code class="code-inner">			<span class="k">return</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L467" data-line-number="467"></span></td>
							
							<td rel="L467" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L468" data-line-number="468"></span></td>
							
							<td rel="L468" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L469" data-line-number="469"></span></td>
							
							<td rel="L469" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L470" data-line-number="470"></span></td>
							
							<td rel="L470" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L471" data-line-number="471"></span></td>
							
							<td rel="L471" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L472" data-line-number="472"></span></td>
							
							<td rel="L472" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L473" data-line-number="473"></span></td>
							
							<td rel="L473" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L474" data-line-number="474"></span></td>
							
							<td rel="L474" class="lines-code chroma"><code class="code-inner"><span class="nf">bpress</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">e</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L475" data-line-number="475"></span></td>
							
							<td rel="L475" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L476" data-line-number="476"></span></td>
							
							<td rel="L476" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">btn</span> <span class="o">=</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xbutton</span><span class="p">.</span><span class="n">button</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L477" data-line-number="477"></span></td>
							
							<td rel="L477" class="lines-code chroma"><code class="code-inner">	<span class="k">struct</span> <span class="n">timespec</span> <span class="n">now</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L478" data-line-number="478"></span></td>
							
							<td rel="L478" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">snap</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L479" data-line-number="479"></span></td>
							
							<td rel="L479" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L480" data-line-number="480"></span></td>
							
							<td rel="L480" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="mi">1</span> <span class="o">&lt;</span><span class="o">=</span> <span class="n">btn</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">btn</span> <span class="o">&lt;</span><span class="o">=</span> <span class="mi">11</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L481" data-line-number="481"></span></td>
							
							<td rel="L481" class="lines-code chroma"><code class="code-inner">		<span class="n">buttons</span> <span class="o">|</span><span class="o">=</span> <span class="mi">1</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="p">(</span><span class="n">btn</span><span class="o">-</span><span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L482" data-line-number="482"></span></td>
							
							<td rel="L482" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L483" data-line-number="483"></span></td>
							
							<td rel="L483" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_MOUSE</span><span class="p">)</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="o">!</span><span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xbutton</span><span class="p">.</span><span class="n">state</span> <span class="o">&amp;</span> <span class="n">forcemousemod</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L484" data-line-number="484"></span></td>
							
							<td rel="L484" class="lines-code chroma"><code class="code-inner">		<span class="nf">mousereport</span><span class="p">(</span><span class="n">e</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L485" data-line-number="485"></span></td>
							
							<td rel="L485" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L486" data-line-number="486"></span></td>
							
							<td rel="L486" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L487" data-line-number="487"></span></td>
							
							<td rel="L487" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L488" data-line-number="488"></span></td>
							
							<td rel="L488" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">mouseaction</span><span class="p">(</span><span class="n">e</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L489" data-line-number="489"></span></td>
							
							<td rel="L489" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L490" data-line-number="490"></span></td>
							
							<td rel="L490" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L491" data-line-number="491"></span></td>
							
							<td rel="L491" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">btn</span> <span class="o">=</span><span class="o">=</span> <span class="n">Button1</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L492" data-line-number="492"></span></td>
							
							<td rel="L492" class="lines-code chroma"><code class="code-inner">		<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L493" data-line-number="493"></span></td>
							
							<td rel="L493" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * If the user clicks below predefined timeouts specific
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L494" data-line-number="494"></span></td>
							
							<td rel="L494" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * snapping behaviour is exposed.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L495" data-line-number="495"></span></td>
							
							<td rel="L495" class="lines-code chroma"><code class="code-inner"><span class="cm">		 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L496" data-line-number="496"></span></td>
							
							<td rel="L496" class="lines-code chroma"><code class="code-inner">		<span class="nf">clock_gettime</span><span class="p">(</span><span class="n">CLOCK_MONOTONIC</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">now</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L497" data-line-number="497"></span></td>
							
							<td rel="L497" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">TIMEDIFF</span><span class="p">(</span><span class="n">now</span><span class="p">,</span> <span class="n">xsel</span><span class="p">.</span><span class="n">tclick2</span><span class="p">)</span> <span class="o">&lt;</span><span class="o">=</span> <span class="n">tripleclicktimeout</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L498" data-line-number="498"></span></td>
							
							<td rel="L498" class="lines-code chroma"><code class="code-inner">			<span class="n">snap</span> <span class="o">=</span> <span class="n">SNAP_LINE</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L499" data-line-number="499"></span></td>
							
							<td rel="L499" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="nf">TIMEDIFF</span><span class="p">(</span><span class="n">now</span><span class="p">,</span> <span class="n">xsel</span><span class="p">.</span><span class="n">tclick1</span><span class="p">)</span> <span class="o">&lt;</span><span class="o">=</span> <span class="n">doubleclicktimeout</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L500" data-line-number="500"></span></td>
							
							<td rel="L500" class="lines-code chroma"><code class="code-inner">			<span class="n">snap</span> <span class="o">=</span> <span class="n">SNAP_WORD</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L501" data-line-number="501"></span></td>
							
							<td rel="L501" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L502" data-line-number="502"></span></td>
							
							<td rel="L502" class="lines-code chroma"><code class="code-inner">			<span class="n">snap</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L503" data-line-number="503"></span></td>
							
							<td rel="L503" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L504" data-line-number="504"></span></td>
							
							<td rel="L504" class="lines-code chroma"><code class="code-inner">		<span class="n">xsel</span><span class="p">.</span><span class="n">tclick2</span> <span class="o">=</span> <span class="n">xsel</span><span class="p">.</span><span class="n">tclick1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L505" data-line-number="505"></span></td>
							
							<td rel="L505" class="lines-code chroma"><code class="code-inner">		<span class="n">xsel</span><span class="p">.</span><span class="n">tclick1</span> <span class="o">=</span> <span class="n">now</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L506" data-line-number="506"></span></td>
							
							<td rel="L506" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L507" data-line-number="507"></span></td>
							
							<td rel="L507" class="lines-code chroma"><code class="code-inner">		<span class="nf">selstart</span><span class="p">(</span><span class="nf">evcol</span><span class="p">(</span><span class="n">e</span><span class="p">)</span><span class="p">,</span> <span class="nf">evrow</span><span class="p">(</span><span class="n">e</span><span class="p">)</span><span class="p">,</span> <span class="n">snap</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L508" data-line-number="508"></span></td>
							
							<td rel="L508" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L509" data-line-number="509"></span></td>
							
							<td rel="L509" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L510" data-line-number="510"></span></td>
							
							<td rel="L510" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L511" data-line-number="511"></span></td>
							
							<td rel="L511" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L512" data-line-number="512"></span></td>
							
							<td rel="L512" class="lines-code chroma"><code class="code-inner"><span class="nf">propnotify</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">e</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L513" data-line-number="513"></span></td>
							
							<td rel="L513" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L514" data-line-number="514"></span></td>
							
							<td rel="L514" class="lines-code chroma"><code class="code-inner">	<span class="n">XPropertyEvent</span> <span class="o">*</span><span class="n">xpev</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L515" data-line-number="515"></span></td>
							
							<td rel="L515" class="lines-code chroma"><code class="code-inner">	<span class="n">Atom</span> <span class="n">clipboard</span> <span class="o">=</span> <span class="nf">XInternAtom</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">CLIPBOARD</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L516" data-line-number="516"></span></td>
							
							<td rel="L516" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L517" data-line-number="517"></span></td>
							
							<td rel="L517" class="lines-code chroma"><code class="code-inner">	<span class="n">xpev</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xproperty</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L518" data-line-number="518"></span></td>
							
							<td rel="L518" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">xpev</span><span class="o">-</span><span class="o">&gt;</span><span class="n">state</span> <span class="o">=</span><span class="o">=</span> <span class="n">PropertyNewValue</span> <span class="o">&amp;</span><span class="o">&amp;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L519" data-line-number="519"></span></td>
							
							<td rel="L519" class="lines-code chroma"><code class="code-inner">			<span class="p">(</span><span class="n">xpev</span><span class="o">-</span><span class="o">&gt;</span><span class="n">atom</span> <span class="o">=</span><span class="o">=</span> <span class="n">XA_PRIMARY</span> <span class="o">|</span><span class="o">|</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L520" data-line-number="520"></span></td>
							
							<td rel="L520" class="lines-code chroma"><code class="code-inner">			 <span class="n">xpev</span><span class="o">-</span><span class="o">&gt;</span><span class="n">atom</span> <span class="o">=</span><span class="o">=</span> <span class="n">clipboard</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L521" data-line-number="521"></span></td>
							
							<td rel="L521" class="lines-code chroma"><code class="code-inner">		<span class="nf">selnotify</span><span class="p">(</span><span class="n">e</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L522" data-line-number="522"></span></td>
							
							<td rel="L522" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L523" data-line-number="523"></span></td>
							
							<td rel="L523" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L524" data-line-number="524"></span></td>
							
							<td rel="L524" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L525" data-line-number="525"></span></td>
							
							<td rel="L525" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L526" data-line-number="526"></span></td>
							
							<td rel="L526" class="lines-code chroma"><code class="code-inner"><span class="nf">selnotify</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">e</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L527" data-line-number="527"></span></td>
							
							<td rel="L527" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L528" data-line-number="528"></span></td>
							
							<td rel="L528" class="lines-code chroma"><code class="code-inner">	<span class="n">ulong</span> <span class="n">nitems</span><span class="p">,</span> <span class="n">ofs</span><span class="p">,</span> <span class="n">rem</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L529" data-line-number="529"></span></td>
							
							<td rel="L529" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">format</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L530" data-line-number="530"></span></td>
							
							<td rel="L530" class="lines-code chroma"><code class="code-inner">	<span class="n">uchar</span> <span class="o">*</span><span class="n">data</span><span class="p">,</span> <span class="o">*</span><span class="n">last</span><span class="p">,</span> <span class="o">*</span><span class="n">repl</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L531" data-line-number="531"></span></td>
							
							<td rel="L531" class="lines-code chroma"><code class="code-inner">	<span class="n">Atom</span> <span class="n">type</span><span class="p">,</span> <span class="n">incratom</span><span class="p">,</span> <span class="n">property</span> <span class="o">=</span> <span class="n">None</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L532" data-line-number="532"></span></td>
							
							<td rel="L532" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L533" data-line-number="533"></span></td>
							
							<td rel="L533" class="lines-code chroma"><code class="code-inner">	<span class="n">incratom</span> <span class="o">=</span> <span class="nf">XInternAtom</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">INCR</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L534" data-line-number="534"></span></td>
							
							<td rel="L534" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L535" data-line-number="535"></span></td>
							
							<td rel="L535" class="lines-code chroma"><code class="code-inner">	<span class="n">ofs</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L536" data-line-number="536"></span></td>
							
							<td rel="L536" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">type</span> <span class="o">=</span><span class="o">=</span> <span class="n">SelectionNotify</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L537" data-line-number="537"></span></td>
							
							<td rel="L537" class="lines-code chroma"><code class="code-inner">		<span class="n">property</span> <span class="o">=</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xselection</span><span class="p">.</span><span class="n">property</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L538" data-line-number="538"></span></td>
							
							<td rel="L538" class="lines-code chroma"><code class="code-inner">	<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">type</span> <span class="o">=</span><span class="o">=</span> <span class="n">PropertyNotify</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L539" data-line-number="539"></span></td>
							
							<td rel="L539" class="lines-code chroma"><code class="code-inner">		<span class="n">property</span> <span class="o">=</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xproperty</span><span class="p">.</span><span class="n">atom</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L540" data-line-number="540"></span></td>
							
							<td rel="L540" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L541" data-line-number="541"></span></td>
							
							<td rel="L541" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">property</span> <span class="o">=</span><span class="o">=</span> <span class="n">None</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L542" data-line-number="542"></span></td>
							
							<td rel="L542" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L543" data-line-number="543"></span></td>
							
							<td rel="L543" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L544" data-line-number="544"></span></td>
							
							<td rel="L544" class="lines-code chroma"><code class="code-inner">	<span class="k">do</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L545" data-line-number="545"></span></td>
							
							<td rel="L545" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">XGetWindowProperty</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">property</span><span class="p">,</span> <span class="n">ofs</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L546" data-line-number="546"></span></td>
							
							<td rel="L546" class="lines-code chroma"><code class="code-inner">					<span class="n">BUFSIZ</span><span class="o">/</span><span class="mi">4</span><span class="p">,</span> <span class="n">False</span><span class="p">,</span> <span class="n">AnyPropertyType</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L547" data-line-number="547"></span></td>
							
							<td rel="L547" class="lines-code chroma"><code class="code-inner">					<span class="o">&amp;</span><span class="n">type</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">format</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">nitems</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">rem</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L548" data-line-number="548"></span></td>
							
							<td rel="L548" class="lines-code chroma"><code class="code-inner">					<span class="o">&amp;</span><span class="n">data</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L549" data-line-number="549"></span></td>
							
							<td rel="L549" class="lines-code chroma"><code class="code-inner">			<span class="nf">fprintf</span><span class="p">(</span><span class="n">stderr</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">Clipboard allocation failed</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L550" data-line-number="550"></span></td>
							
							<td rel="L550" class="lines-code chroma"><code class="code-inner">			<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L551" data-line-number="551"></span></td>
							
							<td rel="L551" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L552" data-line-number="552"></span></td>
							
							<td rel="L552" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L553" data-line-number="553"></span></td>
							
							<td rel="L553" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">type</span> <span class="o">=</span><span class="o">=</span> <span class="n">PropertyNotify</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">nitems</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">rem</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L554" data-line-number="554"></span></td>
							
							<td rel="L554" class="lines-code chroma"><code class="code-inner">			<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L555" data-line-number="555"></span></td>
							
							<td rel="L555" class="lines-code chroma"><code class="code-inner"><span class="cm">			 * If there is some PropertyNotify with no data, then
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L556" data-line-number="556"></span></td>
							
							<td rel="L556" class="lines-code chroma"><code class="code-inner"><span class="cm">			 * this is the signal of the selection owner that all
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L557" data-line-number="557"></span></td>
							
							<td rel="L557" class="lines-code chroma"><code class="code-inner"><span class="cm">			 * data has been transferred. We won&#39;t need to receive
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L558" data-line-number="558"></span></td>
							
							<td rel="L558" class="lines-code chroma"><code class="code-inner"><span class="cm">			 * PropertyNotify events anymore.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L559" data-line-number="559"></span></td>
							
							<td rel="L559" class="lines-code chroma"><code class="code-inner"><span class="cm">			 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L560" data-line-number="560"></span></td>
							
							<td rel="L560" class="lines-code chroma"><code class="code-inner">			<span class="nf">MODBIT</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">attrs</span><span class="p">.</span><span class="n">event_mask</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">PropertyChangeMask</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L561" data-line-number="561"></span></td>
							
							<td rel="L561" class="lines-code chroma"><code class="code-inner">			<span class="nf">XChangeWindowAttributes</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">CWEventMask</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L562" data-line-number="562"></span></td>
							
							<td rel="L562" class="lines-code chroma"><code class="code-inner">					<span class="o">&amp;</span><span class="n">xw</span><span class="p">.</span><span class="n">attrs</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L563" data-line-number="563"></span></td>
							
							<td rel="L563" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L564" data-line-number="564"></span></td>
							
							<td rel="L564" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L565" data-line-number="565"></span></td>
							
							<td rel="L565" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">type</span> <span class="o">=</span><span class="o">=</span> <span class="n">incratom</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L566" data-line-number="566"></span></td>
							
							<td rel="L566" class="lines-code chroma"><code class="code-inner">			<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L567" data-line-number="567"></span></td>
							
							<td rel="L567" class="lines-code chroma"><code class="code-inner"><span class="cm">			 * Activate the PropertyNotify events so we receive
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L568" data-line-number="568"></span></td>
							
							<td rel="L568" class="lines-code chroma"><code class="code-inner"><span class="cm">			 * when the selection owner does send us the next
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L569" data-line-number="569"></span></td>
							
							<td rel="L569" class="lines-code chroma"><code class="code-inner"><span class="cm">			 * chunk of data.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L570" data-line-number="570"></span></td>
							
							<td rel="L570" class="lines-code chroma"><code class="code-inner"><span class="cm">			 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L571" data-line-number="571"></span></td>
							
							<td rel="L571" class="lines-code chroma"><code class="code-inner">			<span class="nf">MODBIT</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">attrs</span><span class="p">.</span><span class="n">event_mask</span><span class="p">,</span> <span class="mi">1</span><span class="p">,</span> <span class="n">PropertyChangeMask</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L572" data-line-number="572"></span></td>
							
							<td rel="L572" class="lines-code chroma"><code class="code-inner">			<span class="nf">XChangeWindowAttributes</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">CWEventMask</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L573" data-line-number="573"></span></td>
							
							<td rel="L573" class="lines-code chroma"><code class="code-inner">					<span class="o">&amp;</span><span class="n">xw</span><span class="p">.</span><span class="n">attrs</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L574" data-line-number="574"></span></td>
							
							<td rel="L574" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L575" data-line-number="575"></span></td>
							
							<td rel="L575" class="lines-code chroma"><code class="code-inner">			<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L576" data-line-number="576"></span></td>
							
							<td rel="L576" class="lines-code chroma"><code class="code-inner"><span class="cm">			 * Deleting the property is the transfer start signal.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L577" data-line-number="577"></span></td>
							
							<td rel="L577" class="lines-code chroma"><code class="code-inner"><span class="cm">			 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L578" data-line-number="578"></span></td>
							
							<td rel="L578" class="lines-code chroma"><code class="code-inner">			<span class="nf">XDeleteProperty</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="p">(</span><span class="kt">int</span><span class="p">)</span><span class="n">property</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L579" data-line-number="579"></span></td>
							
							<td rel="L579" class="lines-code chroma"><code class="code-inner">			<span class="k">continue</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L580" data-line-number="580"></span></td>
							
							<td rel="L580" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L581" data-line-number="581"></span></td>
							
							<td rel="L581" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L582" data-line-number="582"></span></td>
							
							<td rel="L582" class="lines-code chroma"><code class="code-inner">		<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L583" data-line-number="583"></span></td>
							
							<td rel="L583" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * As seen in getsel:
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L584" data-line-number="584"></span></td>
							
							<td rel="L584" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * Line endings are inconsistent in the terminal and GUI world
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L585" data-line-number="585"></span></td>
							
							<td rel="L585" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * copy and pasting. When receiving some selection data,
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L586" data-line-number="586"></span></td>
							
							<td rel="L586" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * replace all &#39;\n&#39; with &#39;\r&#39;.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L587" data-line-number="587"></span></td>
							
							<td rel="L587" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * FIXME: Fix the computer world.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L588" data-line-number="588"></span></td>
							
							<td rel="L588" class="lines-code chroma"><code class="code-inner"><span class="cm">		 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L589" data-line-number="589"></span></td>
							
							<td rel="L589" class="lines-code chroma"><code class="code-inner">		<span class="n">repl</span> <span class="o">=</span> <span class="n">data</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L590" data-line-number="590"></span></td>
							
							<td rel="L590" class="lines-code chroma"><code class="code-inner">		<span class="n">last</span> <span class="o">=</span> <span class="n">data</span> <span class="o">+</span> <span class="n">nitems</span> <span class="o">*</span> <span class="n">format</span> <span class="o">/</span> <span class="mi">8</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L591" data-line-number="591"></span></td>
							
							<td rel="L591" class="lines-code chroma"><code class="code-inner">		<span class="k">while</span> <span class="p">(</span><span class="p">(</span><span class="n">repl</span> <span class="o">=</span> <span class="nf">memchr</span><span class="p">(</span><span class="n">repl</span><span class="p">,</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">\n</span><span class="sc">&#39;</span><span class="p">,</span> <span class="n">last</span> <span class="o">-</span> <span class="n">repl</span><span class="p">)</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L592" data-line-number="592"></span></td>
							
							<td rel="L592" class="lines-code chroma"><code class="code-inner">			<span class="o">*</span><span class="n">repl</span><span class="o">+</span><span class="o">+</span> <span class="o">=</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">\r</span><span class="sc">&#39;</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L593" data-line-number="593"></span></td>
							
							<td rel="L593" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L594" data-line-number="594"></span></td>
							
							<td rel="L594" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L595" data-line-number="595"></span></td>
							
							<td rel="L595" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_BRCKTPASTE</span><span class="p">)</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">ofs</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L596" data-line-number="596"></span></td>
							
							<td rel="L596" class="lines-code chroma"><code class="code-inner">			<span class="nf">ttywrite</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[200~</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">6</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L597" data-line-number="597"></span></td>
							
							<td rel="L597" class="lines-code chroma"><code class="code-inner">		<span class="nf">ttywrite</span><span class="p">(</span><span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="p">)</span><span class="n">data</span><span class="p">,</span> <span class="n">nitems</span> <span class="o">*</span> <span class="n">format</span> <span class="o">/</span> <span class="mi">8</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L598" data-line-number="598"></span></td>
							
							<td rel="L598" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_BRCKTPASTE</span><span class="p">)</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">rem</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L599" data-line-number="599"></span></td>
							
							<td rel="L599" class="lines-code chroma"><code class="code-inner">			<span class="nf">ttywrite</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[201~</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">6</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L600" data-line-number="600"></span></td>
							
							<td rel="L600" class="lines-code chroma"><code class="code-inner">		<span class="nf">XFree</span><span class="p">(</span><span class="n">data</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L601" data-line-number="601"></span></td>
							
							<td rel="L601" class="lines-code chroma"><code class="code-inner">		<span class="cm">/* number of 32-bit chunks returned */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L602" data-line-number="602"></span></td>
							
							<td rel="L602" class="lines-code chroma"><code class="code-inner">		<span class="n">ofs</span> <span class="o">+</span><span class="o">=</span> <span class="n">nitems</span> <span class="o">*</span> <span class="n">format</span> <span class="o">/</span> <span class="mi">32</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L603" data-line-number="603"></span></td>
							
							<td rel="L603" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">while</span> <span class="p">(</span><span class="n">rem</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L604" data-line-number="604"></span></td>
							
							<td rel="L604" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L605" data-line-number="605"></span></td>
							
							<td rel="L605" class="lines-code chroma"><code class="code-inner">	<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L606" data-line-number="606"></span></td>
							
							<td rel="L606" class="lines-code chroma"><code class="code-inner"><span class="cm">	 * Deleting the property again tells the selection owner to send the
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L607" data-line-number="607"></span></td>
							
							<td rel="L607" class="lines-code chroma"><code class="code-inner"><span class="cm">	 * next data chunk in the property.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L608" data-line-number="608"></span></td>
							
							<td rel="L608" class="lines-code chroma"><code class="code-inner"><span class="cm">	 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L609" data-line-number="609"></span></td>
							
							<td rel="L609" class="lines-code chroma"><code class="code-inner">	<span class="nf">XDeleteProperty</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="p">(</span><span class="kt">int</span><span class="p">)</span><span class="n">property</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L610" data-line-number="610"></span></td>
							
							<td rel="L610" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L611" data-line-number="611"></span></td>
							
							<td rel="L611" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L612" data-line-number="612"></span></td>
							
							<td rel="L612" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L613" data-line-number="613"></span></td>
							
							<td rel="L613" class="lines-code chroma"><code class="code-inner"><span class="nf">xclipcopy</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L614" data-line-number="614"></span></td>
							
							<td rel="L614" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L615" data-line-number="615"></span></td>
							
							<td rel="L615" class="lines-code chroma"><code class="code-inner">	<span class="nf">clipcopy</span><span class="p">(</span><span class="nb">NULL</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L616" data-line-number="616"></span></td>
							
							<td rel="L616" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L617" data-line-number="617"></span></td>
							
							<td rel="L617" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L618" data-line-number="618"></span></td>
							
							<td rel="L618" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L619" data-line-number="619"></span></td>
							
							<td rel="L619" class="lines-code chroma"><code class="code-inner"><span class="nf">selclear_</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">e</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L620" data-line-number="620"></span></td>
							
							<td rel="L620" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L621" data-line-number="621"></span></td>
							
							<td rel="L621" class="lines-code chroma"><code class="code-inner">	<span class="nf">selclear</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L622" data-line-number="622"></span></td>
							
							<td rel="L622" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L623" data-line-number="623"></span></td>
							
							<td rel="L623" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L624" data-line-number="624"></span></td>
							
							<td rel="L624" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L625" data-line-number="625"></span></td>
							
							<td rel="L625" class="lines-code chroma"><code class="code-inner"><span class="nf">selrequest</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">e</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L626" data-line-number="626"></span></td>
							
							<td rel="L626" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L627" data-line-number="627"></span></td>
							
							<td rel="L627" class="lines-code chroma"><code class="code-inner">	<span class="n">XSelectionRequestEvent</span> <span class="o">*</span><span class="n">xsre</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L628" data-line-number="628"></span></td>
							
							<td rel="L628" class="lines-code chroma"><code class="code-inner">	<span class="n">XSelectionEvent</span> <span class="n">xev</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L629" data-line-number="629"></span></td>
							
							<td rel="L629" class="lines-code chroma"><code class="code-inner">	<span class="n">Atom</span> <span class="n">xa_targets</span><span class="p">,</span> <span class="n">string</span><span class="p">,</span> <span class="n">clipboard</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L630" data-line-number="630"></span></td>
							
							<td rel="L630" class="lines-code chroma"><code class="code-inner">	<span class="kt">char</span> <span class="o">*</span><span class="n">seltext</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L631" data-line-number="631"></span></td>
							
							<td rel="L631" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L632" data-line-number="632"></span></td>
							
							<td rel="L632" class="lines-code chroma"><code class="code-inner">	<span class="n">xsre</span> <span class="o">=</span> <span class="p">(</span><span class="n">XSelectionRequestEvent</span> <span class="o">*</span><span class="p">)</span> <span class="n">e</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L633" data-line-number="633"></span></td>
							
							<td rel="L633" class="lines-code chroma"><code class="code-inner">	<span class="n">xev</span><span class="p">.</span><span class="n">type</span> <span class="o">=</span> <span class="n">SelectionNotify</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L634" data-line-number="634"></span></td>
							
							<td rel="L634" class="lines-code chroma"><code class="code-inner">	<span class="n">xev</span><span class="p">.</span><span class="n">requestor</span> <span class="o">=</span> <span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">requestor</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L635" data-line-number="635"></span></td>
							
							<td rel="L635" class="lines-code chroma"><code class="code-inner">	<span class="n">xev</span><span class="p">.</span><span class="n">selection</span> <span class="o">=</span> <span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">selection</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L636" data-line-number="636"></span></td>
							
							<td rel="L636" class="lines-code chroma"><code class="code-inner">	<span class="n">xev</span><span class="p">.</span><span class="n">target</span> <span class="o">=</span> <span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">target</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L637" data-line-number="637"></span></td>
							
							<td rel="L637" class="lines-code chroma"><code class="code-inner">	<span class="n">xev</span><span class="p">.</span><span class="n">time</span> <span class="o">=</span> <span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">time</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L638" data-line-number="638"></span></td>
							
							<td rel="L638" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">property</span> <span class="o">=</span><span class="o">=</span> <span class="n">None</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L639" data-line-number="639"></span></td>
							
							<td rel="L639" class="lines-code chroma"><code class="code-inner">		<span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">property</span> <span class="o">=</span> <span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">target</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L640" data-line-number="640"></span></td>
							
							<td rel="L640" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L641" data-line-number="641"></span></td>
							
							<td rel="L641" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* reject */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L642" data-line-number="642"></span></td>
							
							<td rel="L642" class="lines-code chroma"><code class="code-inner">	<span class="n">xev</span><span class="p">.</span><span class="n">property</span> <span class="o">=</span> <span class="n">None</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L643" data-line-number="643"></span></td>
							
							<td rel="L643" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L644" data-line-number="644"></span></td>
							
							<td rel="L644" class="lines-code chroma"><code class="code-inner">	<span class="n">xa_targets</span> <span class="o">=</span> <span class="nf">XInternAtom</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">TARGETS</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L645" data-line-number="645"></span></td>
							
							<td rel="L645" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">target</span> <span class="o">=</span><span class="o">=</span> <span class="n">xa_targets</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L646" data-line-number="646"></span></td>
							
							<td rel="L646" class="lines-code chroma"><code class="code-inner">		<span class="cm">/* respond with the supported type */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L647" data-line-number="647"></span></td>
							
							<td rel="L647" class="lines-code chroma"><code class="code-inner">		<span class="n">string</span> <span class="o">=</span> <span class="n">xsel</span><span class="p">.</span><span class="n">xtarget</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L648" data-line-number="648"></span></td>
							
							<td rel="L648" class="lines-code chroma"><code class="code-inner">		<span class="nf">XChangeProperty</span><span class="p">(</span><span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">display</span><span class="p">,</span> <span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">requestor</span><span class="p">,</span> <span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">property</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L649" data-line-number="649"></span></td>
							
							<td rel="L649" class="lines-code chroma"><code class="code-inner">				<span class="n">XA_ATOM</span><span class="p">,</span> <span class="mi">32</span><span class="p">,</span> <span class="n">PropModeReplace</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L650" data-line-number="650"></span></td>
							
							<td rel="L650" class="lines-code chroma"><code class="code-inner">				<span class="p">(</span><span class="n">uchar</span> <span class="o">*</span><span class="p">)</span> <span class="o">&amp;</span><span class="n">string</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L651" data-line-number="651"></span></td>
							
							<td rel="L651" class="lines-code chroma"><code class="code-inner">		<span class="n">xev</span><span class="p">.</span><span class="n">property</span> <span class="o">=</span> <span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">property</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L652" data-line-number="652"></span></td>
							
							<td rel="L652" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">target</span> <span class="o">=</span><span class="o">=</span> <span class="n">xsel</span><span class="p">.</span><span class="n">xtarget</span> <span class="o">|</span><span class="o">|</span> <span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">target</span> <span class="o">=</span><span class="o">=</span> <span class="n">XA_STRING</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L653" data-line-number="653"></span></td>
							
							<td rel="L653" class="lines-code chroma"><code class="code-inner">		<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L654" data-line-number="654"></span></td>
							
							<td rel="L654" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * xith XA_STRING non ascii characters may be incorrect in the
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L655" data-line-number="655"></span></td>
							
							<td rel="L655" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * requestor. It is not our problem, use utf8.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L656" data-line-number="656"></span></td>
							
							<td rel="L656" class="lines-code chroma"><code class="code-inner"><span class="cm">		 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L657" data-line-number="657"></span></td>
							
							<td rel="L657" class="lines-code chroma"><code class="code-inner">		<span class="n">clipboard</span> <span class="o">=</span> <span class="nf">XInternAtom</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">CLIPBOARD</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L658" data-line-number="658"></span></td>
							
							<td rel="L658" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">selection</span> <span class="o">=</span><span class="o">=</span> <span class="n">XA_PRIMARY</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L659" data-line-number="659"></span></td>
							
							<td rel="L659" class="lines-code chroma"><code class="code-inner">			<span class="n">seltext</span> <span class="o">=</span> <span class="n">xsel</span><span class="p">.</span><span class="n">primary</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L660" data-line-number="660"></span></td>
							
							<td rel="L660" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">selection</span> <span class="o">=</span><span class="o">=</span> <span class="n">clipboard</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L661" data-line-number="661"></span></td>
							
							<td rel="L661" class="lines-code chroma"><code class="code-inner">			<span class="n">seltext</span> <span class="o">=</span> <span class="n">xsel</span><span class="p">.</span><span class="n">clipboard</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L662" data-line-number="662"></span></td>
							
							<td rel="L662" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L663" data-line-number="663"></span></td>
							
							<td rel="L663" class="lines-code chroma"><code class="code-inner">			<span class="nf">fprintf</span><span class="p">(</span><span class="n">stderr</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L664" data-line-number="664"></span></td>
							
							<td rel="L664" class="lines-code chroma"><code class="code-inner">				<span class="sa"></span><span class="s">&#34;</span><span class="s">Unhandled clipboard selection 0x%lx</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L665" data-line-number="665"></span></td>
							
							<td rel="L665" class="lines-code chroma"><code class="code-inner">				<span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">selection</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L666" data-line-number="666"></span></td>
							
							<td rel="L666" class="lines-code chroma"><code class="code-inner">			<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L667" data-line-number="667"></span></td>
							
							<td rel="L667" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L668" data-line-number="668"></span></td>
							
							<td rel="L668" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">seltext</span> <span class="o">!</span><span class="o">=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L669" data-line-number="669"></span></td>
							
							<td rel="L669" class="lines-code chroma"><code class="code-inner">			<span class="nf">XChangeProperty</span><span class="p">(</span><span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">display</span><span class="p">,</span> <span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">requestor</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L670" data-line-number="670"></span></td>
							
							<td rel="L670" class="lines-code chroma"><code class="code-inner">					<span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">property</span><span class="p">,</span> <span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">target</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L671" data-line-number="671"></span></td>
							
							<td rel="L671" class="lines-code chroma"><code class="code-inner">					<span class="mi">8</span><span class="p">,</span> <span class="n">PropModeReplace</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L672" data-line-number="672"></span></td>
							
							<td rel="L672" class="lines-code chroma"><code class="code-inner">					<span class="p">(</span><span class="n">uchar</span> <span class="o">*</span><span class="p">)</span><span class="n">seltext</span><span class="p">,</span> <span class="nf">strlen</span><span class="p">(</span><span class="n">seltext</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L673" data-line-number="673"></span></td>
							
							<td rel="L673" class="lines-code chroma"><code class="code-inner">			<span class="n">xev</span><span class="p">.</span><span class="n">property</span> <span class="o">=</span> <span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">property</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L674" data-line-number="674"></span></td>
							
							<td rel="L674" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L675" data-line-number="675"></span></td>
							
							<td rel="L675" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L676" data-line-number="676"></span></td>
							
							<td rel="L676" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L677" data-line-number="677"></span></td>
							
							<td rel="L677" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* all done, send a notification to the listener */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L678" data-line-number="678"></span></td>
							
							<td rel="L678" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="nf">XSendEvent</span><span class="p">(</span><span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">display</span><span class="p">,</span> <span class="n">xsre</span><span class="o">-</span><span class="o">&gt;</span><span class="n">requestor</span><span class="p">,</span> <span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="p">)</span> <span class="o">&amp;</span><span class="n">xev</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L679" data-line-number="679"></span></td>
							
							<td rel="L679" class="lines-code chroma"><code class="code-inner">		<span class="nf">fprintf</span><span class="p">(</span><span class="n">stderr</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">Error sending SelectionNotify event</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L680" data-line-number="680"></span></td>
							
							<td rel="L680" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L681" data-line-number="681"></span></td>
							
							<td rel="L681" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L682" data-line-number="682"></span></td>
							
							<td rel="L682" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L683" data-line-number="683"></span></td>
							
							<td rel="L683" class="lines-code chroma"><code class="code-inner"><span class="nf">setsel</span><span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="n">str</span><span class="p">,</span> <span class="n">Time</span> <span class="n">t</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L684" data-line-number="684"></span></td>
							
							<td rel="L684" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L685" data-line-number="685"></span></td>
							
							<td rel="L685" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">str</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L686" data-line-number="686"></span></td>
							
							<td rel="L686" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L687" data-line-number="687"></span></td>
							
							<td rel="L687" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L688" data-line-number="688"></span></td>
							
							<td rel="L688" class="lines-code chroma"><code class="code-inner">	<span class="nf">free</span><span class="p">(</span><span class="n">xsel</span><span class="p">.</span><span class="n">primary</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L689" data-line-number="689"></span></td>
							
							<td rel="L689" class="lines-code chroma"><code class="code-inner">	<span class="n">xsel</span><span class="p">.</span><span class="n">primary</span> <span class="o">=</span> <span class="n">str</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L690" data-line-number="690"></span></td>
							
							<td rel="L690" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L691" data-line-number="691"></span></td>
							
							<td rel="L691" class="lines-code chroma"><code class="code-inner">	<span class="nf">XSetSelectionOwner</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">XA_PRIMARY</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">t</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L692" data-line-number="692"></span></td>
							
							<td rel="L692" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">XGetSelectionOwner</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">XA_PRIMARY</span><span class="p">)</span> <span class="o">!</span><span class="o">=</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L693" data-line-number="693"></span></td>
							
							<td rel="L693" class="lines-code chroma"><code class="code-inner">		<span class="nf">selclear</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L694" data-line-number="694"></span></td>
							
							<td rel="L694" class="lines-code chroma"><code class="code-inner">	<span class="nf">clipcopy</span><span class="p">(</span><span class="nb">NULL</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L695" data-line-number="695"></span></td>
							
							<td rel="L695" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L696" data-line-number="696"></span></td>
							
							<td rel="L696" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L697" data-line-number="697"></span></td>
							
							<td rel="L697" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L698" data-line-number="698"></span></td>
							
							<td rel="L698" class="lines-code chroma"><code class="code-inner"><span class="nf">xsetsel</span><span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="n">str</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L699" data-line-number="699"></span></td>
							
							<td rel="L699" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L700" data-line-number="700"></span></td>
							
							<td rel="L700" class="lines-code chroma"><code class="code-inner">	<span class="nf">setsel</span><span class="p">(</span><span class="n">str</span><span class="p">,</span> <span class="n">CurrentTime</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L701" data-line-number="701"></span></td>
							
							<td rel="L701" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L702" data-line-number="702"></span></td>
							
							<td rel="L702" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L703" data-line-number="703"></span></td>
							
							<td rel="L703" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L704" data-line-number="704"></span></td>
							
							<td rel="L704" class="lines-code chroma"><code class="code-inner"><span class="nf">brelease</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">e</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L705" data-line-number="705"></span></td>
							
							<td rel="L705" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L706" data-line-number="706"></span></td>
							
							<td rel="L706" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">btn</span> <span class="o">=</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xbutton</span><span class="p">.</span><span class="n">button</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L707" data-line-number="707"></span></td>
							
							<td rel="L707" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L708" data-line-number="708"></span></td>
							
							<td rel="L708" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="mi">1</span> <span class="o">&lt;</span><span class="o">=</span> <span class="n">btn</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">btn</span> <span class="o">&lt;</span><span class="o">=</span> <span class="mi">11</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L709" data-line-number="709"></span></td>
							
							<td rel="L709" class="lines-code chroma"><code class="code-inner">		<span class="n">buttons</span> <span class="o">&amp;</span><span class="o">=</span> <span class="o">~</span><span class="p">(</span><span class="mi">1</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="p">(</span><span class="n">btn</span><span class="o">-</span><span class="mi">1</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L710" data-line-number="710"></span></td>
							
							<td rel="L710" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L711" data-line-number="711"></span></td>
							
							<td rel="L711" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_MOUSE</span><span class="p">)</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="o">!</span><span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xbutton</span><span class="p">.</span><span class="n">state</span> <span class="o">&amp;</span> <span class="n">forcemousemod</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L712" data-line-number="712"></span></td>
							
							<td rel="L712" class="lines-code chroma"><code class="code-inner">		<span class="nf">mousereport</span><span class="p">(</span><span class="n">e</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L713" data-line-number="713"></span></td>
							
							<td rel="L713" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L714" data-line-number="714"></span></td>
							
							<td rel="L714" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L715" data-line-number="715"></span></td>
							
							<td rel="L715" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L716" data-line-number="716"></span></td>
							
							<td rel="L716" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">mouseaction</span><span class="p">(</span><span class="n">e</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L717" data-line-number="717"></span></td>
							
							<td rel="L717" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L718" data-line-number="718"></span></td>
							
							<td rel="L718" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">btn</span> <span class="o">=</span><span class="o">=</span> <span class="n">Button1</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L719" data-line-number="719"></span></td>
							
							<td rel="L719" class="lines-code chroma"><code class="code-inner">		<span class="nf">mousesel</span><span class="p">(</span><span class="n">e</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L720" data-line-number="720"></span></td>
							
							<td rel="L720" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L721" data-line-number="721"></span></td>
							
							<td rel="L721" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L722" data-line-number="722"></span></td>
							
							<td rel="L722" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L723" data-line-number="723"></span></td>
							
							<td rel="L723" class="lines-code chroma"><code class="code-inner"><span class="nf">bmotion</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">e</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L724" data-line-number="724"></span></td>
							
							<td rel="L724" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L725" data-line-number="725"></span></td>
							
							<td rel="L725" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_MOUSE</span><span class="p">)</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="o">!</span><span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xbutton</span><span class="p">.</span><span class="n">state</span> <span class="o">&amp;</span> <span class="n">forcemousemod</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L726" data-line-number="726"></span></td>
							
							<td rel="L726" class="lines-code chroma"><code class="code-inner">		<span class="nf">mousereport</span><span class="p">(</span><span class="n">e</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L727" data-line-number="727"></span></td>
							
							<td rel="L727" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L728" data-line-number="728"></span></td>
							
							<td rel="L728" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L729" data-line-number="729"></span></td>
							
							<td rel="L729" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L730" data-line-number="730"></span></td>
							
							<td rel="L730" class="lines-code chroma"><code class="code-inner">	<span class="nf">mousesel</span><span class="p">(</span><span class="n">e</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L731" data-line-number="731"></span></td>
							
							<td rel="L731" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L732" data-line-number="732"></span></td>
							
							<td rel="L732" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L733" data-line-number="733"></span></td>
							
							<td rel="L733" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L734" data-line-number="734"></span></td>
							
							<td rel="L734" class="lines-code chroma"><code class="code-inner"><span class="nf">cresize</span><span class="p">(</span><span class="kt">int</span> <span class="n">width</span><span class="p">,</span> <span class="kt">int</span> <span class="n">height</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L735" data-line-number="735"></span></td>
							
							<td rel="L735" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L736" data-line-number="736"></span></td>
							
							<td rel="L736" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">col</span><span class="p">,</span> <span class="n">row</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L737" data-line-number="737"></span></td>
							
							<td rel="L737" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L738" data-line-number="738"></span></td>
							
							<td rel="L738" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">width</span> <span class="o">!</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L739" data-line-number="739"></span></td>
							
							<td rel="L739" class="lines-code chroma"><code class="code-inner">		<span class="n">win</span><span class="p">.</span><span class="n">w</span> <span class="o">=</span> <span class="n">width</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L740" data-line-number="740"></span></td>
							
							<td rel="L740" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">height</span> <span class="o">!</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L741" data-line-number="741"></span></td>
							
							<td rel="L741" class="lines-code chroma"><code class="code-inner">		<span class="n">win</span><span class="p">.</span><span class="n">h</span> <span class="o">=</span> <span class="n">height</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L742" data-line-number="742"></span></td>
							
							<td rel="L742" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L743" data-line-number="743"></span></td>
							
							<td rel="L743" class="lines-code chroma"><code class="code-inner">	<span class="n">col</span> <span class="o">=</span> <span class="p">(</span><span class="n">win</span><span class="p">.</span><span class="n">w</span> <span class="o">-</span> <span class="mi">2</span> <span class="o">*</span> <span class="n">borderpx</span><span class="p">)</span> <span class="o">/</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L744" data-line-number="744"></span></td>
							
							<td rel="L744" class="lines-code chroma"><code class="code-inner">	<span class="n">row</span> <span class="o">=</span> <span class="p">(</span><span class="n">win</span><span class="p">.</span><span class="n">h</span> <span class="o">-</span> <span class="mi">2</span> <span class="o">*</span> <span class="n">borderpx</span><span class="p">)</span> <span class="o">/</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L745" data-line-number="745"></span></td>
							
							<td rel="L745" class="lines-code chroma"><code class="code-inner">	<span class="n">col</span> <span class="o">=</span> <span class="nf">MAX</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">col</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L746" data-line-number="746"></span></td>
							
							<td rel="L746" class="lines-code chroma"><code class="code-inner">	<span class="n">row</span> <span class="o">=</span> <span class="nf">MAX</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">row</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L747" data-line-number="747"></span></td>
							
							<td rel="L747" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L748" data-line-number="748"></span></td>
							
							<td rel="L748" class="lines-code chroma"><code class="code-inner">	<span class="n">win</span><span class="p">.</span><span class="n">hborderpx</span> <span class="o">=</span> <span class="p">(</span><span class="n">win</span><span class="p">.</span><span class="n">w</span> <span class="o">-</span> <span class="n">col</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">)</span> <span class="o">/</span> <span class="mi">2</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L749" data-line-number="749"></span></td>
							
							<td rel="L749" class="lines-code chroma"><code class="code-inner">	<span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span> <span class="o">=</span> <span class="p">(</span><span class="n">win</span><span class="p">.</span><span class="n">h</span> <span class="o">-</span> <span class="n">row</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">)</span> <span class="o">/</span> <span class="mi">2</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L750" data-line-number="750"></span></td>
							
							<td rel="L750" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L751" data-line-number="751"></span></td>
							
							<td rel="L751" class="lines-code chroma"><code class="code-inner">	<span class="nf">tresize</span><span class="p">(</span><span class="n">col</span><span class="p">,</span> <span class="n">row</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L752" data-line-number="752"></span></td>
							
							<td rel="L752" class="lines-code chroma"><code class="code-inner">	<span class="nf">xresize</span><span class="p">(</span><span class="n">col</span><span class="p">,</span> <span class="n">row</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L753" data-line-number="753"></span></td>
							
							<td rel="L753" class="lines-code chroma"><code class="code-inner">	<span class="nf">ttyresize</span><span class="p">(</span><span class="n">win</span><span class="p">.</span><span class="n">tw</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">th</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L754" data-line-number="754"></span></td>
							
							<td rel="L754" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L755" data-line-number="755"></span></td>
							
							<td rel="L755" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L756" data-line-number="756"></span></td>
							
							<td rel="L756" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L757" data-line-number="757"></span></td>
							
							<td rel="L757" class="lines-code chroma"><code class="code-inner"><span class="nf">xresize</span><span class="p">(</span><span class="kt">int</span> <span class="n">col</span><span class="p">,</span> <span class="kt">int</span> <span class="n">row</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L758" data-line-number="758"></span></td>
							
							<td rel="L758" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L759" data-line-number="759"></span></td>
							
							<td rel="L759" class="lines-code chroma"><code class="code-inner">	<span class="n">win</span><span class="p">.</span><span class="n">tw</span> <span class="o">=</span> <span class="n">col</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L760" data-line-number="760"></span></td>
							
							<td rel="L760" class="lines-code chroma"><code class="code-inner">	<span class="n">win</span><span class="p">.</span><span class="n">th</span> <span class="o">=</span> <span class="n">row</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L761" data-line-number="761"></span></td>
							
							<td rel="L761" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L762" data-line-number="762"></span></td>
							
							<td rel="L762" class="lines-code chroma"><code class="code-inner">	<span class="nf">XFreePixmap</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">buf</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L763" data-line-number="763"></span></td>
							
							<td rel="L763" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">buf</span> <span class="o">=</span> <span class="nf">XCreatePixmap</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">w</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">h</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L764" data-line-number="764"></span></td>
							
							<td rel="L764" class="lines-code chroma"><code class="code-inner">			<span class="n">xw</span><span class="p">.</span><span class="n">depth</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L765" data-line-number="765"></span></td>
							
							<td rel="L765" class="lines-code chroma"><code class="code-inner">	<span class="nf">XftDrawChange</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">draw</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">buf</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L766" data-line-number="766"></span></td>
							
							<td rel="L766" class="lines-code chroma"><code class="code-inner">	<span class="nf">xclear</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">w</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">h</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L767" data-line-number="767"></span></td>
							
							<td rel="L767" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L768" data-line-number="768"></span></td>
							
							<td rel="L768" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* resize to new width */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L769" data-line-number="769"></span></td>
							
							<td rel="L769" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">specbuf</span> <span class="o">=</span> <span class="nf">xrealloc</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">specbuf</span><span class="p">,</span> <span class="n">col</span> <span class="o">*</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">GlyphFontSpec</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L770" data-line-number="770"></span></td>
							
							<td rel="L770" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L771" data-line-number="771"></span></td>
							
							<td rel="L771" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L772" data-line-number="772"></span></td>
							
							<td rel="L772" class="lines-code chroma"><code class="code-inner"><span class="n">ushort</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L773" data-line-number="773"></span></td>
							
							<td rel="L773" class="lines-code chroma"><code class="code-inner"><span class="nf">sixd_to_16bit</span><span class="p">(</span><span class="kt">int</span> <span class="n">x</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L774" data-line-number="774"></span></td>
							
							<td rel="L774" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L775" data-line-number="775"></span></td>
							
							<td rel="L775" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="n">x</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span> <span class="o">?</span> <span class="mi">0</span> <span class="o">:</span> <span class="mh">0x3737</span> <span class="o">+</span> <span class="mh">0x2828</span> <span class="o">*</span> <span class="n">x</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L776" data-line-number="776"></span></td>
							
							<td rel="L776" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L777" data-line-number="777"></span></td>
							
							<td rel="L777" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L778" data-line-number="778"></span></td>
							
							<td rel="L778" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L779" data-line-number="779"></span></td>
							
							<td rel="L779" class="lines-code chroma"><code class="code-inner"><span class="nf">xloadcolor</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">name</span><span class="p">,</span> <span class="n">Color</span> <span class="o">*</span><span class="n">ncolor</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L780" data-line-number="780"></span></td>
							
							<td rel="L780" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L781" data-line-number="781"></span></td>
							
							<td rel="L781" class="lines-code chroma"><code class="code-inner">	<span class="n">XRenderColor</span> <span class="n">color</span> <span class="o">=</span> <span class="p">{</span> <span class="p">.</span><span class="n">alpha</span> <span class="o">=</span> <span class="mh">0xffff</span> <span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L782" data-line-number="782"></span></td>
							
							<td rel="L782" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L783" data-line-number="783"></span></td>
							
							<td rel="L783" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">name</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L784" data-line-number="784"></span></td>
							
							<td rel="L784" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">BETWEEN</span><span class="p">(</span><span class="n">i</span><span class="p">,</span> <span class="mi">16</span><span class="p">,</span> <span class="mi">255</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span> <span class="cm">/* 256 color */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L785" data-line-number="785"></span></td>
							
							<td rel="L785" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="n">i</span> <span class="o">&lt;</span> <span class="mi">6</span><span class="o">*</span><span class="mi">6</span><span class="o">*</span><span class="mi">6</span><span class="o">+</span><span class="mi">16</span><span class="p">)</span> <span class="p">{</span> <span class="cm">/* same colors as xterm */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L786" data-line-number="786"></span></td>
							
							<td rel="L786" class="lines-code chroma"><code class="code-inner">				<span class="n">color</span><span class="p">.</span><span class="n">red</span>   <span class="o">=</span> <span class="nf">sixd_to_16bit</span><span class="p">(</span> <span class="p">(</span><span class="p">(</span><span class="n">i</span><span class="o">-</span><span class="mi">16</span><span class="p">)</span><span class="o">/</span><span class="mi">36</span><span class="p">)</span><span class="o">%</span><span class="mi">6</span> <span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L787" data-line-number="787"></span></td>
							
							<td rel="L787" class="lines-code chroma"><code class="code-inner">				<span class="n">color</span><span class="p">.</span><span class="n">green</span> <span class="o">=</span> <span class="nf">sixd_to_16bit</span><span class="p">(</span> <span class="p">(</span><span class="p">(</span><span class="n">i</span><span class="o">-</span><span class="mi">16</span><span class="p">)</span><span class="o">/</span><span class="mi">6</span><span class="p">)</span> <span class="o">%</span><span class="mi">6</span> <span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L788" data-line-number="788"></span></td>
							
							<td rel="L788" class="lines-code chroma"><code class="code-inner">				<span class="n">color</span><span class="p">.</span><span class="n">blue</span>  <span class="o">=</span> <span class="nf">sixd_to_16bit</span><span class="p">(</span> <span class="p">(</span><span class="p">(</span><span class="n">i</span><span class="o">-</span><span class="mi">16</span><span class="p">)</span><span class="o">/</span><span class="mi">1</span><span class="p">)</span> <span class="o">%</span><span class="mi">6</span> <span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L789" data-line-number="789"></span></td>
							
							<td rel="L789" class="lines-code chroma"><code class="code-inner">			<span class="p">}</span> <span class="k">else</span> <span class="p">{</span> <span class="cm">/* greyscale */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L790" data-line-number="790"></span></td>
							
							<td rel="L790" class="lines-code chroma"><code class="code-inner">				<span class="n">color</span><span class="p">.</span><span class="n">red</span> <span class="o">=</span> <span class="mh">0x0808</span> <span class="o">+</span> <span class="mh">0x0a0a</span> <span class="o">*</span> <span class="p">(</span><span class="n">i</span> <span class="o">-</span> <span class="p">(</span><span class="mi">6</span><span class="o">*</span><span class="mi">6</span><span class="o">*</span><span class="mi">6</span><span class="o">+</span><span class="mi">16</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L791" data-line-number="791"></span></td>
							
							<td rel="L791" class="lines-code chroma"><code class="code-inner">				<span class="n">color</span><span class="p">.</span><span class="n">green</span> <span class="o">=</span> <span class="n">color</span><span class="p">.</span><span class="n">blue</span> <span class="o">=</span> <span class="n">color</span><span class="p">.</span><span class="n">red</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L792" data-line-number="792"></span></td>
							
							<td rel="L792" class="lines-code chroma"><code class="code-inner">			<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L793" data-line-number="793"></span></td>
							
							<td rel="L793" class="lines-code chroma"><code class="code-inner">			<span class="k">return</span> <span class="nf">XftColorAllocValue</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">vis</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L794" data-line-number="794"></span></td>
							
							<td rel="L794" class="lines-code chroma"><code class="code-inner">			                          <span class="n">xw</span><span class="p">.</span><span class="n">cmap</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">color</span><span class="p">,</span> <span class="n">ncolor</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L795" data-line-number="795"></span></td>
							
							<td rel="L795" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span> <span class="k">else</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L796" data-line-number="796"></span></td>
							
							<td rel="L796" class="lines-code chroma"><code class="code-inner">			<span class="n">name</span> <span class="o">=</span> <span class="n">colorname</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L797" data-line-number="797"></span></td>
							
							<td rel="L797" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L798" data-line-number="798"></span></td>
							
							<td rel="L798" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L799" data-line-number="799"></span></td>
							
							<td rel="L799" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="nf">XftColorAllocName</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">vis</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">cmap</span><span class="p">,</span> <span class="n">name</span><span class="p">,</span> <span class="n">ncolor</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L800" data-line-number="800"></span></td>
							
							<td rel="L800" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L801" data-line-number="801"></span></td>
							
							<td rel="L801" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L802" data-line-number="802"></span></td>
							
							<td rel="L802" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L803" data-line-number="803"></span></td>
							
							<td rel="L803" class="lines-code chroma"><code class="code-inner"><span class="nf">xloadcols</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L804" data-line-number="804"></span></td>
							
							<td rel="L804" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L805" data-line-number="805"></span></td>
							
							<td rel="L805" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">i</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L806" data-line-number="806"></span></td>
							
							<td rel="L806" class="lines-code chroma"><code class="code-inner">	<span class="k">static</span> <span class="kt">int</span> <span class="n">loaded</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L807" data-line-number="807"></span></td>
							
							<td rel="L807" class="lines-code chroma"><code class="code-inner">	<span class="n">Color</span> <span class="o">*</span><span class="n">cp</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L808" data-line-number="808"></span></td>
							
							<td rel="L808" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L809" data-line-number="809"></span></td>
							
							<td rel="L809" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">loaded</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L810" data-line-number="810"></span></td>
							
							<td rel="L810" class="lines-code chroma"><code class="code-inner">		<span class="k">for</span> <span class="p">(</span><span class="n">cp</span> <span class="o">=</span> <span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">;</span> <span class="n">cp</span> <span class="o">&lt;</span> <span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">dc</span><span class="p">.</span><span class="n">collen</span><span class="p">]</span><span class="p">;</span> <span class="o">+</span><span class="o">+</span><span class="n">cp</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L811" data-line-number="811"></span></td>
							
							<td rel="L811" class="lines-code chroma"><code class="code-inner">			<span class="nf">XftColorFree</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">vis</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">cmap</span><span class="p">,</span> <span class="n">cp</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L812" data-line-number="812"></span></td>
							
							<td rel="L812" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L813" data-line-number="813"></span></td>
							
							<td rel="L813" class="lines-code chroma"><code class="code-inner">		<span class="n">dc</span><span class="p">.</span><span class="n">collen</span> <span class="o">=</span> <span class="nf">MAX</span><span class="p">(</span><span class="nf">LEN</span><span class="p">(</span><span class="n">colorname</span><span class="p">)</span><span class="p">,</span> <span class="mi">256</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L814" data-line-number="814"></span></td>
							
							<td rel="L814" class="lines-code chroma"><code class="code-inner">		<span class="n">dc</span><span class="p">.</span><span class="n">col</span> <span class="o">=</span> <span class="nf">xmalloc</span><span class="p">(</span><span class="n">dc</span><span class="p">.</span><span class="n">collen</span> <span class="o">*</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">Color</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L815" data-line-number="815"></span></td>
							
							<td rel="L815" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L816" data-line-number="816"></span></td>
							
							<td rel="L816" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L817" data-line-number="817"></span></td>
							
							<td rel="L817" class="lines-code chroma"><code class="code-inner">	<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">dc</span><span class="p">.</span><span class="n">collen</span><span class="p">;</span> <span class="n">i</span><span class="o">+</span><span class="o">+</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L818" data-line-number="818"></span></td>
							
							<td rel="L818" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="nf">xloadcolor</span><span class="p">(</span><span class="n">i</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L819" data-line-number="819"></span></td>
							
							<td rel="L819" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="n">colorname</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L820" data-line-number="820"></span></td>
							
							<td rel="L820" class="lines-code chroma"><code class="code-inner">				<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">could not allocate color &#39;%s&#39;</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">colorname</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L821" data-line-number="821"></span></td>
							
							<td rel="L821" class="lines-code chroma"><code class="code-inner">			<span class="k">else</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L822" data-line-number="822"></span></td>
							
							<td rel="L822" class="lines-code chroma"><code class="code-inner">				<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">could not allocate color %d</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">i</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L823" data-line-number="823"></span></td>
							
							<td rel="L823" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L824" data-line-number="824"></span></td>
							
							<td rel="L824" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L825" data-line-number="825"></span></td>
							
							<td rel="L825" class="lines-code chroma"><code class="code-inner">	<span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultbg</span><span class="p">]</span><span class="p">.</span><span class="n">color</span><span class="p">.</span><span class="n">alpha</span> <span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">short</span><span class="p">)</span><span class="p">(</span><span class="mh">0xffff</span> <span class="o">*</span> <span class="n">alpha</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L826" data-line-number="826"></span></td>
							
							<td rel="L826" class="lines-code chroma"><code class="code-inner">	<span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultbg</span><span class="p">]</span><span class="p">.</span><span class="n">pixel</span> <span class="o">&amp;</span><span class="o">=</span> <span class="mh">0x00FFFFFF</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L827" data-line-number="827"></span></td>
							
							<td rel="L827" class="lines-code chroma"><code class="code-inner">	<span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultbg</span><span class="p">]</span><span class="p">.</span><span class="n">pixel</span> <span class="o">|</span><span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">char</span><span class="p">)</span><span class="p">(</span><span class="mh">0xff</span> <span class="o">*</span> <span class="n">alpha</span><span class="p">)</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="mi">24</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L828" data-line-number="828"></span></td>
							
							<td rel="L828" class="lines-code chroma"><code class="code-inner">	<span class="n">loaded</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L829" data-line-number="829"></span></td>
							
							<td rel="L829" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L830" data-line-number="830"></span></td>
							
							<td rel="L830" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L831" data-line-number="831"></span></td>
							
							<td rel="L831" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L832" data-line-number="832"></span></td>
							
							<td rel="L832" class="lines-code chroma"><code class="code-inner"><span class="nf">xgetcolor</span><span class="p">(</span><span class="kt">int</span> <span class="n">x</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="kt">char</span> <span class="o">*</span><span class="n">r</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="kt">char</span> <span class="o">*</span><span class="n">g</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="kt">char</span> <span class="o">*</span><span class="n">b</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L833" data-line-number="833"></span></td>
							
							<td rel="L833" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L834" data-line-number="834"></span></td>
							
							<td rel="L834" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="nf">BETWEEN</span><span class="p">(</span><span class="n">x</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">dc</span><span class="p">.</span><span class="n">collen</span> <span class="o">-</span> <span class="mi">1</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L835" data-line-number="835"></span></td>
							
							<td rel="L835" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L836" data-line-number="836"></span></td>
							
							<td rel="L836" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L837" data-line-number="837"></span></td>
							
							<td rel="L837" class="lines-code chroma"><code class="code-inner">	<span class="o">*</span><span class="n">r</span> <span class="o">=</span> <span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">x</span><span class="p">]</span><span class="p">.</span><span class="n">color</span><span class="p">.</span><span class="n">red</span> <span class="o">&gt;</span><span class="o">&gt;</span> <span class="mi">8</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L838" data-line-number="838"></span></td>
							
							<td rel="L838" class="lines-code chroma"><code class="code-inner">	<span class="o">*</span><span class="n">g</span> <span class="o">=</span> <span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">x</span><span class="p">]</span><span class="p">.</span><span class="n">color</span><span class="p">.</span><span class="n">green</span> <span class="o">&gt;</span><span class="o">&gt;</span> <span class="mi">8</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L839" data-line-number="839"></span></td>
							
							<td rel="L839" class="lines-code chroma"><code class="code-inner">	<span class="o">*</span><span class="n">b</span> <span class="o">=</span> <span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">x</span><span class="p">]</span><span class="p">.</span><span class="n">color</span><span class="p">.</span><span class="n">blue</span> <span class="o">&gt;</span><span class="o">&gt;</span> <span class="mi">8</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L840" data-line-number="840"></span></td>
							
							<td rel="L840" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L841" data-line-number="841"></span></td>
							
							<td rel="L841" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L842" data-line-number="842"></span></td>
							
							<td rel="L842" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L843" data-line-number="843"></span></td>
							
							<td rel="L843" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L844" data-line-number="844"></span></td>
							
							<td rel="L844" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L845" data-line-number="845"></span></td>
							
							<td rel="L845" class="lines-code chroma"><code class="code-inner"><span class="nf">xsetcolorname</span><span class="p">(</span><span class="kt">int</span> <span class="n">x</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">name</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L846" data-line-number="846"></span></td>
							
							<td rel="L846" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L847" data-line-number="847"></span></td>
							
							<td rel="L847" class="lines-code chroma"><code class="code-inner">	<span class="n">Color</span> <span class="n">ncolor</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L848" data-line-number="848"></span></td>
							
							<td rel="L848" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L849" data-line-number="849"></span></td>
							
							<td rel="L849" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="nf">BETWEEN</span><span class="p">(</span><span class="n">x</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">dc</span><span class="p">.</span><span class="n">collen</span> <span class="o">-</span> <span class="mi">1</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L850" data-line-number="850"></span></td>
							
							<td rel="L850" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L851" data-line-number="851"></span></td>
							
							<td rel="L851" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L852" data-line-number="852"></span></td>
							
							<td rel="L852" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="nf">xloadcolor</span><span class="p">(</span><span class="n">x</span><span class="p">,</span> <span class="n">name</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">ncolor</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L853" data-line-number="853"></span></td>
							
							<td rel="L853" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L854" data-line-number="854"></span></td>
							
							<td rel="L854" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L855" data-line-number="855"></span></td>
							
							<td rel="L855" class="lines-code chroma"><code class="code-inner">	<span class="nf">XftColorFree</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">vis</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">cmap</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">x</span><span class="p">]</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L856" data-line-number="856"></span></td>
							
							<td rel="L856" class="lines-code chroma"><code class="code-inner">	<span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">x</span><span class="p">]</span> <span class="o">=</span> <span class="n">ncolor</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L857" data-line-number="857"></span></td>
							
							<td rel="L857" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L858" data-line-number="858"></span></td>
							
							<td rel="L858" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">x</span> <span class="o">=</span><span class="o">=</span> <span class="n">defaultbg</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L859" data-line-number="859"></span></td>
							
							<td rel="L859" class="lines-code chroma"><code class="code-inner">		<span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultbg</span><span class="p">]</span><span class="p">.</span><span class="n">color</span><span class="p">.</span><span class="n">alpha</span> <span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">short</span><span class="p">)</span><span class="p">(</span><span class="mh">0xffff</span> <span class="o">*</span> <span class="n">alpha</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L860" data-line-number="860"></span></td>
							
							<td rel="L860" class="lines-code chroma"><code class="code-inner">		<span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultbg</span><span class="p">]</span><span class="p">.</span><span class="n">pixel</span> <span class="o">&amp;</span><span class="o">=</span> <span class="mh">0x00FFFFFF</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L861" data-line-number="861"></span></td>
							
							<td rel="L861" class="lines-code chroma"><code class="code-inner">		<span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultbg</span><span class="p">]</span><span class="p">.</span><span class="n">pixel</span> <span class="o">|</span><span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">char</span><span class="p">)</span><span class="p">(</span><span class="mh">0xff</span> <span class="o">*</span> <span class="n">alpha</span><span class="p">)</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="mi">24</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L862" data-line-number="862"></span></td>
							
							<td rel="L862" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L863" data-line-number="863"></span></td>
							
							<td rel="L863" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L864" data-line-number="864"></span></td>
							
							<td rel="L864" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L865" data-line-number="865"></span></td>
							
							<td rel="L865" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L866" data-line-number="866"></span></td>
							
							<td rel="L866" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L867" data-line-number="867"></span></td>
							
							<td rel="L867" class="lines-code chroma"><code class="code-inner"><span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L868" data-line-number="868"></span></td>
							
							<td rel="L868" class="lines-code chroma"><code class="code-inner"><span class="cm"> * Absolute coordinates.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L869" data-line-number="869"></span></td>
							
							<td rel="L869" class="lines-code chroma"><code class="code-inner"><span class="cm"> */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L870" data-line-number="870"></span></td>
							
							<td rel="L870" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L871" data-line-number="871"></span></td>
							
							<td rel="L871" class="lines-code chroma"><code class="code-inner"><span class="nf">xclear</span><span class="p">(</span><span class="kt">int</span> <span class="n">x1</span><span class="p">,</span> <span class="kt">int</span> <span class="n">y1</span><span class="p">,</span> <span class="kt">int</span> <span class="n">x2</span><span class="p">,</span> <span class="kt">int</span> <span class="n">y2</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L872" data-line-number="872"></span></td>
							
							<td rel="L872" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L873" data-line-number="873"></span></td>
							
							<td rel="L873" class="lines-code chroma"><code class="code-inner">	<span class="nf">XftDrawRect</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">draw</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L874" data-line-number="874"></span></td>
							
							<td rel="L874" class="lines-code chroma"><code class="code-inner">			<span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_REVERSE</span><span class="p">)</span><span class="o">?</span> <span class="nl">defaultfg</span> <span class="p">:</span> <span class="n">defaultbg</span><span class="p">]</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L875" data-line-number="875"></span></td>
							
							<td rel="L875" class="lines-code chroma"><code class="code-inner">			<span class="n">x1</span><span class="p">,</span> <span class="n">y1</span><span class="p">,</span> <span class="n">x2</span><span class="o">-</span><span class="n">x1</span><span class="p">,</span> <span class="n">y2</span><span class="o">-</span><span class="n">y1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L876" data-line-number="876"></span></td>
							
							<td rel="L876" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L877" data-line-number="877"></span></td>
							
							<td rel="L877" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L878" data-line-number="878"></span></td>
							
							<td rel="L878" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L879" data-line-number="879"></span></td>
							
							<td rel="L879" class="lines-code chroma"><code class="code-inner"><span class="nf">xhints</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L880" data-line-number="880"></span></td>
							
							<td rel="L880" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L881" data-line-number="881"></span></td>
							
							<td rel="L881" class="lines-code chroma"><code class="code-inner">	<span class="n">XClassHint</span> <span class="n">class</span> <span class="o">=</span> <span class="p">{</span><span class="n">opt_name</span> <span class="o">?</span> <span class="nl">opt_name</span> <span class="p">:</span> <span class="n">termname</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L882" data-line-number="882"></span></td>
							
							<td rel="L882" class="lines-code chroma"><code class="code-inner">	                    <span class="n">opt_class</span> <span class="o">?</span> <span class="nl">opt_class</span> <span class="p">:</span> <span class="n">termname</span><span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L883" data-line-number="883"></span></td>
							
							<td rel="L883" class="lines-code chroma"><code class="code-inner">	<span class="n">XWMHints</span> <span class="n">wm</span> <span class="o">=</span> <span class="p">{</span><span class="p">.</span><span class="n">flags</span> <span class="o">=</span> <span class="n">InputHint</span><span class="p">,</span> <span class="p">.</span><span class="n">input</span> <span class="o">=</span> <span class="mi">1</span><span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L884" data-line-number="884"></span></td>
							
							<td rel="L884" class="lines-code chroma"><code class="code-inner">	<span class="n">XSizeHints</span> <span class="o">*</span><span class="n">sizeh</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L885" data-line-number="885"></span></td>
							
							<td rel="L885" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L886" data-line-number="886"></span></td>
							
							<td rel="L886" class="lines-code chroma"><code class="code-inner">	<span class="n">sizeh</span> <span class="o">=</span> <span class="nf">XAllocSizeHints</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L887" data-line-number="887"></span></td>
							
							<td rel="L887" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L888" data-line-number="888"></span></td>
							
							<td rel="L888" class="lines-code chroma"><code class="code-inner">	<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">flags</span> <span class="o">=</span> <span class="n">PSize</span> <span class="o">|</span> <span class="n">PResizeInc</span> <span class="o">|</span> <span class="n">PBaseSize</span> <span class="o">|</span> <span class="n">PMinSize</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L889" data-line-number="889"></span></td>
							
							<td rel="L889" class="lines-code chroma"><code class="code-inner">	<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">height</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">h</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L890" data-line-number="890"></span></td>
							
							<td rel="L890" class="lines-code chroma"><code class="code-inner">	<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">width</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">w</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L891" data-line-number="891"></span></td>
							
							<td rel="L891" class="lines-code chroma"><code class="code-inner">	<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">height_inc</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L892" data-line-number="892"></span></td>
							
							<td rel="L892" class="lines-code chroma"><code class="code-inner">	<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">width_inc</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L893" data-line-number="893"></span></td>
							
							<td rel="L893" class="lines-code chroma"><code class="code-inner">	<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">base_height</span> <span class="o">=</span> <span class="mi">2</span> <span class="o">*</span> <span class="n">borderpx</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L894" data-line-number="894"></span></td>
							
							<td rel="L894" class="lines-code chroma"><code class="code-inner">	<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">base_width</span> <span class="o">=</span> <span class="mi">2</span> <span class="o">*</span> <span class="n">borderpx</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L895" data-line-number="895"></span></td>
							
							<td rel="L895" class="lines-code chroma"><code class="code-inner">	<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">min_height</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span> <span class="o">+</span> <span class="mi">2</span> <span class="o">*</span> <span class="n">borderpx</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L896" data-line-number="896"></span></td>
							
							<td rel="L896" class="lines-code chroma"><code class="code-inner">	<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">min_width</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span> <span class="o">+</span> <span class="mi">2</span> <span class="o">*</span> <span class="n">borderpx</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L897" data-line-number="897"></span></td>
							
							<td rel="L897" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">isfixed</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L898" data-line-number="898"></span></td>
							
							<td rel="L898" class="lines-code chroma"><code class="code-inner">		<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">flags</span> <span class="o">|</span><span class="o">=</span> <span class="n">PMaxSize</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L899" data-line-number="899"></span></td>
							
							<td rel="L899" class="lines-code chroma"><code class="code-inner">		<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">min_width</span> <span class="o">=</span> <span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">max_width</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">w</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L900" data-line-number="900"></span></td>
							
							<td rel="L900" class="lines-code chroma"><code class="code-inner">		<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">min_height</span> <span class="o">=</span> <span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">max_height</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">h</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L901" data-line-number="901"></span></td>
							
							<td rel="L901" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L902" data-line-number="902"></span></td>
							
							<td rel="L902" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">gm</span> <span class="o">&amp;</span> <span class="p">(</span><span class="n">XValue</span><span class="o">|</span><span class="n">YValue</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L903" data-line-number="903"></span></td>
							
							<td rel="L903" class="lines-code chroma"><code class="code-inner">		<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">flags</span> <span class="o">|</span><span class="o">=</span> <span class="n">USPosition</span> <span class="o">|</span> <span class="n">PWinGravity</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L904" data-line-number="904"></span></td>
							
							<td rel="L904" class="lines-code chroma"><code class="code-inner">		<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">x</span> <span class="o">=</span> <span class="n">xw</span><span class="p">.</span><span class="n">l</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L905" data-line-number="905"></span></td>
							
							<td rel="L905" class="lines-code chroma"><code class="code-inner">		<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">y</span> <span class="o">=</span> <span class="n">xw</span><span class="p">.</span><span class="n">t</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L906" data-line-number="906"></span></td>
							
							<td rel="L906" class="lines-code chroma"><code class="code-inner">		<span class="n">sizeh</span><span class="o">-</span><span class="o">&gt;</span><span class="n">win_gravity</span> <span class="o">=</span> <span class="nf">xgeommasktogravity</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">gm</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L907" data-line-number="907"></span></td>
							
							<td rel="L907" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L908" data-line-number="908"></span></td>
							
							<td rel="L908" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L909" data-line-number="909"></span></td>
							
							<td rel="L909" class="lines-code chroma"><code class="code-inner">	<span class="nf">XSetWMProperties</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">sizeh</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">wm</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L910" data-line-number="910"></span></td>
							
							<td rel="L910" class="lines-code chroma"><code class="code-inner">			<span class="o">&amp;</span><span class="n">class</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L911" data-line-number="911"></span></td>
							
							<td rel="L911" class="lines-code chroma"><code class="code-inner">	<span class="nf">XFree</span><span class="p">(</span><span class="n">sizeh</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L912" data-line-number="912"></span></td>
							
							<td rel="L912" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L913" data-line-number="913"></span></td>
							
							<td rel="L913" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L914" data-line-number="914"></span></td>
							
							<td rel="L914" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L915" data-line-number="915"></span></td>
							
							<td rel="L915" class="lines-code chroma"><code class="code-inner"><span class="nf">xgeommasktogravity</span><span class="p">(</span><span class="kt">int</span> <span class="n">mask</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L916" data-line-number="916"></span></td>
							
							<td rel="L916" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L917" data-line-number="917"></span></td>
							
							<td rel="L917" class="lines-code chroma"><code class="code-inner">	<span class="k">switch</span> <span class="p">(</span><span class="n">mask</span> <span class="o">&amp;</span> <span class="p">(</span><span class="n">XNegative</span><span class="o">|</span><span class="n">YNegative</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L918" data-line-number="918"></span></td>
							
							<td rel="L918" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="mi">0</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L919" data-line-number="919"></span></td>
							
							<td rel="L919" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span> <span class="n">NorthWestGravity</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L920" data-line-number="920"></span></td>
							
							<td rel="L920" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="nl">XNegative</span><span class="p">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L921" data-line-number="921"></span></td>
							
							<td rel="L921" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span> <span class="n">NorthEastGravity</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L922" data-line-number="922"></span></td>
							
							<td rel="L922" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="nl">YNegative</span><span class="p">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L923" data-line-number="923"></span></td>
							
							<td rel="L923" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span> <span class="n">SouthWestGravity</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L924" data-line-number="924"></span></td>
							
							<td rel="L924" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L925" data-line-number="925"></span></td>
							
							<td rel="L925" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L926" data-line-number="926"></span></td>
							
							<td rel="L926" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="n">SouthEastGravity</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L927" data-line-number="927"></span></td>
							
							<td rel="L927" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L928" data-line-number="928"></span></td>
							
							<td rel="L928" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L929" data-line-number="929"></span></td>
							
							<td rel="L929" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L930" data-line-number="930"></span></td>
							
							<td rel="L930" class="lines-code chroma"><code class="code-inner"><span class="nf">xloadfont</span><span class="p">(</span><span class="n">Font</span> <span class="o">*</span><span class="n">f</span><span class="p">,</span> <span class="n">FcPattern</span> <span class="o">*</span><span class="n">pattern</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L931" data-line-number="931"></span></td>
							
							<td rel="L931" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L932" data-line-number="932"></span></td>
							
							<td rel="L932" class="lines-code chroma"><code class="code-inner">	<span class="n">FcPattern</span> <span class="o">*</span><span class="n">configured</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L933" data-line-number="933"></span></td>
							
							<td rel="L933" class="lines-code chroma"><code class="code-inner">	<span class="n">FcPattern</span> <span class="o">*</span><span class="n">match</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L934" data-line-number="934"></span></td>
							
							<td rel="L934" class="lines-code chroma"><code class="code-inner">	<span class="n">FcResult</span> <span class="n">result</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L935" data-line-number="935"></span></td>
							
							<td rel="L935" class="lines-code chroma"><code class="code-inner">	<span class="n">XGlyphInfo</span> <span class="n">extents</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L936" data-line-number="936"></span></td>
							
							<td rel="L936" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">wantattr</span><span class="p">,</span> <span class="n">haveattr</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L937" data-line-number="937"></span></td>
							
							<td rel="L937" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L938" data-line-number="938"></span></td>
							
							<td rel="L938" class="lines-code chroma"><code class="code-inner">	<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L939" data-line-number="939"></span></td>
							
							<td rel="L939" class="lines-code chroma"><code class="code-inner"><span class="cm">	 * Manually configure instead of calling XftMatchFont
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L940" data-line-number="940"></span></td>
							
							<td rel="L940" class="lines-code chroma"><code class="code-inner"><span class="cm">	 * so that we can use the configured pattern for
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L941" data-line-number="941"></span></td>
							
							<td rel="L941" class="lines-code chroma"><code class="code-inner"><span class="cm">	 * &#34;missing glyph&#34; lookups.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L942" data-line-number="942"></span></td>
							
							<td rel="L942" class="lines-code chroma"><code class="code-inner"><span class="cm">	 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L943" data-line-number="943"></span></td>
							
							<td rel="L943" class="lines-code chroma"><code class="code-inner">	<span class="n">configured</span> <span class="o">=</span> <span class="nf">FcPatternDuplicate</span><span class="p">(</span><span class="n">pattern</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L944" data-line-number="944"></span></td>
							
							<td rel="L944" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">configured</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L945" data-line-number="945"></span></td>
							
							<td rel="L945" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L946" data-line-number="946"></span></td>
							
							<td rel="L946" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L947" data-line-number="947"></span></td>
							
							<td rel="L947" class="lines-code chroma"><code class="code-inner">	<span class="nf">FcConfigSubstitute</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span> <span class="n">configured</span><span class="p">,</span> <span class="n">FcMatchPattern</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L948" data-line-number="948"></span></td>
							
							<td rel="L948" class="lines-code chroma"><code class="code-inner">	<span class="nf">XftDefaultSubstitute</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">scr</span><span class="p">,</span> <span class="n">configured</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L949" data-line-number="949"></span></td>
							
							<td rel="L949" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L950" data-line-number="950"></span></td>
							
							<td rel="L950" class="lines-code chroma"><code class="code-inner">	<span class="n">match</span> <span class="o">=</span> <span class="nf">FcFontMatch</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span> <span class="n">configured</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">result</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L951" data-line-number="951"></span></td>
							
							<td rel="L951" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">match</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L952" data-line-number="952"></span></td>
							
							<td rel="L952" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternDestroy</span><span class="p">(</span><span class="n">configured</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L953" data-line-number="953"></span></td>
							
							<td rel="L953" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L954" data-line-number="954"></span></td>
							
							<td rel="L954" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L955" data-line-number="955"></span></td>
							
							<td rel="L955" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L956" data-line-number="956"></span></td>
							
							<td rel="L956" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">match</span> <span class="o">=</span> <span class="nf">XftFontOpenPattern</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">match</span><span class="p">)</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L957" data-line-number="957"></span></td>
							
							<td rel="L957" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternDestroy</span><span class="p">(</span><span class="n">configured</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L958" data-line-number="958"></span></td>
							
							<td rel="L958" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternDestroy</span><span class="p">(</span><span class="n">match</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L959" data-line-number="959"></span></td>
							
							<td rel="L959" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L960" data-line-number="960"></span></td>
							
							<td rel="L960" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L961" data-line-number="961"></span></td>
							
							<td rel="L961" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L962" data-line-number="962"></span></td>
							
							<td rel="L962" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="p">(</span><span class="nf">XftPatternGetInteger</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">slant</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">wantattr</span><span class="p">)</span> <span class="o">=</span><span class="o">=</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L963" data-line-number="963"></span></td>
							
							<td rel="L963" class="lines-code chroma"><code class="code-inner">	    <span class="n">XftResultMatch</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L964" data-line-number="964"></span></td>
							
							<td rel="L964" class="lines-code chroma"><code class="code-inner">		<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L965" data-line-number="965"></span></td>
							
							<td rel="L965" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * Check if xft was unable to find a font with the appropriate
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L966" data-line-number="966"></span></td>
							
							<td rel="L966" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * slant but gave us one anyway. Try to mitigate.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L967" data-line-number="967"></span></td>
							
							<td rel="L967" class="lines-code chroma"><code class="code-inner"><span class="cm">		 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L968" data-line-number="968"></span></td>
							
							<td rel="L968" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="p">(</span><span class="nf">XftPatternGetInteger</span><span class="p">(</span><span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">match</span><span class="o">-</span><span class="o">&gt;</span><span class="n">pattern</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">slant</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L969" data-line-number="969"></span></td>
							
							<td rel="L969" class="lines-code chroma"><code class="code-inner">		    <span class="o">&amp;</span><span class="n">haveattr</span><span class="p">)</span> <span class="o">!</span><span class="o">=</span> <span class="n">XftResultMatch</span><span class="p">)</span> <span class="o">|</span><span class="o">|</span> <span class="n">haveattr</span> <span class="o">&lt;</span> <span class="n">wantattr</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L970" data-line-number="970"></span></td>
							
							<td rel="L970" class="lines-code chroma"><code class="code-inner">			<span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">badslant</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L971" data-line-number="971"></span></td>
							
							<td rel="L971" class="lines-code chroma"><code class="code-inner">			<span class="nf">fputs</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">font slant does not match</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">stderr</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L972" data-line-number="972"></span></td>
							
							<td rel="L972" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L973" data-line-number="973"></span></td>
							
							<td rel="L973" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L974" data-line-number="974"></span></td>
							
							<td rel="L974" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L975" data-line-number="975"></span></td>
							
							<td rel="L975" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="p">(</span><span class="nf">XftPatternGetInteger</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">weight</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">wantattr</span><span class="p">)</span> <span class="o">=</span><span class="o">=</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L976" data-line-number="976"></span></td>
							
							<td rel="L976" class="lines-code chroma"><code class="code-inner">	    <span class="n">XftResultMatch</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L977" data-line-number="977"></span></td>
							
							<td rel="L977" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="p">(</span><span class="nf">XftPatternGetInteger</span><span class="p">(</span><span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">match</span><span class="o">-</span><span class="o">&gt;</span><span class="n">pattern</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">weight</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L978" data-line-number="978"></span></td>
							
							<td rel="L978" class="lines-code chroma"><code class="code-inner">		    <span class="o">&amp;</span><span class="n">haveattr</span><span class="p">)</span> <span class="o">!</span><span class="o">=</span> <span class="n">XftResultMatch</span><span class="p">)</span> <span class="o">|</span><span class="o">|</span> <span class="n">haveattr</span> <span class="o">!</span><span class="o">=</span> <span class="n">wantattr</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L979" data-line-number="979"></span></td>
							
							<td rel="L979" class="lines-code chroma"><code class="code-inner">			<span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">badweight</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L980" data-line-number="980"></span></td>
							
							<td rel="L980" class="lines-code chroma"><code class="code-inner">			<span class="nf">fputs</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">font weight does not match</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">stderr</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L981" data-line-number="981"></span></td>
							
							<td rel="L981" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L982" data-line-number="982"></span></td>
							
							<td rel="L982" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L983" data-line-number="983"></span></td>
							
							<td rel="L983" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L984" data-line-number="984"></span></td>
							
							<td rel="L984" class="lines-code chroma"><code class="code-inner">	<span class="nf">XftTextExtentsUtf8</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">match</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L985" data-line-number="985"></span></td>
							
							<td rel="L985" class="lines-code chroma"><code class="code-inner">		<span class="p">(</span><span class="k">const</span> <span class="n">FcChar8</span> <span class="o">*</span><span class="p">)</span> <span class="n">ascii_printable</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L986" data-line-number="986"></span></td>
							
							<td rel="L986" class="lines-code chroma"><code class="code-inner">		<span class="nf">strlen</span><span class="p">(</span><span class="n">ascii_printable</span><span class="p">)</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">extents</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L987" data-line-number="987"></span></td>
							
							<td rel="L987" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L988" data-line-number="988"></span></td>
							
							<td rel="L988" class="lines-code chroma"><code class="code-inner">	<span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">set</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L989" data-line-number="989"></span></td>
							
							<td rel="L989" class="lines-code chroma"><code class="code-inner">	<span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">pattern</span> <span class="o">=</span> <span class="n">configured</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L990" data-line-number="990"></span></td>
							
							<td rel="L990" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L991" data-line-number="991"></span></td>
							
							<td rel="L991" class="lines-code chroma"><code class="code-inner">	<span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">ascent</span> <span class="o">=</span> <span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">match</span><span class="o">-</span><span class="o">&gt;</span><span class="n">ascent</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L992" data-line-number="992"></span></td>
							
							<td rel="L992" class="lines-code chroma"><code class="code-inner">	<span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">descent</span> <span class="o">=</span> <span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">match</span><span class="o">-</span><span class="o">&gt;</span><span class="n">descent</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L993" data-line-number="993"></span></td>
							
							<td rel="L993" class="lines-code chroma"><code class="code-inner">	<span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">lbearing</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L994" data-line-number="994"></span></td>
							
							<td rel="L994" class="lines-code chroma"><code class="code-inner">	<span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">rbearing</span> <span class="o">=</span> <span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">match</span><span class="o">-</span><span class="o">&gt;</span><span class="n">max_advance_width</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L995" data-line-number="995"></span></td>
							
							<td rel="L995" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L996" data-line-number="996"></span></td>
							
							<td rel="L996" class="lines-code chroma"><code class="code-inner">	<span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">height</span> <span class="o">=</span> <span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">ascent</span> <span class="o">+</span> <span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">descent</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L997" data-line-number="997"></span></td>
							
							<td rel="L997" class="lines-code chroma"><code class="code-inner">	<span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">width</span> <span class="o">=</span> <span class="nf">DIVCEIL</span><span class="p">(</span><span class="n">extents</span><span class="p">.</span><span class="n">xOff</span><span class="p">,</span> <span class="nf">strlen</span><span class="p">(</span><span class="n">ascii_printable</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L998" data-line-number="998"></span></td>
							
							<td rel="L998" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L999" data-line-number="999"></span></td>
							
							<td rel="L999" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1000" data-line-number="1000"></span></td>
							
							<td rel="L1000" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1001" data-line-number="1001"></span></td>
							
							<td rel="L1001" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1002" data-line-number="1002"></span></td>
							
							<td rel="L1002" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1003" data-line-number="1003"></span></td>
							
							<td rel="L1003" class="lines-code chroma"><code class="code-inner"><span class="nf">xloadfonts</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">fontstr</span><span class="p">,</span> <span class="kt">double</span> <span class="n">fontsize</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1004" data-line-number="1004"></span></td>
							
							<td rel="L1004" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1005" data-line-number="1005"></span></td>
							
							<td rel="L1005" class="lines-code chroma"><code class="code-inner">	<span class="n">FcPattern</span> <span class="o">*</span><span class="n">pattern</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1006" data-line-number="1006"></span></td>
							
							<td rel="L1006" class="lines-code chroma"><code class="code-inner">	<span class="kt">double</span> <span class="n">fontval</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1007" data-line-number="1007"></span></td>
							
							<td rel="L1007" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1008" data-line-number="1008"></span></td>
							
							<td rel="L1008" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">fontstr</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span><span class="o">=</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">-</span><span class="sc">&#39;</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1009" data-line-number="1009"></span></td>
							
							<td rel="L1009" class="lines-code chroma"><code class="code-inner">		<span class="n">pattern</span> <span class="o">=</span> <span class="nf">XftXlfdParse</span><span class="p">(</span><span class="n">fontstr</span><span class="p">,</span> <span class="n">False</span><span class="p">,</span> <span class="n">False</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1010" data-line-number="1010"></span></td>
							
							<td rel="L1010" class="lines-code chroma"><code class="code-inner">	<span class="k">else</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1011" data-line-number="1011"></span></td>
							
							<td rel="L1011" class="lines-code chroma"><code class="code-inner">		<span class="n">pattern</span> <span class="o">=</span> <span class="nf">FcNameParse</span><span class="p">(</span><span class="p">(</span><span class="k">const</span> <span class="n">FcChar8</span> <span class="o">*</span><span class="p">)</span><span class="n">fontstr</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1012" data-line-number="1012"></span></td>
							
							<td rel="L1012" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1013" data-line-number="1013"></span></td>
							
							<td rel="L1013" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">pattern</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1014" data-line-number="1014"></span></td>
							
							<td rel="L1014" class="lines-code chroma"><code class="code-inner">		<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">can&#39;t open font %s</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">fontstr</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1015" data-line-number="1015"></span></td>
							
							<td rel="L1015" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1016" data-line-number="1016"></span></td>
							
							<td rel="L1016" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">fontsize</span> <span class="o">&gt;</span> <span class="mi">1</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1017" data-line-number="1017"></span></td>
							
							<td rel="L1017" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternDel</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_PIXEL_SIZE</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1018" data-line-number="1018"></span></td>
							
							<td rel="L1018" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternDel</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_SIZE</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1019" data-line-number="1019"></span></td>
							
							<td rel="L1019" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternAddDouble</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_PIXEL_SIZE</span><span class="p">,</span> <span class="p">(</span><span class="kt">double</span><span class="p">)</span><span class="n">fontsize</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1020" data-line-number="1020"></span></td>
							
							<td rel="L1020" class="lines-code chroma"><code class="code-inner">		<span class="n">usedfontsize</span> <span class="o">=</span> <span class="n">fontsize</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1021" data-line-number="1021"></span></td>
							
							<td rel="L1021" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1022" data-line-number="1022"></span></td>
							
							<td rel="L1022" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">FcPatternGetDouble</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_PIXEL_SIZE</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">fontval</span><span class="p">)</span> <span class="o">=</span><span class="o">=</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1023" data-line-number="1023"></span></td>
							
							<td rel="L1023" class="lines-code chroma"><code class="code-inner">				<span class="n">FcResultMatch</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1024" data-line-number="1024"></span></td>
							
							<td rel="L1024" class="lines-code chroma"><code class="code-inner">			<span class="n">usedfontsize</span> <span class="o">=</span> <span class="n">fontval</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1025" data-line-number="1025"></span></td>
							
							<td rel="L1025" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="nf">FcPatternGetDouble</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_SIZE</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">fontval</span><span class="p">)</span> <span class="o">=</span><span class="o">=</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1026" data-line-number="1026"></span></td>
							
							<td rel="L1026" class="lines-code chroma"><code class="code-inner">				<span class="n">FcResultMatch</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1027" data-line-number="1027"></span></td>
							
							<td rel="L1027" class="lines-code chroma"><code class="code-inner">			<span class="n">usedfontsize</span> <span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1028" data-line-number="1028"></span></td>
							
							<td rel="L1028" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1029" data-line-number="1029"></span></td>
							
							<td rel="L1029" class="lines-code chroma"><code class="code-inner">			<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1030" data-line-number="1030"></span></td>
							
							<td rel="L1030" class="lines-code chroma"><code class="code-inner"><span class="cm">			 * Default font size is 12, if none given. This is to
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1031" data-line-number="1031"></span></td>
							
							<td rel="L1031" class="lines-code chroma"><code class="code-inner"><span class="cm">			 * have a known usedfontsize value.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1032" data-line-number="1032"></span></td>
							
							<td rel="L1032" class="lines-code chroma"><code class="code-inner"><span class="cm">			 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1033" data-line-number="1033"></span></td>
							
							<td rel="L1033" class="lines-code chroma"><code class="code-inner">			<span class="nf">FcPatternAddDouble</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_PIXEL_SIZE</span><span class="p">,</span> <span class="mi">12</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1034" data-line-number="1034"></span></td>
							
							<td rel="L1034" class="lines-code chroma"><code class="code-inner">			<span class="n">usedfontsize</span> <span class="o">=</span> <span class="mi">12</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1035" data-line-number="1035"></span></td>
							
							<td rel="L1035" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1036" data-line-number="1036"></span></td>
							
							<td rel="L1036" class="lines-code chroma"><code class="code-inner">		<span class="n">defaultfontsize</span> <span class="o">=</span> <span class="n">usedfontsize</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1037" data-line-number="1037"></span></td>
							
							<td rel="L1037" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1038" data-line-number="1038"></span></td>
							
							<td rel="L1038" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1039" data-line-number="1039"></span></td>
							
							<td rel="L1039" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">xloadfont</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">font</span><span class="p">,</span> <span class="n">pattern</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1040" data-line-number="1040"></span></td>
							
							<td rel="L1040" class="lines-code chroma"><code class="code-inner">		<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">can&#39;t open font %s</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">fontstr</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1041" data-line-number="1041"></span></td>
							
							<td rel="L1041" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1042" data-line-number="1042"></span></td>
							
							<td rel="L1042" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">usedfontsize</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1043" data-line-number="1043"></span></td>
							
							<td rel="L1043" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternGetDouble</span><span class="p">(</span><span class="n">dc</span><span class="p">.</span><span class="n">font</span><span class="p">.</span><span class="n">match</span><span class="o">-</span><span class="o">&gt;</span><span class="n">pattern</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1044" data-line-number="1044"></span></td>
							
							<td rel="L1044" class="lines-code chroma"><code class="code-inner">		                   <span class="n">FC_PIXEL_SIZE</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">fontval</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1045" data-line-number="1045"></span></td>
							
							<td rel="L1045" class="lines-code chroma"><code class="code-inner">		<span class="n">usedfontsize</span> <span class="o">=</span> <span class="n">fontval</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1046" data-line-number="1046"></span></td>
							
							<td rel="L1046" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">fontsize</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1047" data-line-number="1047"></span></td>
							
							<td rel="L1047" class="lines-code chroma"><code class="code-inner">			<span class="n">defaultfontsize</span> <span class="o">=</span> <span class="n">fontval</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1048" data-line-number="1048"></span></td>
							
							<td rel="L1048" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1049" data-line-number="1049"></span></td>
							
							<td rel="L1049" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1050" data-line-number="1050"></span></td>
							
							<td rel="L1050" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Setting character width and height. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1051" data-line-number="1051"></span></td>
							
							<td rel="L1051" class="lines-code chroma"><code class="code-inner">	<span class="n">win</span><span class="p">.</span><span class="n">cw</span> <span class="o">=</span> <span class="nf">ceilf</span><span class="p">(</span><span class="n">dc</span><span class="p">.</span><span class="n">font</span><span class="p">.</span><span class="n">width</span> <span class="o">*</span> <span class="n">cwscale</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1052" data-line-number="1052"></span></td>
							
							<td rel="L1052" class="lines-code chroma"><code class="code-inner">	<span class="n">win</span><span class="p">.</span><span class="n">ch</span> <span class="o">=</span> <span class="nf">ceilf</span><span class="p">(</span><span class="n">dc</span><span class="p">.</span><span class="n">font</span><span class="p">.</span><span class="n">height</span> <span class="o">*</span> <span class="n">chscale</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1053" data-line-number="1053"></span></td>
							
							<td rel="L1053" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1054" data-line-number="1054"></span></td>
							
							<td rel="L1054" class="lines-code chroma"><code class="code-inner">	<span class="nf">FcPatternDel</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_SLANT</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1055" data-line-number="1055"></span></td>
							
							<td rel="L1055" class="lines-code chroma"><code class="code-inner">	<span class="nf">FcPatternAddInteger</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_SLANT</span><span class="p">,</span> <span class="n">FC_SLANT_ITALIC</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1056" data-line-number="1056"></span></td>
							
							<td rel="L1056" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">xloadfont</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">ifont</span><span class="p">,</span> <span class="n">pattern</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1057" data-line-number="1057"></span></td>
							
							<td rel="L1057" class="lines-code chroma"><code class="code-inner">		<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">can&#39;t open font %s</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">fontstr</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1058" data-line-number="1058"></span></td>
							
							<td rel="L1058" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1059" data-line-number="1059"></span></td>
							
							<td rel="L1059" class="lines-code chroma"><code class="code-inner">	<span class="nf">FcPatternDel</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_WEIGHT</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1060" data-line-number="1060"></span></td>
							
							<td rel="L1060" class="lines-code chroma"><code class="code-inner">	<span class="nf">FcPatternAddInteger</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_WEIGHT</span><span class="p">,</span> <span class="n">FC_WEIGHT_BOLD</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1061" data-line-number="1061"></span></td>
							
							<td rel="L1061" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">xloadfont</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">ibfont</span><span class="p">,</span> <span class="n">pattern</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1062" data-line-number="1062"></span></td>
							
							<td rel="L1062" class="lines-code chroma"><code class="code-inner">		<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">can&#39;t open font %s</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">fontstr</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1063" data-line-number="1063"></span></td>
							
							<td rel="L1063" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1064" data-line-number="1064"></span></td>
							
							<td rel="L1064" class="lines-code chroma"><code class="code-inner">	<span class="nf">FcPatternDel</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_SLANT</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1065" data-line-number="1065"></span></td>
							
							<td rel="L1065" class="lines-code chroma"><code class="code-inner">	<span class="nf">FcPatternAddInteger</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_SLANT</span><span class="p">,</span> <span class="n">FC_SLANT_ROMAN</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1066" data-line-number="1066"></span></td>
							
							<td rel="L1066" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">xloadfont</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">bfont</span><span class="p">,</span> <span class="n">pattern</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1067" data-line-number="1067"></span></td>
							
							<td rel="L1067" class="lines-code chroma"><code class="code-inner">		<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">can&#39;t open font %s</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">fontstr</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1068" data-line-number="1068"></span></td>
							
							<td rel="L1068" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1069" data-line-number="1069"></span></td>
							
							<td rel="L1069" class="lines-code chroma"><code class="code-inner">	<span class="nf">FcPatternDestroy</span><span class="p">(</span><span class="n">pattern</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1070" data-line-number="1070"></span></td>
							
							<td rel="L1070" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1071" data-line-number="1071"></span></td>
							
							<td rel="L1071" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1072" data-line-number="1072"></span></td>
							
							<td rel="L1072" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1073" data-line-number="1073"></span></td>
							
							<td rel="L1073" class="lines-code chroma"><code class="code-inner"><span class="nf">xloadsparefont</span><span class="p">(</span><span class="n">FcPattern</span> <span class="o">*</span><span class="n">pattern</span><span class="p">,</span> <span class="kt">int</span> <span class="n">flags</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1074" data-line-number="1074"></span></td>
							
							<td rel="L1074" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1075" data-line-number="1075"></span></td>
							
							<td rel="L1075" class="lines-code chroma"><code class="code-inner">	<span class="n">FcPattern</span> <span class="o">*</span><span class="n">match</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1076" data-line-number="1076"></span></td>
							
							<td rel="L1076" class="lines-code chroma"><code class="code-inner">	<span class="n">FcResult</span> <span class="n">result</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1077" data-line-number="1077"></span></td>
							
							<td rel="L1077" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1078" data-line-number="1078"></span></td>
							
							<td rel="L1078" class="lines-code chroma"><code class="code-inner">	<span class="n">match</span> <span class="o">=</span> <span class="nf">FcFontMatch</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span> <span class="n">pattern</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">result</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1079" data-line-number="1079"></span></td>
							
							<td rel="L1079" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">match</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1080" data-line-number="1080"></span></td>
							
							<td rel="L1080" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1081" data-line-number="1081"></span></td>
							
							<td rel="L1081" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1082" data-line-number="1082"></span></td>
							
							<td rel="L1082" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1083" data-line-number="1083"></span></td>
							
							<td rel="L1083" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">frc</span><span class="p">[</span><span class="n">frclen</span><span class="p">]</span><span class="p">.</span><span class="n">font</span> <span class="o">=</span> <span class="nf">XftFontOpenPattern</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">match</span><span class="p">)</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1084" data-line-number="1084"></span></td>
							
							<td rel="L1084" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternDestroy</span><span class="p">(</span><span class="n">match</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1085" data-line-number="1085"></span></td>
							
							<td rel="L1085" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1086" data-line-number="1086"></span></td>
							
							<td rel="L1086" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1087" data-line-number="1087"></span></td>
							
							<td rel="L1087" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1088" data-line-number="1088"></span></td>
							
							<td rel="L1088" class="lines-code chroma"><code class="code-inner">	<span class="n">frc</span><span class="p">[</span><span class="n">frclen</span><span class="p">]</span><span class="p">.</span><span class="n">flags</span> <span class="o">=</span> <span class="n">flags</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1089" data-line-number="1089"></span></td>
							
							<td rel="L1089" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Believe U+0000 glyph will present in each default font */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1090" data-line-number="1090"></span></td>
							
							<td rel="L1090" class="lines-code chroma"><code class="code-inner">	<span class="n">frc</span><span class="p">[</span><span class="n">frclen</span><span class="p">]</span><span class="p">.</span><span class="n">unicodep</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1091" data-line-number="1091"></span></td>
							
							<td rel="L1091" class="lines-code chroma"><code class="code-inner">	<span class="n">frclen</span><span class="o">+</span><span class="o">+</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1092" data-line-number="1092"></span></td>
							
							<td rel="L1092" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1093" data-line-number="1093"></span></td>
							
							<td rel="L1093" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1094" data-line-number="1094"></span></td>
							
							<td rel="L1094" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1095" data-line-number="1095"></span></td>
							
							<td rel="L1095" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1096" data-line-number="1096"></span></td>
							
							<td rel="L1096" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1097" data-line-number="1097"></span></td>
							
							<td rel="L1097" class="lines-code chroma"><code class="code-inner"><span class="nf">xloadsparefonts</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1098" data-line-number="1098"></span></td>
							
							<td rel="L1098" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1099" data-line-number="1099"></span></td>
							
							<td rel="L1099" class="lines-code chroma"><code class="code-inner">	<span class="n">FcPattern</span> <span class="o">*</span><span class="n">pattern</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1100" data-line-number="1100"></span></td>
							
							<td rel="L1100" class="lines-code chroma"><code class="code-inner">	<span class="kt">double</span> <span class="n">sizeshift</span><span class="p">,</span> <span class="n">fontval</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1101" data-line-number="1101"></span></td>
							
							<td rel="L1101" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">fc</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1102" data-line-number="1102"></span></td>
							
							<td rel="L1102" class="lines-code chroma"><code class="code-inner">	<span class="kt">char</span> <span class="o">*</span><span class="o">*</span><span class="n">fp</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1103" data-line-number="1103"></span></td>
							
							<td rel="L1103" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1104" data-line-number="1104"></span></td>
							
							<td rel="L1104" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">frclen</span> <span class="o">!</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1105" data-line-number="1105"></span></td>
							
							<td rel="L1105" class="lines-code chroma"><code class="code-inner">		<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">can&#39;t embed spare fonts. cache isn&#39;t empty</span><span class="s">&#34;</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1106" data-line-number="1106"></span></td>
							
							<td rel="L1106" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1107" data-line-number="1107"></span></td>
							
							<td rel="L1107" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Calculate count of spare fonts */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1108" data-line-number="1108"></span></td>
							
							<td rel="L1108" class="lines-code chroma"><code class="code-inner">	<span class="n">fc</span> <span class="o">=</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">font2</span><span class="p">)</span> <span class="o">/</span> <span class="k">sizeof</span><span class="p">(</span><span class="o">*</span><span class="n">font2</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1109" data-line-number="1109"></span></td>
							
							<td rel="L1109" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">fc</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1110" data-line-number="1110"></span></td>
							
							<td rel="L1110" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1111" data-line-number="1111"></span></td>
							
							<td rel="L1111" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1112" data-line-number="1112"></span></td>
							
							<td rel="L1112" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Allocate memory for cache entries. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1113" data-line-number="1113"></span></td>
							
							<td rel="L1113" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">frccap</span> <span class="o">&lt;</span> <span class="mi">4</span> <span class="o">*</span> <span class="n">fc</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1114" data-line-number="1114"></span></td>
							
							<td rel="L1114" class="lines-code chroma"><code class="code-inner">		<span class="n">frccap</span> <span class="o">+</span><span class="o">=</span> <span class="mi">4</span> <span class="o">*</span> <span class="n">fc</span> <span class="o">-</span> <span class="n">frccap</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1115" data-line-number="1115"></span></td>
							
							<td rel="L1115" class="lines-code chroma"><code class="code-inner">		<span class="n">frc</span> <span class="o">=</span> <span class="nf">xrealloc</span><span class="p">(</span><span class="n">frc</span><span class="p">,</span> <span class="n">frccap</span> <span class="o">*</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">Fontcache</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1116" data-line-number="1116"></span></td>
							
							<td rel="L1116" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1117" data-line-number="1117"></span></td>
							
							<td rel="L1117" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1118" data-line-number="1118"></span></td>
							
							<td rel="L1118" class="lines-code chroma"><code class="code-inner">	<span class="k">for</span> <span class="p">(</span><span class="n">fp</span> <span class="o">=</span> <span class="n">font2</span><span class="p">;</span> <span class="n">fp</span> <span class="o">-</span> <span class="n">font2</span> <span class="o">&lt;</span> <span class="n">fc</span><span class="p">;</span> <span class="o">+</span><span class="o">+</span><span class="n">fp</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1119" data-line-number="1119"></span></td>
							
							<td rel="L1119" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1120" data-line-number="1120"></span></td>
							
							<td rel="L1120" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="o">*</span><span class="o">*</span><span class="n">fp</span> <span class="o">=</span><span class="o">=</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">-</span><span class="sc">&#39;</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1121" data-line-number="1121"></span></td>
							
							<td rel="L1121" class="lines-code chroma"><code class="code-inner">			<span class="n">pattern</span> <span class="o">=</span> <span class="nf">XftXlfdParse</span><span class="p">(</span><span class="o">*</span><span class="n">fp</span><span class="p">,</span> <span class="n">False</span><span class="p">,</span> <span class="n">False</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1122" data-line-number="1122"></span></td>
							
							<td rel="L1122" class="lines-code chroma"><code class="code-inner">		<span class="k">else</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1123" data-line-number="1123"></span></td>
							
							<td rel="L1123" class="lines-code chroma"><code class="code-inner">			<span class="n">pattern</span> <span class="o">=</span> <span class="nf">FcNameParse</span><span class="p">(</span><span class="p">(</span><span class="n">FcChar8</span> <span class="o">*</span><span class="p">)</span><span class="o">*</span><span class="n">fp</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1124" data-line-number="1124"></span></td>
							
							<td rel="L1124" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1125" data-line-number="1125"></span></td>
							
							<td rel="L1125" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">pattern</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1126" data-line-number="1126"></span></td>
							
							<td rel="L1126" class="lines-code chroma"><code class="code-inner">			<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">can&#39;t open spare font %s</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="o">*</span><span class="n">fp</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1127" data-line-number="1127"></span></td>
							
							<td rel="L1127" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1128" data-line-number="1128"></span></td>
							
							<td rel="L1128" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">defaultfontsize</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1129" data-line-number="1129"></span></td>
							
							<td rel="L1129" class="lines-code chroma"><code class="code-inner">			<span class="n">sizeshift</span> <span class="o">=</span> <span class="n">usedfontsize</span> <span class="o">-</span> <span class="n">defaultfontsize</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1130" data-line-number="1130"></span></td>
							
							<td rel="L1130" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="n">sizeshift</span> <span class="o">!</span><span class="o">=</span> <span class="mi">0</span> <span class="o">&amp;</span><span class="o">&amp;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1131" data-line-number="1131"></span></td>
							
							<td rel="L1131" class="lines-code chroma"><code class="code-inner">					<span class="nf">FcPatternGetDouble</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_PIXEL_SIZE</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">fontval</span><span class="p">)</span> <span class="o">=</span><span class="o">=</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1132" data-line-number="1132"></span></td>
							
							<td rel="L1132" class="lines-code chroma"><code class="code-inner">					<span class="n">FcResultMatch</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1133" data-line-number="1133"></span></td>
							
							<td rel="L1133" class="lines-code chroma"><code class="code-inner">				<span class="n">fontval</span> <span class="o">+</span><span class="o">=</span> <span class="n">sizeshift</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1134" data-line-number="1134"></span></td>
							
							<td rel="L1134" class="lines-code chroma"><code class="code-inner">				<span class="nf">FcPatternDel</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_PIXEL_SIZE</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1135" data-line-number="1135"></span></td>
							
							<td rel="L1135" class="lines-code chroma"><code class="code-inner">				<span class="nf">FcPatternDel</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_SIZE</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1136" data-line-number="1136"></span></td>
							
							<td rel="L1136" class="lines-code chroma"><code class="code-inner">				<span class="nf">FcPatternAddDouble</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_PIXEL_SIZE</span><span class="p">,</span> <span class="n">fontval</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1137" data-line-number="1137"></span></td>
							
							<td rel="L1137" class="lines-code chroma"><code class="code-inner">			<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1138" data-line-number="1138"></span></td>
							
							<td rel="L1138" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1139" data-line-number="1139"></span></td>
							
							<td rel="L1139" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1140" data-line-number="1140"></span></td>
							
							<td rel="L1140" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternAddBool</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_SCALABLE</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1141" data-line-number="1141"></span></td>
							
							<td rel="L1141" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1142" data-line-number="1142"></span></td>
							
							<td rel="L1142" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcConfigSubstitute</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span> <span class="n">pattern</span><span class="p">,</span> <span class="n">FcMatchPattern</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1143" data-line-number="1143"></span></td>
							
							<td rel="L1143" class="lines-code chroma"><code class="code-inner">		<span class="nf">XftDefaultSubstitute</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">scr</span><span class="p">,</span> <span class="n">pattern</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1144" data-line-number="1144"></span></td>
							
							<td rel="L1144" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1145" data-line-number="1145"></span></td>
							
							<td rel="L1145" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">xloadsparefont</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FRC_NORMAL</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1146" data-line-number="1146"></span></td>
							
							<td rel="L1146" class="lines-code chroma"><code class="code-inner">			<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">can&#39;t open spare font %s</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="o">*</span><span class="n">fp</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1147" data-line-number="1147"></span></td>
							
							<td rel="L1147" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1148" data-line-number="1148"></span></td>
							
							<td rel="L1148" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternDel</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_SLANT</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1149" data-line-number="1149"></span></td>
							
							<td rel="L1149" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternAddInteger</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_SLANT</span><span class="p">,</span> <span class="n">FC_SLANT_ITALIC</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1150" data-line-number="1150"></span></td>
							
							<td rel="L1150" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">xloadsparefont</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FRC_ITALIC</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1151" data-line-number="1151"></span></td>
							
							<td rel="L1151" class="lines-code chroma"><code class="code-inner">			<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">can&#39;t open spare font %s</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="o">*</span><span class="n">fp</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1152" data-line-number="1152"></span></td>
							
							<td rel="L1152" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1153" data-line-number="1153"></span></td>
							
							<td rel="L1153" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternDel</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_WEIGHT</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1154" data-line-number="1154"></span></td>
							
							<td rel="L1154" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternAddInteger</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_WEIGHT</span><span class="p">,</span> <span class="n">FC_WEIGHT_BOLD</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1155" data-line-number="1155"></span></td>
							
							<td rel="L1155" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">xloadsparefont</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FRC_ITALICBOLD</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1156" data-line-number="1156"></span></td>
							
							<td rel="L1156" class="lines-code chroma"><code class="code-inner">			<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">can&#39;t open spare font %s</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="o">*</span><span class="n">fp</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1157" data-line-number="1157"></span></td>
							
							<td rel="L1157" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1158" data-line-number="1158"></span></td>
							
							<td rel="L1158" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternDel</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_SLANT</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1159" data-line-number="1159"></span></td>
							
							<td rel="L1159" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternAddInteger</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FC_SLANT</span><span class="p">,</span> <span class="n">FC_SLANT_ROMAN</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1160" data-line-number="1160"></span></td>
							
							<td rel="L1160" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">xloadsparefont</span><span class="p">(</span><span class="n">pattern</span><span class="p">,</span> <span class="n">FRC_BOLD</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1161" data-line-number="1161"></span></td>
							
							<td rel="L1161" class="lines-code chroma"><code class="code-inner">			<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">can&#39;t open spare font %s</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="o">*</span><span class="n">fp</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1162" data-line-number="1162"></span></td>
							
							<td rel="L1162" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1163" data-line-number="1163"></span></td>
							
							<td rel="L1163" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcPatternDestroy</span><span class="p">(</span><span class="n">pattern</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1164" data-line-number="1164"></span></td>
							
							<td rel="L1164" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1165" data-line-number="1165"></span></td>
							
							<td rel="L1165" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1166" data-line-number="1166"></span></td>
							
							<td rel="L1166" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1167" data-line-number="1167"></span></td>
							
							<td rel="L1167" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1168" data-line-number="1168"></span></td>
							
							<td rel="L1168" class="lines-code chroma"><code class="code-inner"><span class="nf">xunloadfont</span><span class="p">(</span><span class="n">Font</span> <span class="o">*</span><span class="n">f</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1169" data-line-number="1169"></span></td>
							
							<td rel="L1169" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1170" data-line-number="1170"></span></td>
							
							<td rel="L1170" class="lines-code chroma"><code class="code-inner">	<span class="nf">XftFontClose</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">match</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1171" data-line-number="1171"></span></td>
							
							<td rel="L1171" class="lines-code chroma"><code class="code-inner">	<span class="nf">FcPatternDestroy</span><span class="p">(</span><span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">pattern</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1172" data-line-number="1172"></span></td>
							
							<td rel="L1172" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">set</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1173" data-line-number="1173"></span></td>
							
							<td rel="L1173" class="lines-code chroma"><code class="code-inner">		<span class="nf">FcFontSetDestroy</span><span class="p">(</span><span class="n">f</span><span class="o">-</span><span class="o">&gt;</span><span class="n">set</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1174" data-line-number="1174"></span></td>
							
							<td rel="L1174" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1175" data-line-number="1175"></span></td>
							
							<td rel="L1175" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1176" data-line-number="1176"></span></td>
							
							<td rel="L1176" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1177" data-line-number="1177"></span></td>
							
							<td rel="L1177" class="lines-code chroma"><code class="code-inner"><span class="nf">xunloadfonts</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1178" data-line-number="1178"></span></td>
							
							<td rel="L1178" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1179" data-line-number="1179"></span></td>
							
							<td rel="L1179" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Free the loaded fonts in the font cache.  */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1180" data-line-number="1180"></span></td>
							
							<td rel="L1180" class="lines-code chroma"><code class="code-inner">	<span class="k">while</span> <span class="p">(</span><span class="n">frclen</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1181" data-line-number="1181"></span></td>
							
							<td rel="L1181" class="lines-code chroma"><code class="code-inner">		<span class="nf">XftFontClose</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">frc</span><span class="p">[</span><span class="o">-</span><span class="o">-</span><span class="n">frclen</span><span class="p">]</span><span class="p">.</span><span class="n">font</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1182" data-line-number="1182"></span></td>
							
							<td rel="L1182" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1183" data-line-number="1183"></span></td>
							
							<td rel="L1183" class="lines-code chroma"><code class="code-inner">	<span class="nf">xunloadfont</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">font</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1184" data-line-number="1184"></span></td>
							
							<td rel="L1184" class="lines-code chroma"><code class="code-inner">	<span class="nf">xunloadfont</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">bfont</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1185" data-line-number="1185"></span></td>
							
							<td rel="L1185" class="lines-code chroma"><code class="code-inner">	<span class="nf">xunloadfont</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">ifont</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1186" data-line-number="1186"></span></td>
							
							<td rel="L1186" class="lines-code chroma"><code class="code-inner">	<span class="nf">xunloadfont</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">ibfont</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1187" data-line-number="1187"></span></td>
							
							<td rel="L1187" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1188" data-line-number="1188"></span></td>
							
							<td rel="L1188" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1189" data-line-number="1189"></span></td>
							
							<td rel="L1189" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1190" data-line-number="1190"></span></td>
							
							<td rel="L1190" class="lines-code chroma"><code class="code-inner"><span class="nf">ximopen</span><span class="p">(</span><span class="n">Display</span> <span class="o">*</span><span class="n">dpy</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1191" data-line-number="1191"></span></td>
							
							<td rel="L1191" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1192" data-line-number="1192"></span></td>
							
							<td rel="L1192" class="lines-code chroma"><code class="code-inner">	<span class="n">XIMCallback</span> <span class="n">imdestroy</span> <span class="o">=</span> <span class="p">{</span> <span class="p">.</span><span class="n">client_data</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">,</span> <span class="p">.</span><span class="n">callback</span> <span class="o">=</span> <span class="n">ximdestroy</span> <span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1193" data-line-number="1193"></span></td>
							
							<td rel="L1193" class="lines-code chroma"><code class="code-inner">	<span class="n">XICCallback</span> <span class="n">icdestroy</span> <span class="o">=</span> <span class="p">{</span> <span class="p">.</span><span class="n">client_data</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">,</span> <span class="p">.</span><span class="n">callback</span> <span class="o">=</span> <span class="n">xicdestroy</span> <span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1194" data-line-number="1194"></span></td>
							
							<td rel="L1194" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1195" data-line-number="1195"></span></td>
							
							<td rel="L1195" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xim</span> <span class="o">=</span> <span class="nf">XOpenIM</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1196" data-line-number="1196"></span></td>
							
							<td rel="L1196" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xim</span> <span class="o">=</span><span class="o">=</span> <span class="nb">NULL</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1197" data-line-number="1197"></span></td>
							
							<td rel="L1197" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1198" data-line-number="1198"></span></td>
							
							<td rel="L1198" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1199" data-line-number="1199"></span></td>
							
							<td rel="L1199" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">XSetIMValues</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xim</span><span class="p">,</span> <span class="n">XNDestroyCallback</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">imdestroy</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1200" data-line-number="1200"></span></td>
							
							<td rel="L1200" class="lines-code chroma"><code class="code-inner">		<span class="nf">fprintf</span><span class="p">(</span><span class="n">stderr</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">XSetIMValues: </span><span class="s">&#34;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1201" data-line-number="1201"></span></td>
							
							<td rel="L1201" class="lines-code chroma"><code class="code-inner">		                <span class="sa"></span><span class="s">&#34;</span><span class="s">Could not set XNDestroyCallback.</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1202" data-line-number="1202"></span></td>
							
							<td rel="L1202" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1203" data-line-number="1203"></span></td>
							
							<td rel="L1203" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">spotlist</span> <span class="o">=</span> <span class="nf">XVaCreateNestedList</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="n">XNSpotLocation</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">spot</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1204" data-line-number="1204"></span></td>
							
							<td rel="L1204" class="lines-code chroma"><code class="code-inner">	                                      <span class="nb">NULL</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1205" data-line-number="1205"></span></td>
							
							<td rel="L1205" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1206" data-line-number="1206"></span></td>
							
							<td rel="L1206" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xic</span> <span class="o">=</span><span class="o">=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1207" data-line-number="1207"></span></td>
							
							<td rel="L1207" class="lines-code chroma"><code class="code-inner">		<span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xic</span> <span class="o">=</span> <span class="nf">XCreateIC</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xim</span><span class="p">,</span> <span class="n">XNInputStyle</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1208" data-line-number="1208"></span></td>
							
							<td rel="L1208" class="lines-code chroma"><code class="code-inner">		                       <span class="n">XIMPreeditNothing</span> <span class="o">|</span> <span class="n">XIMStatusNothing</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1209" data-line-number="1209"></span></td>
							
							<td rel="L1209" class="lines-code chroma"><code class="code-inner">		                       <span class="n">XNClientWindow</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1210" data-line-number="1210"></span></td>
							
							<td rel="L1210" class="lines-code chroma"><code class="code-inner">		                       <span class="n">XNDestroyCallback</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">icdestroy</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1211" data-line-number="1211"></span></td>
							
							<td rel="L1211" class="lines-code chroma"><code class="code-inner">		                       <span class="nb">NULL</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1212" data-line-number="1212"></span></td>
							
							<td rel="L1212" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1213" data-line-number="1213"></span></td>
							
							<td rel="L1213" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xic</span> <span class="o">=</span><span class="o">=</span> <span class="nb">NULL</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1214" data-line-number="1214"></span></td>
							
							<td rel="L1214" class="lines-code chroma"><code class="code-inner">		<span class="nf">fprintf</span><span class="p">(</span><span class="n">stderr</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">XCreateIC: Could not create input context.</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1215" data-line-number="1215"></span></td>
							
							<td rel="L1215" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1216" data-line-number="1216"></span></td>
							
							<td rel="L1216" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1217" data-line-number="1217"></span></td>
							
							<td rel="L1217" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1218" data-line-number="1218"></span></td>
							
							<td rel="L1218" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1219" data-line-number="1219"></span></td>
							
							<td rel="L1219" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1220" data-line-number="1220"></span></td>
							
							<td rel="L1220" class="lines-code chroma"><code class="code-inner"><span class="nf">ximinstantiate</span><span class="p">(</span><span class="n">Display</span> <span class="o">*</span><span class="n">dpy</span><span class="p">,</span> <span class="n">XPointer</span> <span class="n">client</span><span class="p">,</span> <span class="n">XPointer</span> <span class="n">call</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1221" data-line-number="1221"></span></td>
							
							<td rel="L1221" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1222" data-line-number="1222"></span></td>
							
							<td rel="L1222" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">ximopen</span><span class="p">(</span><span class="n">dpy</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1223" data-line-number="1223"></span></td>
							
							<td rel="L1223" class="lines-code chroma"><code class="code-inner">		<span class="nf">XUnregisterIMInstantiateCallback</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1224" data-line-number="1224"></span></td>
							
							<td rel="L1224" class="lines-code chroma"><code class="code-inner">		                                 <span class="n">ximinstantiate</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1225" data-line-number="1225"></span></td>
							
							<td rel="L1225" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1226" data-line-number="1226"></span></td>
							
							<td rel="L1226" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1227" data-line-number="1227"></span></td>
							
							<td rel="L1227" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1228" data-line-number="1228"></span></td>
							
							<td rel="L1228" class="lines-code chroma"><code class="code-inner"><span class="nf">ximdestroy</span><span class="p">(</span><span class="n">XIM</span> <span class="n">xim</span><span class="p">,</span> <span class="n">XPointer</span> <span class="n">client</span><span class="p">,</span> <span class="n">XPointer</span> <span class="n">call</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1229" data-line-number="1229"></span></td>
							
							<td rel="L1229" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1230" data-line-number="1230"></span></td>
							
							<td rel="L1230" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xim</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1231" data-line-number="1231"></span></td>
							
							<td rel="L1231" class="lines-code chroma"><code class="code-inner">	<span class="nf">XRegisterIMInstantiateCallback</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1232" data-line-number="1232"></span></td>
							
							<td rel="L1232" class="lines-code chroma"><code class="code-inner">	                               <span class="n">ximinstantiate</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1233" data-line-number="1233"></span></td>
							
							<td rel="L1233" class="lines-code chroma"><code class="code-inner">	<span class="nf">XFree</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">spotlist</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1234" data-line-number="1234"></span></td>
							
							<td rel="L1234" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1235" data-line-number="1235"></span></td>
							
							<td rel="L1235" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1236" data-line-number="1236"></span></td>
							
							<td rel="L1236" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1237" data-line-number="1237"></span></td>
							
							<td rel="L1237" class="lines-code chroma"><code class="code-inner"><span class="nf">xicdestroy</span><span class="p">(</span><span class="n">XIC</span> <span class="n">xim</span><span class="p">,</span> <span class="n">XPointer</span> <span class="n">client</span><span class="p">,</span> <span class="n">XPointer</span> <span class="n">call</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1238" data-line-number="1238"></span></td>
							
							<td rel="L1238" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1239" data-line-number="1239"></span></td>
							
							<td rel="L1239" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xic</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1240" data-line-number="1240"></span></td>
							
							<td rel="L1240" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1241" data-line-number="1241"></span></td>
							
							<td rel="L1241" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1242" data-line-number="1242"></span></td>
							
							<td rel="L1242" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1243" data-line-number="1243"></span></td>
							
							<td rel="L1243" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1244" data-line-number="1244"></span></td>
							
							<td rel="L1244" class="lines-code chroma"><code class="code-inner"><span class="nf">xinit</span><span class="p">(</span><span class="kt">int</span> <span class="n">cols</span><span class="p">,</span> <span class="kt">int</span> <span class="n">rows</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1245" data-line-number="1245"></span></td>
							
							<td rel="L1245" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1246" data-line-number="1246"></span></td>
							
							<td rel="L1246" class="lines-code chroma"><code class="code-inner">	<span class="n">XGCValues</span> <span class="n">gcvalues</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1247" data-line-number="1247"></span></td>
							
							<td rel="L1247" class="lines-code chroma"><code class="code-inner">	<span class="n">Cursor</span> <span class="n">cursor</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1248" data-line-number="1248"></span></td>
							
							<td rel="L1248" class="lines-code chroma"><code class="code-inner">	<span class="n">Window</span> <span class="n">parent</span><span class="p">,</span> <span class="n">root</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1249" data-line-number="1249"></span></td>
							
							<td rel="L1249" class="lines-code chroma"><code class="code-inner">	<span class="kt">pid_t</span> <span class="n">thispid</span> <span class="o">=</span> <span class="nf">getpid</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1250" data-line-number="1250"></span></td>
							
							<td rel="L1250" class="lines-code chroma"><code class="code-inner">	<span class="n">XColor</span> <span class="n">xmousefg</span><span class="p">,</span> <span class="n">xmousebg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1251" data-line-number="1251"></span></td>
							
							<td rel="L1251" class="lines-code chroma"><code class="code-inner">	<span class="n">XWindowAttributes</span> <span class="n">attr</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1252" data-line-number="1252"></span></td>
							
							<td rel="L1252" class="lines-code chroma"><code class="code-inner">	<span class="n">XVisualInfo</span> <span class="n">vis</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1253" data-line-number="1253"></span></td>
							
							<td rel="L1253" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1254" data-line-number="1254"></span></td>
							
							<td rel="L1254" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span> <span class="o">=</span> <span class="nf">XOpenDisplay</span><span class="p">(</span><span class="nb">NULL</span><span class="p">)</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1255" data-line-number="1255"></span></td>
							
							<td rel="L1255" class="lines-code chroma"><code class="code-inner">		<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">can&#39;t open display</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1256" data-line-number="1256"></span></td>
							
							<td rel="L1256" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">scr</span> <span class="o">=</span> <span class="nf">XDefaultScreen</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1257" data-line-number="1257"></span></td>
							
							<td rel="L1257" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1258" data-line-number="1258"></span></td>
							
							<td rel="L1258" class="lines-code chroma"><code class="code-inner">	<span class="n">root</span> <span class="o">=</span> <span class="nf">XRootWindow</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">scr</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1259" data-line-number="1259"></span></td>
							
							<td rel="L1259" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">opt_embed</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="p">(</span><span class="n">parent</span> <span class="o">=</span> <span class="nf">strtol</span><span class="p">(</span><span class="n">opt_embed</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">)</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1260" data-line-number="1260"></span></td>
							
							<td rel="L1260" class="lines-code chroma"><code class="code-inner">		<span class="n">parent</span> <span class="o">=</span> <span class="n">root</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1261" data-line-number="1261"></span></td>
							
							<td rel="L1261" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1262" data-line-number="1262"></span></td>
							
							<td rel="L1262" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">XMatchVisualInfo</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">scr</span><span class="p">,</span> <span class="mi">32</span><span class="p">,</span> <span class="n">TrueColor</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">vis</span><span class="p">)</span> <span class="o">!</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1263" data-line-number="1263"></span></td>
							
							<td rel="L1263" class="lines-code chroma"><code class="code-inner">		<span class="n">xw</span><span class="p">.</span><span class="n">vis</span> <span class="o">=</span> <span class="n">vis</span><span class="p">.</span><span class="n">visual</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1264" data-line-number="1264"></span></td>
							
							<td rel="L1264" class="lines-code chroma"><code class="code-inner">		<span class="n">xw</span><span class="p">.</span><span class="n">depth</span> <span class="o">=</span> <span class="n">vis</span><span class="p">.</span><span class="n">depth</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1265" data-line-number="1265"></span></td>
							
							<td rel="L1265" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1266" data-line-number="1266"></span></td>
							
							<td rel="L1266" class="lines-code chroma"><code class="code-inner">		<span class="nf">XGetWindowAttributes</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">parent</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">attr</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1267" data-line-number="1267"></span></td>
							
							<td rel="L1267" class="lines-code chroma"><code class="code-inner">		<span class="n">xw</span><span class="p">.</span><span class="n">vis</span> <span class="o">=</span> <span class="n">attr</span><span class="p">.</span><span class="n">visual</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1268" data-line-number="1268"></span></td>
							
							<td rel="L1268" class="lines-code chroma"><code class="code-inner">		<span class="n">xw</span><span class="p">.</span><span class="n">depth</span> <span class="o">=</span> <span class="n">attr</span><span class="p">.</span><span class="n">depth</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1269" data-line-number="1269"></span></td>
							
							<td rel="L1269" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1270" data-line-number="1270"></span></td>
							
							<td rel="L1270" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1271" data-line-number="1271"></span></td>
							
							<td rel="L1271" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* font */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1272" data-line-number="1272"></span></td>
							
							<td rel="L1272" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="nf">FcInit</span><span class="p">(</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1273" data-line-number="1273"></span></td>
							
							<td rel="L1273" class="lines-code chroma"><code class="code-inner">		<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">could not init fontconfig.</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1274" data-line-number="1274"></span></td>
							
							<td rel="L1274" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1275" data-line-number="1275"></span></td>
							
							<td rel="L1275" class="lines-code chroma"><code class="code-inner">	<span class="n">usedfont</span> <span class="o">=</span> <span class="p">(</span><span class="n">opt_font</span> <span class="o">=</span><span class="o">=</span> <span class="nb">NULL</span><span class="p">)</span><span class="o">?</span> <span class="nl">font</span> <span class="p">:</span> <span class="n">opt_font</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1276" data-line-number="1276"></span></td>
							
							<td rel="L1276" class="lines-code chroma"><code class="code-inner">	<span class="nf">xloadfonts</span><span class="p">(</span><span class="n">usedfont</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1277" data-line-number="1277"></span></td>
							
							<td rel="L1277" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1278" data-line-number="1278"></span></td>
							
							<td rel="L1278" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* spare fonts */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1279" data-line-number="1279"></span></td>
							
							<td rel="L1279" class="lines-code chroma"><code class="code-inner">	<span class="nf">xloadsparefonts</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1280" data-line-number="1280"></span></td>
							
							<td rel="L1280" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1281" data-line-number="1281"></span></td>
							
							<td rel="L1281" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* colors */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1282" data-line-number="1282"></span></td>
							
							<td rel="L1282" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">cmap</span> <span class="o">=</span> <span class="nf">XCreateColormap</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">parent</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">vis</span><span class="p">,</span> <span class="n">None</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1283" data-line-number="1283"></span></td>
							
							<td rel="L1283" class="lines-code chroma"><code class="code-inner">	<span class="nf">xloadcols</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1284" data-line-number="1284"></span></td>
							
							<td rel="L1284" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1285" data-line-number="1285"></span></td>
							
							<td rel="L1285" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* adjust fixed window geometry */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1286" data-line-number="1286"></span></td>
							
							<td rel="L1286" class="lines-code chroma"><code class="code-inner">	<span class="n">win</span><span class="p">.</span><span class="n">w</span> <span class="o">=</span> <span class="mi">2</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">hborderpx</span> <span class="o">+</span> <span class="mi">2</span> <span class="o">*</span> <span class="n">borderpx</span> <span class="o">+</span> <span class="n">cols</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1287" data-line-number="1287"></span></td>
							
							<td rel="L1287" class="lines-code chroma"><code class="code-inner">	<span class="n">win</span><span class="p">.</span><span class="n">h</span> <span class="o">=</span> <span class="mi">2</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span> <span class="o">+</span> <span class="mi">2</span> <span class="o">*</span> <span class="n">borderpx</span> <span class="o">+</span> <span class="n">rows</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1288" data-line-number="1288"></span></td>
							
							<td rel="L1288" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">gm</span> <span class="o">&amp;</span> <span class="n">XNegative</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1289" data-line-number="1289"></span></td>
							
							<td rel="L1289" class="lines-code chroma"><code class="code-inner">		<span class="n">xw</span><span class="p">.</span><span class="n">l</span> <span class="o">+</span><span class="o">=</span> <span class="nf">DisplayWidth</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">scr</span><span class="p">)</span> <span class="o">-</span> <span class="n">win</span><span class="p">.</span><span class="n">w</span> <span class="o">-</span> <span class="mi">2</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1290" data-line-number="1290"></span></td>
							
							<td rel="L1290" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">gm</span> <span class="o">&amp;</span> <span class="n">YNegative</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1291" data-line-number="1291"></span></td>
							
							<td rel="L1291" class="lines-code chroma"><code class="code-inner">		<span class="n">xw</span><span class="p">.</span><span class="n">t</span> <span class="o">+</span><span class="o">=</span> <span class="nf">DisplayHeight</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">scr</span><span class="p">)</span> <span class="o">-</span> <span class="n">win</span><span class="p">.</span><span class="n">h</span> <span class="o">-</span> <span class="mi">2</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1292" data-line-number="1292"></span></td>
							
							<td rel="L1292" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1293" data-line-number="1293"></span></td>
							
							<td rel="L1293" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Events */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1294" data-line-number="1294"></span></td>
							
							<td rel="L1294" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">attrs</span><span class="p">.</span><span class="n">background_pixel</span> <span class="o">=</span> <span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultbg</span><span class="p">]</span><span class="p">.</span><span class="n">pixel</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1295" data-line-number="1295"></span></td>
							
							<td rel="L1295" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">attrs</span><span class="p">.</span><span class="n">border_pixel</span> <span class="o">=</span> <span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultbg</span><span class="p">]</span><span class="p">.</span><span class="n">pixel</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1296" data-line-number="1296"></span></td>
							
							<td rel="L1296" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">attrs</span><span class="p">.</span><span class="n">bit_gravity</span> <span class="o">=</span> <span class="n">NorthWestGravity</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1297" data-line-number="1297"></span></td>
							
							<td rel="L1297" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">attrs</span><span class="p">.</span><span class="n">event_mask</span> <span class="o">=</span> <span class="n">FocusChangeMask</span> <span class="o">|</span> <span class="n">KeyPressMask</span> <span class="o">|</span> <span class="n">KeyReleaseMask</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1298" data-line-number="1298"></span></td>
							
							<td rel="L1298" class="lines-code chroma"><code class="code-inner">		<span class="o">|</span> <span class="n">ExposureMask</span> <span class="o">|</span> <span class="n">VisibilityChangeMask</span> <span class="o">|</span> <span class="n">StructureNotifyMask</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1299" data-line-number="1299"></span></td>
							
							<td rel="L1299" class="lines-code chroma"><code class="code-inner">		<span class="o">|</span> <span class="n">ButtonMotionMask</span> <span class="o">|</span> <span class="n">ButtonPressMask</span> <span class="o">|</span> <span class="n">ButtonReleaseMask</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1300" data-line-number="1300"></span></td>
							
							<td rel="L1300" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">attrs</span><span class="p">.</span><span class="n">colormap</span> <span class="o">=</span> <span class="n">xw</span><span class="p">.</span><span class="n">cmap</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1301" data-line-number="1301"></span></td>
							
							<td rel="L1301" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1302" data-line-number="1302"></span></td>
							
							<td rel="L1302" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">win</span> <span class="o">=</span> <span class="nf">XCreateWindow</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">parent</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">l</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">t</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1303" data-line-number="1303"></span></td>
							
							<td rel="L1303" class="lines-code chroma"><code class="code-inner">			<span class="n">win</span><span class="p">.</span><span class="n">w</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">h</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">depth</span><span class="p">,</span> <span class="n">InputOutput</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1304" data-line-number="1304"></span></td>
							
							<td rel="L1304" class="lines-code chroma"><code class="code-inner">			<span class="n">xw</span><span class="p">.</span><span class="n">vis</span><span class="p">,</span> <span class="n">CWBackPixel</span> <span class="o">|</span> <span class="n">CWBorderPixel</span> <span class="o">|</span> <span class="n">CWBitGravity</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1305" data-line-number="1305"></span></td>
							
							<td rel="L1305" class="lines-code chroma"><code class="code-inner">			<span class="o">|</span> <span class="n">CWEventMask</span> <span class="o">|</span> <span class="n">CWColormap</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">xw</span><span class="p">.</span><span class="n">attrs</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1306" data-line-number="1306"></span></td>
							
							<td rel="L1306" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">parent</span> <span class="o">!</span><span class="o">=</span> <span class="n">root</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1307" data-line-number="1307"></span></td>
							
							<td rel="L1307" class="lines-code chroma"><code class="code-inner">		<span class="nf">XReparentWindow</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">parent</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">l</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">t</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1308" data-line-number="1308"></span></td>
							
							<td rel="L1308" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1309" data-line-number="1309"></span></td>
							
							<td rel="L1309" class="lines-code chroma"><code class="code-inner">	<span class="nf">memset</span><span class="p">(</span><span class="o">&amp;</span><span class="n">gcvalues</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">gcvalues</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1310" data-line-number="1310"></span></td>
							
							<td rel="L1310" class="lines-code chroma"><code class="code-inner">	<span class="n">gcvalues</span><span class="p">.</span><span class="n">graphics_exposures</span> <span class="o">=</span> <span class="n">False</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1311" data-line-number="1311"></span></td>
							
							<td rel="L1311" class="lines-code chroma"><code class="code-inner">	<span class="n">dc</span><span class="p">.</span><span class="n">gc</span> <span class="o">=</span> <span class="nf">XCreateGC</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">GCGraphicsExposures</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1312" data-line-number="1312"></span></td>
							
							<td rel="L1312" class="lines-code chroma"><code class="code-inner">			<span class="o">&amp;</span><span class="n">gcvalues</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1313" data-line-number="1313"></span></td>
							
							<td rel="L1313" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">buf</span> <span class="o">=</span> <span class="nf">XCreatePixmap</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">w</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">h</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1314" data-line-number="1314"></span></td>
							
							<td rel="L1314" class="lines-code chroma"><code class="code-inner">			<span class="n">xw</span><span class="p">.</span><span class="n">depth</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1315" data-line-number="1315"></span></td>
							
							<td rel="L1315" class="lines-code chroma"><code class="code-inner">	<span class="nf">XSetForeground</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">dc</span><span class="p">.</span><span class="n">gc</span><span class="p">,</span> <span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultbg</span><span class="p">]</span><span class="p">.</span><span class="n">pixel</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1316" data-line-number="1316"></span></td>
							
							<td rel="L1316" class="lines-code chroma"><code class="code-inner">	<span class="nf">XFillRectangle</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">buf</span><span class="p">,</span> <span class="n">dc</span><span class="p">.</span><span class="n">gc</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">w</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">h</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1317" data-line-number="1317"></span></td>
							
							<td rel="L1317" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1318" data-line-number="1318"></span></td>
							
							<td rel="L1318" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* font spec buffer */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1319" data-line-number="1319"></span></td>
							
							<td rel="L1319" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">specbuf</span> <span class="o">=</span> <span class="nf">xmalloc</span><span class="p">(</span><span class="n">cols</span> <span class="o">*</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">GlyphFontSpec</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1320" data-line-number="1320"></span></td>
							
							<td rel="L1320" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1321" data-line-number="1321"></span></td>
							
							<td rel="L1321" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Xft rendering context */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1322" data-line-number="1322"></span></td>
							
							<td rel="L1322" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">draw</span> <span class="o">=</span> <span class="nf">XftDrawCreate</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">buf</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">vis</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">cmap</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1323" data-line-number="1323"></span></td>
							
							<td rel="L1323" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1324" data-line-number="1324"></span></td>
							
							<td rel="L1324" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* input methods */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1325" data-line-number="1325"></span></td>
							
							<td rel="L1325" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="nf">ximopen</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1326" data-line-number="1326"></span></td>
							
							<td rel="L1326" class="lines-code chroma"><code class="code-inner">		<span class="nf">XRegisterIMInstantiateCallback</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1327" data-line-number="1327"></span></td>
							
							<td rel="L1327" class="lines-code chroma"><code class="code-inner">	                                       <span class="n">ximinstantiate</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1328" data-line-number="1328"></span></td>
							
							<td rel="L1328" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1329" data-line-number="1329"></span></td>
							
							<td rel="L1329" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1330" data-line-number="1330"></span></td>
							
							<td rel="L1330" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* white cursor, black outline */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1331" data-line-number="1331"></span></td>
							
							<td rel="L1331" class="lines-code chroma"><code class="code-inner">	<span class="n">cursor</span> <span class="o">=</span> <span class="nf">XCreateFontCursor</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">mouseshape</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1332" data-line-number="1332"></span></td>
							
							<td rel="L1332" class="lines-code chroma"><code class="code-inner">	<span class="nf">XDefineCursor</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">cursor</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1333" data-line-number="1333"></span></td>
							
							<td rel="L1333" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1334" data-line-number="1334"></span></td>
							
							<td rel="L1334" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">XParseColor</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">cmap</span><span class="p">,</span> <span class="n">colorname</span><span class="p">[</span><span class="n">mousefg</span><span class="p">]</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">xmousefg</span><span class="p">)</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1335" data-line-number="1335"></span></td>
							
							<td rel="L1335" class="lines-code chroma"><code class="code-inner">		<span class="n">xmousefg</span><span class="p">.</span><span class="n">red</span>   <span class="o">=</span> <span class="mh">0xffff</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1336" data-line-number="1336"></span></td>
							
							<td rel="L1336" class="lines-code chroma"><code class="code-inner">		<span class="n">xmousefg</span><span class="p">.</span><span class="n">green</span> <span class="o">=</span> <span class="mh">0xffff</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1337" data-line-number="1337"></span></td>
							
							<td rel="L1337" class="lines-code chroma"><code class="code-inner">		<span class="n">xmousefg</span><span class="p">.</span><span class="n">blue</span>  <span class="o">=</span> <span class="mh">0xffff</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1338" data-line-number="1338"></span></td>
							
							<td rel="L1338" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1339" data-line-number="1339"></span></td>
							
							<td rel="L1339" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1340" data-line-number="1340"></span></td>
							
							<td rel="L1340" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">XParseColor</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">cmap</span><span class="p">,</span> <span class="n">colorname</span><span class="p">[</span><span class="n">mousebg</span><span class="p">]</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">xmousebg</span><span class="p">)</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1341" data-line-number="1341"></span></td>
							
							<td rel="L1341" class="lines-code chroma"><code class="code-inner">		<span class="n">xmousebg</span><span class="p">.</span><span class="n">red</span>   <span class="o">=</span> <span class="mh">0x0000</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1342" data-line-number="1342"></span></td>
							
							<td rel="L1342" class="lines-code chroma"><code class="code-inner">		<span class="n">xmousebg</span><span class="p">.</span><span class="n">green</span> <span class="o">=</span> <span class="mh">0x0000</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1343" data-line-number="1343"></span></td>
							
							<td rel="L1343" class="lines-code chroma"><code class="code-inner">		<span class="n">xmousebg</span><span class="p">.</span><span class="n">blue</span>  <span class="o">=</span> <span class="mh">0x0000</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1344" data-line-number="1344"></span></td>
							
							<td rel="L1344" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1345" data-line-number="1345"></span></td>
							
							<td rel="L1345" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1346" data-line-number="1346"></span></td>
							
							<td rel="L1346" class="lines-code chroma"><code class="code-inner">	<span class="nf">XRecolorCursor</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">cursor</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">xmousefg</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">xmousebg</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1347" data-line-number="1347"></span></td>
							
							<td rel="L1347" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1348" data-line-number="1348"></span></td>
							
							<td rel="L1348" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">xembed</span> <span class="o">=</span> <span class="nf">XInternAtom</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">_XEMBED</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">False</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1349" data-line-number="1349"></span></td>
							
							<td rel="L1349" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">wmdeletewin</span> <span class="o">=</span> <span class="nf">XInternAtom</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">WM_DELETE_WINDOW</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">False</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1350" data-line-number="1350"></span></td>
							
							<td rel="L1350" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">netwmname</span> <span class="o">=</span> <span class="nf">XInternAtom</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">_NET_WM_NAME</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">False</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1351" data-line-number="1351"></span></td>
							
							<td rel="L1351" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">netwmiconname</span> <span class="o">=</span> <span class="nf">XInternAtom</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">_NET_WM_ICON_NAME</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">False</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1352" data-line-number="1352"></span></td>
							
							<td rel="L1352" class="lines-code chroma"><code class="code-inner">	<span class="nf">XSetWMProtocols</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">xw</span><span class="p">.</span><span class="n">wmdeletewin</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1353" data-line-number="1353"></span></td>
							
							<td rel="L1353" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1354" data-line-number="1354"></span></td>
							
							<td rel="L1354" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">netwmpid</span> <span class="o">=</span> <span class="nf">XInternAtom</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">_NET_WM_PID</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">False</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1355" data-line-number="1355"></span></td>
							
							<td rel="L1355" class="lines-code chroma"><code class="code-inner">	<span class="nf">XChangeProperty</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">netwmpid</span><span class="p">,</span> <span class="n">XA_CARDINAL</span><span class="p">,</span> <span class="mi">32</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1356" data-line-number="1356"></span></td>
							
							<td rel="L1356" class="lines-code chroma"><code class="code-inner">			<span class="n">PropModeReplace</span><span class="p">,</span> <span class="p">(</span><span class="n">uchar</span> <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">thispid</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1357" data-line-number="1357"></span></td>
							
							<td rel="L1357" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1358" data-line-number="1358"></span></td>
							
							<td rel="L1358" class="lines-code chroma"><code class="code-inner">	<span class="n">win</span><span class="p">.</span><span class="n">mode</span> <span class="o">=</span> <span class="n">MODE_NUMLOCK</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1359" data-line-number="1359"></span></td>
							
							<td rel="L1359" class="lines-code chroma"><code class="code-inner">	<span class="nf">resettitle</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1360" data-line-number="1360"></span></td>
							
							<td rel="L1360" class="lines-code chroma"><code class="code-inner">	<span class="nf">xhints</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1361" data-line-number="1361"></span></td>
							
							<td rel="L1361" class="lines-code chroma"><code class="code-inner">	<span class="nf">XMapWindow</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1362" data-line-number="1362"></span></td>
							
							<td rel="L1362" class="lines-code chroma"><code class="code-inner">	<span class="nf">XSync</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">False</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1363" data-line-number="1363"></span></td>
							
							<td rel="L1363" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1364" data-line-number="1364"></span></td>
							
							<td rel="L1364" class="lines-code chroma"><code class="code-inner">	<span class="nf">clock_gettime</span><span class="p">(</span><span class="n">CLOCK_MONOTONIC</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">xsel</span><span class="p">.</span><span class="n">tclick1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1365" data-line-number="1365"></span></td>
							
							<td rel="L1365" class="lines-code chroma"><code class="code-inner">	<span class="nf">clock_gettime</span><span class="p">(</span><span class="n">CLOCK_MONOTONIC</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">xsel</span><span class="p">.</span><span class="n">tclick2</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1366" data-line-number="1366"></span></td>
							
							<td rel="L1366" class="lines-code chroma"><code class="code-inner">	<span class="n">xsel</span><span class="p">.</span><span class="n">primary</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1367" data-line-number="1367"></span></td>
							
							<td rel="L1367" class="lines-code chroma"><code class="code-inner">	<span class="n">xsel</span><span class="p">.</span><span class="n">clipboard</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1368" data-line-number="1368"></span></td>
							
							<td rel="L1368" class="lines-code chroma"><code class="code-inner">	<span class="n">xsel</span><span class="p">.</span><span class="n">xtarget</span> <span class="o">=</span> <span class="nf">XInternAtom</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">UTF8_STRING</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1369" data-line-number="1369"></span></td>
							
							<td rel="L1369" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">xsel</span><span class="p">.</span><span class="n">xtarget</span> <span class="o">=</span><span class="o">=</span> <span class="n">None</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1370" data-line-number="1370"></span></td>
							
							<td rel="L1370" class="lines-code chroma"><code class="code-inner">		<span class="n">xsel</span><span class="p">.</span><span class="n">xtarget</span> <span class="o">=</span> <span class="n">XA_STRING</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1371" data-line-number="1371"></span></td>
							
							<td rel="L1371" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1372" data-line-number="1372"></span></td>
							
							<td rel="L1372" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1373" data-line-number="1373"></span></td>
							
							<td rel="L1373" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1374" data-line-number="1374"></span></td>
							
							<td rel="L1374" class="lines-code chroma"><code class="code-inner"><span class="nf">xmakeglyphfontspecs</span><span class="p">(</span><span class="n">XftGlyphFontSpec</span> <span class="o">*</span><span class="n">specs</span><span class="p">,</span> <span class="k">const</span> <span class="n">Glyph</span> <span class="o">*</span><span class="n">glyphs</span><span class="p">,</span> <span class="kt">int</span> <span class="n">len</span><span class="p">,</span> <span class="kt">int</span> <span class="n">x</span><span class="p">,</span> <span class="kt">int</span> <span class="n">y</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1375" data-line-number="1375"></span></td>
							
							<td rel="L1375" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1376" data-line-number="1376"></span></td>
							
							<td rel="L1376" class="lines-code chroma"><code class="code-inner">	<span class="kt">float</span> <span class="n">winx</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">hborderpx</span> <span class="o">+</span> <span class="n">x</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">,</span> <span class="n">winy</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span> <span class="o">+</span> <span class="n">y</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">,</span> <span class="n">xp</span><span class="p">,</span> <span class="n">yp</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1377" data-line-number="1377"></span></td>
							
							<td rel="L1377" class="lines-code chroma"><code class="code-inner">	<span class="n">ushort</span> <span class="n">mode</span><span class="p">,</span> <span class="n">prevmode</span> <span class="o">=</span> <span class="n">USHRT_MAX</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1378" data-line-number="1378"></span></td>
							
							<td rel="L1378" class="lines-code chroma"><code class="code-inner">	<span class="n">Font</span> <span class="o">*</span><span class="n">font</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">font</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1379" data-line-number="1379"></span></td>
							
							<td rel="L1379" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">frcflags</span> <span class="o">=</span> <span class="n">FRC_NORMAL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1380" data-line-number="1380"></span></td>
							
							<td rel="L1380" class="lines-code chroma"><code class="code-inner">	<span class="kt">float</span> <span class="n">runewidth</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1381" data-line-number="1381"></span></td>
							
							<td rel="L1381" class="lines-code chroma"><code class="code-inner">	<span class="n">Rune</span> <span class="n">rune</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1382" data-line-number="1382"></span></td>
							
							<td rel="L1382" class="lines-code chroma"><code class="code-inner">	<span class="n">FT_UInt</span> <span class="n">glyphidx</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1383" data-line-number="1383"></span></td>
							
							<td rel="L1383" class="lines-code chroma"><code class="code-inner">	<span class="n">FcResult</span> <span class="n">fcres</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1384" data-line-number="1384"></span></td>
							
							<td rel="L1384" class="lines-code chroma"><code class="code-inner">	<span class="n">FcPattern</span> <span class="o">*</span><span class="n">fcpattern</span><span class="p">,</span> <span class="o">*</span><span class="n">fontpattern</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1385" data-line-number="1385"></span></td>
							
							<td rel="L1385" class="lines-code chroma"><code class="code-inner">	<span class="n">FcFontSet</span> <span class="o">*</span><span class="n">fcsets</span><span class="p">[</span><span class="p">]</span> <span class="o">=</span> <span class="p">{</span> <span class="nb">NULL</span> <span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1386" data-line-number="1386"></span></td>
							
							<td rel="L1386" class="lines-code chroma"><code class="code-inner">	<span class="n">FcCharSet</span> <span class="o">*</span><span class="n">fccharset</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1387" data-line-number="1387"></span></td>
							
							<td rel="L1387" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">i</span><span class="p">,</span> <span class="n">f</span><span class="p">,</span> <span class="n">numspecs</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1388" data-line-number="1388"></span></td>
							
							<td rel="L1388" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1389" data-line-number="1389"></span></td>
							
							<td rel="L1389" class="lines-code chroma"><code class="code-inner">	<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span> <span class="n">xp</span> <span class="o">=</span> <span class="n">winx</span><span class="p">,</span> <span class="n">yp</span> <span class="o">=</span> <span class="n">winy</span> <span class="o">+</span> <span class="n">font</span><span class="o">-</span><span class="o">&gt;</span><span class="n">ascent</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">len</span><span class="p">;</span> <span class="o">+</span><span class="o">+</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1390" data-line-number="1390"></span></td>
							
							<td rel="L1390" class="lines-code chroma"><code class="code-inner">		<span class="cm">/* Fetch rune and mode for current glyph. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1391" data-line-number="1391"></span></td>
							
							<td rel="L1391" class="lines-code chroma"><code class="code-inner">		<span class="n">rune</span> <span class="o">=</span> <span class="n">glyphs</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="p">.</span><span class="n">u</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1392" data-line-number="1392"></span></td>
							
							<td rel="L1392" class="lines-code chroma"><code class="code-inner">		<span class="n">mode</span> <span class="o">=</span> <span class="n">glyphs</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="p">.</span><span class="n">mode</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1393" data-line-number="1393"></span></td>
							
							<td rel="L1393" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1394" data-line-number="1394"></span></td>
							
							<td rel="L1394" class="lines-code chroma"><code class="code-inner">		<span class="cm">/* Skip dummy wide-character spacing. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1395" data-line-number="1395"></span></td>
							
							<td rel="L1395" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">mode</span> <span class="o">=</span><span class="o">=</span> <span class="n">ATTR_WDUMMY</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1396" data-line-number="1396"></span></td>
							
							<td rel="L1396" class="lines-code chroma"><code class="code-inner">			<span class="k">continue</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1397" data-line-number="1397"></span></td>
							
							<td rel="L1397" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1398" data-line-number="1398"></span></td>
							
							<td rel="L1398" class="lines-code chroma"><code class="code-inner">		<span class="cm">/* Determine font for glyph if different from previous glyph. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1399" data-line-number="1399"></span></td>
							
							<td rel="L1399" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">prevmode</span> <span class="o">!</span><span class="o">=</span> <span class="n">mode</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1400" data-line-number="1400"></span></td>
							
							<td rel="L1400" class="lines-code chroma"><code class="code-inner">			<span class="n">prevmode</span> <span class="o">=</span> <span class="n">mode</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1401" data-line-number="1401"></span></td>
							
							<td rel="L1401" class="lines-code chroma"><code class="code-inner">			<span class="n">font</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">font</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1402" data-line-number="1402"></span></td>
							
							<td rel="L1402" class="lines-code chroma"><code class="code-inner">			<span class="n">frcflags</span> <span class="o">=</span> <span class="n">FRC_NORMAL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1403" data-line-number="1403"></span></td>
							
							<td rel="L1403" class="lines-code chroma"><code class="code-inner">			<span class="n">runewidth</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span> <span class="o">*</span> <span class="p">(</span><span class="p">(</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_WIDE</span><span class="p">)</span> <span class="o">?</span> <span class="mf">2.0f</span> <span class="o">:</span> <span class="mf">1.0f</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1404" data-line-number="1404"></span></td>
							
							<td rel="L1404" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="p">(</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_ITALIC</span><span class="p">)</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="p">(</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_BOLD</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1405" data-line-number="1405"></span></td>
							
							<td rel="L1405" class="lines-code chroma"><code class="code-inner">				<span class="n">font</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">ibfont</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1406" data-line-number="1406"></span></td>
							
							<td rel="L1406" class="lines-code chroma"><code class="code-inner">				<span class="n">frcflags</span> <span class="o">=</span> <span class="n">FRC_ITALICBOLD</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1407" data-line-number="1407"></span></td>
							
							<td rel="L1407" class="lines-code chroma"><code class="code-inner">			<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_ITALIC</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1408" data-line-number="1408"></span></td>
							
							<td rel="L1408" class="lines-code chroma"><code class="code-inner">				<span class="n">font</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">ifont</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1409" data-line-number="1409"></span></td>
							
							<td rel="L1409" class="lines-code chroma"><code class="code-inner">				<span class="n">frcflags</span> <span class="o">=</span> <span class="n">FRC_ITALIC</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1410" data-line-number="1410"></span></td>
							
							<td rel="L1410" class="lines-code chroma"><code class="code-inner">			<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_BOLD</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1411" data-line-number="1411"></span></td>
							
							<td rel="L1411" class="lines-code chroma"><code class="code-inner">				<span class="n">font</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">bfont</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1412" data-line-number="1412"></span></td>
							
							<td rel="L1412" class="lines-code chroma"><code class="code-inner">				<span class="n">frcflags</span> <span class="o">=</span> <span class="n">FRC_BOLD</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1413" data-line-number="1413"></span></td>
							
							<td rel="L1413" class="lines-code chroma"><code class="code-inner">			<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1414" data-line-number="1414"></span></td>
							
							<td rel="L1414" class="lines-code chroma"><code class="code-inner">			<span class="n">yp</span> <span class="o">=</span> <span class="n">winy</span> <span class="o">+</span> <span class="n">font</span><span class="o">-</span><span class="o">&gt;</span><span class="n">ascent</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1415" data-line-number="1415"></span></td>
							
							<td rel="L1415" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1416" data-line-number="1416"></span></td>
							
							<td rel="L1416" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1417" data-line-number="1417"></span></td>
							
							<td rel="L1417" class="lines-code chroma"><code class="code-inner">		<span class="cm">/* Lookup character index with default font. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1418" data-line-number="1418"></span></td>
							
							<td rel="L1418" class="lines-code chroma"><code class="code-inner">		<span class="n">glyphidx</span> <span class="o">=</span> <span class="nf">XftCharIndex</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">font</span><span class="o">-</span><span class="o">&gt;</span><span class="n">match</span><span class="p">,</span> <span class="n">rune</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1419" data-line-number="1419"></span></td>
							
							<td rel="L1419" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">glyphidx</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1420" data-line-number="1420"></span></td>
							
							<td rel="L1420" class="lines-code chroma"><code class="code-inner">			<span class="n">specs</span><span class="p">[</span><span class="n">numspecs</span><span class="p">]</span><span class="p">.</span><span class="n">font</span> <span class="o">=</span> <span class="n">font</span><span class="o">-</span><span class="o">&gt;</span><span class="n">match</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1421" data-line-number="1421"></span></td>
							
							<td rel="L1421" class="lines-code chroma"><code class="code-inner">			<span class="n">specs</span><span class="p">[</span><span class="n">numspecs</span><span class="p">]</span><span class="p">.</span><span class="n">glyph</span> <span class="o">=</span> <span class="n">glyphidx</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1422" data-line-number="1422"></span></td>
							
							<td rel="L1422" class="lines-code chroma"><code class="code-inner">			<span class="n">specs</span><span class="p">[</span><span class="n">numspecs</span><span class="p">]</span><span class="p">.</span><span class="n">x</span> <span class="o">=</span> <span class="p">(</span><span class="kt">short</span><span class="p">)</span><span class="n">xp</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1423" data-line-number="1423"></span></td>
							
							<td rel="L1423" class="lines-code chroma"><code class="code-inner">			<span class="n">specs</span><span class="p">[</span><span class="n">numspecs</span><span class="p">]</span><span class="p">.</span><span class="n">y</span> <span class="o">=</span> <span class="p">(</span><span class="kt">short</span><span class="p">)</span><span class="n">yp</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1424" data-line-number="1424"></span></td>
							
							<td rel="L1424" class="lines-code chroma"><code class="code-inner">			<span class="n">xp</span> <span class="o">+</span><span class="o">=</span> <span class="n">runewidth</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1425" data-line-number="1425"></span></td>
							
							<td rel="L1425" class="lines-code chroma"><code class="code-inner">			<span class="n">numspecs</span><span class="o">+</span><span class="o">+</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1426" data-line-number="1426"></span></td>
							
							<td rel="L1426" class="lines-code chroma"><code class="code-inner">			<span class="k">continue</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1427" data-line-number="1427"></span></td>
							
							<td rel="L1427" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1428" data-line-number="1428"></span></td>
							
							<td rel="L1428" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1429" data-line-number="1429"></span></td>
							
							<td rel="L1429" class="lines-code chroma"><code class="code-inner">		<span class="cm">/* Fallback on font cache, search the font cache for match. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1430" data-line-number="1430"></span></td>
							
							<td rel="L1430" class="lines-code chroma"><code class="code-inner">		<span class="k">for</span> <span class="p">(</span><span class="n">f</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">f</span> <span class="o">&lt;</span> <span class="n">frclen</span><span class="p">;</span> <span class="n">f</span><span class="o">+</span><span class="o">+</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1431" data-line-number="1431"></span></td>
							
							<td rel="L1431" class="lines-code chroma"><code class="code-inner">			<span class="n">glyphidx</span> <span class="o">=</span> <span class="nf">XftCharIndex</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">frc</span><span class="p">[</span><span class="n">f</span><span class="p">]</span><span class="p">.</span><span class="n">font</span><span class="p">,</span> <span class="n">rune</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1432" data-line-number="1432"></span></td>
							
							<td rel="L1432" class="lines-code chroma"><code class="code-inner">			<span class="cm">/* Everything correct. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1433" data-line-number="1433"></span></td>
							
							<td rel="L1433" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="n">glyphidx</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">frc</span><span class="p">[</span><span class="n">f</span><span class="p">]</span><span class="p">.</span><span class="n">flags</span> <span class="o">=</span><span class="o">=</span> <span class="n">frcflags</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1434" data-line-number="1434"></span></td>
							
							<td rel="L1434" class="lines-code chroma"><code class="code-inner">				<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1435" data-line-number="1435"></span></td>
							
							<td rel="L1435" class="lines-code chroma"><code class="code-inner">			<span class="cm">/* We got a default font for a not found glyph. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1436" data-line-number="1436"></span></td>
							
							<td rel="L1436" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">glyphidx</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">frc</span><span class="p">[</span><span class="n">f</span><span class="p">]</span><span class="p">.</span><span class="n">flags</span> <span class="o">=</span><span class="o">=</span> <span class="n">frcflags</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1437" data-line-number="1437"></span></td>
							
							<td rel="L1437" class="lines-code chroma"><code class="code-inner">					<span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">frc</span><span class="p">[</span><span class="n">f</span><span class="p">]</span><span class="p">.</span><span class="n">unicodep</span> <span class="o">=</span><span class="o">=</span> <span class="n">rune</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1438" data-line-number="1438"></span></td>
							
							<td rel="L1438" class="lines-code chroma"><code class="code-inner">				<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1439" data-line-number="1439"></span></td>
							
							<td rel="L1439" class="lines-code chroma"><code class="code-inner">			<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1440" data-line-number="1440"></span></td>
							
							<td rel="L1440" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1441" data-line-number="1441"></span></td>
							
							<td rel="L1441" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1442" data-line-number="1442"></span></td>
							
							<td rel="L1442" class="lines-code chroma"><code class="code-inner">		<span class="cm">/* Nothing was found. Use fontconfig to find matching font. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1443" data-line-number="1443"></span></td>
							
							<td rel="L1443" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">f</span> <span class="o">&gt;</span><span class="o">=</span> <span class="n">frclen</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1444" data-line-number="1444"></span></td>
							
							<td rel="L1444" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">font</span><span class="o">-</span><span class="o">&gt;</span><span class="n">set</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1445" data-line-number="1445"></span></td>
							
							<td rel="L1445" class="lines-code chroma"><code class="code-inner">				<span class="n">font</span><span class="o">-</span><span class="o">&gt;</span><span class="n">set</span> <span class="o">=</span> <span class="nf">FcFontSort</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="n">font</span><span class="o">-</span><span class="o">&gt;</span><span class="n">pattern</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1446" data-line-number="1446"></span></td>
							
							<td rel="L1446" class="lines-code chroma"><code class="code-inner">				                       <span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">fcres</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1447" data-line-number="1447"></span></td>
							
							<td rel="L1447" class="lines-code chroma"><code class="code-inner">			<span class="n">fcsets</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="n">font</span><span class="o">-</span><span class="o">&gt;</span><span class="n">set</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1448" data-line-number="1448"></span></td>
							
							<td rel="L1448" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1449" data-line-number="1449"></span></td>
							
							<td rel="L1449" class="lines-code chroma"><code class="code-inner">			<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1450" data-line-number="1450"></span></td>
							
							<td rel="L1450" class="lines-code chroma"><code class="code-inner"><span class="cm">			 * Nothing was found in the cache. Now use
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1451" data-line-number="1451"></span></td>
							
							<td rel="L1451" class="lines-code chroma"><code class="code-inner"><span class="cm">			 * some dozen of Fontconfig calls to get the
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1452" data-line-number="1452"></span></td>
							
							<td rel="L1452" class="lines-code chroma"><code class="code-inner"><span class="cm">			 * font for one single character.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1453" data-line-number="1453"></span></td>
							
							<td rel="L1453" class="lines-code chroma"><code class="code-inner"><span class="cm">			 *
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1454" data-line-number="1454"></span></td>
							
							<td rel="L1454" class="lines-code chroma"><code class="code-inner"><span class="cm">			 * Xft and fontconfig are design failures.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1455" data-line-number="1455"></span></td>
							
							<td rel="L1455" class="lines-code chroma"><code class="code-inner"><span class="cm">			 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1456" data-line-number="1456"></span></td>
							
							<td rel="L1456" class="lines-code chroma"><code class="code-inner">			<span class="n">fcpattern</span> <span class="o">=</span> <span class="nf">FcPatternDuplicate</span><span class="p">(</span><span class="n">font</span><span class="o">-</span><span class="o">&gt;</span><span class="n">pattern</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1457" data-line-number="1457"></span></td>
							
							<td rel="L1457" class="lines-code chroma"><code class="code-inner">			<span class="n">fccharset</span> <span class="o">=</span> <span class="nf">FcCharSetCreate</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1458" data-line-number="1458"></span></td>
							
							<td rel="L1458" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1459" data-line-number="1459"></span></td>
							
							<td rel="L1459" class="lines-code chroma"><code class="code-inner">			<span class="nf">FcCharSetAddChar</span><span class="p">(</span><span class="n">fccharset</span><span class="p">,</span> <span class="n">rune</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1460" data-line-number="1460"></span></td>
							
							<td rel="L1460" class="lines-code chroma"><code class="code-inner">			<span class="nf">FcPatternAddCharSet</span><span class="p">(</span><span class="n">fcpattern</span><span class="p">,</span> <span class="n">FC_CHARSET</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1461" data-line-number="1461"></span></td>
							
							<td rel="L1461" class="lines-code chroma"><code class="code-inner">					<span class="n">fccharset</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1462" data-line-number="1462"></span></td>
							
							<td rel="L1462" class="lines-code chroma"><code class="code-inner">			<span class="nf">FcPatternAddBool</span><span class="p">(</span><span class="n">fcpattern</span><span class="p">,</span> <span class="n">FC_SCALABLE</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1463" data-line-number="1463"></span></td>
							
							<td rel="L1463" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1464" data-line-number="1464"></span></td>
							
							<td rel="L1464" class="lines-code chroma"><code class="code-inner">			<span class="nf">FcConfigSubstitute</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="n">fcpattern</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1465" data-line-number="1465"></span></td>
							
							<td rel="L1465" class="lines-code chroma"><code class="code-inner">					<span class="n">FcMatchPattern</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1466" data-line-number="1466"></span></td>
							
							<td rel="L1466" class="lines-code chroma"><code class="code-inner">			<span class="nf">FcDefaultSubstitute</span><span class="p">(</span><span class="n">fcpattern</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1467" data-line-number="1467"></span></td>
							
							<td rel="L1467" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1468" data-line-number="1468"></span></td>
							
							<td rel="L1468" class="lines-code chroma"><code class="code-inner">			<span class="n">fontpattern</span> <span class="o">=</span> <span class="nf">FcFontSetMatch</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="n">fcsets</span><span class="p">,</span> <span class="mi">1</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1469" data-line-number="1469"></span></td>
							
							<td rel="L1469" class="lines-code chroma"><code class="code-inner">					<span class="n">fcpattern</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">fcres</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1470" data-line-number="1470"></span></td>
							
							<td rel="L1470" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1471" data-line-number="1471"></span></td>
							
							<td rel="L1471" class="lines-code chroma"><code class="code-inner">			<span class="cm">/* Allocate memory for the new cache entry. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1472" data-line-number="1472"></span></td>
							
							<td rel="L1472" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="n">frclen</span> <span class="o">&gt;</span><span class="o">=</span> <span class="n">frccap</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1473" data-line-number="1473"></span></td>
							
							<td rel="L1473" class="lines-code chroma"><code class="code-inner">				<span class="n">frccap</span> <span class="o">+</span><span class="o">=</span> <span class="mi">16</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1474" data-line-number="1474"></span></td>
							
							<td rel="L1474" class="lines-code chroma"><code class="code-inner">				<span class="n">frc</span> <span class="o">=</span> <span class="nf">xrealloc</span><span class="p">(</span><span class="n">frc</span><span class="p">,</span> <span class="n">frccap</span> <span class="o">*</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">Fontcache</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1475" data-line-number="1475"></span></td>
							
							<td rel="L1475" class="lines-code chroma"><code class="code-inner">			<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1476" data-line-number="1476"></span></td>
							
							<td rel="L1476" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1477" data-line-number="1477"></span></td>
							
							<td rel="L1477" class="lines-code chroma"><code class="code-inner">			<span class="n">frc</span><span class="p">[</span><span class="n">frclen</span><span class="p">]</span><span class="p">.</span><span class="n">font</span> <span class="o">=</span> <span class="nf">XftFontOpenPattern</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1478" data-line-number="1478"></span></td>
							
							<td rel="L1478" class="lines-code chroma"><code class="code-inner">					<span class="n">fontpattern</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1479" data-line-number="1479"></span></td>
							
							<td rel="L1479" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">frc</span><span class="p">[</span><span class="n">frclen</span><span class="p">]</span><span class="p">.</span><span class="n">font</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1480" data-line-number="1480"></span></td>
							
							<td rel="L1480" class="lines-code chroma"><code class="code-inner">				<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">XftFontOpenPattern failed seeking fallback font: %s</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1481" data-line-number="1481"></span></td>
							
							<td rel="L1481" class="lines-code chroma"><code class="code-inner">					<span class="nf">strerror</span><span class="p">(</span><span class="n">errno</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1482" data-line-number="1482"></span></td>
							
							<td rel="L1482" class="lines-code chroma"><code class="code-inner">			<span class="n">frc</span><span class="p">[</span><span class="n">frclen</span><span class="p">]</span><span class="p">.</span><span class="n">flags</span> <span class="o">=</span> <span class="n">frcflags</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1483" data-line-number="1483"></span></td>
							
							<td rel="L1483" class="lines-code chroma"><code class="code-inner">			<span class="n">frc</span><span class="p">[</span><span class="n">frclen</span><span class="p">]</span><span class="p">.</span><span class="n">unicodep</span> <span class="o">=</span> <span class="n">rune</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1484" data-line-number="1484"></span></td>
							
							<td rel="L1484" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1485" data-line-number="1485"></span></td>
							
							<td rel="L1485" class="lines-code chroma"><code class="code-inner">			<span class="n">glyphidx</span> <span class="o">=</span> <span class="nf">XftCharIndex</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">frc</span><span class="p">[</span><span class="n">frclen</span><span class="p">]</span><span class="p">.</span><span class="n">font</span><span class="p">,</span> <span class="n">rune</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1486" data-line-number="1486"></span></td>
							
							<td rel="L1486" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1487" data-line-number="1487"></span></td>
							
							<td rel="L1487" class="lines-code chroma"><code class="code-inner">			<span class="n">f</span> <span class="o">=</span> <span class="n">frclen</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1488" data-line-number="1488"></span></td>
							
							<td rel="L1488" class="lines-code chroma"><code class="code-inner">			<span class="n">frclen</span><span class="o">+</span><span class="o">+</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1489" data-line-number="1489"></span></td>
							
							<td rel="L1489" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1490" data-line-number="1490"></span></td>
							
							<td rel="L1490" class="lines-code chroma"><code class="code-inner">			<span class="nf">FcPatternDestroy</span><span class="p">(</span><span class="n">fcpattern</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1491" data-line-number="1491"></span></td>
							
							<td rel="L1491" class="lines-code chroma"><code class="code-inner">			<span class="nf">FcCharSetDestroy</span><span class="p">(</span><span class="n">fccharset</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1492" data-line-number="1492"></span></td>
							
							<td rel="L1492" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1493" data-line-number="1493"></span></td>
							
							<td rel="L1493" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1494" data-line-number="1494"></span></td>
							
							<td rel="L1494" class="lines-code chroma"><code class="code-inner">		<span class="n">specs</span><span class="p">[</span><span class="n">numspecs</span><span class="p">]</span><span class="p">.</span><span class="n">font</span> <span class="o">=</span> <span class="n">frc</span><span class="p">[</span><span class="n">f</span><span class="p">]</span><span class="p">.</span><span class="n">font</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1495" data-line-number="1495"></span></td>
							
							<td rel="L1495" class="lines-code chroma"><code class="code-inner">		<span class="n">specs</span><span class="p">[</span><span class="n">numspecs</span><span class="p">]</span><span class="p">.</span><span class="n">glyph</span> <span class="o">=</span> <span class="n">glyphidx</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1496" data-line-number="1496"></span></td>
							
							<td rel="L1496" class="lines-code chroma"><code class="code-inner">		<span class="n">specs</span><span class="p">[</span><span class="n">numspecs</span><span class="p">]</span><span class="p">.</span><span class="n">x</span> <span class="o">=</span> <span class="p">(</span><span class="kt">short</span><span class="p">)</span><span class="n">xp</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1497" data-line-number="1497"></span></td>
							
							<td rel="L1497" class="lines-code chroma"><code class="code-inner">		<span class="n">specs</span><span class="p">[</span><span class="n">numspecs</span><span class="p">]</span><span class="p">.</span><span class="n">y</span> <span class="o">=</span> <span class="p">(</span><span class="kt">short</span><span class="p">)</span><span class="n">yp</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1498" data-line-number="1498"></span></td>
							
							<td rel="L1498" class="lines-code chroma"><code class="code-inner">		<span class="n">xp</span> <span class="o">+</span><span class="o">=</span> <span class="n">runewidth</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1499" data-line-number="1499"></span></td>
							
							<td rel="L1499" class="lines-code chroma"><code class="code-inner">		<span class="n">numspecs</span><span class="o">+</span><span class="o">+</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1500" data-line-number="1500"></span></td>
							
							<td rel="L1500" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1501" data-line-number="1501"></span></td>
							
							<td rel="L1501" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1502" data-line-number="1502"></span></td>
							
							<td rel="L1502" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="n">numspecs</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1503" data-line-number="1503"></span></td>
							
							<td rel="L1503" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1504" data-line-number="1504"></span></td>
							
							<td rel="L1504" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1505" data-line-number="1505"></span></td>
							
							<td rel="L1505" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1506" data-line-number="1506"></span></td>
							
							<td rel="L1506" class="lines-code chroma"><code class="code-inner"><span class="nf">xdrawglyphfontspecs</span><span class="p">(</span><span class="k">const</span> <span class="n">XftGlyphFontSpec</span> <span class="o">*</span><span class="n">specs</span><span class="p">,</span> <span class="n">Glyph</span> <span class="n">base</span><span class="p">,</span> <span class="kt">int</span> <span class="n">len</span><span class="p">,</span> <span class="kt">int</span> <span class="n">x</span><span class="p">,</span> <span class="kt">int</span> <span class="n">y</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1507" data-line-number="1507"></span></td>
							
							<td rel="L1507" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1508" data-line-number="1508"></span></td>
							
							<td rel="L1508" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">charlen</span> <span class="o">=</span> <span class="n">len</span> <span class="o">*</span> <span class="p">(</span><span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_WIDE</span><span class="p">)</span> <span class="o">?</span> <span class="mi">2</span> <span class="o">:</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1509" data-line-number="1509"></span></td>
							
							<td rel="L1509" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">winx</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">hborderpx</span> <span class="o">+</span> <span class="n">x</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">,</span> <span class="n">winy</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span> <span class="o">+</span> <span class="n">y</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1510" data-line-number="1510"></span></td>
							
							<td rel="L1510" class="lines-code chroma"><code class="code-inner">	    <span class="n">width</span> <span class="o">=</span> <span class="n">charlen</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1511" data-line-number="1511"></span></td>
							
							<td rel="L1511" class="lines-code chroma"><code class="code-inner">	<span class="n">Color</span> <span class="o">*</span><span class="n">fg</span><span class="p">,</span> <span class="o">*</span><span class="n">bg</span><span class="p">,</span> <span class="o">*</span><span class="n">temp</span><span class="p">,</span> <span class="n">revfg</span><span class="p">,</span> <span class="n">revbg</span><span class="p">,</span> <span class="n">truefg</span><span class="p">,</span> <span class="n">truebg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1512" data-line-number="1512"></span></td>
							
							<td rel="L1512" class="lines-code chroma"><code class="code-inner">	<span class="n">XRenderColor</span> <span class="n">colfg</span><span class="p">,</span> <span class="n">colbg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1513" data-line-number="1513"></span></td>
							
							<td rel="L1513" class="lines-code chroma"><code class="code-inner">	<span class="n">XRectangle</span> <span class="n">r</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1514" data-line-number="1514"></span></td>
							
							<td rel="L1514" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1515" data-line-number="1515"></span></td>
							
							<td rel="L1515" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Fallback on color display for attributes not supported by the font */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1516" data-line-number="1516"></span></td>
							
							<td rel="L1516" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_ITALIC</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">base</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_BOLD</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1517" data-line-number="1517"></span></td>
							
							<td rel="L1517" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">dc</span><span class="p">.</span><span class="n">ibfont</span><span class="p">.</span><span class="n">badslant</span> <span class="o">|</span><span class="o">|</span> <span class="n">dc</span><span class="p">.</span><span class="n">ibfont</span><span class="p">.</span><span class="n">badweight</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1518" data-line-number="1518"></span></td>
							
							<td rel="L1518" class="lines-code chroma"><code class="code-inner">			<span class="n">base</span><span class="p">.</span><span class="n">fg</span> <span class="o">=</span> <span class="n">defaultattr</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1519" data-line-number="1519"></span></td>
							
							<td rel="L1519" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_ITALIC</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">dc</span><span class="p">.</span><span class="n">ifont</span><span class="p">.</span><span class="n">badslant</span><span class="p">)</span> <span class="o">|</span><span class="o">|</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1520" data-line-number="1520"></span></td>
							
							<td rel="L1520" class="lines-code chroma"><code class="code-inner">	    <span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_BOLD</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">dc</span><span class="p">.</span><span class="n">bfont</span><span class="p">.</span><span class="n">badweight</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1521" data-line-number="1521"></span></td>
							
							<td rel="L1521" class="lines-code chroma"><code class="code-inner">		<span class="n">base</span><span class="p">.</span><span class="n">fg</span> <span class="o">=</span> <span class="n">defaultattr</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1522" data-line-number="1522"></span></td>
							
							<td rel="L1522" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1523" data-line-number="1523"></span></td>
							
							<td rel="L1523" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1524" data-line-number="1524"></span></td>
							
							<td rel="L1524" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">IS_TRUECOL</span><span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">fg</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1525" data-line-number="1525"></span></td>
							
							<td rel="L1525" class="lines-code chroma"><code class="code-inner">		<span class="n">colfg</span><span class="p">.</span><span class="n">alpha</span> <span class="o">=</span> <span class="mh">0xffff</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1526" data-line-number="1526"></span></td>
							
							<td rel="L1526" class="lines-code chroma"><code class="code-inner">		<span class="n">colfg</span><span class="p">.</span><span class="n">red</span> <span class="o">=</span> <span class="nf">TRUERED</span><span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">fg</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1527" data-line-number="1527"></span></td>
							
							<td rel="L1527" class="lines-code chroma"><code class="code-inner">		<span class="n">colfg</span><span class="p">.</span><span class="n">green</span> <span class="o">=</span> <span class="nf">TRUEGREEN</span><span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">fg</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1528" data-line-number="1528"></span></td>
							
							<td rel="L1528" class="lines-code chroma"><code class="code-inner">		<span class="n">colfg</span><span class="p">.</span><span class="n">blue</span> <span class="o">=</span> <span class="nf">TRUEBLUE</span><span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">fg</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1529" data-line-number="1529"></span></td>
							
							<td rel="L1529" class="lines-code chroma"><code class="code-inner">		<span class="nf">XftColorAllocValue</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">vis</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">cmap</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">colfg</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">truefg</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1530" data-line-number="1530"></span></td>
							
							<td rel="L1530" class="lines-code chroma"><code class="code-inner">		<span class="n">fg</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">truefg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1531" data-line-number="1531"></span></td>
							
							<td rel="L1531" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1532" data-line-number="1532"></span></td>
							
							<td rel="L1532" class="lines-code chroma"><code class="code-inner">		<span class="n">fg</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">base</span><span class="p">.</span><span class="n">fg</span><span class="p">]</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1533" data-line-number="1533"></span></td>
							
							<td rel="L1533" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1534" data-line-number="1534"></span></td>
							
							<td rel="L1534" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1535" data-line-number="1535"></span></td>
							
							<td rel="L1535" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">IS_TRUECOL</span><span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">bg</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1536" data-line-number="1536"></span></td>
							
							<td rel="L1536" class="lines-code chroma"><code class="code-inner">		<span class="n">colbg</span><span class="p">.</span><span class="n">alpha</span> <span class="o">=</span> <span class="mh">0xffff</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1537" data-line-number="1537"></span></td>
							
							<td rel="L1537" class="lines-code chroma"><code class="code-inner">		<span class="n">colbg</span><span class="p">.</span><span class="n">green</span> <span class="o">=</span> <span class="nf">TRUEGREEN</span><span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">bg</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1538" data-line-number="1538"></span></td>
							
							<td rel="L1538" class="lines-code chroma"><code class="code-inner">		<span class="n">colbg</span><span class="p">.</span><span class="n">red</span> <span class="o">=</span> <span class="nf">TRUERED</span><span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">bg</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1539" data-line-number="1539"></span></td>
							
							<td rel="L1539" class="lines-code chroma"><code class="code-inner">		<span class="n">colbg</span><span class="p">.</span><span class="n">blue</span> <span class="o">=</span> <span class="nf">TRUEBLUE</span><span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">bg</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1540" data-line-number="1540"></span></td>
							
							<td rel="L1540" class="lines-code chroma"><code class="code-inner">		<span class="nf">XftColorAllocValue</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">vis</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">cmap</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">colbg</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">truebg</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1541" data-line-number="1541"></span></td>
							
							<td rel="L1541" class="lines-code chroma"><code class="code-inner">		<span class="n">bg</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">truebg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1542" data-line-number="1542"></span></td>
							
							<td rel="L1542" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1543" data-line-number="1543"></span></td>
							
							<td rel="L1543" class="lines-code chroma"><code class="code-inner">		<span class="n">bg</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">base</span><span class="p">.</span><span class="n">bg</span><span class="p">]</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1544" data-line-number="1544"></span></td>
							
							<td rel="L1544" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1545" data-line-number="1545"></span></td>
							
							<td rel="L1545" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1546" data-line-number="1546"></span></td>
							
							<td rel="L1546" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_REVERSE</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1547" data-line-number="1547"></span></td>
							
							<td rel="L1547" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">fg</span> <span class="o">=</span><span class="o">=</span> <span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultfg</span><span class="p">]</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1548" data-line-number="1548"></span></td>
							
							<td rel="L1548" class="lines-code chroma"><code class="code-inner">			<span class="n">fg</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultbg</span><span class="p">]</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1549" data-line-number="1549"></span></td>
							
							<td rel="L1549" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1550" data-line-number="1550"></span></td>
							
							<td rel="L1550" class="lines-code chroma"><code class="code-inner">			<span class="n">colfg</span><span class="p">.</span><span class="n">red</span> <span class="o">=</span> <span class="o">~</span><span class="n">fg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">color</span><span class="p">.</span><span class="n">red</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1551" data-line-number="1551"></span></td>
							
							<td rel="L1551" class="lines-code chroma"><code class="code-inner">			<span class="n">colfg</span><span class="p">.</span><span class="n">green</span> <span class="o">=</span> <span class="o">~</span><span class="n">fg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">color</span><span class="p">.</span><span class="n">green</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1552" data-line-number="1552"></span></td>
							
							<td rel="L1552" class="lines-code chroma"><code class="code-inner">			<span class="n">colfg</span><span class="p">.</span><span class="n">blue</span> <span class="o">=</span> <span class="o">~</span><span class="n">fg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">color</span><span class="p">.</span><span class="n">blue</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1553" data-line-number="1553"></span></td>
							
							<td rel="L1553" class="lines-code chroma"><code class="code-inner">			<span class="n">colfg</span><span class="p">.</span><span class="n">alpha</span> <span class="o">=</span> <span class="n">fg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">color</span><span class="p">.</span><span class="n">alpha</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1554" data-line-number="1554"></span></td>
							
							<td rel="L1554" class="lines-code chroma"><code class="code-inner">			<span class="nf">XftColorAllocValue</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">vis</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">cmap</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">colfg</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1555" data-line-number="1555"></span></td>
							
							<td rel="L1555" class="lines-code chroma"><code class="code-inner">					<span class="o">&amp;</span><span class="n">revfg</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1556" data-line-number="1556"></span></td>
							
							<td rel="L1556" class="lines-code chroma"><code class="code-inner">			<span class="n">fg</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">revfg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1557" data-line-number="1557"></span></td>
							
							<td rel="L1557" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1558" data-line-number="1558"></span></td>
							
							<td rel="L1558" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1559" data-line-number="1559"></span></td>
							
							<td rel="L1559" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">bg</span> <span class="o">=</span><span class="o">=</span> <span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultbg</span><span class="p">]</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1560" data-line-number="1560"></span></td>
							
							<td rel="L1560" class="lines-code chroma"><code class="code-inner">			<span class="n">bg</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultfg</span><span class="p">]</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1561" data-line-number="1561"></span></td>
							
							<td rel="L1561" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1562" data-line-number="1562"></span></td>
							
							<td rel="L1562" class="lines-code chroma"><code class="code-inner">			<span class="n">colbg</span><span class="p">.</span><span class="n">red</span> <span class="o">=</span> <span class="o">~</span><span class="n">bg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">color</span><span class="p">.</span><span class="n">red</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1563" data-line-number="1563"></span></td>
							
							<td rel="L1563" class="lines-code chroma"><code class="code-inner">			<span class="n">colbg</span><span class="p">.</span><span class="n">green</span> <span class="o">=</span> <span class="o">~</span><span class="n">bg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">color</span><span class="p">.</span><span class="n">green</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1564" data-line-number="1564"></span></td>
							
							<td rel="L1564" class="lines-code chroma"><code class="code-inner">			<span class="n">colbg</span><span class="p">.</span><span class="n">blue</span> <span class="o">=</span> <span class="o">~</span><span class="n">bg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">color</span><span class="p">.</span><span class="n">blue</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1565" data-line-number="1565"></span></td>
							
							<td rel="L1565" class="lines-code chroma"><code class="code-inner">			<span class="n">colbg</span><span class="p">.</span><span class="n">alpha</span> <span class="o">=</span> <span class="n">bg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">color</span><span class="p">.</span><span class="n">alpha</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1566" data-line-number="1566"></span></td>
							
							<td rel="L1566" class="lines-code chroma"><code class="code-inner">			<span class="nf">XftColorAllocValue</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">vis</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">cmap</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">colbg</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1567" data-line-number="1567"></span></td>
							
							<td rel="L1567" class="lines-code chroma"><code class="code-inner">					<span class="o">&amp;</span><span class="n">revbg</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1568" data-line-number="1568"></span></td>
							
							<td rel="L1568" class="lines-code chroma"><code class="code-inner">			<span class="n">bg</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">revbg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1569" data-line-number="1569"></span></td>
							
							<td rel="L1569" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1570" data-line-number="1570"></span></td>
							
							<td rel="L1570" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1571" data-line-number="1571"></span></td>
							
							<td rel="L1571" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1572" data-line-number="1572"></span></td>
							
							<td rel="L1572" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_BOLD_FAINT</span><span class="p">)</span> <span class="o">=</span><span class="o">=</span> <span class="n">ATTR_FAINT</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1573" data-line-number="1573"></span></td>
							
							<td rel="L1573" class="lines-code chroma"><code class="code-inner">		<span class="n">colfg</span><span class="p">.</span><span class="n">red</span> <span class="o">=</span> <span class="n">fg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">color</span><span class="p">.</span><span class="n">red</span> <span class="o">/</span> <span class="mi">2</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1574" data-line-number="1574"></span></td>
							
							<td rel="L1574" class="lines-code chroma"><code class="code-inner">		<span class="n">colfg</span><span class="p">.</span><span class="n">green</span> <span class="o">=</span> <span class="n">fg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">color</span><span class="p">.</span><span class="n">green</span> <span class="o">/</span> <span class="mi">2</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1575" data-line-number="1575"></span></td>
							
							<td rel="L1575" class="lines-code chroma"><code class="code-inner">		<span class="n">colfg</span><span class="p">.</span><span class="n">blue</span> <span class="o">=</span> <span class="n">fg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">color</span><span class="p">.</span><span class="n">blue</span> <span class="o">/</span> <span class="mi">2</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1576" data-line-number="1576"></span></td>
							
							<td rel="L1576" class="lines-code chroma"><code class="code-inner">		<span class="n">colfg</span><span class="p">.</span><span class="n">alpha</span> <span class="o">=</span> <span class="n">fg</span><span class="o">-</span><span class="o">&gt;</span><span class="n">color</span><span class="p">.</span><span class="n">alpha</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1577" data-line-number="1577"></span></td>
							
							<td rel="L1577" class="lines-code chroma"><code class="code-inner">		<span class="nf">XftColorAllocValue</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">vis</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">cmap</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">colfg</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">revfg</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1578" data-line-number="1578"></span></td>
							
							<td rel="L1578" class="lines-code chroma"><code class="code-inner">		<span class="n">fg</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">revfg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1579" data-line-number="1579"></span></td>
							
							<td rel="L1579" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1580" data-line-number="1580"></span></td>
							
							<td rel="L1580" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1581" data-line-number="1581"></span></td>
							
							<td rel="L1581" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_REVERSE</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1582" data-line-number="1582"></span></td>
							
							<td rel="L1582" class="lines-code chroma"><code class="code-inner">		<span class="n">temp</span> <span class="o">=</span> <span class="n">fg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1583" data-line-number="1583"></span></td>
							
							<td rel="L1583" class="lines-code chroma"><code class="code-inner">		<span class="n">fg</span> <span class="o">=</span> <span class="n">bg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1584" data-line-number="1584"></span></td>
							
							<td rel="L1584" class="lines-code chroma"><code class="code-inner">		<span class="n">bg</span> <span class="o">=</span> <span class="n">temp</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1585" data-line-number="1585"></span></td>
							
							<td rel="L1585" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1586" data-line-number="1586"></span></td>
							
							<td rel="L1586" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1587" data-line-number="1587"></span></td>
							
							<td rel="L1587" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_BLINK</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">win</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">MODE_BLINK</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1588" data-line-number="1588"></span></td>
							
							<td rel="L1588" class="lines-code chroma"><code class="code-inner">		<span class="n">fg</span> <span class="o">=</span> <span class="n">bg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1589" data-line-number="1589"></span></td>
							
							<td rel="L1589" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1590" data-line-number="1590"></span></td>
							
							<td rel="L1590" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_INVISIBLE</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1591" data-line-number="1591"></span></td>
							
							<td rel="L1591" class="lines-code chroma"><code class="code-inner">		<span class="n">fg</span> <span class="o">=</span> <span class="n">bg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1592" data-line-number="1592"></span></td>
							
							<td rel="L1592" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1593" data-line-number="1593"></span></td>
							
							<td rel="L1593" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Intelligent cleaning up of the borders. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1594" data-line-number="1594"></span></td>
							
							<td rel="L1594" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">x</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1595" data-line-number="1595"></span></td>
							
							<td rel="L1595" class="lines-code chroma"><code class="code-inner">		<span class="nf">xclear</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="p">(</span><span class="n">y</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span><span class="o">?</span> <span class="mi">0</span> <span class="o">:</span> <span class="n">winy</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">hborderpx</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1596" data-line-number="1596"></span></td>
							
							<td rel="L1596" class="lines-code chroma"><code class="code-inner">			<span class="n">winy</span> <span class="o">+</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span> <span class="o">+</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1597" data-line-number="1597"></span></td>
							
							<td rel="L1597" class="lines-code chroma"><code class="code-inner">			<span class="p">(</span><span class="p">(</span><span class="n">winy</span> <span class="o">+</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span> <span class="o">&gt;</span><span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span> <span class="o">+</span> <span class="n">win</span><span class="p">.</span><span class="n">th</span><span class="p">)</span><span class="o">?</span> <span class="n">win</span><span class="p">.</span><span class="nl">h</span> <span class="p">:</span> <span class="mi">0</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1598" data-line-number="1598"></span></td>
							
							<td rel="L1598" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1599" data-line-number="1599"></span></td>
							
							<td rel="L1599" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">winx</span> <span class="o">+</span> <span class="n">width</span> <span class="o">&gt;</span><span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">hborderpx</span> <span class="o">+</span> <span class="n">win</span><span class="p">.</span><span class="n">tw</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1600" data-line-number="1600"></span></td>
							
							<td rel="L1600" class="lines-code chroma"><code class="code-inner">		<span class="nf">xclear</span><span class="p">(</span><span class="n">winx</span> <span class="o">+</span> <span class="n">width</span><span class="p">,</span> <span class="p">(</span><span class="n">y</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span><span class="o">?</span> <span class="mi">0</span> <span class="o">:</span> <span class="n">winy</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">w</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1601" data-line-number="1601"></span></td>
							
							<td rel="L1601" class="lines-code chroma"><code class="code-inner">			<span class="p">(</span><span class="p">(</span><span class="n">winy</span> <span class="o">+</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span> <span class="o">&gt;</span><span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span> <span class="o">+</span> <span class="n">win</span><span class="p">.</span><span class="n">th</span><span class="p">)</span><span class="o">?</span> <span class="n">win</span><span class="p">.</span><span class="nl">h</span> <span class="p">:</span> <span class="p">(</span><span class="n">winy</span> <span class="o">+</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">)</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1602" data-line-number="1602"></span></td>
							
							<td rel="L1602" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1603" data-line-number="1603"></span></td>
							
							<td rel="L1603" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">y</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1604" data-line-number="1604"></span></td>
							
							<td rel="L1604" class="lines-code chroma"><code class="code-inner">		<span class="nf">xclear</span><span class="p">(</span><span class="n">winx</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">winx</span> <span class="o">+</span> <span class="n">width</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1605" data-line-number="1605"></span></td>
							
							<td rel="L1605" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">winy</span> <span class="o">+</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span> <span class="o">&gt;</span><span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span> <span class="o">+</span> <span class="n">win</span><span class="p">.</span><span class="n">th</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1606" data-line-number="1606"></span></td>
							
							<td rel="L1606" class="lines-code chroma"><code class="code-inner">		<span class="nf">xclear</span><span class="p">(</span><span class="n">winx</span><span class="p">,</span> <span class="n">winy</span> <span class="o">+</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">,</span> <span class="n">winx</span> <span class="o">+</span> <span class="n">width</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">h</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1607" data-line-number="1607"></span></td>
							
							<td rel="L1607" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1608" data-line-number="1608"></span></td>
							
							<td rel="L1608" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Clean up the region we want to draw to. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1609" data-line-number="1609"></span></td>
							
							<td rel="L1609" class="lines-code chroma"><code class="code-inner">	<span class="nf">XftDrawRect</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">draw</span><span class="p">,</span> <span class="n">bg</span><span class="p">,</span> <span class="n">winx</span><span class="p">,</span> <span class="n">winy</span><span class="p">,</span> <span class="n">width</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1610" data-line-number="1610"></span></td>
							
							<td rel="L1610" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1611" data-line-number="1611"></span></td>
							
							<td rel="L1611" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Set the clip region because Xft is sometimes dirty. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1612" data-line-number="1612"></span></td>
							
							<td rel="L1612" class="lines-code chroma"><code class="code-inner">	<span class="n">r</span><span class="p">.</span><span class="n">x</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1613" data-line-number="1613"></span></td>
							
							<td rel="L1613" class="lines-code chroma"><code class="code-inner">	<span class="n">r</span><span class="p">.</span><span class="n">y</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1614" data-line-number="1614"></span></td>
							
							<td rel="L1614" class="lines-code chroma"><code class="code-inner">	<span class="n">r</span><span class="p">.</span><span class="n">height</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1615" data-line-number="1615"></span></td>
							
							<td rel="L1615" class="lines-code chroma"><code class="code-inner">	<span class="n">r</span><span class="p">.</span><span class="n">width</span> <span class="o">=</span> <span class="n">width</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1616" data-line-number="1616"></span></td>
							
							<td rel="L1616" class="lines-code chroma"><code class="code-inner">	<span class="nf">XftDrawSetClipRectangles</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">draw</span><span class="p">,</span> <span class="n">winx</span><span class="p">,</span> <span class="n">winy</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">r</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1617" data-line-number="1617"></span></td>
							
							<td rel="L1617" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1618" data-line-number="1618"></span></td>
							
							<td rel="L1618" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Render the glyphs. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1619" data-line-number="1619"></span></td>
							
							<td rel="L1619" class="lines-code chroma"><code class="code-inner">	<span class="nf">XftDrawGlyphFontSpec</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">draw</span><span class="p">,</span> <span class="n">fg</span><span class="p">,</span> <span class="n">specs</span><span class="p">,</span> <span class="n">len</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1620" data-line-number="1620"></span></td>
							
							<td rel="L1620" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1621" data-line-number="1621"></span></td>
							
							<td rel="L1621" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Render underline and strikethrough. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1622" data-line-number="1622"></span></td>
							
							<td rel="L1622" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_UNDERLINE</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1623" data-line-number="1623"></span></td>
							
							<td rel="L1623" class="lines-code chroma"><code class="code-inner">		<span class="nf">XftDrawRect</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">draw</span><span class="p">,</span> <span class="n">fg</span><span class="p">,</span> <span class="n">winx</span><span class="p">,</span> <span class="n">winy</span> <span class="o">+</span> <span class="n">dc</span><span class="p">.</span><span class="n">font</span><span class="p">.</span><span class="n">ascent</span> <span class="o">*</span> <span class="n">chscale</span> <span class="o">+</span> <span class="mi">1</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1624" data-line-number="1624"></span></td>
							
							<td rel="L1624" class="lines-code chroma"><code class="code-inner">				<span class="n">width</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1625" data-line-number="1625"></span></td>
							
							<td rel="L1625" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1626" data-line-number="1626"></span></td>
							
							<td rel="L1626" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1627" data-line-number="1627"></span></td>
							
							<td rel="L1627" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">base</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">ATTR_STRUCK</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1628" data-line-number="1628"></span></td>
							
							<td rel="L1628" class="lines-code chroma"><code class="code-inner">		<span class="nf">XftDrawRect</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">draw</span><span class="p">,</span> <span class="n">fg</span><span class="p">,</span> <span class="n">winx</span><span class="p">,</span> <span class="n">winy</span> <span class="o">+</span> <span class="mi">2</span> <span class="o">*</span> <span class="n">dc</span><span class="p">.</span><span class="n">font</span><span class="p">.</span><span class="n">ascent</span> <span class="o">*</span> <span class="n">chscale</span> <span class="o">/</span> <span class="mi">3</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1629" data-line-number="1629"></span></td>
							
							<td rel="L1629" class="lines-code chroma"><code class="code-inner">				<span class="n">width</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1630" data-line-number="1630"></span></td>
							
							<td rel="L1630" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1631" data-line-number="1631"></span></td>
							
							<td rel="L1631" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1632" data-line-number="1632"></span></td>
							
							<td rel="L1632" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Reset clip to none. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1633" data-line-number="1633"></span></td>
							
							<td rel="L1633" class="lines-code chroma"><code class="code-inner">	<span class="nf">XftDrawSetClip</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">draw</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1634" data-line-number="1634"></span></td>
							
							<td rel="L1634" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1635" data-line-number="1635"></span></td>
							
							<td rel="L1635" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1636" data-line-number="1636"></span></td>
							
							<td rel="L1636" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1637" data-line-number="1637"></span></td>
							
							<td rel="L1637" class="lines-code chroma"><code class="code-inner"><span class="nf">xdrawglyph</span><span class="p">(</span><span class="n">Glyph</span> <span class="n">g</span><span class="p">,</span> <span class="kt">int</span> <span class="n">x</span><span class="p">,</span> <span class="kt">int</span> <span class="n">y</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1638" data-line-number="1638"></span></td>
							
							<td rel="L1638" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1639" data-line-number="1639"></span></td>
							
							<td rel="L1639" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">numspecs</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1640" data-line-number="1640"></span></td>
							
							<td rel="L1640" class="lines-code chroma"><code class="code-inner">	<span class="n">XftGlyphFontSpec</span> <span class="n">spec</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1641" data-line-number="1641"></span></td>
							
							<td rel="L1641" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1642" data-line-number="1642"></span></td>
							
							<td rel="L1642" class="lines-code chroma"><code class="code-inner">	<span class="n">numspecs</span> <span class="o">=</span> <span class="nf">xmakeglyphfontspecs</span><span class="p">(</span><span class="o">&amp;</span><span class="n">spec</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">g</span><span class="p">,</span> <span class="mi">1</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">y</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1643" data-line-number="1643"></span></td>
							
							<td rel="L1643" class="lines-code chroma"><code class="code-inner">	<span class="nf">xdrawglyphfontspecs</span><span class="p">(</span><span class="o">&amp;</span><span class="n">spec</span><span class="p">,</span> <span class="n">g</span><span class="p">,</span> <span class="n">numspecs</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">y</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1644" data-line-number="1644"></span></td>
							
							<td rel="L1644" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1645" data-line-number="1645"></span></td>
							
							<td rel="L1645" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1646" data-line-number="1646"></span></td>
							
							<td rel="L1646" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1647" data-line-number="1647"></span></td>
							
							<td rel="L1647" class="lines-code chroma"><code class="code-inner"><span class="nf">xdrawcursor</span><span class="p">(</span><span class="kt">int</span> <span class="n">cx</span><span class="p">,</span> <span class="kt">int</span> <span class="n">cy</span><span class="p">,</span> <span class="n">Glyph</span> <span class="n">g</span><span class="p">,</span> <span class="kt">int</span> <span class="n">ox</span><span class="p">,</span> <span class="kt">int</span> <span class="n">oy</span><span class="p">,</span> <span class="n">Glyph</span> <span class="n">og</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1648" data-line-number="1648"></span></td>
							
							<td rel="L1648" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1649" data-line-number="1649"></span></td>
							
							<td rel="L1649" class="lines-code chroma"><code class="code-inner">	<span class="n">Color</span> <span class="n">drawcol</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1650" data-line-number="1650"></span></td>
							
							<td rel="L1650" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1651" data-line-number="1651"></span></td>
							
							<td rel="L1651" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* remove the old cursor */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1652" data-line-number="1652"></span></td>
							
							<td rel="L1652" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">selected</span><span class="p">(</span><span class="n">ox</span><span class="p">,</span> <span class="n">oy</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1653" data-line-number="1653"></span></td>
							
							<td rel="L1653" class="lines-code chroma"><code class="code-inner">		<span class="n">og</span><span class="p">.</span><span class="n">mode</span> <span class="o">^</span><span class="o">=</span> <span class="n">ATTR_REVERSE</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1654" data-line-number="1654"></span></td>
							
							<td rel="L1654" class="lines-code chroma"><code class="code-inner">	<span class="nf">xdrawglyph</span><span class="p">(</span><span class="n">og</span><span class="p">,</span> <span class="n">ox</span><span class="p">,</span> <span class="n">oy</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1655" data-line-number="1655"></span></td>
							
							<td rel="L1655" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1656" data-line-number="1656"></span></td>
							
							<td rel="L1656" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_HIDE</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1657" data-line-number="1657"></span></td>
							
							<td rel="L1657" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1658" data-line-number="1658"></span></td>
							
							<td rel="L1658" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1659" data-line-number="1659"></span></td>
							
							<td rel="L1659" class="lines-code chroma"><code class="code-inner">	<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1660" data-line-number="1660"></span></td>
							
							<td rel="L1660" class="lines-code chroma"><code class="code-inner"><span class="cm">	 * Select the right color for the right mode.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1661" data-line-number="1661"></span></td>
							
							<td rel="L1661" class="lines-code chroma"><code class="code-inner"><span class="cm">	 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1662" data-line-number="1662"></span></td>
							
							<td rel="L1662" class="lines-code chroma"><code class="code-inner">	<span class="n">g</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span><span class="o">=</span> <span class="n">ATTR_BOLD</span><span class="o">|</span><span class="n">ATTR_ITALIC</span><span class="o">|</span><span class="n">ATTR_UNDERLINE</span><span class="o">|</span><span class="n">ATTR_STRUCK</span><span class="o">|</span><span class="n">ATTR_WIDE</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1663" data-line-number="1663"></span></td>
							
							<td rel="L1663" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1664" data-line-number="1664"></span></td>
							
							<td rel="L1664" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_REVERSE</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1665" data-line-number="1665"></span></td>
							
							<td rel="L1665" class="lines-code chroma"><code class="code-inner">		<span class="n">g</span><span class="p">.</span><span class="n">mode</span> <span class="o">|</span><span class="o">=</span> <span class="n">ATTR_REVERSE</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1666" data-line-number="1666"></span></td>
							
							<td rel="L1666" class="lines-code chroma"><code class="code-inner">		<span class="n">g</span><span class="p">.</span><span class="n">bg</span> <span class="o">=</span> <span class="n">defaultfg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1667" data-line-number="1667"></span></td>
							
							<td rel="L1667" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">selected</span><span class="p">(</span><span class="n">cx</span><span class="p">,</span> <span class="n">cy</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1668" data-line-number="1668"></span></td>
							
							<td rel="L1668" class="lines-code chroma"><code class="code-inner">			<span class="n">drawcol</span> <span class="o">=</span> <span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultcs</span><span class="p">]</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1669" data-line-number="1669"></span></td>
							
							<td rel="L1669" class="lines-code chroma"><code class="code-inner">			<span class="n">g</span><span class="p">.</span><span class="n">fg</span> <span class="o">=</span> <span class="n">defaultrcs</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1670" data-line-number="1670"></span></td>
							
							<td rel="L1670" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1671" data-line-number="1671"></span></td>
							
							<td rel="L1671" class="lines-code chroma"><code class="code-inner">			<span class="n">drawcol</span> <span class="o">=</span> <span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">defaultrcs</span><span class="p">]</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1672" data-line-number="1672"></span></td>
							
							<td rel="L1672" class="lines-code chroma"><code class="code-inner">			<span class="n">g</span><span class="p">.</span><span class="n">fg</span> <span class="o">=</span> <span class="n">defaultcs</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1673" data-line-number="1673"></span></td>
							
							<td rel="L1673" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1674" data-line-number="1674"></span></td>
							
							<td rel="L1674" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1675" data-line-number="1675"></span></td>
							
							<td rel="L1675" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">selected</span><span class="p">(</span><span class="n">cx</span><span class="p">,</span> <span class="n">cy</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1676" data-line-number="1676"></span></td>
							
							<td rel="L1676" class="lines-code chroma"><code class="code-inner">			<span class="n">g</span><span class="p">.</span><span class="n">fg</span> <span class="o">=</span> <span class="n">defaultfg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1677" data-line-number="1677"></span></td>
							
							<td rel="L1677" class="lines-code chroma"><code class="code-inner">			<span class="n">g</span><span class="p">.</span><span class="n">bg</span> <span class="o">=</span> <span class="n">defaultrcs</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1678" data-line-number="1678"></span></td>
							
							<td rel="L1678" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1679" data-line-number="1679"></span></td>
							
							<td rel="L1679" class="lines-code chroma"><code class="code-inner">			<span class="n">g</span><span class="p">.</span><span class="n">fg</span> <span class="o">=</span> <span class="n">defaultbg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1680" data-line-number="1680"></span></td>
							
							<td rel="L1680" class="lines-code chroma"><code class="code-inner">			<span class="n">g</span><span class="p">.</span><span class="n">bg</span> <span class="o">=</span> <span class="n">defaultcs</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1681" data-line-number="1681"></span></td>
							
							<td rel="L1681" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1682" data-line-number="1682"></span></td>
							
							<td rel="L1682" class="lines-code chroma"><code class="code-inner">		<span class="n">drawcol</span> <span class="o">=</span> <span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="n">g</span><span class="p">.</span><span class="n">bg</span><span class="p">]</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1683" data-line-number="1683"></span></td>
							
							<td rel="L1683" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1684" data-line-number="1684"></span></td>
							
							<td rel="L1684" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1685" data-line-number="1685"></span></td>
							
							<td rel="L1685" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* draw the new one */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1686" data-line-number="1686"></span></td>
							
							<td rel="L1686" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_FOCUSED</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1687" data-line-number="1687"></span></td>
							
							<td rel="L1687" class="lines-code chroma"><code class="code-inner">		<span class="k">switch</span> <span class="p">(</span><span class="n">win</span><span class="p">.</span><span class="n">cursor</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1688" data-line-number="1688"></span></td>
							
							<td rel="L1688" class="lines-code chroma"><code class="code-inner">		<span class="k">case</span> <span class="mi">7</span><span class="o">:</span> <span class="cm">/* st extension */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1689" data-line-number="1689"></span></td>
							
							<td rel="L1689" class="lines-code chroma"><code class="code-inner">			<span class="n">g</span><span class="p">.</span><span class="n">u</span> <span class="o">=</span> <span class="mh">0x2603</span><span class="p">;</span> <span class="cm">/* snowman (U+2603) */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1690" data-line-number="1690"></span></td>
							
							<td rel="L1690" class="lines-code chroma"><code class="code-inner">			<span class="cm">/* FALLTHROUGH */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1691" data-line-number="1691"></span></td>
							
							<td rel="L1691" class="lines-code chroma"><code class="code-inner">		<span class="k">case</span> <span class="mi">0</span><span class="o">:</span> <span class="cm">/* Blinking Block */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1692" data-line-number="1692"></span></td>
							
							<td rel="L1692" class="lines-code chroma"><code class="code-inner">		<span class="k">case</span> <span class="mi">1</span><span class="o">:</span> <span class="cm">/* Blinking Block (Default) */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1693" data-line-number="1693"></span></td>
							
							<td rel="L1693" class="lines-code chroma"><code class="code-inner">		<span class="k">case</span> <span class="mi">2</span><span class="o">:</span> <span class="cm">/* Steady Block */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1694" data-line-number="1694"></span></td>
							
							<td rel="L1694" class="lines-code chroma"><code class="code-inner">			<span class="nf">xdrawglyph</span><span class="p">(</span><span class="n">g</span><span class="p">,</span> <span class="n">cx</span><span class="p">,</span> <span class="n">cy</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1695" data-line-number="1695"></span></td>
							
							<td rel="L1695" class="lines-code chroma"><code class="code-inner">			<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1696" data-line-number="1696"></span></td>
							
							<td rel="L1696" class="lines-code chroma"><code class="code-inner">		<span class="k">case</span> <span class="mi">3</span><span class="o">:</span> <span class="cm">/* Blinking Underline */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1697" data-line-number="1697"></span></td>
							
							<td rel="L1697" class="lines-code chroma"><code class="code-inner">		<span class="k">case</span> <span class="mi">4</span><span class="o">:</span> <span class="cm">/* Steady Underline */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1698" data-line-number="1698"></span></td>
							
							<td rel="L1698" class="lines-code chroma"><code class="code-inner">			<span class="nf">XftDrawRect</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">draw</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">drawcol</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1699" data-line-number="1699"></span></td>
							
							<td rel="L1699" class="lines-code chroma"><code class="code-inner">					<span class="n">win</span><span class="p">.</span><span class="n">hborderpx</span> <span class="o">+</span> <span class="n">cx</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1700" data-line-number="1700"></span></td>
							
							<td rel="L1700" class="lines-code chroma"><code class="code-inner">					<span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span> <span class="o">+</span> <span class="p">(</span><span class="n">cy</span> <span class="o">+</span> <span class="mi">1</span><span class="p">)</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span> <span class="o">-</span> \
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1701" data-line-number="1701"></span></td>
							
							<td rel="L1701" class="lines-code chroma"><code class="code-inner">						<span class="n">cursorthickness</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1702" data-line-number="1702"></span></td>
							
							<td rel="L1702" class="lines-code chroma"><code class="code-inner">					<span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">,</span> <span class="n">cursorthickness</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1703" data-line-number="1703"></span></td>
							
							<td rel="L1703" class="lines-code chroma"><code class="code-inner">			<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1704" data-line-number="1704"></span></td>
							
							<td rel="L1704" class="lines-code chroma"><code class="code-inner">		<span class="k">case</span> <span class="mi">5</span><span class="o">:</span> <span class="cm">/* Blinking bar */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1705" data-line-number="1705"></span></td>
							
							<td rel="L1705" class="lines-code chroma"><code class="code-inner">		<span class="k">case</span> <span class="mi">6</span><span class="o">:</span> <span class="cm">/* Steady bar */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1706" data-line-number="1706"></span></td>
							
							<td rel="L1706" class="lines-code chroma"><code class="code-inner">			<span class="nf">XftDrawRect</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">draw</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">drawcol</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1707" data-line-number="1707"></span></td>
							
							<td rel="L1707" class="lines-code chroma"><code class="code-inner">					<span class="n">win</span><span class="p">.</span><span class="n">hborderpx</span> <span class="o">+</span> <span class="n">cx</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1708" data-line-number="1708"></span></td>
							
							<td rel="L1708" class="lines-code chroma"><code class="code-inner">					<span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span> <span class="o">+</span> <span class="n">cy</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1709" data-line-number="1709"></span></td>
							
							<td rel="L1709" class="lines-code chroma"><code class="code-inner">					<span class="n">cursorthickness</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1710" data-line-number="1710"></span></td>
							
							<td rel="L1710" class="lines-code chroma"><code class="code-inner">			<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1711" data-line-number="1711"></span></td>
							
							<td rel="L1711" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1712" data-line-number="1712"></span></td>
							
							<td rel="L1712" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1713" data-line-number="1713"></span></td>
							
							<td rel="L1713" class="lines-code chroma"><code class="code-inner">		<span class="nf">XftDrawRect</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">draw</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">drawcol</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1714" data-line-number="1714"></span></td>
							
							<td rel="L1714" class="lines-code chroma"><code class="code-inner">				<span class="n">win</span><span class="p">.</span><span class="n">hborderpx</span> <span class="o">+</span> <span class="n">cx</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1715" data-line-number="1715"></span></td>
							
							<td rel="L1715" class="lines-code chroma"><code class="code-inner">				<span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span> <span class="o">+</span> <span class="n">cy</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1716" data-line-number="1716"></span></td>
							
							<td rel="L1716" class="lines-code chroma"><code class="code-inner">				<span class="n">win</span><span class="p">.</span><span class="n">cw</span> <span class="o">-</span> <span class="mi">1</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1717" data-line-number="1717"></span></td>
							
							<td rel="L1717" class="lines-code chroma"><code class="code-inner">		<span class="nf">XftDrawRect</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">draw</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">drawcol</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1718" data-line-number="1718"></span></td>
							
							<td rel="L1718" class="lines-code chroma"><code class="code-inner">				<span class="n">win</span><span class="p">.</span><span class="n">hborderpx</span> <span class="o">+</span> <span class="n">cx</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1719" data-line-number="1719"></span></td>
							
							<td rel="L1719" class="lines-code chroma"><code class="code-inner">				<span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span> <span class="o">+</span> <span class="n">cy</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1720" data-line-number="1720"></span></td>
							
							<td rel="L1720" class="lines-code chroma"><code class="code-inner">				<span class="mi">1</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span> <span class="o">-</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1721" data-line-number="1721"></span></td>
							
							<td rel="L1721" class="lines-code chroma"><code class="code-inner">		<span class="nf">XftDrawRect</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">draw</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">drawcol</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1722" data-line-number="1722"></span></td>
							
							<td rel="L1722" class="lines-code chroma"><code class="code-inner">				<span class="n">win</span><span class="p">.</span><span class="n">hborderpx</span> <span class="o">+</span> <span class="p">(</span><span class="n">cx</span> <span class="o">+</span> <span class="mi">1</span><span class="p">)</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span> <span class="o">-</span> <span class="mi">1</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1723" data-line-number="1723"></span></td>
							
							<td rel="L1723" class="lines-code chroma"><code class="code-inner">				<span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span> <span class="o">+</span> <span class="n">cy</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1724" data-line-number="1724"></span></td>
							
							<td rel="L1724" class="lines-code chroma"><code class="code-inner">				<span class="mi">1</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span> <span class="o">-</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1725" data-line-number="1725"></span></td>
							
							<td rel="L1725" class="lines-code chroma"><code class="code-inner">		<span class="nf">XftDrawRect</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">draw</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">drawcol</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1726" data-line-number="1726"></span></td>
							
							<td rel="L1726" class="lines-code chroma"><code class="code-inner">				<span class="n">win</span><span class="p">.</span><span class="n">hborderpx</span> <span class="o">+</span> <span class="n">cx</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1727" data-line-number="1727"></span></td>
							
							<td rel="L1727" class="lines-code chroma"><code class="code-inner">				<span class="n">win</span><span class="p">.</span><span class="n">vborderpx</span> <span class="o">+</span> <span class="p">(</span><span class="n">cy</span> <span class="o">+</span> <span class="mi">1</span><span class="p">)</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span> <span class="o">-</span> <span class="mi">1</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1728" data-line-number="1728"></span></td>
							
							<td rel="L1728" class="lines-code chroma"><code class="code-inner">				<span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1729" data-line-number="1729"></span></td>
							
							<td rel="L1729" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1730" data-line-number="1730"></span></td>
							
							<td rel="L1730" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1731" data-line-number="1731"></span></td>
							
							<td rel="L1731" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1732" data-line-number="1732"></span></td>
							
							<td rel="L1732" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1733" data-line-number="1733"></span></td>
							
							<td rel="L1733" class="lines-code chroma"><code class="code-inner"><span class="nf">xsetenv</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1734" data-line-number="1734"></span></td>
							
							<td rel="L1734" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1735" data-line-number="1735"></span></td>
							
							<td rel="L1735" class="lines-code chroma"><code class="code-inner">	<span class="kt">char</span> <span class="n">buf</span><span class="p">[</span><span class="k">sizeof</span><span class="p">(</span><span class="kt">long</span><span class="p">)</span> <span class="o">*</span> <span class="mi">8</span> <span class="o">+</span> <span class="mi">1</span><span class="p">]</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1736" data-line-number="1736"></span></td>
							
							<td rel="L1736" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1737" data-line-number="1737"></span></td>
							
							<td rel="L1737" class="lines-code chroma"><code class="code-inner">	<span class="nf">snprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">buf</span><span class="p">)</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">%lu</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1738" data-line-number="1738"></span></td>
							
							<td rel="L1738" class="lines-code chroma"><code class="code-inner">	<span class="nf">setenv</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">WINDOWID</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">buf</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1739" data-line-number="1739"></span></td>
							
							<td rel="L1739" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1740" data-line-number="1740"></span></td>
							
							<td rel="L1740" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1741" data-line-number="1741"></span></td>
							
							<td rel="L1741" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1742" data-line-number="1742"></span></td>
							
							<td rel="L1742" class="lines-code chroma"><code class="code-inner"><span class="nf">xseticontitle</span><span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="n">p</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1743" data-line-number="1743"></span></td>
							
							<td rel="L1743" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1744" data-line-number="1744"></span></td>
							
							<td rel="L1744" class="lines-code chroma"><code class="code-inner">	<span class="n">XTextProperty</span> <span class="n">prop</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1745" data-line-number="1745"></span></td>
							
							<td rel="L1745" class="lines-code chroma"><code class="code-inner">	<span class="nf">DEFAULT</span><span class="p">(</span><span class="n">p</span><span class="p">,</span> <span class="n">opt_title</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1746" data-line-number="1746"></span></td>
							
							<td rel="L1746" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1747" data-line-number="1747"></span></td>
							
							<td rel="L1747" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">p</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span><span class="o">=</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">\0</span><span class="sc">&#39;</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1748" data-line-number="1748"></span></td>
							
							<td rel="L1748" class="lines-code chroma"><code class="code-inner">		<span class="n">p</span> <span class="o">=</span> <span class="n">opt_title</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1749" data-line-number="1749"></span></td>
							
							<td rel="L1749" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1750" data-line-number="1750"></span></td>
							
							<td rel="L1750" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">Xutf8TextListToTextProperty</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">p</span><span class="p">,</span> <span class="mi">1</span><span class="p">,</span> <span class="n">XUTF8StringStyle</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1751" data-line-number="1751"></span></td>
							
							<td rel="L1751" class="lines-code chroma"><code class="code-inner">	                                <span class="o">&amp;</span><span class="n">prop</span><span class="p">)</span> <span class="o">!</span><span class="o">=</span> <span class="n">Success</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1752" data-line-number="1752"></span></td>
							
							<td rel="L1752" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1753" data-line-number="1753"></span></td>
							
							<td rel="L1753" class="lines-code chroma"><code class="code-inner">	<span class="nf">XSetWMIconName</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">prop</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1754" data-line-number="1754"></span></td>
							
							<td rel="L1754" class="lines-code chroma"><code class="code-inner">	<span class="nf">XSetTextProperty</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">prop</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">netwmiconname</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1755" data-line-number="1755"></span></td>
							
							<td rel="L1755" class="lines-code chroma"><code class="code-inner">	<span class="nf">XFree</span><span class="p">(</span><span class="n">prop</span><span class="p">.</span><span class="n">value</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1756" data-line-number="1756"></span></td>
							
							<td rel="L1756" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1757" data-line-number="1757"></span></td>
							
							<td rel="L1757" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1758" data-line-number="1758"></span></td>
							
							<td rel="L1758" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1759" data-line-number="1759"></span></td>
							
							<td rel="L1759" class="lines-code chroma"><code class="code-inner"><span class="nf">xsettitle</span><span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="n">p</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1760" data-line-number="1760"></span></td>
							
							<td rel="L1760" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1761" data-line-number="1761"></span></td>
							
							<td rel="L1761" class="lines-code chroma"><code class="code-inner">	<span class="n">XTextProperty</span> <span class="n">prop</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1762" data-line-number="1762"></span></td>
							
							<td rel="L1762" class="lines-code chroma"><code class="code-inner">	<span class="nf">DEFAULT</span><span class="p">(</span><span class="n">p</span><span class="p">,</span> <span class="n">opt_title</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1763" data-line-number="1763"></span></td>
							
							<td rel="L1763" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1764" data-line-number="1764"></span></td>
							
							<td rel="L1764" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">p</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span><span class="o">=</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">\0</span><span class="sc">&#39;</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1765" data-line-number="1765"></span></td>
							
							<td rel="L1765" class="lines-code chroma"><code class="code-inner">		<span class="n">p</span> <span class="o">=</span> <span class="n">opt_title</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1766" data-line-number="1766"></span></td>
							
							<td rel="L1766" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1767" data-line-number="1767"></span></td>
							
							<td rel="L1767" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">Xutf8TextListToTextProperty</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">p</span><span class="p">,</span> <span class="mi">1</span><span class="p">,</span> <span class="n">XUTF8StringStyle</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1768" data-line-number="1768"></span></td>
							
							<td rel="L1768" class="lines-code chroma"><code class="code-inner">	                                <span class="o">&amp;</span><span class="n">prop</span><span class="p">)</span> <span class="o">!</span><span class="o">=</span> <span class="n">Success</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1769" data-line-number="1769"></span></td>
							
							<td rel="L1769" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1770" data-line-number="1770"></span></td>
							
							<td rel="L1770" class="lines-code chroma"><code class="code-inner">	<span class="nf">XSetWMName</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">prop</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1771" data-line-number="1771"></span></td>
							
							<td rel="L1771" class="lines-code chroma"><code class="code-inner">	<span class="nf">XSetTextProperty</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">prop</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">netwmname</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1772" data-line-number="1772"></span></td>
							
							<td rel="L1772" class="lines-code chroma"><code class="code-inner">	<span class="nf">XFree</span><span class="p">(</span><span class="n">prop</span><span class="p">.</span><span class="n">value</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1773" data-line-number="1773"></span></td>
							
							<td rel="L1773" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1774" data-line-number="1774"></span></td>
							
							<td rel="L1774" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1775" data-line-number="1775"></span></td>
							
							<td rel="L1775" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1776" data-line-number="1776"></span></td>
							
							<td rel="L1776" class="lines-code chroma"><code class="code-inner"><span class="nf">xstartdraw</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1777" data-line-number="1777"></span></td>
							
							<td rel="L1777" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1778" data-line-number="1778"></span></td>
							
							<td rel="L1778" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_VISIBLE</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1779" data-line-number="1779"></span></td>
							
							<td rel="L1779" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1780" data-line-number="1780"></span></td>
							
							<td rel="L1780" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1781" data-line-number="1781"></span></td>
							
							<td rel="L1781" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1782" data-line-number="1782"></span></td>
							
							<td rel="L1782" class="lines-code chroma"><code class="code-inner"><span class="nf">xdrawline</span><span class="p">(</span><span class="n">Line</span> <span class="n">line</span><span class="p">,</span> <span class="kt">int</span> <span class="n">x1</span><span class="p">,</span> <span class="kt">int</span> <span class="n">y1</span><span class="p">,</span> <span class="kt">int</span> <span class="n">x2</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1783" data-line-number="1783"></span></td>
							
							<td rel="L1783" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1784" data-line-number="1784"></span></td>
							
							<td rel="L1784" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">i</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">ox</span><span class="p">,</span> <span class="n">numspecs</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1785" data-line-number="1785"></span></td>
							
							<td rel="L1785" class="lines-code chroma"><code class="code-inner">	<span class="n">Glyph</span> <span class="n">base</span><span class="p">,</span> <span class="n">new</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1786" data-line-number="1786"></span></td>
							
							<td rel="L1786" class="lines-code chroma"><code class="code-inner">	<span class="n">XftGlyphFontSpec</span> <span class="o">*</span><span class="n">specs</span> <span class="o">=</span> <span class="n">xw</span><span class="p">.</span><span class="n">specbuf</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1787" data-line-number="1787"></span></td>
							
							<td rel="L1787" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1788" data-line-number="1788"></span></td>
							
							<td rel="L1788" class="lines-code chroma"><code class="code-inner">	<span class="n">numspecs</span> <span class="o">=</span> <span class="nf">xmakeglyphfontspecs</span><span class="p">(</span><span class="n">specs</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">line</span><span class="p">[</span><span class="n">x1</span><span class="p">]</span><span class="p">,</span> <span class="n">x2</span> <span class="o">-</span> <span class="n">x1</span><span class="p">,</span> <span class="n">x1</span><span class="p">,</span> <span class="n">y1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1789" data-line-number="1789"></span></td>
							
							<td rel="L1789" class="lines-code chroma"><code class="code-inner">	<span class="n">i</span> <span class="o">=</span> <span class="n">ox</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1790" data-line-number="1790"></span></td>
							
							<td rel="L1790" class="lines-code chroma"><code class="code-inner">	<span class="k">for</span> <span class="p">(</span><span class="n">x</span> <span class="o">=</span> <span class="n">x1</span><span class="p">;</span> <span class="n">x</span> <span class="o">&lt;</span> <span class="n">x2</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">numspecs</span><span class="p">;</span> <span class="n">x</span><span class="o">+</span><span class="o">+</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1791" data-line-number="1791"></span></td>
							
							<td rel="L1791" class="lines-code chroma"><code class="code-inner">		<span class="n">new</span> <span class="o">=</span> <span class="n">line</span><span class="p">[</span><span class="n">x</span><span class="p">]</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1792" data-line-number="1792"></span></td>
							
							<td rel="L1792" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">new</span><span class="p">.</span><span class="n">mode</span> <span class="o">=</span><span class="o">=</span> <span class="n">ATTR_WDUMMY</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1793" data-line-number="1793"></span></td>
							
							<td rel="L1793" class="lines-code chroma"><code class="code-inner">			<span class="k">continue</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1794" data-line-number="1794"></span></td>
							
							<td rel="L1794" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">selected</span><span class="p">(</span><span class="n">x</span><span class="p">,</span> <span class="n">y1</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1795" data-line-number="1795"></span></td>
							
							<td rel="L1795" class="lines-code chroma"><code class="code-inner">			<span class="n">new</span><span class="p">.</span><span class="n">mode</span> <span class="o">^</span><span class="o">=</span> <span class="n">ATTR_REVERSE</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1796" data-line-number="1796"></span></td>
							
							<td rel="L1796" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">i</span> <span class="o">&gt;</span> <span class="mi">0</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="nf">ATTRCMP</span><span class="p">(</span><span class="n">base</span><span class="p">,</span> <span class="n">new</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1797" data-line-number="1797"></span></td>
							
							<td rel="L1797" class="lines-code chroma"><code class="code-inner">			<span class="nf">xdrawglyphfontspecs</span><span class="p">(</span><span class="n">specs</span><span class="p">,</span> <span class="n">base</span><span class="p">,</span> <span class="n">i</span><span class="p">,</span> <span class="n">ox</span><span class="p">,</span> <span class="n">y1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1798" data-line-number="1798"></span></td>
							
							<td rel="L1798" class="lines-code chroma"><code class="code-inner">			<span class="n">specs</span> <span class="o">+</span><span class="o">=</span> <span class="n">i</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1799" data-line-number="1799"></span></td>
							
							<td rel="L1799" class="lines-code chroma"><code class="code-inner">			<span class="n">numspecs</span> <span class="o">-</span><span class="o">=</span> <span class="n">i</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1800" data-line-number="1800"></span></td>
							
							<td rel="L1800" class="lines-code chroma"><code class="code-inner">			<span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1801" data-line-number="1801"></span></td>
							
							<td rel="L1801" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1802" data-line-number="1802"></span></td>
							
							<td rel="L1802" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1803" data-line-number="1803"></span></td>
							
							<td rel="L1803" class="lines-code chroma"><code class="code-inner">			<span class="n">ox</span> <span class="o">=</span> <span class="n">x</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1804" data-line-number="1804"></span></td>
							
							<td rel="L1804" class="lines-code chroma"><code class="code-inner">			<span class="n">base</span> <span class="o">=</span> <span class="n">new</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1805" data-line-number="1805"></span></td>
							
							<td rel="L1805" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1806" data-line-number="1806"></span></td>
							
							<td rel="L1806" class="lines-code chroma"><code class="code-inner">		<span class="n">i</span><span class="o">+</span><span class="o">+</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1807" data-line-number="1807"></span></td>
							
							<td rel="L1807" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1808" data-line-number="1808"></span></td>
							
							<td rel="L1808" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">i</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1809" data-line-number="1809"></span></td>
							
							<td rel="L1809" class="lines-code chroma"><code class="code-inner">		<span class="nf">xdrawglyphfontspecs</span><span class="p">(</span><span class="n">specs</span><span class="p">,</span> <span class="n">base</span><span class="p">,</span> <span class="n">i</span><span class="p">,</span> <span class="n">ox</span><span class="p">,</span> <span class="n">y1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1810" data-line-number="1810"></span></td>
							
							<td rel="L1810" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1811" data-line-number="1811"></span></td>
							
							<td rel="L1811" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1812" data-line-number="1812"></span></td>
							
							<td rel="L1812" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1813" data-line-number="1813"></span></td>
							
							<td rel="L1813" class="lines-code chroma"><code class="code-inner"><span class="nf">xfinishdraw</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1814" data-line-number="1814"></span></td>
							
							<td rel="L1814" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1815" data-line-number="1815"></span></td>
							
							<td rel="L1815" class="lines-code chroma"><code class="code-inner">	<span class="nf">XCopyArea</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">buf</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">dc</span><span class="p">.</span><span class="n">gc</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">win</span><span class="p">.</span><span class="n">w</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1816" data-line-number="1816"></span></td>
							
							<td rel="L1816" class="lines-code chroma"><code class="code-inner">			<span class="n">win</span><span class="p">.</span><span class="n">h</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1817" data-line-number="1817"></span></td>
							
							<td rel="L1817" class="lines-code chroma"><code class="code-inner">	<span class="nf">XSetForeground</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">dc</span><span class="p">.</span><span class="n">gc</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1818" data-line-number="1818"></span></td>
							
							<td rel="L1818" class="lines-code chroma"><code class="code-inner">			<span class="n">dc</span><span class="p">.</span><span class="n">col</span><span class="p">[</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_REVERSE</span><span class="p">)</span><span class="o">?</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1819" data-line-number="1819"></span></td>
							
							<td rel="L1819" class="lines-code chroma"><code class="code-inner">				<span class="nl">defaultfg</span> <span class="p">:</span> <span class="n">defaultbg</span><span class="p">]</span><span class="p">.</span><span class="n">pixel</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1820" data-line-number="1820"></span></td>
							
							<td rel="L1820" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1821" data-line-number="1821"></span></td>
							
							<td rel="L1821" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1822" data-line-number="1822"></span></td>
							
							<td rel="L1822" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1823" data-line-number="1823"></span></td>
							
							<td rel="L1823" class="lines-code chroma"><code class="code-inner"><span class="nf">xximspot</span><span class="p">(</span><span class="kt">int</span> <span class="n">x</span><span class="p">,</span> <span class="kt">int</span> <span class="n">y</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1824" data-line-number="1824"></span></td>
							
							<td rel="L1824" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1825" data-line-number="1825"></span></td>
							
							<td rel="L1825" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xic</span> <span class="o">=</span><span class="o">=</span> <span class="nb">NULL</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1826" data-line-number="1826"></span></td>
							
							<td rel="L1826" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1827" data-line-number="1827"></span></td>
							
							<td rel="L1827" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1828" data-line-number="1828"></span></td>
							
							<td rel="L1828" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">spot</span><span class="p">.</span><span class="n">x</span> <span class="o">=</span> <span class="n">borderpx</span> <span class="o">+</span> <span class="n">x</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">cw</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1829" data-line-number="1829"></span></td>
							
							<td rel="L1829" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">spot</span><span class="p">.</span><span class="n">y</span> <span class="o">=</span> <span class="n">borderpx</span> <span class="o">+</span> <span class="p">(</span><span class="n">y</span> <span class="o">+</span> <span class="mi">1</span><span class="p">)</span> <span class="o">*</span> <span class="n">win</span><span class="p">.</span><span class="n">ch</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1830" data-line-number="1830"></span></td>
							
							<td rel="L1830" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1831" data-line-number="1831"></span></td>
							
							<td rel="L1831" class="lines-code chroma"><code class="code-inner">	<span class="nf">XSetICValues</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xic</span><span class="p">,</span> <span class="n">XNPreeditAttributes</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">spotlist</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1832" data-line-number="1832"></span></td>
							
							<td rel="L1832" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1833" data-line-number="1833"></span></td>
							
							<td rel="L1833" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1834" data-line-number="1834"></span></td>
							
							<td rel="L1834" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1835" data-line-number="1835"></span></td>
							
							<td rel="L1835" class="lines-code chroma"><code class="code-inner"><span class="nf">expose</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">ev</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1836" data-line-number="1836"></span></td>
							
							<td rel="L1836" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1837" data-line-number="1837"></span></td>
							
							<td rel="L1837" class="lines-code chroma"><code class="code-inner">	<span class="nf">redraw</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1838" data-line-number="1838"></span></td>
							
							<td rel="L1838" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1839" data-line-number="1839"></span></td>
							
							<td rel="L1839" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1840" data-line-number="1840"></span></td>
							
							<td rel="L1840" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1841" data-line-number="1841"></span></td>
							
							<td rel="L1841" class="lines-code chroma"><code class="code-inner"><span class="nf">visibility</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">ev</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1842" data-line-number="1842"></span></td>
							
							<td rel="L1842" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1843" data-line-number="1843"></span></td>
							
							<td rel="L1843" class="lines-code chroma"><code class="code-inner">	<span class="n">XVisibilityEvent</span> <span class="o">*</span><span class="n">e</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">ev</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xvisibility</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1844" data-line-number="1844"></span></td>
							
							<td rel="L1844" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1845" data-line-number="1845"></span></td>
							
							<td rel="L1845" class="lines-code chroma"><code class="code-inner">	<span class="nf">MODBIT</span><span class="p">(</span><span class="n">win</span><span class="p">.</span><span class="n">mode</span><span class="p">,</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">state</span> <span class="o">!</span><span class="o">=</span> <span class="n">VisibilityFullyObscured</span><span class="p">,</span> <span class="n">MODE_VISIBLE</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1846" data-line-number="1846"></span></td>
							
							<td rel="L1846" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1847" data-line-number="1847"></span></td>
							
							<td rel="L1847" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1848" data-line-number="1848"></span></td>
							
							<td rel="L1848" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1849" data-line-number="1849"></span></td>
							
							<td rel="L1849" class="lines-code chroma"><code class="code-inner"><span class="nf">unmap</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">ev</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1850" data-line-number="1850"></span></td>
							
							<td rel="L1850" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1851" data-line-number="1851"></span></td>
							
							<td rel="L1851" class="lines-code chroma"><code class="code-inner">	<span class="n">win</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span><span class="o">=</span> <span class="o">~</span><span class="n">MODE_VISIBLE</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1852" data-line-number="1852"></span></td>
							
							<td rel="L1852" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1853" data-line-number="1853"></span></td>
							
							<td rel="L1853" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1854" data-line-number="1854"></span></td>
							
							<td rel="L1854" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1855" data-line-number="1855"></span></td>
							
							<td rel="L1855" class="lines-code chroma"><code class="code-inner"><span class="nf">xsetpointermotion</span><span class="p">(</span><span class="kt">int</span> <span class="n">set</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1856" data-line-number="1856"></span></td>
							
							<td rel="L1856" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1857" data-line-number="1857"></span></td>
							
							<td rel="L1857" class="lines-code chroma"><code class="code-inner">	<span class="nf">MODBIT</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">attrs</span><span class="p">.</span><span class="n">event_mask</span><span class="p">,</span> <span class="n">set</span><span class="p">,</span> <span class="n">PointerMotionMask</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1858" data-line-number="1858"></span></td>
							
							<td rel="L1858" class="lines-code chroma"><code class="code-inner">	<span class="nf">XChangeWindowAttributes</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">CWEventMask</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">xw</span><span class="p">.</span><span class="n">attrs</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1859" data-line-number="1859"></span></td>
							
							<td rel="L1859" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1860" data-line-number="1860"></span></td>
							
							<td rel="L1860" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1861" data-line-number="1861"></span></td>
							
							<td rel="L1861" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1862" data-line-number="1862"></span></td>
							
							<td rel="L1862" class="lines-code chroma"><code class="code-inner"><span class="nf">xsetmode</span><span class="p">(</span><span class="kt">int</span> <span class="n">set</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">flags</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1863" data-line-number="1863"></span></td>
							
							<td rel="L1863" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1864" data-line-number="1864"></span></td>
							
							<td rel="L1864" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">mode</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">mode</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1865" data-line-number="1865"></span></td>
							
							<td rel="L1865" class="lines-code chroma"><code class="code-inner">	<span class="nf">MODBIT</span><span class="p">(</span><span class="n">win</span><span class="p">.</span><span class="n">mode</span><span class="p">,</span> <span class="n">set</span><span class="p">,</span> <span class="n">flags</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1866" data-line-number="1866"></span></td>
							
							<td rel="L1866" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="p">(</span><span class="n">win</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">MODE_REVERSE</span><span class="p">)</span> <span class="o">!</span><span class="o">=</span> <span class="p">(</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">MODE_REVERSE</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1867" data-line-number="1867"></span></td>
							
							<td rel="L1867" class="lines-code chroma"><code class="code-inner">		<span class="nf">redraw</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1868" data-line-number="1868"></span></td>
							
							<td rel="L1868" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1869" data-line-number="1869"></span></td>
							
							<td rel="L1869" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1870" data-line-number="1870"></span></td>
							
							<td rel="L1870" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1871" data-line-number="1871"></span></td>
							
							<td rel="L1871" class="lines-code chroma"><code class="code-inner"><span class="nf">xsetcursor</span><span class="p">(</span><span class="kt">int</span> <span class="n">cursor</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1872" data-line-number="1872"></span></td>
							
							<td rel="L1872" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1873" data-line-number="1873"></span></td>
							
							<td rel="L1873" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="nf">BETWEEN</span><span class="p">(</span><span class="n">cursor</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">7</span><span class="p">)</span><span class="p">)</span> <span class="cm">/* 7: st extension */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1874" data-line-number="1874"></span></td>
							
							<td rel="L1874" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1875" data-line-number="1875"></span></td>
							
							<td rel="L1875" class="lines-code chroma"><code class="code-inner">	<span class="n">win</span><span class="p">.</span><span class="n">cursor</span> <span class="o">=</span> <span class="n">cursor</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1876" data-line-number="1876"></span></td>
							
							<td rel="L1876" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1877" data-line-number="1877"></span></td>
							
							<td rel="L1877" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1878" data-line-number="1878"></span></td>
							
							<td rel="L1878" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1879" data-line-number="1879"></span></td>
							
							<td rel="L1879" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1880" data-line-number="1880"></span></td>
							
							<td rel="L1880" class="lines-code chroma"><code class="code-inner"><span class="nf">xseturgency</span><span class="p">(</span><span class="kt">int</span> <span class="n">add</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1881" data-line-number="1881"></span></td>
							
							<td rel="L1881" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1882" data-line-number="1882"></span></td>
							
							<td rel="L1882" class="lines-code chroma"><code class="code-inner">	<span class="n">XWMHints</span> <span class="o">*</span><span class="n">h</span> <span class="o">=</span> <span class="nf">XGetWMHints</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1883" data-line-number="1883"></span></td>
							
							<td rel="L1883" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1884" data-line-number="1884"></span></td>
							
							<td rel="L1884" class="lines-code chroma"><code class="code-inner">	<span class="nf">MODBIT</span><span class="p">(</span><span class="n">h</span><span class="o">-</span><span class="o">&gt;</span><span class="n">flags</span><span class="p">,</span> <span class="n">add</span><span class="p">,</span> <span class="n">XUrgencyHint</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1885" data-line-number="1885"></span></td>
							
							<td rel="L1885" class="lines-code chroma"><code class="code-inner">	<span class="nf">XSetWMHints</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">h</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1886" data-line-number="1886"></span></td>
							
							<td rel="L1886" class="lines-code chroma"><code class="code-inner">	<span class="nf">XFree</span><span class="p">(</span><span class="n">h</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1887" data-line-number="1887"></span></td>
							
							<td rel="L1887" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1888" data-line-number="1888"></span></td>
							
							<td rel="L1888" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1889" data-line-number="1889"></span></td>
							
							<td rel="L1889" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1890" data-line-number="1890"></span></td>
							
							<td rel="L1890" class="lines-code chroma"><code class="code-inner"><span class="nf">xbell</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1891" data-line-number="1891"></span></td>
							
							<td rel="L1891" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1892" data-line-number="1892"></span></td>
							
							<td rel="L1892" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_FOCUSED</span><span class="p">)</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1893" data-line-number="1893"></span></td>
							
							<td rel="L1893" class="lines-code chroma"><code class="code-inner">		<span class="nf">xseturgency</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1894" data-line-number="1894"></span></td>
							
							<td rel="L1894" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">bellvolume</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1895" data-line-number="1895"></span></td>
							
							<td rel="L1895" class="lines-code chroma"><code class="code-inner">		<span class="nf">XkbBell</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="n">xw</span><span class="p">.</span><span class="n">win</span><span class="p">,</span> <span class="n">bellvolume</span><span class="p">,</span> <span class="p">(</span><span class="n">Atom</span><span class="p">)</span><span class="nb">NULL</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1896" data-line-number="1896"></span></td>
							
							<td rel="L1896" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1897" data-line-number="1897"></span></td>
							
							<td rel="L1897" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1898" data-line-number="1898"></span></td>
							
							<td rel="L1898" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1899" data-line-number="1899"></span></td>
							
							<td rel="L1899" class="lines-code chroma"><code class="code-inner"><span class="nf">focus</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">ev</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1900" data-line-number="1900"></span></td>
							
							<td rel="L1900" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1901" data-line-number="1901"></span></td>
							
							<td rel="L1901" class="lines-code chroma"><code class="code-inner">	<span class="n">XFocusChangeEvent</span> <span class="o">*</span><span class="n">e</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">ev</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xfocus</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1902" data-line-number="1902"></span></td>
							
							<td rel="L1902" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1903" data-line-number="1903"></span></td>
							
							<td rel="L1903" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">mode</span> <span class="o">=</span><span class="o">=</span> <span class="n">NotifyGrab</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1904" data-line-number="1904"></span></td>
							
							<td rel="L1904" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1905" data-line-number="1905"></span></td>
							
							<td rel="L1905" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1906" data-line-number="1906"></span></td>
							
							<td rel="L1906" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">ev</span><span class="o">-</span><span class="o">&gt;</span><span class="n">type</span> <span class="o">=</span><span class="o">=</span> <span class="n">FocusIn</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1907" data-line-number="1907"></span></td>
							
							<td rel="L1907" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xic</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1908" data-line-number="1908"></span></td>
							
							<td rel="L1908" class="lines-code chroma"><code class="code-inner">			<span class="nf">XSetICFocus</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xic</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1909" data-line-number="1909"></span></td>
							
							<td rel="L1909" class="lines-code chroma"><code class="code-inner">		<span class="n">win</span><span class="p">.</span><span class="n">mode</span> <span class="o">|</span><span class="o">=</span> <span class="n">MODE_FOCUSED</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1910" data-line-number="1910"></span></td>
							
							<td rel="L1910" class="lines-code chroma"><code class="code-inner">		<span class="nf">xseturgency</span><span class="p">(</span><span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1911" data-line-number="1911"></span></td>
							
							<td rel="L1911" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_FOCUS</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1912" data-line-number="1912"></span></td>
							
							<td rel="L1912" class="lines-code chroma"><code class="code-inner">			<span class="nf">ttywrite</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[I</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">3</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1913" data-line-number="1913"></span></td>
							
							<td rel="L1913" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1914" data-line-number="1914"></span></td>
							
							<td rel="L1914" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xic</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1915" data-line-number="1915"></span></td>
							
							<td rel="L1915" class="lines-code chroma"><code class="code-inner">			<span class="nf">XUnsetICFocus</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xic</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1916" data-line-number="1916"></span></td>
							
							<td rel="L1916" class="lines-code chroma"><code class="code-inner">		<span class="n">win</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span><span class="o">=</span> <span class="o">~</span><span class="n">MODE_FOCUSED</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1917" data-line-number="1917"></span></td>
							
							<td rel="L1917" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_FOCUS</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1918" data-line-number="1918"></span></td>
							
							<td rel="L1918" class="lines-code chroma"><code class="code-inner">			<span class="nf">ttywrite</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="se">\033</span><span class="s">[O</span><span class="s">&#34;</span><span class="p">,</span> <span class="mi">3</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1919" data-line-number="1919"></span></td>
							
							<td rel="L1919" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1920" data-line-number="1920"></span></td>
							
							<td rel="L1920" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1921" data-line-number="1921"></span></td>
							
							<td rel="L1921" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1922" data-line-number="1922"></span></td>
							
							<td rel="L1922" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1923" data-line-number="1923"></span></td>
							
							<td rel="L1923" class="lines-code chroma"><code class="code-inner"><span class="nf">match</span><span class="p">(</span><span class="n">uint</span> <span class="n">mask</span><span class="p">,</span> <span class="n">uint</span> <span class="n">state</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1924" data-line-number="1924"></span></td>
							
							<td rel="L1924" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1925" data-line-number="1925"></span></td>
							
							<td rel="L1925" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="n">mask</span> <span class="o">=</span><span class="o">=</span> <span class="n">XK_ANY_MOD</span> <span class="o">|</span><span class="o">|</span> <span class="n">mask</span> <span class="o">=</span><span class="o">=</span> <span class="p">(</span><span class="n">state</span> <span class="o">&amp;</span> <span class="o">~</span><span class="n">ignoremod</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1926" data-line-number="1926"></span></td>
							
							<td rel="L1926" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1927" data-line-number="1927"></span></td>
							
							<td rel="L1927" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1928" data-line-number="1928"></span></td>
							
							<td rel="L1928" class="lines-code chroma"><code class="code-inner"><span class="kt">char</span><span class="o">*</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1929" data-line-number="1929"></span></td>
							
							<td rel="L1929" class="lines-code chroma"><code class="code-inner"><span class="nf">kmap</span><span class="p">(</span><span class="n">KeySym</span> <span class="n">k</span><span class="p">,</span> <span class="n">uint</span> <span class="n">state</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1930" data-line-number="1930"></span></td>
							
							<td rel="L1930" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1931" data-line-number="1931"></span></td>
							
							<td rel="L1931" class="lines-code chroma"><code class="code-inner">	<span class="n">Key</span> <span class="o">*</span><span class="n">kp</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1932" data-line-number="1932"></span></td>
							
							<td rel="L1932" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">i</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1933" data-line-number="1933"></span></td>
							
							<td rel="L1933" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1934" data-line-number="1934"></span></td>
							
							<td rel="L1934" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Check for mapped keys out of X11 function keys. */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1935" data-line-number="1935"></span></td>
							
							<td rel="L1935" class="lines-code chroma"><code class="code-inner">	<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="nf">LEN</span><span class="p">(</span><span class="n">mappedkeys</span><span class="p">)</span><span class="p">;</span> <span class="n">i</span><span class="o">+</span><span class="o">+</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1936" data-line-number="1936"></span></td>
							
							<td rel="L1936" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">mappedkeys</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span><span class="o">=</span> <span class="n">k</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1937" data-line-number="1937"></span></td>
							
							<td rel="L1937" class="lines-code chroma"><code class="code-inner">			<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1938" data-line-number="1938"></span></td>
							
							<td rel="L1938" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1939" data-line-number="1939"></span></td>
							
							<td rel="L1939" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span><span class="o">=</span> <span class="nf">LEN</span><span class="p">(</span><span class="n">mappedkeys</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1940" data-line-number="1940"></span></td>
							
							<td rel="L1940" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="p">(</span><span class="n">k</span> <span class="o">&amp;</span> <span class="mh">0xFFFF</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mh">0xFD00</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1941" data-line-number="1941"></span></td>
							
							<td rel="L1941" class="lines-code chroma"><code class="code-inner">			<span class="k">return</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1942" data-line-number="1942"></span></td>
							
							<td rel="L1942" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1943" data-line-number="1943"></span></td>
							
							<td rel="L1943" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1944" data-line-number="1944"></span></td>
							
							<td rel="L1944" class="lines-code chroma"><code class="code-inner">	<span class="k">for</span> <span class="p">(</span><span class="n">kp</span> <span class="o">=</span> <span class="n">key</span><span class="p">;</span> <span class="n">kp</span> <span class="o">&lt;</span> <span class="n">key</span> <span class="o">+</span> <span class="nf">LEN</span><span class="p">(</span><span class="n">key</span><span class="p">)</span><span class="p">;</span> <span class="n">kp</span><span class="o">+</span><span class="o">+</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1945" data-line-number="1945"></span></td>
							
							<td rel="L1945" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">kp</span><span class="o">-</span><span class="o">&gt;</span><span class="n">k</span> <span class="o">!</span><span class="o">=</span> <span class="n">k</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1946" data-line-number="1946"></span></td>
							
							<td rel="L1946" class="lines-code chroma"><code class="code-inner">			<span class="k">continue</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1947" data-line-number="1947"></span></td>
							
							<td rel="L1947" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1948" data-line-number="1948"></span></td>
							
							<td rel="L1948" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="nf">match</span><span class="p">(</span><span class="n">kp</span><span class="o">-</span><span class="o">&gt;</span><span class="n">mask</span><span class="p">,</span> <span class="n">state</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1949" data-line-number="1949"></span></td>
							
							<td rel="L1949" class="lines-code chroma"><code class="code-inner">			<span class="k">continue</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1950" data-line-number="1950"></span></td>
							
							<td rel="L1950" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1951" data-line-number="1951"></span></td>
							
							<td rel="L1951" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_APPKEYPAD</span><span class="p">)</span> <span class="o">?</span> <span class="n">kp</span><span class="o">-</span><span class="o">&gt;</span><span class="n">appkey</span> <span class="o">&lt;</span> <span class="mi">0</span> <span class="o">:</span> <span class="n">kp</span><span class="o">-</span><span class="o">&gt;</span><span class="n">appkey</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1952" data-line-number="1952"></span></td>
							
							<td rel="L1952" class="lines-code chroma"><code class="code-inner">			<span class="k">continue</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1953" data-line-number="1953"></span></td>
							
							<td rel="L1953" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_NUMLOCK</span><span class="p">)</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">kp</span><span class="o">-</span><span class="o">&gt;</span><span class="n">appkey</span> <span class="o">=</span><span class="o">=</span> <span class="mi">2</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1954" data-line-number="1954"></span></td>
							
							<td rel="L1954" class="lines-code chroma"><code class="code-inner">			<span class="k">continue</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1955" data-line-number="1955"></span></td>
							
							<td rel="L1955" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1956" data-line-number="1956"></span></td>
							
							<td rel="L1956" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_APPCURSOR</span><span class="p">)</span> <span class="o">?</span> <span class="n">kp</span><span class="o">-</span><span class="o">&gt;</span><span class="n">appcursor</span> <span class="o">&lt;</span> <span class="mi">0</span> <span class="o">:</span> <span class="n">kp</span><span class="o">-</span><span class="o">&gt;</span><span class="n">appcursor</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1957" data-line-number="1957"></span></td>
							
							<td rel="L1957" class="lines-code chroma"><code class="code-inner">			<span class="k">continue</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1958" data-line-number="1958"></span></td>
							
							<td rel="L1958" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1959" data-line-number="1959"></span></td>
							
							<td rel="L1959" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span> <span class="n">kp</span><span class="o">-</span><span class="o">&gt;</span><span class="n">s</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1960" data-line-number="1960"></span></td>
							
							<td rel="L1960" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1961" data-line-number="1961"></span></td>
							
							<td rel="L1961" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1962" data-line-number="1962"></span></td>
							
							<td rel="L1962" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1963" data-line-number="1963"></span></td>
							
							<td rel="L1963" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1964" data-line-number="1964"></span></td>
							
							<td rel="L1964" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1965" data-line-number="1965"></span></td>
							
							<td rel="L1965" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1966" data-line-number="1966"></span></td>
							
							<td rel="L1966" class="lines-code chroma"><code class="code-inner"><span class="nf">kpress</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">ev</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1967" data-line-number="1967"></span></td>
							
							<td rel="L1967" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1968" data-line-number="1968"></span></td>
							
							<td rel="L1968" class="lines-code chroma"><code class="code-inner">	<span class="n">XKeyEvent</span> <span class="o">*</span><span class="n">e</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">ev</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xkey</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1969" data-line-number="1969"></span></td>
							
							<td rel="L1969" class="lines-code chroma"><code class="code-inner">	<span class="n">KeySym</span> <span class="n">ksym</span> <span class="o">=</span> <span class="n">NoSymbol</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1970" data-line-number="1970"></span></td>
							
							<td rel="L1970" class="lines-code chroma"><code class="code-inner">	<span class="kt">char</span> <span class="n">buf</span><span class="p">[</span><span class="mi">64</span><span class="p">]</span><span class="p">,</span> <span class="o">*</span><span class="n">customkey</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1971" data-line-number="1971"></span></td>
							
							<td rel="L1971" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">len</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1972" data-line-number="1972"></span></td>
							
							<td rel="L1972" class="lines-code chroma"><code class="code-inner">	<span class="n">Rune</span> <span class="n">c</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1973" data-line-number="1973"></span></td>
							
							<td rel="L1973" class="lines-code chroma"><code class="code-inner">	<span class="n">Status</span> <span class="n">status</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1974" data-line-number="1974"></span></td>
							
							<td rel="L1974" class="lines-code chroma"><code class="code-inner">	<span class="n">Shortcut</span> <span class="o">*</span><span class="n">bp</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1975" data-line-number="1975"></span></td>
							
							<td rel="L1975" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1976" data-line-number="1976"></span></td>
							
							<td rel="L1976" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_KBDLOCK</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1977" data-line-number="1977"></span></td>
							
							<td rel="L1977" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1978" data-line-number="1978"></span></td>
							
							<td rel="L1978" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1979" data-line-number="1979"></span></td>
							
							<td rel="L1979" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xic</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1980" data-line-number="1980"></span></td>
							
							<td rel="L1980" class="lines-code chroma"><code class="code-inner">		<span class="n">len</span> <span class="o">=</span> <span class="nf">XmbLookupString</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">ime</span><span class="p">.</span><span class="n">xic</span><span class="p">,</span> <span class="n">e</span><span class="p">,</span> <span class="n">buf</span><span class="p">,</span> <span class="k">sizeof</span> <span class="n">buf</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">ksym</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">status</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1981" data-line-number="1981"></span></td>
							
							<td rel="L1981" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">status</span> <span class="o">=</span><span class="o">=</span> <span class="n">XBufferOverflow</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1982" data-line-number="1982"></span></td>
							
							<td rel="L1982" class="lines-code chroma"><code class="code-inner">			<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1983" data-line-number="1983"></span></td>
							
							<td rel="L1983" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1984" data-line-number="1984"></span></td>
							
							<td rel="L1984" class="lines-code chroma"><code class="code-inner">		<span class="n">len</span> <span class="o">=</span> <span class="nf">XLookupString</span><span class="p">(</span><span class="n">e</span><span class="p">,</span> <span class="n">buf</span><span class="p">,</span> <span class="k">sizeof</span> <span class="n">buf</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">ksym</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1985" data-line-number="1985"></span></td>
							
							<td rel="L1985" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1986" data-line-number="1986"></span></td>
							
							<td rel="L1986" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* 1. shortcuts */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1987" data-line-number="1987"></span></td>
							
							<td rel="L1987" class="lines-code chroma"><code class="code-inner">	<span class="k">for</span> <span class="p">(</span><span class="n">bp</span> <span class="o">=</span> <span class="n">shortcuts</span><span class="p">;</span> <span class="n">bp</span> <span class="o">&lt;</span> <span class="n">shortcuts</span> <span class="o">+</span> <span class="nf">LEN</span><span class="p">(</span><span class="n">shortcuts</span><span class="p">)</span><span class="p">;</span> <span class="n">bp</span><span class="o">+</span><span class="o">+</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1988" data-line-number="1988"></span></td>
							
							<td rel="L1988" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">ksym</span> <span class="o">=</span><span class="o">=</span> <span class="n">bp</span><span class="o">-</span><span class="o">&gt;</span><span class="n">keysym</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="nf">match</span><span class="p">(</span><span class="n">bp</span><span class="o">-</span><span class="o">&gt;</span><span class="n">mod</span><span class="p">,</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">state</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1989" data-line-number="1989"></span></td>
							
							<td rel="L1989" class="lines-code chroma"><code class="code-inner">			<span class="n">bp</span><span class="o">-</span><span class="o">&gt;</span><span class="nf">func</span><span class="p">(</span><span class="o">&amp;</span><span class="p">(</span><span class="n">bp</span><span class="o">-</span><span class="o">&gt;</span><span class="n">arg</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1990" data-line-number="1990"></span></td>
							
							<td rel="L1990" class="lines-code chroma"><code class="code-inner">			<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1991" data-line-number="1991"></span></td>
							
							<td rel="L1991" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1992" data-line-number="1992"></span></td>
							
							<td rel="L1992" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1993" data-line-number="1993"></span></td>
							
							<td rel="L1993" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1994" data-line-number="1994"></span></td>
							
							<td rel="L1994" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* 2. custom keys from config.h */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1995" data-line-number="1995"></span></td>
							
							<td rel="L1995" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="p">(</span><span class="n">customkey</span> <span class="o">=</span> <span class="nf">kmap</span><span class="p">(</span><span class="n">ksym</span><span class="p">,</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">state</span><span class="p">)</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1996" data-line-number="1996"></span></td>
							
							<td rel="L1996" class="lines-code chroma"><code class="code-inner">		<span class="nf">ttywrite</span><span class="p">(</span><span class="n">customkey</span><span class="p">,</span> <span class="nf">strlen</span><span class="p">(</span><span class="n">customkey</span><span class="p">)</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1997" data-line-number="1997"></span></td>
							
							<td rel="L1997" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1998" data-line-number="1998"></span></td>
							
							<td rel="L1998" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L1999" data-line-number="1999"></span></td>
							
							<td rel="L1999" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2000" data-line-number="2000"></span></td>
							
							<td rel="L2000" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* 3. composed string from input method */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2001" data-line-number="2001"></span></td>
							
							<td rel="L2001" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">len</span> <span class="o">=</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2002" data-line-number="2002"></span></td>
							
							<td rel="L2002" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2003" data-line-number="2003"></span></td>
							
							<td rel="L2003" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">len</span> <span class="o">=</span><span class="o">=</span> <span class="mi">1</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">state</span> <span class="o">&amp;</span> <span class="n">Mod1Mask</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2004" data-line-number="2004"></span></td>
							
							<td rel="L2004" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">IS_SET</span><span class="p">(</span><span class="n">MODE_8BIT</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2005" data-line-number="2005"></span></td>
							
							<td rel="L2005" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="o">*</span><span class="n">buf</span> <span class="o">&lt;</span> <span class="mo">0177</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2006" data-line-number="2006"></span></td>
							
							<td rel="L2006" class="lines-code chroma"><code class="code-inner">				<span class="n">c</span> <span class="o">=</span> <span class="o">*</span><span class="n">buf</span> <span class="o">|</span> <span class="mh">0x80</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2007" data-line-number="2007"></span></td>
							
							<td rel="L2007" class="lines-code chroma"><code class="code-inner">				<span class="n">len</span> <span class="o">=</span> <span class="nf">utf8encode</span><span class="p">(</span><span class="n">c</span><span class="p">,</span> <span class="n">buf</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2008" data-line-number="2008"></span></td>
							
							<td rel="L2008" class="lines-code chroma"><code class="code-inner">			<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2009" data-line-number="2009"></span></td>
							
							<td rel="L2009" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2010" data-line-number="2010"></span></td>
							
							<td rel="L2010" class="lines-code chroma"><code class="code-inner">			<span class="n">buf</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="n">buf</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2011" data-line-number="2011"></span></td>
							
							<td rel="L2011" class="lines-code chroma"><code class="code-inner">			<span class="n">buf</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">\033</span><span class="sc">&#39;</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2012" data-line-number="2012"></span></td>
							
							<td rel="L2012" class="lines-code chroma"><code class="code-inner">			<span class="n">len</span> <span class="o">=</span> <span class="mi">2</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2013" data-line-number="2013"></span></td>
							
							<td rel="L2013" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2014" data-line-number="2014"></span></td>
							
							<td rel="L2014" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2015" data-line-number="2015"></span></td>
							
							<td rel="L2015" class="lines-code chroma"><code class="code-inner">	<span class="nf">ttywrite</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="n">len</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2016" data-line-number="2016"></span></td>
							
							<td rel="L2016" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2017" data-line-number="2017"></span></td>
							
							<td rel="L2017" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2018" data-line-number="2018"></span></td>
							
							<td rel="L2018" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2019" data-line-number="2019"></span></td>
							
							<td rel="L2019" class="lines-code chroma"><code class="code-inner"><span class="nf">cmessage</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">e</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2020" data-line-number="2020"></span></td>
							
							<td rel="L2020" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2021" data-line-number="2021"></span></td>
							
							<td rel="L2021" class="lines-code chroma"><code class="code-inner">	<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2022" data-line-number="2022"></span></td>
							
							<td rel="L2022" class="lines-code chroma"><code class="code-inner"><span class="cm">	 * See xembed specs
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2023" data-line-number="2023"></span></td>
							
							<td rel="L2023" class="lines-code chroma"><code class="code-inner"><span class="cm">	 *  http://standards.freedesktop.org/xembed-spec/xembed-spec-latest.html
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2024" data-line-number="2024"></span></td>
							
							<td rel="L2024" class="lines-code chroma"><code class="code-inner"><span class="cm">	 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2025" data-line-number="2025"></span></td>
							
							<td rel="L2025" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xclient</span><span class="p">.</span><span class="n">message_type</span> <span class="o">=</span><span class="o">=</span> <span class="n">xw</span><span class="p">.</span><span class="n">xembed</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xclient</span><span class="p">.</span><span class="n">format</span> <span class="o">=</span><span class="o">=</span> <span class="mi">32</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2026" data-line-number="2026"></span></td>
							
							<td rel="L2026" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xclient</span><span class="p">.</span><span class="n">data</span><span class="p">.</span><span class="n">l</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">=</span><span class="o">=</span> <span class="n">XEMBED_FOCUS_IN</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2027" data-line-number="2027"></span></td>
							
							<td rel="L2027" class="lines-code chroma"><code class="code-inner">			<span class="n">win</span><span class="p">.</span><span class="n">mode</span> <span class="o">|</span><span class="o">=</span> <span class="n">MODE_FOCUSED</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2028" data-line-number="2028"></span></td>
							
							<td rel="L2028" class="lines-code chroma"><code class="code-inner">			<span class="nf">xseturgency</span><span class="p">(</span><span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2029" data-line-number="2029"></span></td>
							
							<td rel="L2029" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xclient</span><span class="p">.</span><span class="n">data</span><span class="p">.</span><span class="n">l</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">=</span><span class="o">=</span> <span class="n">XEMBED_FOCUS_OUT</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2030" data-line-number="2030"></span></td>
							
							<td rel="L2030" class="lines-code chroma"><code class="code-inner">			<span class="n">win</span><span class="p">.</span><span class="n">mode</span> <span class="o">&amp;</span><span class="o">=</span> <span class="o">~</span><span class="n">MODE_FOCUSED</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2031" data-line-number="2031"></span></td>
							
							<td rel="L2031" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2032" data-line-number="2032"></span></td>
							
							<td rel="L2032" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xclient</span><span class="p">.</span><span class="n">data</span><span class="p">.</span><span class="n">l</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span><span class="o">=</span> <span class="n">xw</span><span class="p">.</span><span class="n">wmdeletewin</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2033" data-line-number="2033"></span></td>
							
							<td rel="L2033" class="lines-code chroma"><code class="code-inner">		<span class="nf">ttyhangup</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2034" data-line-number="2034"></span></td>
							
							<td rel="L2034" class="lines-code chroma"><code class="code-inner">		<span class="nf">exit</span><span class="p">(</span><span class="mi">0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2035" data-line-number="2035"></span></td>
							
							<td rel="L2035" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2036" data-line-number="2036"></span></td>
							
							<td rel="L2036" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2037" data-line-number="2037"></span></td>
							
							<td rel="L2037" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2038" data-line-number="2038"></span></td>
							
							<td rel="L2038" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2039" data-line-number="2039"></span></td>
							
							<td rel="L2039" class="lines-code chroma"><code class="code-inner"><span class="nf">resize</span><span class="p">(</span><span class="n">XEvent</span> <span class="o">*</span><span class="n">e</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2040" data-line-number="2040"></span></td>
							
							<td rel="L2040" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2041" data-line-number="2041"></span></td>
							
							<td rel="L2041" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xconfigure</span><span class="p">.</span><span class="n">width</span> <span class="o">=</span><span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">w</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xconfigure</span><span class="p">.</span><span class="n">height</span> <span class="o">=</span><span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">h</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2042" data-line-number="2042"></span></td>
							
							<td rel="L2042" class="lines-code chroma"><code class="code-inner">		<span class="k">return</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2043" data-line-number="2043"></span></td>
							
							<td rel="L2043" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2044" data-line-number="2044"></span></td>
							
							<td rel="L2044" class="lines-code chroma"><code class="code-inner">	<span class="nf">cresize</span><span class="p">(</span><span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xconfigure</span><span class="p">.</span><span class="n">width</span><span class="p">,</span> <span class="n">e</span><span class="o">-</span><span class="o">&gt;</span><span class="n">xconfigure</span><span class="p">.</span><span class="n">height</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2045" data-line-number="2045"></span></td>
							
							<td rel="L2045" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2046" data-line-number="2046"></span></td>
							
							<td rel="L2046" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2047" data-line-number="2047"></span></td>
							
							<td rel="L2047" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2048" data-line-number="2048"></span></td>
							
							<td rel="L2048" class="lines-code chroma"><code class="code-inner"><span class="nf">run</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2049" data-line-number="2049"></span></td>
							
							<td rel="L2049" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2050" data-line-number="2050"></span></td>
							
							<td rel="L2050" class="lines-code chroma"><code class="code-inner">	<span class="n">XEvent</span> <span class="n">ev</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2051" data-line-number="2051"></span></td>
							
							<td rel="L2051" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">w</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">w</span><span class="p">,</span> <span class="n">h</span> <span class="o">=</span> <span class="n">win</span><span class="p">.</span><span class="n">h</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2052" data-line-number="2052"></span></td>
							
							<td rel="L2052" class="lines-code chroma"><code class="code-inner">	<span class="n">fd_set</span> <span class="n">rfd</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2053" data-line-number="2053"></span></td>
							
							<td rel="L2053" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">xfd</span> <span class="o">=</span> <span class="nf">XConnectionNumber</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">)</span><span class="p">,</span> <span class="n">ttyfd</span><span class="p">,</span> <span class="n">xev</span><span class="p">,</span> <span class="n">drawing</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2054" data-line-number="2054"></span></td>
							
							<td rel="L2054" class="lines-code chroma"><code class="code-inner">	<span class="k">struct</span> <span class="n">timespec</span> <span class="n">seltv</span><span class="p">,</span> <span class="o">*</span><span class="n">tv</span><span class="p">,</span> <span class="n">now</span><span class="p">,</span> <span class="n">lastblink</span><span class="p">,</span> <span class="n">trigger</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2055" data-line-number="2055"></span></td>
							
							<td rel="L2055" class="lines-code chroma"><code class="code-inner">	<span class="kt">double</span> <span class="n">timeout</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2056" data-line-number="2056"></span></td>
							
							<td rel="L2056" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2057" data-line-number="2057"></span></td>
							
							<td rel="L2057" class="lines-code chroma"><code class="code-inner">	<span class="cm">/* Waiting for window mapping */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2058" data-line-number="2058"></span></td>
							
							<td rel="L2058" class="lines-code chroma"><code class="code-inner">	<span class="k">do</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2059" data-line-number="2059"></span></td>
							
							<td rel="L2059" class="lines-code chroma"><code class="code-inner">		<span class="nf">XNextEvent</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">ev</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2060" data-line-number="2060"></span></td>
							
							<td rel="L2060" class="lines-code chroma"><code class="code-inner">		<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2061" data-line-number="2061"></span></td>
							
							<td rel="L2061" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * This XFilterEvent call is required because of XOpenIM. It
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2062" data-line-number="2062"></span></td>
							
							<td rel="L2062" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * does filter out the key event and some client message for
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2063" data-line-number="2063"></span></td>
							
							<td rel="L2063" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * the input method too.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2064" data-line-number="2064"></span></td>
							
							<td rel="L2064" class="lines-code chroma"><code class="code-inner"><span class="cm">		 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2065" data-line-number="2065"></span></td>
							
							<td rel="L2065" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">XFilterEvent</span><span class="p">(</span><span class="o">&amp;</span><span class="n">ev</span><span class="p">,</span> <span class="n">None</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2066" data-line-number="2066"></span></td>
							
							<td rel="L2066" class="lines-code chroma"><code class="code-inner">			<span class="k">continue</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2067" data-line-number="2067"></span></td>
							
							<td rel="L2067" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">ev</span><span class="p">.</span><span class="n">type</span> <span class="o">=</span><span class="o">=</span> <span class="n">ConfigureNotify</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2068" data-line-number="2068"></span></td>
							
							<td rel="L2068" class="lines-code chroma"><code class="code-inner">			<span class="n">w</span> <span class="o">=</span> <span class="n">ev</span><span class="p">.</span><span class="n">xconfigure</span><span class="p">.</span><span class="n">width</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2069" data-line-number="2069"></span></td>
							
							<td rel="L2069" class="lines-code chroma"><code class="code-inner">			<span class="n">h</span> <span class="o">=</span> <span class="n">ev</span><span class="p">.</span><span class="n">xconfigure</span><span class="p">.</span><span class="n">height</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2070" data-line-number="2070"></span></td>
							
							<td rel="L2070" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2071" data-line-number="2071"></span></td>
							
							<td rel="L2071" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="k">while</span> <span class="p">(</span><span class="n">ev</span><span class="p">.</span><span class="n">type</span> <span class="o">!</span><span class="o">=</span> <span class="n">MapNotify</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2072" data-line-number="2072"></span></td>
							
							<td rel="L2072" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2073" data-line-number="2073"></span></td>
							
							<td rel="L2073" class="lines-code chroma"><code class="code-inner">	<span class="n">ttyfd</span> <span class="o">=</span> <span class="nf">ttynew</span><span class="p">(</span><span class="n">opt_line</span><span class="p">,</span> <span class="n">shell</span><span class="p">,</span> <span class="n">opt_io</span><span class="p">,</span> <span class="n">opt_cmd</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2074" data-line-number="2074"></span></td>
							
							<td rel="L2074" class="lines-code chroma"><code class="code-inner">	<span class="nf">cresize</span><span class="p">(</span><span class="n">w</span><span class="p">,</span> <span class="n">h</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2075" data-line-number="2075"></span></td>
							
							<td rel="L2075" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2076" data-line-number="2076"></span></td>
							
							<td rel="L2076" class="lines-code chroma"><code class="code-inner">	<span class="k">for</span> <span class="p">(</span><span class="n">timeout</span> <span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">,</span> <span class="n">drawing</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span> <span class="n">lastblink</span> <span class="o">=</span> <span class="p">(</span><span class="k">struct</span> <span class="n">timespec</span><span class="p">)</span><span class="p">{</span><span class="mi">0</span><span class="p">}</span><span class="p">;</span><span class="p">;</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2077" data-line-number="2077"></span></td>
							
							<td rel="L2077" class="lines-code chroma"><code class="code-inner">		<span class="nf">FD_ZERO</span><span class="p">(</span><span class="o">&amp;</span><span class="n">rfd</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2078" data-line-number="2078"></span></td>
							
							<td rel="L2078" class="lines-code chroma"><code class="code-inner">		<span class="nf">FD_SET</span><span class="p">(</span><span class="n">ttyfd</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">rfd</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2079" data-line-number="2079"></span></td>
							
							<td rel="L2079" class="lines-code chroma"><code class="code-inner">		<span class="nf">FD_SET</span><span class="p">(</span><span class="n">xfd</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">rfd</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2080" data-line-number="2080"></span></td>
							
							<td rel="L2080" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2081" data-line-number="2081"></span></td>
							
							<td rel="L2081" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">XPending</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2082" data-line-number="2082"></span></td>
							
							<td rel="L2082" class="lines-code chroma"><code class="code-inner">			<span class="n">timeout</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>  <span class="cm">/* existing events might not set xfd */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2083" data-line-number="2083"></span></td>
							
							<td rel="L2083" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2084" data-line-number="2084"></span></td>
							
							<td rel="L2084" class="lines-code chroma"><code class="code-inner">		<span class="n">seltv</span><span class="p">.</span><span class="n">tv_sec</span> <span class="o">=</span> <span class="n">timeout</span> <span class="o">/</span> <span class="mf">1E3</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2085" data-line-number="2085"></span></td>
							
							<td rel="L2085" class="lines-code chroma"><code class="code-inner">		<span class="n">seltv</span><span class="p">.</span><span class="n">tv_nsec</span> <span class="o">=</span> <span class="mf">1E6</span> <span class="o">*</span> <span class="p">(</span><span class="n">timeout</span> <span class="o">-</span> <span class="mf">1E3</span> <span class="o">*</span> <span class="n">seltv</span><span class="p">.</span><span class="n">tv_sec</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2086" data-line-number="2086"></span></td>
							
							<td rel="L2086" class="lines-code chroma"><code class="code-inner">		<span class="n">tv</span> <span class="o">=</span> <span class="n">timeout</span> <span class="o">&gt;</span><span class="o">=</span> <span class="mi">0</span> <span class="o">?</span> <span class="o">&amp;</span><span class="nl">seltv</span> <span class="p">:</span> <span class="nb">NULL</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2087" data-line-number="2087"></span></td>
							
							<td rel="L2087" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2088" data-line-number="2088"></span></td>
							
							<td rel="L2088" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">pselect</span><span class="p">(</span><span class="nf">MAX</span><span class="p">(</span><span class="n">xfd</span><span class="p">,</span> <span class="n">ttyfd</span><span class="p">)</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">rfd</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="n">tv</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2089" data-line-number="2089"></span></td>
							
							<td rel="L2089" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="n">errno</span> <span class="o">=</span><span class="o">=</span> <span class="n">EINTR</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2090" data-line-number="2090"></span></td>
							
							<td rel="L2090" class="lines-code chroma"><code class="code-inner">				<span class="k">continue</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2091" data-line-number="2091"></span></td>
							
							<td rel="L2091" class="lines-code chroma"><code class="code-inner">			<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">select failed: %s</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="nf">strerror</span><span class="p">(</span><span class="n">errno</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2092" data-line-number="2092"></span></td>
							
							<td rel="L2092" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2093" data-line-number="2093"></span></td>
							
							<td rel="L2093" class="lines-code chroma"><code class="code-inner">		<span class="nf">clock_gettime</span><span class="p">(</span><span class="n">CLOCK_MONOTONIC</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">now</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2094" data-line-number="2094"></span></td>
							
							<td rel="L2094" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2095" data-line-number="2095"></span></td>
							
							<td rel="L2095" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">FD_ISSET</span><span class="p">(</span><span class="n">ttyfd</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">rfd</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2096" data-line-number="2096"></span></td>
							
							<td rel="L2096" class="lines-code chroma"><code class="code-inner">			<span class="nf">ttyread</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2097" data-line-number="2097"></span></td>
							
							<td rel="L2097" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2098" data-line-number="2098"></span></td>
							
							<td rel="L2098" class="lines-code chroma"><code class="code-inner">		<span class="n">xev</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2099" data-line-number="2099"></span></td>
							
							<td rel="L2099" class="lines-code chroma"><code class="code-inner">		<span class="k">while</span> <span class="p">(</span><span class="nf">XPending</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2100" data-line-number="2100"></span></td>
							
							<td rel="L2100" class="lines-code chroma"><code class="code-inner">			<span class="n">xev</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2101" data-line-number="2101"></span></td>
							
							<td rel="L2101" class="lines-code chroma"><code class="code-inner">			<span class="nf">XNextEvent</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">ev</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2102" data-line-number="2102"></span></td>
							
							<td rel="L2102" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="nf">XFilterEvent</span><span class="p">(</span><span class="o">&amp;</span><span class="n">ev</span><span class="p">,</span> <span class="n">None</span><span class="p">)</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2103" data-line-number="2103"></span></td>
							
							<td rel="L2103" class="lines-code chroma"><code class="code-inner">				<span class="k">continue</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2104" data-line-number="2104"></span></td>
							
							<td rel="L2104" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="n">handler</span><span class="p">[</span><span class="n">ev</span><span class="p">.</span><span class="n">type</span><span class="p">]</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2105" data-line-number="2105"></span></td>
							
							<td rel="L2105" class="lines-code chroma"><code class="code-inner">				<span class="p">(</span><span class="n">handler</span><span class="p">[</span><span class="n">ev</span><span class="p">.</span><span class="n">type</span><span class="p">]</span><span class="p">)</span><span class="p">(</span><span class="o">&amp;</span><span class="n">ev</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2106" data-line-number="2106"></span></td>
							
							<td rel="L2106" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2107" data-line-number="2107"></span></td>
							
							<td rel="L2107" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2108" data-line-number="2108"></span></td>
							
							<td rel="L2108" class="lines-code chroma"><code class="code-inner">		<span class="cm">/*
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2109" data-line-number="2109"></span></td>
							
							<td rel="L2109" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * To reduce flicker and tearing, when new content or event
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2110" data-line-number="2110"></span></td>
							
							<td rel="L2110" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * triggers drawing, we first wait a bit to ensure we got
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2111" data-line-number="2111"></span></td>
							
							<td rel="L2111" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * everything, and if nothing new arrives - we draw.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2112" data-line-number="2112"></span></td>
							
							<td rel="L2112" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * We start with trying to wait minlatency ms. If more content
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2113" data-line-number="2113"></span></td>
							
							<td rel="L2113" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * arrives sooner, we retry with shorter and shorter periods,
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2114" data-line-number="2114"></span></td>
							
							<td rel="L2114" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * and eventually draw even without idle after maxlatency ms.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2115" data-line-number="2115"></span></td>
							
							<td rel="L2115" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * Typically this results in low latency while interacting,
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2116" data-line-number="2116"></span></td>
							
							<td rel="L2116" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * maximum latency intervals during `cat huge.txt`, and perfect
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2117" data-line-number="2117"></span></td>
							
							<td rel="L2117" class="lines-code chroma"><code class="code-inner"><span class="cm">		 * sync with periodic updates from animations/key-repeats/etc.
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2118" data-line-number="2118"></span></td>
							
							<td rel="L2118" class="lines-code chroma"><code class="code-inner"><span class="cm">		 */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2119" data-line-number="2119"></span></td>
							
							<td rel="L2119" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="nf">FD_ISSET</span><span class="p">(</span><span class="n">ttyfd</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">rfd</span><span class="p">)</span> <span class="o">|</span><span class="o">|</span> <span class="n">xev</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2120" data-line-number="2120"></span></td>
							
							<td rel="L2120" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">drawing</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2121" data-line-number="2121"></span></td>
							
							<td rel="L2121" class="lines-code chroma"><code class="code-inner">				<span class="n">trigger</span> <span class="o">=</span> <span class="n">now</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2122" data-line-number="2122"></span></td>
							
							<td rel="L2122" class="lines-code chroma"><code class="code-inner">				<span class="n">drawing</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2123" data-line-number="2123"></span></td>
							
							<td rel="L2123" class="lines-code chroma"><code class="code-inner">			<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2124" data-line-number="2124"></span></td>
							
							<td rel="L2124" class="lines-code chroma"><code class="code-inner">			<span class="n">timeout</span> <span class="o">=</span> <span class="p">(</span><span class="n">maxlatency</span> <span class="o">-</span> <span class="nf">TIMEDIFF</span><span class="p">(</span><span class="n">now</span><span class="p">,</span> <span class="n">trigger</span><span class="p">)</span><span class="p">)</span> \
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2125" data-line-number="2125"></span></td>
							
							<td rel="L2125" class="lines-code chroma"><code class="code-inner">			          <span class="o">/</span> <span class="n">maxlatency</span> <span class="o">*</span> <span class="n">minlatency</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2126" data-line-number="2126"></span></td>
							
							<td rel="L2126" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="n">timeout</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2127" data-line-number="2127"></span></td>
							
							<td rel="L2127" class="lines-code chroma"><code class="code-inner">				<span class="k">continue</span><span class="p">;</span>  <span class="cm">/* we have time, try to find idle */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2128" data-line-number="2128"></span></td>
							
							<td rel="L2128" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2129" data-line-number="2129"></span></td>
							
							<td rel="L2129" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2130" data-line-number="2130"></span></td>
							
							<td rel="L2130" class="lines-code chroma"><code class="code-inner">		<span class="cm">/* idle detected or maxlatency exhausted -&gt; draw */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2131" data-line-number="2131"></span></td>
							
							<td rel="L2131" class="lines-code chroma"><code class="code-inner">		<span class="n">timeout</span> <span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2132" data-line-number="2132"></span></td>
							
							<td rel="L2132" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">blinktimeout</span> <span class="o">&amp;</span><span class="o">&amp;</span> <span class="nf">tattrset</span><span class="p">(</span><span class="n">ATTR_BLINK</span><span class="p">)</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2133" data-line-number="2133"></span></td>
							
							<td rel="L2133" class="lines-code chroma"><code class="code-inner">			<span class="n">timeout</span> <span class="o">=</span> <span class="n">blinktimeout</span> <span class="o">-</span> <span class="nf">TIMEDIFF</span><span class="p">(</span><span class="n">now</span><span class="p">,</span> <span class="n">lastblink</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2134" data-line-number="2134"></span></td>
							
							<td rel="L2134" class="lines-code chroma"><code class="code-inner">			<span class="k">if</span> <span class="p">(</span><span class="n">timeout</span> <span class="o">&lt;</span><span class="o">=</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2135" data-line-number="2135"></span></td>
							
							<td rel="L2135" class="lines-code chroma"><code class="code-inner">				<span class="k">if</span> <span class="p">(</span><span class="o">-</span><span class="n">timeout</span> <span class="o">&gt;</span> <span class="n">blinktimeout</span><span class="p">)</span> <span class="cm">/* start visible */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2136" data-line-number="2136"></span></td>
							
							<td rel="L2136" class="lines-code chroma"><code class="code-inner">					<span class="n">win</span><span class="p">.</span><span class="n">mode</span> <span class="o">|</span><span class="o">=</span> <span class="n">MODE_BLINK</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2137" data-line-number="2137"></span></td>
							
							<td rel="L2137" class="lines-code chroma"><code class="code-inner">				<span class="n">win</span><span class="p">.</span><span class="n">mode</span> <span class="o">^</span><span class="o">=</span> <span class="n">MODE_BLINK</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2138" data-line-number="2138"></span></td>
							
							<td rel="L2138" class="lines-code chroma"><code class="code-inner">				<span class="nf">tsetdirtattr</span><span class="p">(</span><span class="n">ATTR_BLINK</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2139" data-line-number="2139"></span></td>
							
							<td rel="L2139" class="lines-code chroma"><code class="code-inner">				<span class="n">lastblink</span> <span class="o">=</span> <span class="n">now</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2140" data-line-number="2140"></span></td>
							
							<td rel="L2140" class="lines-code chroma"><code class="code-inner">				<span class="n">timeout</span> <span class="o">=</span> <span class="n">blinktimeout</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2141" data-line-number="2141"></span></td>
							
							<td rel="L2141" class="lines-code chroma"><code class="code-inner">			<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2142" data-line-number="2142"></span></td>
							
							<td rel="L2142" class="lines-code chroma"><code class="code-inner">		<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2143" data-line-number="2143"></span></td>
							
							<td rel="L2143" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2144" data-line-number="2144"></span></td>
							
							<td rel="L2144" class="lines-code chroma"><code class="code-inner">		<span class="nf">draw</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2145" data-line-number="2145"></span></td>
							
							<td rel="L2145" class="lines-code chroma"><code class="code-inner">		<span class="nf">XFlush</span><span class="p">(</span><span class="n">xw</span><span class="p">.</span><span class="n">dpy</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2146" data-line-number="2146"></span></td>
							
							<td rel="L2146" class="lines-code chroma"><code class="code-inner">		<span class="n">drawing</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2147" data-line-number="2147"></span></td>
							
							<td rel="L2147" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2148" data-line-number="2148"></span></td>
							
							<td rel="L2148" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2149" data-line-number="2149"></span></td>
							
							<td rel="L2149" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2150" data-line-number="2150"></span></td>
							
							<td rel="L2150" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2151" data-line-number="2151"></span></td>
							
							<td rel="L2151" class="lines-code chroma"><code class="code-inner"><span class="nf">usage</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2152" data-line-number="2152"></span></td>
							
							<td rel="L2152" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2153" data-line-number="2153"></span></td>
							
							<td rel="L2153" class="lines-code chroma"><code class="code-inner">	<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">usage: %s [-aiv] [-c class] [-f font] [-g geometry]</span><span class="s">&#34;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2154" data-line-number="2154"></span></td>
							
							<td rel="L2154" class="lines-code chroma"><code class="code-inner">	    <span class="sa"></span><span class="s">&#34;</span><span class="s"> [-n name] [-o file]</span><span class="se">\n</span><span class="s">&#34;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2155" data-line-number="2155"></span></td>
							
							<td rel="L2155" class="lines-code chroma"><code class="code-inner">	    <span class="sa"></span><span class="s">&#34;</span><span class="s">          [-T title] [-t title] [-w windowid]</span><span class="s">&#34;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2156" data-line-number="2156"></span></td>
							
							<td rel="L2156" class="lines-code chroma"><code class="code-inner">	    <span class="sa"></span><span class="s">&#34;</span><span class="s"> [[-e] command [args ...]]</span><span class="se">\n</span><span class="s">&#34;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2157" data-line-number="2157"></span></td>
							
							<td rel="L2157" class="lines-code chroma"><code class="code-inner">	    <span class="sa"></span><span class="s">&#34;</span><span class="s">       %s [-aiv] [-c class] [-f font] [-g geometry]</span><span class="s">&#34;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2158" data-line-number="2158"></span></td>
							
							<td rel="L2158" class="lines-code chroma"><code class="code-inner">	    <span class="sa"></span><span class="s">&#34;</span><span class="s"> [-n name] [-o file]</span><span class="se">\n</span><span class="s">&#34;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2159" data-line-number="2159"></span></td>
							
							<td rel="L2159" class="lines-code chroma"><code class="code-inner">	    <span class="sa"></span><span class="s">&#34;</span><span class="s">          [-T title] [-t title] [-w windowid] -l line</span><span class="s">&#34;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2160" data-line-number="2160"></span></td>
							
							<td rel="L2160" class="lines-code chroma"><code class="code-inner">	    <span class="sa"></span><span class="s">&#34;</span><span class="s"> [stty_args ...]</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">argv0</span><span class="p">,</span> <span class="n">argv0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2161" data-line-number="2161"></span></td>
							
							<td rel="L2161" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2162" data-line-number="2162"></span></td>
							
							<td rel="L2162" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2163" data-line-number="2163"></span></td>
							
							<td rel="L2163" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2164" data-line-number="2164"></span></td>
							
							<td rel="L2164" class="lines-code chroma"><code class="code-inner"><span class="nf">main</span><span class="p">(</span><span class="kt">int</span> <span class="n">argc</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">argv</span><span class="p">[</span><span class="p">]</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2165" data-line-number="2165"></span></td>
							
							<td rel="L2165" class="lines-code chroma"><code class="code-inner"><span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2166" data-line-number="2166"></span></td>
							
							<td rel="L2166" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">l</span> <span class="o">=</span> <span class="n">xw</span><span class="p">.</span><span class="n">t</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2167" data-line-number="2167"></span></td>
							
							<td rel="L2167" class="lines-code chroma"><code class="code-inner">	<span class="n">xw</span><span class="p">.</span><span class="n">isfixed</span> <span class="o">=</span> <span class="n">False</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2168" data-line-number="2168"></span></td>
							
							<td rel="L2168" class="lines-code chroma"><code class="code-inner">	<span class="nf">xsetcursor</span><span class="p">(</span><span class="n">cursorshape</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2169" data-line-number="2169"></span></td>
							
							<td rel="L2169" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2170" data-line-number="2170"></span></td>
							
							<td rel="L2170" class="lines-code chroma"><code class="code-inner">	<span class="n">ARGBEGIN</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2171" data-line-number="2171"></span></td>
							
							<td rel="L2171" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">a</span><span class="sc">&#39;</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2172" data-line-number="2172"></span></td>
							
							<td rel="L2172" class="lines-code chroma"><code class="code-inner">		<span class="n">allowaltscreen</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2173" data-line-number="2173"></span></td>
							
							<td rel="L2173" class="lines-code chroma"><code class="code-inner">		<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2174" data-line-number="2174"></span></td>
							
							<td rel="L2174" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">A</span><span class="sc">&#39;</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2175" data-line-number="2175"></span></td>
							
							<td rel="L2175" class="lines-code chroma"><code class="code-inner">		<span class="n">alpha</span> <span class="o">=</span> <span class="nf">strtof</span><span class="p">(</span><span class="nf">EARGF</span><span class="p">(</span><span class="nf">usage</span><span class="p">(</span><span class="p">)</span><span class="p">)</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2176" data-line-number="2176"></span></td>
							
							<td rel="L2176" class="lines-code chroma"><code class="code-inner">		<span class="nf">LIMIT</span><span class="p">(</span><span class="n">alpha</span><span class="p">,</span> <span class="mf">0.0</span><span class="p">,</span> <span class="mf">1.0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2177" data-line-number="2177"></span></td>
							
							<td rel="L2177" class="lines-code chroma"><code class="code-inner">		<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2178" data-line-number="2178"></span></td>
							
							<td rel="L2178" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">c</span><span class="sc">&#39;</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2179" data-line-number="2179"></span></td>
							
							<td rel="L2179" class="lines-code chroma"><code class="code-inner">		<span class="n">opt_class</span> <span class="o">=</span> <span class="nf">EARGF</span><span class="p">(</span><span class="nf">usage</span><span class="p">(</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2180" data-line-number="2180"></span></td>
							
							<td rel="L2180" class="lines-code chroma"><code class="code-inner">		<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2181" data-line-number="2181"></span></td>
							
							<td rel="L2181" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">e</span><span class="sc">&#39;</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2182" data-line-number="2182"></span></td>
							
							<td rel="L2182" class="lines-code chroma"><code class="code-inner">		<span class="k">if</span> <span class="p">(</span><span class="n">argc</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2183" data-line-number="2183"></span></td>
							
							<td rel="L2183" class="lines-code chroma"><code class="code-inner">			<span class="o">-</span><span class="o">-</span><span class="n">argc</span><span class="p">,</span> <span class="o">+</span><span class="o">+</span><span class="n">argv</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2184" data-line-number="2184"></span></td>
							
							<td rel="L2184" class="lines-code chroma"><code class="code-inner">		<span class="k">goto</span> <span class="n">run</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2185" data-line-number="2185"></span></td>
							
							<td rel="L2185" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">f</span><span class="sc">&#39;</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2186" data-line-number="2186"></span></td>
							
							<td rel="L2186" class="lines-code chroma"><code class="code-inner">		<span class="n">opt_font</span> <span class="o">=</span> <span class="nf">EARGF</span><span class="p">(</span><span class="nf">usage</span><span class="p">(</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2187" data-line-number="2187"></span></td>
							
							<td rel="L2187" class="lines-code chroma"><code class="code-inner">		<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2188" data-line-number="2188"></span></td>
							
							<td rel="L2188" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">g</span><span class="sc">&#39;</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2189" data-line-number="2189"></span></td>
							
							<td rel="L2189" class="lines-code chroma"><code class="code-inner">		<span class="n">xw</span><span class="p">.</span><span class="n">gm</span> <span class="o">=</span> <span class="nf">XParseGeometry</span><span class="p">(</span><span class="nf">EARGF</span><span class="p">(</span><span class="nf">usage</span><span class="p">(</span><span class="p">)</span><span class="p">)</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2190" data-line-number="2190"></span></td>
							
							<td rel="L2190" class="lines-code chroma"><code class="code-inner">				<span class="o">&amp;</span><span class="n">xw</span><span class="p">.</span><span class="n">l</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">xw</span><span class="p">.</span><span class="n">t</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">cols</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">rows</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2191" data-line-number="2191"></span></td>
							
							<td rel="L2191" class="lines-code chroma"><code class="code-inner">		<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2192" data-line-number="2192"></span></td>
							
							<td rel="L2192" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">i</span><span class="sc">&#39;</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2193" data-line-number="2193"></span></td>
							
							<td rel="L2193" class="lines-code chroma"><code class="code-inner">		<span class="n">xw</span><span class="p">.</span><span class="n">isfixed</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2194" data-line-number="2194"></span></td>
							
							<td rel="L2194" class="lines-code chroma"><code class="code-inner">		<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2195" data-line-number="2195"></span></td>
							
							<td rel="L2195" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">o</span><span class="sc">&#39;</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2196" data-line-number="2196"></span></td>
							
							<td rel="L2196" class="lines-code chroma"><code class="code-inner">		<span class="n">opt_io</span> <span class="o">=</span> <span class="nf">EARGF</span><span class="p">(</span><span class="nf">usage</span><span class="p">(</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2197" data-line-number="2197"></span></td>
							
							<td rel="L2197" class="lines-code chroma"><code class="code-inner">		<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2198" data-line-number="2198"></span></td>
							
							<td rel="L2198" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">l</span><span class="sc">&#39;</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2199" data-line-number="2199"></span></td>
							
							<td rel="L2199" class="lines-code chroma"><code class="code-inner">		<span class="n">opt_line</span> <span class="o">=</span> <span class="nf">EARGF</span><span class="p">(</span><span class="nf">usage</span><span class="p">(</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2200" data-line-number="2200"></span></td>
							
							<td rel="L2200" class="lines-code chroma"><code class="code-inner">		<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2201" data-line-number="2201"></span></td>
							
							<td rel="L2201" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">n</span><span class="sc">&#39;</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2202" data-line-number="2202"></span></td>
							
							<td rel="L2202" class="lines-code chroma"><code class="code-inner">		<span class="n">opt_name</span> <span class="o">=</span> <span class="nf">EARGF</span><span class="p">(</span><span class="nf">usage</span><span class="p">(</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2203" data-line-number="2203"></span></td>
							
							<td rel="L2203" class="lines-code chroma"><code class="code-inner">		<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2204" data-line-number="2204"></span></td>
							
							<td rel="L2204" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">t</span><span class="sc">&#39;</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2205" data-line-number="2205"></span></td>
							
							<td rel="L2205" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">T</span><span class="sc">&#39;</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2206" data-line-number="2206"></span></td>
							
							<td rel="L2206" class="lines-code chroma"><code class="code-inner">		<span class="n">opt_title</span> <span class="o">=</span> <span class="nf">EARGF</span><span class="p">(</span><span class="nf">usage</span><span class="p">(</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2207" data-line-number="2207"></span></td>
							
							<td rel="L2207" class="lines-code chroma"><code class="code-inner">		<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2208" data-line-number="2208"></span></td>
							
							<td rel="L2208" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">w</span><span class="sc">&#39;</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2209" data-line-number="2209"></span></td>
							
							<td rel="L2209" class="lines-code chroma"><code class="code-inner">		<span class="n">opt_embed</span> <span class="o">=</span> <span class="nf">EARGF</span><span class="p">(</span><span class="nf">usage</span><span class="p">(</span><span class="p">)</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2210" data-line-number="2210"></span></td>
							
							<td rel="L2210" class="lines-code chroma"><code class="code-inner">		<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2211" data-line-number="2211"></span></td>
							
							<td rel="L2211" class="lines-code chroma"><code class="code-inner">	<span class="k">case</span> <span class="sa"></span><span class="sc">&#39;</span><span class="sc">v</span><span class="sc">&#39;</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2212" data-line-number="2212"></span></td>
							
							<td rel="L2212" class="lines-code chroma"><code class="code-inner">		<span class="nf">die</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">%s </span><span class="s">&#34;</span> <span class="n">VERSION</span> <span class="sa"></span><span class="s">&#34;</span><span class="se">\n</span><span class="s">&#34;</span><span class="p">,</span> <span class="n">argv0</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2213" data-line-number="2213"></span></td>
							
							<td rel="L2213" class="lines-code chroma"><code class="code-inner">		<span class="k">break</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2214" data-line-number="2214"></span></td>
							
							<td rel="L2214" class="lines-code chroma"><code class="code-inner">	<span class="k">default</span><span class="o">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2215" data-line-number="2215"></span></td>
							
							<td rel="L2215" class="lines-code chroma"><code class="code-inner">		<span class="nf">usage</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2216" data-line-number="2216"></span></td>
							
							<td rel="L2216" class="lines-code chroma"><code class="code-inner">	<span class="p">}</span> <span class="n">ARGEND</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2217" data-line-number="2217"></span></td>
							
							<td rel="L2217" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2218" data-line-number="2218"></span></td>
							
							<td rel="L2218" class="lines-code chroma"><code class="code-inner"><span class="nl">run</span><span class="p">:</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2219" data-line-number="2219"></span></td>
							
							<td rel="L2219" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="n">argc</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span> <span class="cm">/* eat all remaining arguments */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2220" data-line-number="2220"></span></td>
							
							<td rel="L2220" class="lines-code chroma"><code class="code-inner">		<span class="n">opt_cmd</span> <span class="o">=</span> <span class="n">argv</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2221" data-line-number="2221"></span></td>
							
							<td rel="L2221" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2222" data-line-number="2222"></span></td>
							
							<td rel="L2222" class="lines-code chroma"><code class="code-inner">	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">opt_title</span><span class="p">)</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2223" data-line-number="2223"></span></td>
							
							<td rel="L2223" class="lines-code chroma"><code class="code-inner">		<span class="n">opt_title</span> <span class="o">=</span> <span class="p">(</span><span class="n">opt_line</span> <span class="o">|</span><span class="o">|</span> <span class="o">!</span><span class="n">opt_cmd</span><span class="p">)</span> <span class="o">?</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">st</span><span class="s">&#34;</span> <span class="o">:</span> <span class="n">opt_cmd</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2224" data-line-number="2224"></span></td>
							
							<td rel="L2224" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2225" data-line-number="2225"></span></td>
							
							<td rel="L2225" class="lines-code chroma"><code class="code-inner">	<span class="nf">setlocale</span><span class="p">(</span><span class="n">LC_CTYPE</span><span class="p">,</span> <span class="sa"></span><span class="s">&#34;</span><span class="s">&#34;</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2226" data-line-number="2226"></span></td>
							
							<td rel="L2226" class="lines-code chroma"><code class="code-inner">	<span class="nf">XSetLocaleModifiers</span><span class="p">(</span><span class="sa"></span><span class="s">&#34;</span><span class="s">&#34;</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2227" data-line-number="2227"></span></td>
							
							<td rel="L2227" class="lines-code chroma"><code class="code-inner">	<span class="n">cols</span> <span class="o">=</span> <span class="nf">MAX</span><span class="p">(</span><span class="n">cols</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2228" data-line-number="2228"></span></td>
							
							<td rel="L2228" class="lines-code chroma"><code class="code-inner">	<span class="n">rows</span> <span class="o">=</span> <span class="nf">MAX</span><span class="p">(</span><span class="n">rows</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2229" data-line-number="2229"></span></td>
							
							<td rel="L2229" class="lines-code chroma"><code class="code-inner">	<span class="nf">tnew</span><span class="p">(</span><span class="n">cols</span><span class="p">,</span> <span class="n">rows</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2230" data-line-number="2230"></span></td>
							
							<td rel="L2230" class="lines-code chroma"><code class="code-inner">	<span class="nf">xinit</span><span class="p">(</span><span class="n">cols</span><span class="p">,</span> <span class="n">rows</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2231" data-line-number="2231"></span></td>
							
							<td rel="L2231" class="lines-code chroma"><code class="code-inner">	<span class="nf">xsetenv</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2232" data-line-number="2232"></span></td>
							
							<td rel="L2232" class="lines-code chroma"><code class="code-inner">	<span class="nf">selinit</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2233" data-line-number="2233"></span></td>
							
							<td rel="L2233" class="lines-code chroma"><code class="code-inner">	<span class="nf">run</span><span class="p">(</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2234" data-line-number="2234"></span></td>
							
							<td rel="L2234" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2235" data-line-number="2235"></span></td>
							
							<td rel="L2235" class="lines-code chroma"><code class="code-inner">	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L2236" data-line-number="2236"></span></td>
							
							<td rel="L2236" class="lines-code chroma"><code class="code-inner"><span class="p">}</span>
</code></td>
						</tr>
						
					</tbody>
				</table>
				<div class="code-line-menu tippy-target">
					
						<a class="item ref-in-new-issue" role="menuitem" data-url-issue-new="/justaguylinux/dwm-setup/issues/new" data-url-param-body-link="/justaguylinux/dwm-setup/src/commit/2a1d3bf690bff7f76924f99136b948b539e84d31/suckless/st/x.c" rel="nofollow noindex">In neuem Issue referenzieren</a>
					
					<a class="item view_git_blame" role="menuitem" href="/justaguylinux/dwm-setup/blame/commit/2a1d3bf690bff7f76924f99136b948b539e84d31/suckless/st/x.c">„git blame“ ansehen</a>
					<a class="item copy-line-permalink" role="menuitem" data-url="/justaguylinux/dwm-setup/src/commit/2a1d3bf690bff7f76924f99136b948b539e84d31/suckless/st/x.c">Permalink kopieren</a>
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
		
			Seite: 398ms<br>
			Vorlage: 53ms
		
	</div>
    
	
		<div class="symbol-of-tolerance" role="img"></div>
	
</footer>


	<script src="/assets/js/index.js?v=13.0.0-dev-623-c059966a~gitea-1.22.0" onerror="alert('Konnte Asset-Dateien nicht von {path} laden. Bitte stelle sicher, dass auf die Asset-Dateien zugegriffen werden kann.'.replace('{path}', this.src))"></script>

	
</body>
</html>

