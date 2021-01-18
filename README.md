Documentation for RecentlyUsedList
==================================

This repository contains some code, some unit tests and some documentation. The idea is to
help you to learn about writing effective documentation, in particular using the [Divio documentation system](https://documentation.divio.com/introduction/).

## Developing the documentation
Follow these steps

### 1. Run the tests
Use CMake to build the project and run all the tests found in the 'tests' folder. They should all pass

### 2. Regenerate snippets
From the top level folder

    mdsnippets .
    
### 3. Test the site

    cd docs
    bundle exec jekyll serve
    
Then browse the site on http://localhost:4000

### 4. Develop the documentation
Write new and better documentation as you wish or as your instructor asks you to. You may want to refer to documentation 
about [Jekyll](https://jekyllrb.com/) and the [Just The Docs Theme](https://pmarsceill.github.io/just-the-docs/).

Re-run steps 1-3 as necessary to check all the tests are passing, make sure the snippets are up to date, and the 
documentation is useful.

### 5. Deploy
When you're happy the documentation is ready, generate the html

    cd docs
    bundle exec jekyll build
    
Then copy the contents of docs/_site onto your webserver.
    
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
    
## TODO
Make relative links to code snippet source code work instead of linking back to the code hosted on github.
