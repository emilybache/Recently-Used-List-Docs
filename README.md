Documentation for RecentlyUsedList
==================================

This repository contains some code, some unit tests and some documentation. The idea is to
help you to learn about writing effective documentation, in particular using the [Divio documentation system](https://documentation.divio.com/introduction/).

## Developing the documentation
Follow these steps:

### 1. Run the tests
Use CMake to build the project and run all the tests found in the 'tests' folder. They should all pass

### 2. Regenerate snippets
From the top level folder

    mdsnippets .
    
### 3. Test the site
In another terminal window, not the one in your IDE:

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
    
## Suggested exercise
First follow the above steps to make sure you can develop the documentation. 

### Complete the tutorial
The page docs/getting_started.md is supposed to contain a tutorial explaining how use the RecentlyUsedList as part of a 
DNSLookup class. Complete writing the tutorial. Include code snippets.

### Complete the how-to
The page docs/how_to.md is incomplete. Add code snippets and more how-to guides.

### Questions to reflect on:
- What documentation is still needed?
- Where did you get code snippets from? Did you have to write new snippets especially?
- Did writing the documentation prompt you to add new unit tests or to find any bugs in the code?
- What is the difference between a unit test and a how-to guide? Could you auto-generate how-to guides from unit tests 
in the same way as you auto-generate reference docs from comments in the code?

### Write a high-level explanation
The page docs/high_level_explanation.md is incomplete. Write a background explanation for the RecentlyUsedList.

Questions to reflect on:
- Did you need any new code snippets for the high-level explanation? 
- Did you link to any other websites or reference materials? If not, should you have?
    
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
