<!DOCTYPE html>
<html lang="de-DE" data-theme="codeberg-auto">
<head>
	<meta name="viewport" content="width=device-width, initial-scale=1">
	
	<title>dwm-setup/suckless/st/st.h an main - justaguylinux/dwm-setup - Codeberg.org</title>
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

	

	
	<meta property="og:title" content="dwm-setup/suckless/st/st.h an main">


	<meta property="og:url" content="https://codeberg.org//justaguylinux/dwm-setup/src/branch/main/suckless/st/st.h">


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
			
			<a class="item" rel="nofollow" href="/user/login?redirect_to=%2fjustaguylinux%2fdwm-setup%2fsrc%2fbranch%2fmain%2fsuckless%2fst%2fst.h">
				<svg viewBox="0 0 16 16" class="tw-mr-1 svg octicon-sign-in" aria-hidden="true" width="16" height="16"><path d="M2 2.75C2 1.784 2.784 1 3.75 1h2.5a.75.75 0 0 1 0 1.5h-2.5a.25.25 0 0 0-.25.25v10.5c0 .138.112.25.25.25h2.5a.75.75 0 0 1 0 1.5h-2.5A1.75 1.75 0 0 1 2 13.25Zm6.56 4.5h5.69a.75.75 0 0 1 0 1.5H8.56l1.97 1.97a.749.749 0 0 1-.326 1.275.75.75 0 0 1-.734-.215L6.22 8.53a.75.75 0 0 1 0-1.06l3.25-3.25a.749.749 0 0 1 1.275.326.75.75 0 0 1-.215.734Z"/></svg>
				<span>Anmelden</span>
			</a>
		
	</div>
</nav>

		



<div role="main" aria-label="dwm-setup/suckless/st/st.h an main" class="page-content repository file list ">
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
		'branchURLSuffix': '/suckless\/st\/st.h',
		'tagURLPrefix': '\/justaguylinux\/dwm-setup/src/tag/',
		'tagURLSuffix': '/suckless\/st\/st.h',
		'repoLink': "/justaguylinux/dwm-setup",
		'treePath': "suckless/st/st.h",
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
						<a class="section" href="/justaguylinux/dwm-setup/src/branch/main" title="dwm-setup">dwm-setup</a><span class="breadcrumb-divider">/</span><span class="section"><a href="/justaguylinux/dwm-setup/src/branch/main/suckless" title="suckless">suckless</a></span><span class="breadcrumb-divider">/</span><span class="section"><a href="/justaguylinux/dwm-setup/src/branch/main/suckless/st" title="st">st</a></span><span class="breadcrumb-divider">/</span><span class="active section" title="st.h">st.h</span>
								<button class="btn interact-fg tw-p-2" data-clipboard-text="suckless/st/st.h" data-tooltip-content="Pfad kopieren"><svg viewBox="0 0 16 16" class="svg octicon-copy" aria-hidden="true" width="14" height="14"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"/><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"/></svg></button></span>
				
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
			128 Zeilen
		</div>
	
	
	
		<div class="file-info-entry">
			2,9 KiB
		</div>
	
	
	
		<div class="file-info-entry">
			C
		</div>
	
	
	
	
	
