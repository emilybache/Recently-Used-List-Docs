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
    
## Suggested exercise
First follow the above steps to make sure you can develop the documentation. 

### Complete the tutorial
The page docs/getting_started.md is supposed to contain a tutorial explaining how to insert items into the cache and 
check what order they are in. The code in test/tutorial.cpp does this.
 
Complete writing the tutorial. Include more code snippets from test/tutorial.cpp as you wish.

Questions to reflect on: 
- What is the difference between the unit tests in test/unit_test.cpp and the tutorial example in test/tutorial.cpp.
Could you have used the code in test/unit_test.cpp for snippet examples instead of test/tutorial.cpp?

### Write a how-to
The page docs/how_to.md is incomplete. Write a how-to guide to setting up a cache that deletes old items 
after every n insertions.

Questions to reflect on:
- What new code snippets did you need for the how-to guide? Could you have used the code in test/unit_test.cpp for snippet examples instead?

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
