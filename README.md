Documentation for RecentlyUsedList
==================================

There are three unit tests and three examples in the documentation. 

- What is the purpose of having documentation over and above having unit tests?
- What kinds of information are in the documentation and not in the unit tests?
- Write a new unit test for the new feature described below. 
- Write the documentation for the new feature and generate new html pages.
- Implement the new feature and make the test pass.

New feature
-----------

You can dynamically increase or decrease the size of the recently used list by one. The minimum size is one.

Generating html from the docs folder
------------------------------------

Update the code snippets using [Markdown snippets](https://github.com/SimonCropp/MarkdownSnippets) 

Installing dependencies
------------------------
Install Ruby:

    sudo amazon-linux-extras install ruby2.6
    sudo yum install ruby-devel
    
Install [Jekyll](https://jekyllrb.com/)

    cd docs
    bundle install

I also needed these, not sure why:

    sudo gem pristine eventmachine --version 1.2.7
    sudo gem pristine ffi --version 1.14.2

Install dotnet:

    sudo rpm -Uvh https://packages.microsoft.com/config/centos/7/packages-microsoft-prod.rpm
    sudo yum install dotnet-sdk-3.1

Install [Markdown snippets](https://github.com/SimonCropp/MarkdownSnippets) 

    dotnet tool install -g MarkdownSnippets.Tool
    
## Regenerate snippets
From the top level folder

    mdsnippets .
    
## test the site

    cd docs
    bundle exec jekyll serve
    
Then browse the site on http://localhost:4000

When you're happy it's working, generate the html

    cd docs
    bundle exec jekyll build
    
Then copy the contents of _site onto your webserver.
    
    
## TODO
Make relative links to code snippet source code work instead of linking back to the code hosted on github.