</div>

			
		</div>
		<div class="file-header-right file-actions tw-flex tw-items-center tw-flex-wrap">
			
			
				<div class="ui buttons tw-mr-1">
					
					<a class="ui mini basic button" href="/justaguylinux/dwm-setup/raw/branch/main/suckless/st/st.h">Originalformat</a>
					
						<a class="ui mini basic button" href="/justaguylinux/dwm-setup/src/commit/2a1d3bf690bff7f76924f99136b948b539e84d31/suckless/st/st.h">Permalink</a>
					
					
						<a class="ui mini basic button" href="/justaguylinux/dwm-setup/blame/branch/main/suckless/st/st.h">Blame</a>
					
					<a class="ui mini basic button" href="/justaguylinux/dwm-setup/commits/branch/main/suckless/st/st.h">Verlauf</a>
					
				</div>
				<a download class="btn-octicon" href="/justaguylinux/dwm-setup/raw/branch/main/suckless/st/st.h" data-tooltip-content="Datei herunterladen">
					<svg viewBox="0 0 16 16" class="svg octicon-download" aria-hidden="true" width="16" height="16"><path d="M2.75 14A1.75 1.75 0 0 1 1 12.25v-2.5a.75.75 0 0 1 1.5 0v2.5c0 .138.112.25.25.25h10.5a.25.25 0 0 0 .25-.25v-2.5a.75.75 0 0 1 1.5 0v2.5A1.75 1.75 0 0 1 13.25 14Z"/><path d="M7.25 7.689V2a.75.75 0 0 1 1.5 0v5.689l1.97-1.969a.749.749 0 1 1 1.06 1.06l-3.25 3.25a.75.75 0 0 1-1.06 0L4.22 6.78a.749.749 0 1 1 1.06-1.06z"/></svg>
				</a>
				<a href="#" id="copy-content" class="btn-octicon " data-tooltip-content="Inhalt kopieren">
					<svg viewBox="0 0 16 16" class="svg octicon-copy" aria-hidden="true" width="14" height="14"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"/><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"/></svg>
				</a>
				
					
						<a class="btn-octicon" href="/justaguylinux/dwm-setup/rss/branch/main/suckless/st/st.h" data-tooltip-content="RSS-Feed">
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
							
							<td rel="L2" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L3" data-line-number="3"></span></td>
							
							<td rel="L3" class="lines-code chroma"><code class="code-inner"><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;stdint.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L4" data-line-number="4"></span></td>
							
							<td rel="L4" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">include</span> <span class="cpf">&lt;sys/types.h&gt;</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L5" data-line-number="5"></span></td>
							
							<td rel="L5" class="lines-code chroma"><code class="code-inner"><span class="cp"></span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L6" data-line-number="6"></span></td>
							
							<td rel="L6" class="lines-code chroma"><code class="code-inner"><span class="cm">/* macros */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L7" data-line-number="7"></span></td>
							
							<td rel="L7" class="lines-code chroma"><code class="code-inner"><span class="cp">#</span><span class="cp">define MIN(a, b)		((a) &lt; (b) ? (a) : (b))</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L8" data-line-number="8"></span></td>
							
							<td rel="L8" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define MAX(a, b)		((a) &lt; (b) ? (b) : (a))</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L9" data-line-number="9"></span></td>
							
							<td rel="L9" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define LEN(a)			(sizeof(a) </span><span class="cp">/</span><span class="cp"> sizeof(a)[0])</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L10" data-line-number="10"></span></td>
							
							<td rel="L10" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define BETWEEN(x, a, b)	((a) &lt;= (x) &amp;&amp; (x) &lt;= (b))</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L11" data-line-number="11"></span></td>
							
							<td rel="L11" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define DIVCEIL(n, d)		(((n) + ((d) - 1)) </span><span class="cp">/</span><span class="cp"> (d))</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L12" data-line-number="12"></span></td>
							
							<td rel="L12" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define DEFAULT(a, b)		(a) = (a) ? (a) : (b)</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L13" data-line-number="13"></span></td>
							
							<td rel="L13" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define LIMIT(x, a, b)		(x) = (x) &lt; (a) ? (a) : (x) &gt; (b) ? (b) : (x)</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L14" data-line-number="14"></span></td>
							
							<td rel="L14" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define ATTRCMP(a, b)		((a).mode != (b).mode || (a).fg != (b).fg || \</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L15" data-line-number="15"></span></td>
							
							<td rel="L15" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">				(a).bg != (b).bg)</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L16" data-line-number="16"></span></td>
							
							<td rel="L16" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define TIMEDIFF(t1, t2)	((t1.tv_sec-t2.tv_sec)*1000 + \</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L17" data-line-number="17"></span></td>
							
							<td rel="L17" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">				(t1.tv_nsec-t2.tv_nsec)</span><span class="cp">/</span><span class="cp">1E6)</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L18" data-line-number="18"></span></td>
							
							<td rel="L18" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define MODBIT(x, set, bit)	((set) ? ((x) |= (bit)) : ((x) &amp;= ~(bit)))</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L19" data-line-number="19"></span></td>
							
							<td rel="L19" class="lines-code chroma"><code class="code-inner"><span class="cp"></span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L20" data-line-number="20"></span></td>
							
							<td rel="L20" class="lines-code chroma"><code class="code-inner"><span class="cp">#</span><span class="cp">define TRUECOLOR(r,g,b)	(1 &lt;&lt; 24 | (r) &lt;&lt; 16 | (g) &lt;&lt; 8 | (b))</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L21" data-line-number="21"></span></td>
							
							<td rel="L21" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="cp">#</span><span class="cp">define IS_TRUECOL(x)		(1 &lt;&lt; 24 &amp; (x))</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L22" data-line-number="22"></span></td>
							
							<td rel="L22" class="lines-code chroma"><code class="code-inner"><span class="cp"></span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L23" data-line-number="23"></span></td>
							
							<td rel="L23" class="lines-code chroma"><code class="code-inner"><span class="k">enum</span> <span class="n">glyph_attribute</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L24" data-line-number="24"></span></td>
							
							<td rel="L24" class="lines-code chroma"><code class="code-inner">	<span class="n">ATTR_NULL</span>       <span class="o">=</span> <span class="mi">0</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L25" data-line-number="25"></span></td>
							
							<td rel="L25" class="lines-code chroma"><code class="code-inner">	<span class="n">ATTR_BOLD</span>       <span class="o">=</span> <span class="mi">1</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="mi">0</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L26" data-line-number="26"></span></td>
							
							<td rel="L26" class="lines-code chroma"><code class="code-inner">	<span class="n">ATTR_FAINT</span>      <span class="o">=</span> <span class="mi">1</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="mi">1</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L27" data-line-number="27"></span></td>
							
							<td rel="L27" class="lines-code chroma"><code class="code-inner">	<span class="n">ATTR_ITALIC</span>     <span class="o">=</span> <span class="mi">1</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="mi">2</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L28" data-line-number="28"></span></td>
							
							<td rel="L28" class="lines-code chroma"><code class="code-inner">	<span class="n">ATTR_UNDERLINE</span>  <span class="o">=</span> <span class="mi">1</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="mi">3</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L29" data-line-number="29"></span></td>
							
							<td rel="L29" class="lines-code chroma"><code class="code-inner">	<span class="n">ATTR_BLINK</span>      <span class="o">=</span> <span class="mi">1</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="mi">4</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L30" data-line-number="30"></span></td>
							
							<td rel="L30" class="lines-code chroma"><code class="code-inner">	<span class="n">ATTR_REVERSE</span>    <span class="o">=</span> <span class="mi">1</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="mi">5</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L31" data-line-number="31"></span></td>
							
							<td rel="L31" class="lines-code chroma"><code class="code-inner">	<span class="n">ATTR_INVISIBLE</span>  <span class="o">=</span> <span class="mi">1</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="mi">6</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L32" data-line-number="32"></span></td>
							
							<td rel="L32" class="lines-code chroma"><code class="code-inner">	<span class="n">ATTR_STRUCK</span>     <span class="o">=</span> <span class="mi">1</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="mi">7</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L33" data-line-number="33"></span></td>
							
							<td rel="L33" class="lines-code chroma"><code class="code-inner">	<span class="n">ATTR_WRAP</span>       <span class="o">=</span> <span class="mi">1</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="mi">8</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L34" data-line-number="34"></span></td>
							
							<td rel="L34" class="lines-code chroma"><code class="code-inner">	<span class="n">ATTR_WIDE</span>       <span class="o">=</span> <span class="mi">1</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="mi">9</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L35" data-line-number="35"></span></td>
							
							<td rel="L35" class="lines-code chroma"><code class="code-inner">	<span class="n">ATTR_WDUMMY</span>     <span class="o">=</span> <span class="mi">1</span> <span class="o">&lt;</span><span class="o">&lt;</span> <span class="mi">10</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L36" data-line-number="36"></span></td>
							
							<td rel="L36" class="lines-code chroma"><code class="code-inner">	<span class="n">ATTR_BOLD_FAINT</span> <span class="o">=</span> <span class="n">ATTR_BOLD</span> <span class="o">|</span> <span class="n">ATTR_FAINT</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L37" data-line-number="37"></span></td>
							
							<td rel="L37" class="lines-code chroma"><code class="code-inner"><span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L38" data-line-number="38"></span></td>
							
							<td rel="L38" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L39" data-line-number="39"></span></td>
							
							<td rel="L39" class="lines-code chroma"><code class="code-inner"><span class="k">enum</span> <span class="n">selection_mode</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L40" data-line-number="40"></span></td>
							
							<td rel="L40" class="lines-code chroma"><code class="code-inner">	<span class="n">SEL_IDLE</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L41" data-line-number="41"></span></td>
							
							<td rel="L41" class="lines-code chroma"><code class="code-inner">	<span class="n">SEL_EMPTY</span> <span class="o">=</span> <span class="mi">1</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L42" data-line-number="42"></span></td>
							
							<td rel="L42" class="lines-code chroma"><code class="code-inner">	<span class="n">SEL_READY</span> <span class="o">=</span> <span class="mi">2</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L43" data-line-number="43"></span></td>
							
							<td rel="L43" class="lines-code chroma"><code class="code-inner"><span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L44" data-line-number="44"></span></td>
							
							<td rel="L44" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L45" data-line-number="45"></span></td>
							
							<td rel="L45" class="lines-code chroma"><code class="code-inner"><span class="k">enum</span> <span class="n">selection_type</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L46" data-line-number="46"></span></td>
							
							<td rel="L46" class="lines-code chroma"><code class="code-inner">	<span class="n">SEL_REGULAR</span> <span class="o">=</span> <span class="mi">1</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L47" data-line-number="47"></span></td>
							
							<td rel="L47" class="lines-code chroma"><code class="code-inner">	<span class="n">SEL_RECTANGULAR</span> <span class="o">=</span> <span class="mi">2</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L48" data-line-number="48"></span></td>
							
							<td rel="L48" class="lines-code chroma"><code class="code-inner"><span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L49" data-line-number="49"></span></td>
							
							<td rel="L49" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L50" data-line-number="50"></span></td>
							
							<td rel="L50" class="lines-code chroma"><code class="code-inner"><span class="k">enum</span> <span class="n">selection_snap</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L51" data-line-number="51"></span></td>
							
							<td rel="L51" class="lines-code chroma"><code class="code-inner">	<span class="n">SNAP_WORD</span> <span class="o">=</span> <span class="mi">1</span><span class="p">,</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L52" data-line-number="52"></span></td>
							
							<td rel="L52" class="lines-code chroma"><code class="code-inner">	<span class="n">SNAP_LINE</span> <span class="o">=</span> <span class="mi">2</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L53" data-line-number="53"></span></td>
							
							<td rel="L53" class="lines-code chroma"><code class="code-inner"><span class="p">}</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L54" data-line-number="54"></span></td>
							
							<td rel="L54" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L55" data-line-number="55"></span></td>
							
							<td rel="L55" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="kt">unsigned</span> <span class="kt">char</span> <span class="n">uchar</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L56" data-line-number="56"></span></td>
							
							<td rel="L56" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">uint</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L57" data-line-number="57"></span></td>
							
							<td rel="L57" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">ulong</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L58" data-line-number="58"></span></td>
							
							<td rel="L58" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">ushort</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L59" data-line-number="59"></span></td>
							
							<td rel="L59" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L60" data-line-number="60"></span></td>
							
							<td rel="L60" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="kt">uint_least32_t</span> <span class="n">Rune</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L61" data-line-number="61"></span></td>
							
							<td rel="L61" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L62" data-line-number="62"></span></td>
							
							<td rel="L62" class="lines-code chroma"><code class="code-inner"><span class="cp">#</span><span class="cp">define Glyph Glyph_</span><span class="cp">
</span></code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L63" data-line-number="63"></span></td>
							
							<td rel="L63" class="lines-code chroma"><code class="code-inner"><span class="cp"></span><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L64" data-line-number="64"></span></td>
							
							<td rel="L64" class="lines-code chroma"><code class="code-inner">	<span class="n">Rune</span> <span class="n">u</span><span class="p">;</span>           <span class="cm">/* character code */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L65" data-line-number="65"></span></td>
							
							<td rel="L65" class="lines-code chroma"><code class="code-inner">	<span class="n">ushort</span> <span class="n">mode</span><span class="p">;</span>      <span class="cm">/* attribute flags */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L66" data-line-number="66"></span></td>
							
							<td rel="L66" class="lines-code chroma"><code class="code-inner">	<span class="kt">uint32_t</span> <span class="n">fg</span><span class="p">;</span>      <span class="cm">/* foreground  */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L67" data-line-number="67"></span></td>
							
							<td rel="L67" class="lines-code chroma"><code class="code-inner">	<span class="kt">uint32_t</span> <span class="n">bg</span><span class="p">;</span>      <span class="cm">/* background  */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L68" data-line-number="68"></span></td>
							
							<td rel="L68" class="lines-code chroma"><code class="code-inner"><span class="p">}</span> <span class="n">Glyph</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L69" data-line-number="69"></span></td>
							
							<td rel="L69" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L70" data-line-number="70"></span></td>
							
							<td rel="L70" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="n">Glyph</span> <span class="o">*</span><span class="n">Line</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L71" data-line-number="71"></span></td>
							
							<td rel="L71" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L72" data-line-number="72"></span></td>
							
							<td rel="L72" class="lines-code chroma"><code class="code-inner"><span class="k">typedef</span> <span class="k">union</span> <span class="p">{</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L73" data-line-number="73"></span></td>
							
							<td rel="L73" class="lines-code chroma"><code class="code-inner">	<span class="kt">int</span> <span class="n">i</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L74" data-line-number="74"></span></td>
							
							<td rel="L74" class="lines-code chroma"><code class="code-inner">	<span class="n">uint</span> <span class="n">ui</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L75" data-line-number="75"></span></td>
							
							<td rel="L75" class="lines-code chroma"><code class="code-inner">	<span class="kt">float</span> <span class="n">f</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L76" data-line-number="76"></span></td>
							
							<td rel="L76" class="lines-code chroma"><code class="code-inner">	<span class="k">const</span> <span class="kt">void</span> <span class="o">*</span><span class="n">v</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L77" data-line-number="77"></span></td>
							
							<td rel="L77" class="lines-code chroma"><code class="code-inner">	<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">s</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L78" data-line-number="78"></span></td>
							
							<td rel="L78" class="lines-code chroma"><code class="code-inner"><span class="p">}</span> <span class="n">Arg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L79" data-line-number="79"></span></td>
							
							<td rel="L79" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L80" data-line-number="80"></span></td>
							
							<td rel="L80" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">die</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="p">,</span> <span class="p">.</span><span class="p">.</span><span class="p">.</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L81" data-line-number="81"></span></td>
							
							<td rel="L81" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">redraw</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L82" data-line-number="82"></span></td>
							
							<td rel="L82" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">draw</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L83" data-line-number="83"></span></td>
							
							<td rel="L83" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L84" data-line-number="84"></span></td>
							
							<td rel="L84" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">kscrolldown</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L85" data-line-number="85"></span></td>
							
							<td rel="L85" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">kscrollup</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L86" data-line-number="86"></span></td>
							
							<td rel="L86" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">printscreen</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L87" data-line-number="87"></span></td>
							
							<td rel="L87" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">printsel</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L88" data-line-number="88"></span></td>
							
							<td rel="L88" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">sendbreak</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L89" data-line-number="89"></span></td>
							
							<td rel="L89" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">toggleprinter</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L90" data-line-number="90"></span></td>
							
							<td rel="L90" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L91" data-line-number="91"></span></td>
							
							<td rel="L91" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span> <span class="nf">tattrset</span><span class="p">(</span><span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L92" data-line-number="92"></span></td>
							
							<td rel="L92" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">tnew</span><span class="p">(</span><span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L93" data-line-number="93"></span></td>
							
							<td rel="L93" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">tresize</span><span class="p">(</span><span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L94" data-line-number="94"></span></td>
							
							<td rel="L94" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">tsetdirtattr</span><span class="p">(</span><span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L95" data-line-number="95"></span></td>
							
							<td rel="L95" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">ttyhangup</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L96" data-line-number="96"></span></td>
							
							<td rel="L96" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span> <span class="nf">ttynew</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L97" data-line-number="97"></span></td>
							
							<td rel="L97" class="lines-code chroma"><code class="code-inner"><span class="kt">size_t</span> <span class="nf">ttyread</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L98" data-line-number="98"></span></td>
							
							<td rel="L98" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">ttyresize</span><span class="p">(</span><span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L99" data-line-number="99"></span></td>
							
							<td rel="L99" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">ttywrite</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="p">,</span> <span class="kt">size_t</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L100" data-line-number="100"></span></td>
							
							<td rel="L100" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L101" data-line-number="101"></span></td>
							
							<td rel="L101" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">resettitle</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L102" data-line-number="102"></span></td>
							
							<td rel="L102" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L103" data-line-number="103"></span></td>
							
							<td rel="L103" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">selclear</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L104" data-line-number="104"></span></td>
							
							<td rel="L104" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">selinit</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L105" data-line-number="105"></span></td>
							
							<td rel="L105" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">selstart</span><span class="p">(</span><span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L106" data-line-number="106"></span></td>
							
							<td rel="L106" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="nf">selextend</span><span class="p">(</span><span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L107" data-line-number="107"></span></td>
							
							<td rel="L107" class="lines-code chroma"><code class="code-inner"><span class="kt">int</span> <span class="nf">selected</span><span class="p">(</span><span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L108" data-line-number="108"></span></td>
							
							<td rel="L108" class="lines-code chroma"><code class="code-inner"><span class="kt">char</span> <span class="o">*</span><span class="nf">getsel</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L109" data-line-number="109"></span></td>
							
							<td rel="L109" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L110" data-line-number="110"></span></td>
							
							<td rel="L110" class="lines-code chroma"><code class="code-inner"><span class="kt">size_t</span> <span class="nf">utf8encode</span><span class="p">(</span><span class="n">Rune</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L111" data-line-number="111"></span></td>
							
							<td rel="L111" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L112" data-line-number="112"></span></td>
							
							<td rel="L112" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="o">*</span><span class="nf">xmalloc</span><span class="p">(</span><span class="kt">size_t</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L113" data-line-number="113"></span></td>
							
							<td rel="L113" class="lines-code chroma"><code class="code-inner"><span class="kt">void</span> <span class="o">*</span><span class="nf">xrealloc</span><span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="p">,</span> <span class="kt">size_t</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L114" data-line-number="114"></span></td>
							
							<td rel="L114" class="lines-code chroma"><code class="code-inner"><span class="kt">char</span> <span class="o">*</span><span class="nf">xstrdup</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="p">)</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L115" data-line-number="115"></span></td>
							
							<td rel="L115" class="lines-code chroma"><code class="code-inner">
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L116" data-line-number="116"></span></td>
							
							<td rel="L116" class="lines-code chroma"><code class="code-inner"><span class="cm">/* config.h globals */</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L117" data-line-number="117"></span></td>
							
							<td rel="L117" class="lines-code chroma"><code class="code-inner"><span class="k">extern</span> <span class="kt">char</span> <span class="o">*</span><span class="n">utmp</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L118" data-line-number="118"></span></td>
							
							<td rel="L118" class="lines-code chroma"><code class="code-inner"><span class="k">extern</span> <span class="kt">char</span> <span class="o">*</span><span class="n">scroll</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L119" data-line-number="119"></span></td>
							
							<td rel="L119" class="lines-code chroma"><code class="code-inner"><span class="k">extern</span> <span class="kt">char</span> <span class="o">*</span><span class="n">stty_args</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L120" data-line-number="120"></span></td>
							
							<td rel="L120" class="lines-code chroma"><code class="code-inner"><span class="k">extern</span> <span class="kt">char</span> <span class="o">*</span><span class="n">vtiden</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L121" data-line-number="121"></span></td>
							
							<td rel="L121" class="lines-code chroma"><code class="code-inner"><span class="k">extern</span> <span class="kt">wchar_t</span> <span class="o">*</span><span class="n">worddelimiters</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L122" data-line-number="122"></span></td>
							
							<td rel="L122" class="lines-code chroma"><code class="code-inner"><span class="k">extern</span> <span class="kt">int</span> <span class="n">allowaltscreen</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L123" data-line-number="123"></span></td>
							
							<td rel="L123" class="lines-code chroma"><code class="code-inner"><span class="k">extern</span> <span class="kt">int</span> <span class="n">allowwindowops</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L124" data-line-number="124"></span></td>
							
							<td rel="L124" class="lines-code chroma"><code class="code-inner"><span class="k">extern</span> <span class="kt">char</span> <span class="o">*</span><span class="n">termname</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L125" data-line-number="125"></span></td>
							
							<td rel="L125" class="lines-code chroma"><code class="code-inner"><span class="k">extern</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">tabspaces</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L126" data-line-number="126"></span></td>
							
							<td rel="L126" class="lines-code chroma"><code class="code-inner"><span class="k">extern</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">defaultfg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L127" data-line-number="127"></span></td>
							
							<td rel="L127" class="lines-code chroma"><code class="code-inner"><span class="k">extern</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">defaultbg</span><span class="p">;</span>
</code></td>
						</tr>
						
						
						<tr>
							<td class="lines-num"><span id="L128" data-line-number="128"></span></td>
							
							<td rel="L128" class="lines-code chroma"><code class="code-inner"><span class="k">extern</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">defaultcs</span><span class="p">;</span>
</code></td>
						</tr>
						
					</tbody>
				</table>
				<div class="code-line-menu tippy-target">
					
						<a class="item ref-in-new-issue" role="menuitem" data-url-issue-new="/justaguylinux/dwm-setup/issues/new" data-url-param-body-link="/justaguylinux/dwm-setup/src/commit/2a1d3bf690bff7f76924f99136b948b539e84d31/suckless/st/st.h" rel="nofollow noindex">In neuem Issue referenzieren</a>
					
					<a class="item view_git_blame" role="menuitem" href="/justaguylinux/dwm-setup/blame/commit/2a1d3bf690bff7f76924f99136b948b539e84d31/suckless/st/st.h">„git blame“ ansehen</a>
					<a class="item copy-line-permalink" role="menuitem" data-url="/justaguylinux/dwm-setup/src/commit/2a1d3bf690bff7f76924f99136b948b539e84d31/suckless/st/st.h">Permalink kopieren</a>
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
		
			Seite: 504ms<br>
			Vorlage: 32ms
		
	</div>
    
	
		<div class="symbol-of-tolerance" role="img"></div>
	
</footer>


	<script src="/assets/js/index.js?v=13.0.0-dev-623-c059966a~gitea-1.22.0" onerror="alert('Konnte Asset-Dateien nicht von {path} laden. Bitte stelle sicher, dass auf die Asset-Dateien zugegriffen werden kann.'.replace('{path}', this.src))"></script>

	
</body>
</html>

