```python
conda install requests
```

    Collecting package metadata (current_repodata.json): done
    Solving environment: done
    
    # All requested packages already installed.
    
    
    Note: you may need to restart the kernel to use updated packages.



```python
import requests
```


```python
URL = 'https://www.monster.com/jobs/search/?q=Software-Developer&where=Australia'
page = requests.get(URL)

```


```python
conda install beautifulsoup4
```

    Collecting package metadata (current_repodata.json): done
    Solving environment: done
    
    # All requested packages already installed.
    
    
    Note: you may need to restart the kernel to use updated packages.



```python
import requests
from bs4 import BeautifulSoup
```


```python
conda install -c anaconda gensim
```

    Collecting package metadata (current_repodata.json): done
    Solving environment: failed with initial frozen solve. Retrying with flexible solve.
    Solving environment: failed with repodata from current_repodata.json, will retry with next repodata source.
    Collecting package metadata (repodata.json): done
    Solving environment: failed with initial frozen solve. Retrying with flexible solve.
    Solving environment: - 
    Found conflicts! Looking for incompatible packages.
    This can take several minutes.  Press CTRL-C to abort.
                                                                                   failed
    
    UnsatisfiableError: The following specifications were found
    to be incompatible with the existing python installation in your environment:
    
    Specifications:
    
      - gensim -> python[version='>=2.7,<2.8.0a0|>=3.6,<3.7.0a0|>=3.7,<3.8.0a0|>=3.5,<3.6.0a0']
    
    Your python: python=3.8
    
    If python is on the left-most side of the chain, that's the version you've asked for.
    When python appears to the right, that indicates that the thing on the left is somehow
    not available for the python version you are constrained to. Note that conda will not
    change your python version to a different minor version unless you explicitly specify
    that.
    
    
    
    
    Note: you may need to restart the kernel to use updated packages.



```python
URL = 'https://www.monster.com/jobs/search/?q=Software-Developer&where=Australia'
page = requests.get(URL)
```


```python
URL = 'https://www.monster.com/jobs/search/?q=Software-Developer&where=Australia'
page = requests.get(URL)

soup = BeautifulSoup(page.content, 'html.parser')
```


```python
results = soup.find(id='ResultsContainer')
```


```python
print(results.prettify())
```

    <div class="mux-custom-scroll" data-extend="left" data-mux="customScroll" data-target="html" id="ResultsContainer">
     <div class="scrollable" id="ResultsScrollable">
      <script type="application/ld+json">
       {"@context":"https://schema.org","@type":"ItemList","mainEntityOfPage":{
                "@type":"CollectionPage","@id":"https://www.monster.com/jobs/search/?q=Software-Developer&amp;where=Australia"
                }
                ,"itemListElement":[
    
                     {"@type":"ListItem","position":1,"url":"https://job-openings.monster.com/software-engineer-full-stack-sydney-new-south-wales-sydney-nsw-us-mri-software/ce1f83f9-5a3e-403d-8302-01d241783b2d"}
                        ,
                     {"@type":"ListItem","position":2,"url":""}
                        ,
                     {"@type":"ListItem","position":3,"url":"https://job-openings.monster.com/technical-support-engineer-3-messaging-melbourne-victoria-vic-us-twilio/6b4b387e-3c9a-4c6f-996d-9db14e785b4f"}
                        ,
                     {"@type":"ListItem","position":4,"url":"https://job-openings.monster.com/technical-support-engineer-3-messaging-sydney-new-south-wales-nsw-us-twilio/35fbcd1e-03e6-45e4-9df8-f5af7ebf92c6"}
                        ,
                     {"@type":"ListItem","position":5,"url":"https://job-openings.monster.com/sales-engineer-commercial-real-estate-saas-sydney-new-south-wales-sydney-nsw-us-mri-software/bf88fd37-a338-40cb-98df-571efb25f948"}
                        ,
                     {"@type":"ListItem","position":6,"url":"https://job-openings.monster.com/principal-consultant-automation-devops-sydney-nsw-us-dialog-group/76982217-6f38-4fa2-9d17-92d98b62e7dd"}
                        ,
                     {"@type":"ListItem","position":7,"url":"https://job-openings.monster.com/customer-experience-technical-analyst-sydney-new-south-wales-sydney-nsw-us-mediaocean/b2f6fead-5873-4bcd-8e07-0bb146f58a82"}
                        ,
                     {"@type":"ListItem","position":8,"url":""}
                        ,
                     {"@type":"ListItem","position":9,"url":"https://job-openings.monster.com/consultant-senior-consultant-melbourne-vic-us-randstad-anz/a736efcf-ac1c-4e14-b6e2-2cbc9023dade"}
                        ,
                     {"@type":"ListItem","position":10,"url":"https://job-openings.monster.com/account-executive-apac-perth-western-australia-australia-us-uptake/50d01de8-7791-48c0-81f8-27aa624f3d11"}
                        ,
                     {"@type":"ListItem","position":11,"url":"https://job-openings.monster.com/senior-talent-acquisition-specialist-technology-sydney-sydney-nsw-us-randstad-sourceright/4bfd0a91-99e9-4495-9ec9-b24021bed63d"}
                        ,
                     {"@type":"ListItem","position":12,"url":"https://job-openings.monster.com/intern-software-engineer-qa-2021-us-bellevue-wa-san-jose-ca-san-francisco-ca-ca-us-okta/10b421a7-e7df-4f49-8a23-a024b070b896"}
                        ,
                     {"@type":"ListItem","position":13,"url":"https://job-openings.monster.com/software-development-engineer-ii-seattle-wa-us-amazon-corporate-llc/224354190"}
                        ,
                     {"@type":"ListItem","position":14,"url":"https://job-openings.monster.com/servicenow-test-automation-engineer-sydney-nsw-us-dialog-group/3a764f76-f5a9-427f-ab1e-b0e079829744"}
                        ,
                     {"@type":"ListItem","position":15,"url":"https://job-openings.monster.com/software-architect-sydney-new-south-wales-sydney-nsw-us-mri-software/54194641-75b3-4632-8e3e-ee087f62f713"}
                        ,
                     {"@type":"ListItem","position":16,"url":"https://job-openings.monster.com/senior-manager-enterprise-sales-anz-sydney-new-south-wales-nsw-us-twilio/8a9b9708-e809-4c7e-b518-8bba8f376a4b"}
                        ,
                     {"@type":"ListItem","position":17,"url":"https://job-openings.monster.com/principal-consultant-automation-devops-melbourne-vic-us-dialog-group/15a6d27e-9b31-4417-9806-c13bf4d74e3f"}
                        ,
                     {"@type":"ListItem","position":18,"url":"https://job-openings.monster.com/growth-account-executive-sydney-new-south-wales-nsw-us-twilio/68ed53a6-6ef7-4605-8ded-48f58a00e8e5"}
                        ,
                     {"@type":"ListItem","position":19,"url":""}
                        ,
                     {"@type":"ListItem","position":20,"url":"https://job-openings.monster.com/qa-engineer-sydney-new-south-wales-sydney-nsw-us-mri-software/0200b8c4-78a5-4a1b-af63-b8150b6d6958"}
                        ,
                     {"@type":"ListItem","position":21,"url":"https://job-openings.monster.com/test-automation-engineer-north-sydney-nsw-us-dialog-group/3a753c97-6cd5-4f6b-a40e-a9c9ebc42051"}
                        ,
                     {"@type":"ListItem","position":22,"url":"https://job-openings.monster.com/sales-development-representative-anz-sydney-new-south-wales-nsw-us-twilio/6558fca6-4cfa-470b-8b13-bac7c72a8087"}
                        ,
                     {"@type":"ListItem","position":23,"url":"https://job-openings.monster.com/test-analysts-senior-test-analysts-brisbane-qld-us-dialog-group/ec3a12e0-9b62-444e-b953-00f38d340028"}
                        ,
                     {"@type":"ListItem","position":24,"url":"https://job-openings.monster.com/account-executive-iot-sales-apj-sydney-new-south-wales-nsw-us-twilio/2e779a3a-7084-4fa3-b3a7-d7287415224e"}
                        ,
                     {"@type":"ListItem","position":25,"url":"https://job-openings.monster.com/test-engineer-melbourne-cbd-vic-us-dialog-group/dece048e-e392-4c04-a52a-4c71a776b053"}
                        ,
                     {"@type":"ListItem","position":26,"url":"https://job-openings.monster.com/automation-devops-code-camp-brisbane-brisbane-qld-us-dialog-group/c94fe8f2-5f9f-43c4-95d6-525bd24c83f4"}
                        ,
                     {"@type":"ListItem","position":27,"url":"https://job-openings.monster.com/supply-chain-tester-brisbane-qld-us-dialog-group/be841b74-ff37-48d7-a316-c0e38b61ae58"}
                        ,
                     {"@type":"ListItem","position":28,"url":"https://job-openings.monster.com/principal-consultant-quality-assurance-testing-north-sydney-nsw-us-dialog-group/9e890453-5046-4ee8-9129-cb3990057416"}
                        ,
                     {"@type":"ListItem","position":29,"url":"https://job-openings.monster.com/test-automation-engineer-melbourne-cbd-vic-us-dialog-group/79414da8-65bc-4a36-9221-d12074a57d2b"}
                ]}
      </script>
      <div class="mux-apas-ads" data-ads='[{"sizes":[1,1],"placementId":14162549,"id":"bad1"},{"sizes":[1,1],"placementId":14343737,"id":"bad2"},{"sizes":[728,90],"placementId":14343738,"id":"bad3"}]' data-config='{"targeting":{"Site":"United States","mURL":"https%3a%2f%2fwww.monster.com%2fjobs%2fsearch%2f%3fq%3dSoftware-Developer%26where%3dAustralia","Page":"Job Search Results","mesco":[4100683001001,1700192001001]},"member":3525}' data-mux="apasAds">
      </div>
      <div class="mux-search-results" data-content-target="#JobPreview" data-emulated-click-attr="coretrackclickauto" data-is-dynamic="true" data-jhash-size="10" data-jhash-url="https://www.monster.com/jobs/search/jhpagination?q=Software-Developer&amp;where=Australia" data-jv-non-job-content="-1" data-mux="searchResults" data-results-max="250" data-results-page="1" data-results-per-page="25" data-results-placeholder="job-item-placeholder-template" data-results-target="#SearchResults" data-results-template="job-item-template" data-results-total="36" data-results-url="https://www.monster.com/jobs/search/pagination/?q=Software-Developer&amp;where=Australia&amp;isDynamicPage=true&amp;isMKPagination=true" data-total-search-results="36">
       <div class="mux-card mux-job-card" id="SearchResults">
        <section class="card-content" data-jobid="ce1f83f9-5a3e-403d-8302-01d241783b2d" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="660" data-m_impr_j_coc="" data-m_impr_j_jawsid="471351201" data-m_impr_j_jobid="538934" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11970" data-m_impr_j_p="1" data-m_impr_j_postingid="ce1f83f9-5a3e-403d-8302-01d241783b2d" data-m_impr_j_pvc="7bc2b357-1dbb-448a-93f2-190704290afc" data-m_impr_s_t="t" data-m_impr_uuid="a5ea2f52-dc2b-41d2-903b-4ea9262cf589" href="https://job-openings.monster.com/software-engineer-full-stack-sydney-new-south-wales-sydney-nsw-us-mri-software/ce1f83f9-5a3e-403d-8302-01d241783b2d" onclick="clickJobTitle('plid=0&amp;pcid=660&amp;poccid=11970','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Software Engineer - Full Stack - Sydney, New South Wales&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_MRI Software&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-01-15T12:00&quot;,&quot;eVar53&quot;:&quot;1500127001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Software Engineer - Full Stack - Sydney, New South Wales
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             MRI Software
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Sydney, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            28 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content apas-ad" data-mux="searchResultsAds" style="display:none">
         <div id="bad1">
         </div>
        </section>
        <section class="card-content" data-jobid="6b4b387e-3c9a-4c6f-996d-9db14e785b4f" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="545" data-m_impr_j_coc="" data-m_impr_j_jawsid="459452813" data-m_impr_j_jobid="2445702" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11985" data-m_impr_j_p="2" data-m_impr_j_postingid="6b4b387e-3c9a-4c6f-996d-9db14e785b4f" data-m_impr_j_pvc="238a473f-f326-42d6-97e2-4fb4dd657137" data-m_impr_s_t="t" data-m_impr_uuid="f2a2fbd4-cc25-4f53-ba98-05aa6f4ae858" href="https://job-openings.monster.com/technical-support-engineer-3-messaging-melbourne-victoria-vic-us-twilio/6b4b387e-3c9a-4c6f-996d-9db14e785b4f" onclick="clickJobTitle('plid=0&amp;pcid=545&amp;poccid=11985','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Technical Support Engineer 3 (Messaging)&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Twilio&quot;,&quot;eVar31&quot;:&quot;Melbourne, Victoria_VIC_&quot;,&quot;prop24&quot;:&quot;2020-11-17T12:00&quot;,&quot;eVar53&quot;:&quot;1500134001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Technical Support Engineer 3 (Messaging)
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Twilio
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Melbourne, Victoria, VIC
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            +30 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="35fbcd1e-03e6-45e4-9df8-f5af7ebf92c6" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="545" data-m_impr_j_coc="" data-m_impr_j_jawsid="459452814" data-m_impr_j_jobid="2445699" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11985" data-m_impr_j_p="3" data-m_impr_j_postingid="35fbcd1e-03e6-45e4-9df8-f5af7ebf92c6" data-m_impr_j_pvc="238a473f-f326-42d6-97e2-4fb4dd657137" data-m_impr_s_t="t" data-m_impr_uuid="5384d670-ed31-4e55-a232-141dede3b23a" href="https://job-openings.monster.com/technical-support-engineer-3-messaging-sydney-new-south-wales-nsw-us-twilio/35fbcd1e-03e6-45e4-9df8-f5af7ebf92c6" onclick="clickJobTitle('plid=0&amp;pcid=545&amp;poccid=11985','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Technical Support Engineer 3 (Messaging)&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Twilio&quot;,&quot;eVar31&quot;:&quot;Sydney, New South Wales_NSW_&quot;,&quot;prop24&quot;:&quot;2020-11-17T12:00&quot;,&quot;eVar53&quot;:&quot;1500134001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Technical Support Engineer 3 (Messaging)
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Twilio
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Sydney, New South Wales, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            +30 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="bf88fd37-a338-40cb-98df-571efb25f948" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="10" data-m_impr_j_coc="" data-m_impr_j_jawsid="462809026" data-m_impr_j_jobid="536951" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11986" data-m_impr_j_p="4" data-m_impr_j_postingid="bf88fd37-a338-40cb-98df-571efb25f948" data-m_impr_j_pvc="7bc2b357-1dbb-448a-93f2-190704290afc" data-m_impr_s_t="t" data-m_impr_uuid="2cda7d1c-ce7e-434c-8a73-4d5af7744e7f" href="https://job-openings.monster.com/sales-engineer-commercial-real-estate-saas-sydney-new-south-wales-sydney-nsw-us-mri-software/bf88fd37-a338-40cb-98df-571efb25f948" onclick="clickJobTitle('plid=0&amp;pcid=10&amp;poccid=11986','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Sales Engineer - Commercial Real Estate SaaS - Sydney, New South Wales&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_MRI Software&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2020-12-10T12:00&quot;,&quot;eVar53&quot;:&quot;4100688001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Sales Engineer - Commercial Real Estate SaaS - Sydney, New South Wales
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             MRI Software
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Sydney, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            +30 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="76982217-6f38-4fa2-9d17-92d98b62e7dd" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="9008" data-m_impr_j_coc="" data-m_impr_j_jawsid="478006846" data-m_impr_j_jobid="14049108" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11934" data-m_impr_j_p="5" data-m_impr_j_postingid="76982217-6f38-4fa2-9d17-92d98b62e7dd" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="b7b3b231-a012-4c9b-ab32-1ea0ae88496d" href="https://job-openings.monster.com/principal-consultant-automation-devops-sydney-nsw-us-dialog-group/76982217-6f38-4fa2-9d17-92d98b62e7dd" onclick="clickJobTitle('plid=0&amp;pcid=9008&amp;poccid=11934','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Principal Consultant, Automation \u0026 Devops&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-02-11T12:00&quot;,&quot;eVar53&quot;:&quot;1300093001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Principal Consultant, Automation &amp; Devops
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Dialog Group
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Sydney, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            1 day ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="b2f6fead-5873-4bcd-8e07-0bb146f58a82" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail is-loaded">
           <img alt="Mediaocean" src="https://coda.newjobs.com/api/imagesproxy/ms/mm/xmediaoceanx/cjt/logo.jpg"/>
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="545" data-m_impr_j_coc="" data-m_impr_j_jawsid="456446985" data-m_impr_j_jobid="534600" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11738" data-m_impr_j_p="6" data-m_impr_j_postingid="b2f6fead-5873-4bcd-8e07-0bb146f58a82" data-m_impr_j_pvc="6232df37-d6a8-4d8d-8427-26e9c9101837" data-m_impr_s_t="t" data-m_impr_uuid="7c0aa095-a85d-4cb3-9edc-758268e443ec" href="https://job-openings.monster.com/customer-experience-technical-analyst-sydney-new-south-wales-sydney-nsw-us-mediaocean/b2f6fead-5873-4bcd-8e07-0bb146f58a82" onclick="clickJobTitle('plid=0&amp;pcid=545&amp;poccid=11738','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Customer Experience Technical Analyst - Sydney, New South Wales&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Mediaocean&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2020-11-02T12:00&quot;,&quot;eVar53&quot;:&quot;4300715001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;logo&quot;}')">
              Customer Experience Technical Analyst - Sydney, New South Wales
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Mediaocean
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Sydney, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            +30 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content apas-ad" data-mux="searchResultsAds" style="display:none">
         <div id="bad2">
         </div>
        </section>
        <section class="card-content" data-jobid="a736efcf-ac1c-4e14-b6e2-2cbc9023dade" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="11" data-m_impr_j_coc="" data-m_impr_j_jawsid="473006275" data-m_impr_j_jobid="1882" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11741" data-m_impr_j_p="7" data-m_impr_j_postingid="a736efcf-ac1c-4e14-b6e2-2cbc9023dade" data-m_impr_j_pvc="b129b402-4994-4857-9d90-4b3d8977f72f" data-m_impr_s_t="t" data-m_impr_uuid="69c2a243-5d8e-4781-80da-777517d3a07d" href="https://job-openings.monster.com/consultant-senior-consultant-melbourne-vic-us-randstad-anz/a736efcf-ac1c-4e14-b6e2-2cbc9023dade" onclick="clickJobTitle('plid=0&amp;pcid=11&amp;poccid=11741','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Consultant / Senior Consultant&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Randstad ANZ&quot;,&quot;eVar31&quot;:&quot;Melbourne_VIC_&quot;,&quot;prop24&quot;:&quot;2021-01-25T12:00&quot;,&quot;eVar53&quot;:&quot;9901111000004&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Consultant / Senior Consultant
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Randstad ANZ
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Melbourne, VIC
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            18 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="50d01de8-7791-48c0-81f8-27aa624f3d11" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="10" data-m_impr_j_coc="" data-m_impr_j_jawsid="467424387" data-m_impr_j_jobid="2160915" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11709" data-m_impr_j_p="8" data-m_impr_j_postingid="50d01de8-7791-48c0-81f8-27aa624f3d11" data-m_impr_j_pvc="greenhouseftpin" data-m_impr_s_t="t" data-m_impr_uuid="1b2eeb60-6c40-406c-be28-36eacce0ae66" href="https://job-openings.monster.com/account-executive-apac-perth-western-australia-australia-us-uptake/50d01de8-7791-48c0-81f8-27aa624f3d11" onclick="clickJobTitle('plid=0&amp;pcid=10&amp;poccid=11709','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Account Executive - APAC&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Uptake&quot;,&quot;eVar31&quot;:&quot;Perth, Western Australia, Australia__&quot;,&quot;prop24&quot;:&quot;2021-01-08T12:00&quot;,&quot;eVar53&quot;:&quot;4100683001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Account Executive - APAC
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Uptake
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Perth, Western Australia, Australia
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            +30 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="4bfd0a91-99e9-4495-9ec9-b24021bed63d" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="5" data-m_impr_j_coc="" data-m_impr_j_jawsid="477937361" data-m_impr_j_jobid="1901" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11796" data-m_impr_j_p="9" data-m_impr_j_postingid="4bfd0a91-99e9-4495-9ec9-b24021bed63d" data-m_impr_j_pvc="cefdcda6-6d1f-4c8b-95d2-8277a220a398" data-m_impr_s_t="t" data-m_impr_uuid="b8b050d6-d41a-4f4a-b540-671d7a18ccfe" href="https://job-openings.monster.com/senior-talent-acquisition-specialist-technology-sydney-sydney-nsw-us-randstad-sourceright/4bfd0a91-99e9-4495-9ec9-b24021bed63d" onclick="clickJobTitle('plid=0&amp;pcid=5&amp;poccid=11796','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Senior Talent Acquisition Specialist (Technology) - Sydney&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Randstad Sourceright&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-02-11T12:00&quot;,&quot;eVar53&quot;:&quot;1300081001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Senior Talent Acquisition Specialist (Technology) - Sydney
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Randstad Sourceright
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Sydney, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            1 day ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="10b421a7-e7df-4f49-8a23-a024b070b896" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="4" data-m_impr_j_coc="" data-m_impr_j_jawsid="470402851" data-m_impr_j_jobid="2357458" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11838" data-m_impr_j_p="10" data-m_impr_j_postingid="10b421a7-e7df-4f49-8a23-a024b070b896" data-m_impr_j_pvc="b2483b3d-5e7d-4b77-b6a7-154ed9eeebd9" data-m_impr_s_t="t" data-m_impr_uuid="a75113c9-f8a2-425e-8bb7-ea8c8ca36d5f" href="https://job-openings.monster.com/intern-software-engineer-qa-2021-us-bellevue-wa-san-jose-ca-san-francisco-ca-ca-us-okta/10b421a7-e7df-4f49-8a23-a024b070b896" onclick="clickJobTitle('plid=0&amp;pcid=4&amp;poccid=11838','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Intern - Software Engineer - QA 2021 US&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Okta&quot;,&quot;eVar31&quot;:&quot;Bellevue,WA, San Jose,CA, San Francisco, CA_CA_&quot;,&quot;prop24&quot;:&quot;2021-01-10T12:00&quot;,&quot;eVar53&quot;:&quot;1700192001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Intern - Software Engineer - QA 2021 US
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Okta
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Bellevue,WA, San Jose,CA, San Francisco, CA, CA
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            +30 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="224354190" data-postingid="f672dd96-2122-4e59-8eff-12741f010e01" data-ssr="true" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <p class="entry">
          Interesting opportunity
         </p>
         <div class="flex-row">
          <div class="mux-company-logo thumbnail is-loaded">
           <img alt="Amazon Corporate LLC" src="https://media.newjobs.com/clu/xama/xamazonx/branding/54/Amazon-logo-637196280106671504.gif"/>
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSRSEC" data-m_impr_j_cid="660" data-m_impr_j_coc="xwag2321849x" data-m_impr_j_jawsid="478257300" data-m_impr_j_jobid="224354190" data-m_impr_j_jpm="1" data-m_impr_j_jpt="1" data-m_impr_j_lat="47.6388" data-m_impr_j_lid="0" data-m_impr_j_long="-122.37" data-m_impr_j_occid="11904" data-m_impr_j_p="11" data-m_impr_j_postingid="f672dd96-2122-4e59-8eff-12741f010e01" data-m_impr_j_pvc="monster" data-m_impr_s_t="m" data-m_impr_uuid="08c1c4da-2949-4e93-868c-707ad9a86e6c" href="https://job-openings.monster.com/software-development-engineer-ii-seattle-wa-us-amazon-corporate-llc/224354190" onclick="clickJobTitle('plid=0&amp;pcid=660&amp;poccid=11904','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;events.event65&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Software Development Engineer II&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSRSEC&quot;,&quot;eVar26&quot;:&quot;xwag2321849x_Amazon Corporate LLC&quot;,&quot;eVar31&quot;:&quot;Seattle_WA_&quot;,&quot;prop22&quot;:&quot;Full-Time&quot;,&quot;prop24&quot;:&quot;2021-02-12T06:36&quot;,&quot;eVar47&quot;:&quot;monster&quot;,&quot;eVar53&quot;:&quot;1500127001001&quot;,&quot;eVar50&quot;:&quot;Duration&quot;,&quot;eVar74&quot;:&quot;logo&quot;}')">
              Software Development Engineer II
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Amazon Corporate LLC
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Seattle, WA
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            Posted today
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="3a764f76-f5a9-427f-ab1e-b0e079829744" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="11455" data-m_impr_j_coc="" data-m_impr_j_jawsid="478006849" data-m_impr_j_jobid="14043153" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11968" data-m_impr_j_p="12" data-m_impr_j_postingid="3a764f76-f5a9-427f-ab1e-b0e079829744" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="a8cd66e5-5074-413a-a646-1ab2eb4f1800" href="https://job-openings.monster.com/servicenow-test-automation-engineer-sydney-nsw-us-dialog-group/3a764f76-f5a9-427f-ab1e-b0e079829744" onclick="clickJobTitle('plid=0&amp;pcid=11455&amp;poccid=11968','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;ServiceNow Test Automation Engineer&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-02-11T12:00&quot;,&quot;eVar53&quot;:&quot;1500137001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              ServiceNow Test Automation Engineer
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Dialog Group
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Sydney, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            1 day ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="54194641-75b3-4632-8e3e-ee087f62f713" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="660" data-m_impr_j_coc="" data-m_impr_j_jawsid="469501386" data-m_impr_j_jobid="537986" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11787" data-m_impr_j_p="13" data-m_impr_j_postingid="54194641-75b3-4632-8e3e-ee087f62f713" data-m_impr_j_pvc="7bc2b357-1dbb-448a-93f2-190704290afc" data-m_impr_s_t="t" data-m_impr_uuid="a9c9915f-5695-4211-9a84-0319e9ce0416" href="https://job-openings.monster.com/software-architect-sydney-new-south-wales-sydney-nsw-us-mri-software/54194641-75b3-4632-8e3e-ee087f62f713" onclick="clickJobTitle('plid=0&amp;pcid=660&amp;poccid=11787','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Software Architect - Sydney, New South Wales&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_MRI Software&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-01-05T12:00&quot;,&quot;eVar53&quot;:&quot;1500138001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Software Architect - Sydney, New South Wales
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             MRI Software
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Sydney, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            +30 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="8a9b9708-e809-4c7e-b518-8bba8f376a4b" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="10" data-m_impr_j_coc="" data-m_impr_j_jawsid="470842392" data-m_impr_j_jobid="2568036" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11709" data-m_impr_j_p="14" data-m_impr_j_postingid="8a9b9708-e809-4c7e-b518-8bba8f376a4b" data-m_impr_j_pvc="238a473f-f326-42d6-97e2-4fb4dd657137" data-m_impr_s_t="t" data-m_impr_uuid="e1870aab-4727-46dc-8ce5-d644e8b5bf81" href="https://job-openings.monster.com/senior-manager-enterprise-sales-anz-sydney-new-south-wales-nsw-us-twilio/8a9b9708-e809-4c7e-b518-8bba8f376a4b" onclick="clickJobTitle('plid=0&amp;pcid=10&amp;poccid=11709','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Senior Manager, Enterprise Sales, ANZ&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Twilio&quot;,&quot;eVar31&quot;:&quot;Sydney, New South Wales_NSW_&quot;,&quot;prop24&quot;:&quot;2021-01-12T12:00&quot;,&quot;eVar53&quot;:&quot;4100683001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Senior Manager, Enterprise Sales, ANZ
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Twilio
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Sydney, New South Wales, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            +30 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="15a6d27e-9b31-4417-9806-c13bf4d74e3f" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="9008" data-m_impr_j_coc="" data-m_impr_j_jawsid="478006847" data-m_impr_j_jobid="14048931" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11934" data-m_impr_j_p="15" data-m_impr_j_postingid="15a6d27e-9b31-4417-9806-c13bf4d74e3f" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="fd1147ea-cc83-4bd8-99cc-76aa97a813a0" href="https://job-openings.monster.com/principal-consultant-automation-devops-melbourne-vic-us-dialog-group/15a6d27e-9b31-4417-9806-c13bf4d74e3f" onclick="clickJobTitle('plid=0&amp;pcid=9008&amp;poccid=11934','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Principal Consultant, Automation \u0026 Devops&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Melbourne_VIC_&quot;,&quot;prop24&quot;:&quot;2021-02-11T12:00&quot;,&quot;eVar53&quot;:&quot;1300093001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Principal Consultant, Automation &amp; Devops
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Dialog Group
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Melbourne, VIC
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            1 day ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="68ed53a6-6ef7-4605-8ded-48f58a00e8e5" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="10" data-m_impr_j_coc="" data-m_impr_j_jawsid="473239076" data-m_impr_j_jobid="2601039" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11709" data-m_impr_j_p="16" data-m_impr_j_postingid="68ed53a6-6ef7-4605-8ded-48f58a00e8e5" data-m_impr_j_pvc="238a473f-f326-42d6-97e2-4fb4dd657137" data-m_impr_s_t="t" data-m_impr_uuid="0ef4ff2f-0b5a-4516-96b4-cd21d9486d39" href="https://job-openings.monster.com/growth-account-executive-sydney-new-south-wales-nsw-us-twilio/68ed53a6-6ef7-4605-8ded-48f58a00e8e5" onclick="clickJobTitle('plid=0&amp;pcid=10&amp;poccid=11709','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Growth Account Executive&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Twilio&quot;,&quot;eVar31&quot;:&quot;Sydney, New South Wales_NSW_&quot;,&quot;prop24&quot;:&quot;2021-01-27T12:00&quot;,&quot;eVar53&quot;:&quot;4100683001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Growth Account Executive
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Twilio
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Sydney, New South Wales, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            16 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content apas-ad" data-mux="searchResultsAds" style="display:none">
         <div id="bad3">
         </div>
        </section>
        <section class="card-content" data-jobid="0200b8c4-78a5-4a1b-af63-b8150b6d6958" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="4" data-m_impr_j_coc="" data-m_impr_j_jawsid="476859156" data-m_impr_j_jobid="540609" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11838" data-m_impr_j_p="17" data-m_impr_j_postingid="0200b8c4-78a5-4a1b-af63-b8150b6d6958" data-m_impr_j_pvc="7bc2b357-1dbb-448a-93f2-190704290afc" data-m_impr_s_t="t" data-m_impr_uuid="f60fb565-d15a-44db-98af-5cfde50aad94" href="https://job-openings.monster.com/qa-engineer-sydney-new-south-wales-sydney-nsw-us-mri-software/0200b8c4-78a5-4a1b-af63-b8150b6d6958" onclick="clickJobTitle('plid=0&amp;pcid=4&amp;poccid=11838','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;QA Engineer - Sydney, New South Wales&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_MRI Software&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-02-09T12:00&quot;,&quot;eVar53&quot;:&quot;1700192001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              QA Engineer - Sydney, New South Wales
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             MRI Software
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Sydney, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            3 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="3a753c97-6cd5-4f6b-a40e-a9c9ebc42051" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="11455" data-m_impr_j_coc="" data-m_impr_j_jawsid="473612444" data-m_impr_j_jobid="14013823" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11968" data-m_impr_j_p="18" data-m_impr_j_postingid="3a753c97-6cd5-4f6b-a40e-a9c9ebc42051" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="9004f0f6-0660-4dc1-9e26-a36ca61c94d7" href="https://job-openings.monster.com/test-automation-engineer-north-sydney-nsw-us-dialog-group/3a753c97-6cd5-4f6b-a40e-a9c9ebc42051" onclick="clickJobTitle('plid=0&amp;pcid=11455&amp;poccid=11968','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Test Automation Engineer&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;North Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-02-10T12:00&quot;,&quot;eVar53&quot;:&quot;1500137001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Test Automation Engineer
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Dialog Group
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             North Sydney, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            2 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="6558fca6-4cfa-470b-8b13-bac7c72a8087" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="10" data-m_impr_j_coc="" data-m_impr_j_jawsid="470842875" data-m_impr_j_jobid="2559567" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11709" data-m_impr_j_p="19" data-m_impr_j_postingid="6558fca6-4cfa-470b-8b13-bac7c72a8087" data-m_impr_j_pvc="238a473f-f326-42d6-97e2-4fb4dd657137" data-m_impr_s_t="t" data-m_impr_uuid="6fc62447-2ed4-4947-b02c-71fcf50271fa" href="https://job-openings.monster.com/sales-development-representative-anz-sydney-new-south-wales-nsw-us-twilio/6558fca6-4cfa-470b-8b13-bac7c72a8087" onclick="clickJobTitle('plid=0&amp;pcid=10&amp;poccid=11709','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Sales Development Representative, ANZ&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Twilio&quot;,&quot;eVar31&quot;:&quot;Sydney, New South Wales_NSW_&quot;,&quot;prop24&quot;:&quot;2021-01-12T12:00&quot;,&quot;eVar53&quot;:&quot;4100683001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Sales Development Representative, ANZ
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Twilio
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Sydney, New South Wales, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            +30 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="ec3a12e0-9b62-444e-b953-00f38d340028" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="4" data-m_impr_j_coc="" data-m_impr_j_jawsid="472336060" data-m_impr_j_jobid="13966052" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11838" data-m_impr_j_p="20" data-m_impr_j_postingid="ec3a12e0-9b62-444e-b953-00f38d340028" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="61ccc6a1-5917-48af-a466-526b0188f864" href="https://job-openings.monster.com/test-analysts-senior-test-analysts-brisbane-qld-us-dialog-group/ec3a12e0-9b62-444e-b953-00f38d340028" onclick="clickJobTitle('plid=0&amp;pcid=4&amp;poccid=11838','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Test Analysts \u0026 Senior Test Analysts&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Brisbane_QLD_&quot;,&quot;prop24&quot;:&quot;2021-01-21T12:00&quot;,&quot;eVar53&quot;:&quot;1700192001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Test Analysts &amp; Senior Test Analysts
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Dialog Group
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Brisbane, QLD
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            22 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="2e779a3a-7084-4fa3-b3a7-d7287415224e" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="10" data-m_impr_j_coc="" data-m_impr_j_jawsid="469700462" data-m_impr_j_jobid="2543686" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11709" data-m_impr_j_p="21" data-m_impr_j_postingid="2e779a3a-7084-4fa3-b3a7-d7287415224e" data-m_impr_j_pvc="238a473f-f326-42d6-97e2-4fb4dd657137" data-m_impr_s_t="t" data-m_impr_uuid="39225a9b-8a5f-4ad7-a2f3-c20b5dd80405" href="https://job-openings.monster.com/account-executive-iot-sales-apj-sydney-new-south-wales-nsw-us-twilio/2e779a3a-7084-4fa3-b3a7-d7287415224e" onclick="clickJobTitle('plid=0&amp;pcid=10&amp;poccid=11709','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Account Executive, IoT Sales, APJ&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Twilio&quot;,&quot;eVar31&quot;:&quot;Sydney, New South Wales_NSW_&quot;,&quot;prop24&quot;:&quot;2021-01-06T12:00&quot;,&quot;eVar53&quot;:&quot;4100683001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Account Executive, IoT Sales, APJ
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Twilio
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Sydney, New South Wales, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            +30 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="dece048e-e392-4c04-a52a-4c71a776b053" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="4" data-m_impr_j_coc="" data-m_impr_j_jawsid="472336064" data-m_impr_j_jobid="13915925" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11838" data-m_impr_j_p="22" data-m_impr_j_postingid="dece048e-e392-4c04-a52a-4c71a776b053" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="78860ffc-3efa-4590-ae57-6d21bb1fe4db" href="https://job-openings.monster.com/test-engineer-melbourne-cbd-vic-us-dialog-group/dece048e-e392-4c04-a52a-4c71a776b053" onclick="clickJobTitle('plid=0&amp;pcid=4&amp;poccid=11838','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Test Engineer&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Melbourne CBD_VIC_&quot;,&quot;prop24&quot;:&quot;2021-01-21T12:00&quot;,&quot;eVar53&quot;:&quot;1700192001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Test Engineer
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Dialog Group
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Melbourne CBD, VIC
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            22 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="c94fe8f2-5f9f-43c4-95d6-525bd24c83f4" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="11" data-m_impr_j_coc="" data-m_impr_j_jawsid="473612445" data-m_impr_j_jobid="14013805" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11741" data-m_impr_j_p="23" data-m_impr_j_postingid="c94fe8f2-5f9f-43c4-95d6-525bd24c83f4" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="4dc51cb8-f321-4627-b2e7-7a129464d36f" href="https://job-openings.monster.com/automation-devops-code-camp-brisbane-brisbane-qld-us-dialog-group/c94fe8f2-5f9f-43c4-95d6-525bd24c83f4" onclick="clickJobTitle('plid=0&amp;pcid=11&amp;poccid=11741','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Automation \u0026 Devops Code Camp (Brisbane)&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Brisbane_QLD_&quot;,&quot;prop24&quot;:&quot;2021-01-29T12:00&quot;,&quot;eVar53&quot;:&quot;9901111000004&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Automation &amp; Devops Code Camp (Brisbane)
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Dialog Group
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Brisbane, QLD
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            14 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="be841b74-ff37-48d7-a316-c0e38b61ae58" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="4" data-m_impr_j_coc="" data-m_impr_j_jawsid="472336059" data-m_impr_j_jobid="13984736" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11838" data-m_impr_j_p="24" data-m_impr_j_postingid="be841b74-ff37-48d7-a316-c0e38b61ae58" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="fad98616-e7e9-4e5b-927f-2c2f3db45d04" href="https://job-openings.monster.com/supply-chain-tester-brisbane-qld-us-dialog-group/be841b74-ff37-48d7-a316-c0e38b61ae58" onclick="clickJobTitle('plid=0&amp;pcid=4&amp;poccid=11838','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Supply Chain Tester&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Brisbane_QLD_&quot;,&quot;prop24&quot;:&quot;2021-01-21T12:00&quot;,&quot;eVar53&quot;:&quot;1700192001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Supply Chain Tester
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Dialog Group
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Brisbane, QLD
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            22 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="9e890453-5046-4ee8-9129-cb3990057416" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="4" data-m_impr_j_coc="" data-m_impr_j_jawsid="452769754" data-m_impr_j_jobid="13784535" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11838" data-m_impr_j_p="25" data-m_impr_j_postingid="9e890453-5046-4ee8-9129-cb3990057416" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="b684b45f-3f7b-4539-ac84-0ab2bad2fdec" href="https://job-openings.monster.com/principal-consultant-quality-assurance-testing-north-sydney-nsw-us-dialog-group/9e890453-5046-4ee8-9129-cb3990057416" onclick="clickJobTitle('plid=0&amp;pcid=4&amp;poccid=11838','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Principal Consultant - Quality Assurance and Testing&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;North Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-01-21T12:00&quot;,&quot;eVar53&quot;:&quot;1700192001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Principal Consultant - Quality Assurance and Testing
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Dialog Group
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             North Sydney, NSW
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            22 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
        <section class="card-content" data-jobid="79414da8-65bc-4a36-9221-d12074a57d2b" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
         <div class="flex-row">
          <div class="mux-company-logo thumbnail">
          </div>
          <div class="summary">
           <header class="card-header">
            <h2 class="title">
             <a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="11455" data-m_impr_j_coc="" data-m_impr_j_jawsid="472336061" data-m_impr_j_jobid="13956266" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11968" data-m_impr_j_p="26" data-m_impr_j_postingid="79414da8-65bc-4a36-9221-d12074a57d2b" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="6cd16d91-f640-492f-9241-193de266f469" href="https://job-openings.monster.com/test-automation-engineer-melbourne-cbd-vic-us-dialog-group/79414da8-65bc-4a36-9221-d12074a57d2b" onclick="clickJobTitle('plid=0&amp;pcid=11455&amp;poccid=11968','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Test Automation Engineer&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Melbourne CBD_VIC_&quot;,&quot;prop24&quot;:&quot;2021-01-21T12:00&quot;,&quot;eVar53&quot;:&quot;1500137001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">
              Test Automation Engineer
             </a>
            </h2>
           </header>
           <div class="company">
            <span class="name">
             Dialog Group
            </span>
            <ul class="list-inline">
            </ul>
           </div>
           <div class="location">
            <span class="name">
             Melbourne CBD, VIC
            </span>
           </div>
          </div>
          <div class="meta flex-col">
           <time datetime="2017-05-26T12:00">
            22 days ago
           </time>
           <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
            <i aria-hidden="true" class="icon icon-applied">
            </i>
            <span class="sr-only">
             Applied
            </span>
           </span>
           <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
            <i aria-hidden="true" class="icon icon-saved">
            </i>
            <span class="sr-only">
             Saved
            </span>
           </span>
          </div>
         </div>
        </section>
       </div>
       <a class="mux-btn btn-secondary load-more-btn" data-action="fetch" href="https://www.monster.com/jobs/search/?page=2" id="loadMoreJobs" role="button">
        Load more jobs
       </a>
       <a class="mux-btn btn-secondary no-more-jobs-btn disabled" id="noMoreResults" role="button" style="display:none">
        No More Results
       </a>
      </div>
     </div>
    </div>
    



```python
job_elems = results.find_all('section', class_='card-content')
```


```python
for job_elem in job_elems:
    print(job_elem, end='\n'*2)

```

    <section class="card-content" data-jobid="ce1f83f9-5a3e-403d-8302-01d241783b2d" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="660" data-m_impr_j_coc="" data-m_impr_j_jawsid="471351201" data-m_impr_j_jobid="538934" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11970" data-m_impr_j_p="1" data-m_impr_j_postingid="ce1f83f9-5a3e-403d-8302-01d241783b2d" data-m_impr_j_pvc="7bc2b357-1dbb-448a-93f2-190704290afc" data-m_impr_s_t="t" data-m_impr_uuid="a5ea2f52-dc2b-41d2-903b-4ea9262cf589" href="https://job-openings.monster.com/software-engineer-full-stack-sydney-new-south-wales-sydney-nsw-us-mri-software/ce1f83f9-5a3e-403d-8302-01d241783b2d" onclick="clickJobTitle('plid=0&amp;pcid=660&amp;poccid=11970','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Software Engineer - Full Stack - Sydney, New South Wales&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_MRI Software&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-01-15T12:00&quot;,&quot;eVar53&quot;:&quot;1500127001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Software Engineer - Full Stack - Sydney, New South Wales
    </a></h2>
    </header>
    <div class="company">
    <span class="name">MRI Software</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Sydney, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">28 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content apas-ad" data-mux="searchResultsAds" style="display:none">
    <div id="bad1"></div>
    </section>
    
    <section class="card-content" data-jobid="6b4b387e-3c9a-4c6f-996d-9db14e785b4f" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="545" data-m_impr_j_coc="" data-m_impr_j_jawsid="459452813" data-m_impr_j_jobid="2445702" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11985" data-m_impr_j_p="2" data-m_impr_j_postingid="6b4b387e-3c9a-4c6f-996d-9db14e785b4f" data-m_impr_j_pvc="238a473f-f326-42d6-97e2-4fb4dd657137" data-m_impr_s_t="t" data-m_impr_uuid="f2a2fbd4-cc25-4f53-ba98-05aa6f4ae858" href="https://job-openings.monster.com/technical-support-engineer-3-messaging-melbourne-victoria-vic-us-twilio/6b4b387e-3c9a-4c6f-996d-9db14e785b4f" onclick="clickJobTitle('plid=0&amp;pcid=545&amp;poccid=11985','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Technical Support Engineer 3 (Messaging)&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Twilio&quot;,&quot;eVar31&quot;:&quot;Melbourne, Victoria_VIC_&quot;,&quot;prop24&quot;:&quot;2020-11-17T12:00&quot;,&quot;eVar53&quot;:&quot;1500134001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Technical Support Engineer 3 (Messaging)
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Twilio</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Melbourne, Victoria, VIC
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">+30 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="35fbcd1e-03e6-45e4-9df8-f5af7ebf92c6" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="545" data-m_impr_j_coc="" data-m_impr_j_jawsid="459452814" data-m_impr_j_jobid="2445699" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11985" data-m_impr_j_p="3" data-m_impr_j_postingid="35fbcd1e-03e6-45e4-9df8-f5af7ebf92c6" data-m_impr_j_pvc="238a473f-f326-42d6-97e2-4fb4dd657137" data-m_impr_s_t="t" data-m_impr_uuid="5384d670-ed31-4e55-a232-141dede3b23a" href="https://job-openings.monster.com/technical-support-engineer-3-messaging-sydney-new-south-wales-nsw-us-twilio/35fbcd1e-03e6-45e4-9df8-f5af7ebf92c6" onclick="clickJobTitle('plid=0&amp;pcid=545&amp;poccid=11985','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Technical Support Engineer 3 (Messaging)&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Twilio&quot;,&quot;eVar31&quot;:&quot;Sydney, New South Wales_NSW_&quot;,&quot;prop24&quot;:&quot;2020-11-17T12:00&quot;,&quot;eVar53&quot;:&quot;1500134001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Technical Support Engineer 3 (Messaging)
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Twilio</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Sydney, New South Wales, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">+30 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="bf88fd37-a338-40cb-98df-571efb25f948" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="10" data-m_impr_j_coc="" data-m_impr_j_jawsid="462809026" data-m_impr_j_jobid="536951" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11986" data-m_impr_j_p="4" data-m_impr_j_postingid="bf88fd37-a338-40cb-98df-571efb25f948" data-m_impr_j_pvc="7bc2b357-1dbb-448a-93f2-190704290afc" data-m_impr_s_t="t" data-m_impr_uuid="2cda7d1c-ce7e-434c-8a73-4d5af7744e7f" href="https://job-openings.monster.com/sales-engineer-commercial-real-estate-saas-sydney-new-south-wales-sydney-nsw-us-mri-software/bf88fd37-a338-40cb-98df-571efb25f948" onclick="clickJobTitle('plid=0&amp;pcid=10&amp;poccid=11986','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Sales Engineer - Commercial Real Estate SaaS - Sydney, New South Wales&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_MRI Software&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2020-12-10T12:00&quot;,&quot;eVar53&quot;:&quot;4100688001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Sales Engineer - Commercial Real Estate SaaS - Sydney, New South Wales
    </a></h2>
    </header>
    <div class="company">
    <span class="name">MRI Software</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Sydney, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">+30 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="76982217-6f38-4fa2-9d17-92d98b62e7dd" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="9008" data-m_impr_j_coc="" data-m_impr_j_jawsid="478006846" data-m_impr_j_jobid="14049108" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11934" data-m_impr_j_p="5" data-m_impr_j_postingid="76982217-6f38-4fa2-9d17-92d98b62e7dd" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="b7b3b231-a012-4c9b-ab32-1ea0ae88496d" href="https://job-openings.monster.com/principal-consultant-automation-devops-sydney-nsw-us-dialog-group/76982217-6f38-4fa2-9d17-92d98b62e7dd" onclick="clickJobTitle('plid=0&amp;pcid=9008&amp;poccid=11934','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Principal Consultant, Automation \u0026 Devops&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-02-11T12:00&quot;,&quot;eVar53&quot;:&quot;1300093001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Principal Consultant, Automation &amp; Devops
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Dialog Group</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Sydney, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">1 day ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="b2f6fead-5873-4bcd-8e07-0bb146f58a82" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail is-loaded">
    <img alt="Mediaocean" src="https://coda.newjobs.com/api/imagesproxy/ms/mm/xmediaoceanx/cjt/logo.jpg"/>
    </div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="545" data-m_impr_j_coc="" data-m_impr_j_jawsid="456446985" data-m_impr_j_jobid="534600" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11738" data-m_impr_j_p="6" data-m_impr_j_postingid="b2f6fead-5873-4bcd-8e07-0bb146f58a82" data-m_impr_j_pvc="6232df37-d6a8-4d8d-8427-26e9c9101837" data-m_impr_s_t="t" data-m_impr_uuid="7c0aa095-a85d-4cb3-9edc-758268e443ec" href="https://job-openings.monster.com/customer-experience-technical-analyst-sydney-new-south-wales-sydney-nsw-us-mediaocean/b2f6fead-5873-4bcd-8e07-0bb146f58a82" onclick="clickJobTitle('plid=0&amp;pcid=545&amp;poccid=11738','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Customer Experience Technical Analyst - Sydney, New South Wales&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Mediaocean&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2020-11-02T12:00&quot;,&quot;eVar53&quot;:&quot;4300715001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;logo&quot;}')">Customer Experience Technical Analyst - Sydney, New South Wales
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Mediaocean</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Sydney, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">+30 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content apas-ad" data-mux="searchResultsAds" style="display:none">
    <div id="bad2"></div>
    </section>
    
    <section class="card-content" data-jobid="a736efcf-ac1c-4e14-b6e2-2cbc9023dade" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="11" data-m_impr_j_coc="" data-m_impr_j_jawsid="473006275" data-m_impr_j_jobid="1882" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11741" data-m_impr_j_p="7" data-m_impr_j_postingid="a736efcf-ac1c-4e14-b6e2-2cbc9023dade" data-m_impr_j_pvc="b129b402-4994-4857-9d90-4b3d8977f72f" data-m_impr_s_t="t" data-m_impr_uuid="69c2a243-5d8e-4781-80da-777517d3a07d" href="https://job-openings.monster.com/consultant-senior-consultant-melbourne-vic-us-randstad-anz/a736efcf-ac1c-4e14-b6e2-2cbc9023dade" onclick="clickJobTitle('plid=0&amp;pcid=11&amp;poccid=11741','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Consultant / Senior Consultant&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Randstad ANZ&quot;,&quot;eVar31&quot;:&quot;Melbourne_VIC_&quot;,&quot;prop24&quot;:&quot;2021-01-25T12:00&quot;,&quot;eVar53&quot;:&quot;9901111000004&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Consultant / Senior Consultant
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Randstad ANZ</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Melbourne, VIC
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">18 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="50d01de8-7791-48c0-81f8-27aa624f3d11" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="10" data-m_impr_j_coc="" data-m_impr_j_jawsid="467424387" data-m_impr_j_jobid="2160915" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11709" data-m_impr_j_p="8" data-m_impr_j_postingid="50d01de8-7791-48c0-81f8-27aa624f3d11" data-m_impr_j_pvc="greenhouseftpin" data-m_impr_s_t="t" data-m_impr_uuid="1b2eeb60-6c40-406c-be28-36eacce0ae66" href="https://job-openings.monster.com/account-executive-apac-perth-western-australia-australia-us-uptake/50d01de8-7791-48c0-81f8-27aa624f3d11" onclick="clickJobTitle('plid=0&amp;pcid=10&amp;poccid=11709','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Account Executive - APAC&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Uptake&quot;,&quot;eVar31&quot;:&quot;Perth, Western Australia, Australia__&quot;,&quot;prop24&quot;:&quot;2021-01-08T12:00&quot;,&quot;eVar53&quot;:&quot;4100683001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Account Executive - APAC
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Uptake</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Perth, Western Australia, Australia
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">+30 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="4bfd0a91-99e9-4495-9ec9-b24021bed63d" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="5" data-m_impr_j_coc="" data-m_impr_j_jawsid="477937361" data-m_impr_j_jobid="1901" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11796" data-m_impr_j_p="9" data-m_impr_j_postingid="4bfd0a91-99e9-4495-9ec9-b24021bed63d" data-m_impr_j_pvc="cefdcda6-6d1f-4c8b-95d2-8277a220a398" data-m_impr_s_t="t" data-m_impr_uuid="b8b050d6-d41a-4f4a-b540-671d7a18ccfe" href="https://job-openings.monster.com/senior-talent-acquisition-specialist-technology-sydney-sydney-nsw-us-randstad-sourceright/4bfd0a91-99e9-4495-9ec9-b24021bed63d" onclick="clickJobTitle('plid=0&amp;pcid=5&amp;poccid=11796','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Senior Talent Acquisition Specialist (Technology) - Sydney&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Randstad Sourceright&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-02-11T12:00&quot;,&quot;eVar53&quot;:&quot;1300081001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Senior Talent Acquisition Specialist (Technology) - Sydney
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Randstad Sourceright</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Sydney, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">1 day ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="10b421a7-e7df-4f49-8a23-a024b070b896" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="4" data-m_impr_j_coc="" data-m_impr_j_jawsid="470402851" data-m_impr_j_jobid="2357458" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11838" data-m_impr_j_p="10" data-m_impr_j_postingid="10b421a7-e7df-4f49-8a23-a024b070b896" data-m_impr_j_pvc="b2483b3d-5e7d-4b77-b6a7-154ed9eeebd9" data-m_impr_s_t="t" data-m_impr_uuid="a75113c9-f8a2-425e-8bb7-ea8c8ca36d5f" href="https://job-openings.monster.com/intern-software-engineer-qa-2021-us-bellevue-wa-san-jose-ca-san-francisco-ca-ca-us-okta/10b421a7-e7df-4f49-8a23-a024b070b896" onclick="clickJobTitle('plid=0&amp;pcid=4&amp;poccid=11838','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Intern - Software Engineer - QA 2021 US&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Okta&quot;,&quot;eVar31&quot;:&quot;Bellevue,WA, San Jose,CA, San Francisco, CA_CA_&quot;,&quot;prop24&quot;:&quot;2021-01-10T12:00&quot;,&quot;eVar53&quot;:&quot;1700192001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Intern - Software Engineer - QA 2021 US
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Okta</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Bellevue,WA, San Jose,CA, San Francisco, CA, CA
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">+30 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="224354190" data-postingid="f672dd96-2122-4e59-8eff-12741f010e01" data-ssr="true" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <p class="entry">Interesting opportunity</p> <div class="flex-row">
    <div class="mux-company-logo thumbnail is-loaded">
    <img alt="Amazon Corporate LLC" src="https://media.newjobs.com/clu/xama/xamazonx/branding/54/Amazon-logo-637196280106671504.gif"/>
    </div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSRSEC" data-m_impr_j_cid="660" data-m_impr_j_coc="xwag2321849x" data-m_impr_j_jawsid="478257300" data-m_impr_j_jobid="224354190" data-m_impr_j_jpm="1" data-m_impr_j_jpt="1" data-m_impr_j_lat="47.6388" data-m_impr_j_lid="0" data-m_impr_j_long="-122.37" data-m_impr_j_occid="11904" data-m_impr_j_p="11" data-m_impr_j_postingid="f672dd96-2122-4e59-8eff-12741f010e01" data-m_impr_j_pvc="monster" data-m_impr_s_t="m" data-m_impr_uuid="08c1c4da-2949-4e93-868c-707ad9a86e6c" href="https://job-openings.monster.com/software-development-engineer-ii-seattle-wa-us-amazon-corporate-llc/224354190" onclick="clickJobTitle('plid=0&amp;pcid=660&amp;poccid=11904','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;events.event65&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Software Development Engineer II&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSRSEC&quot;,&quot;eVar26&quot;:&quot;xwag2321849x_Amazon Corporate LLC&quot;,&quot;eVar31&quot;:&quot;Seattle_WA_&quot;,&quot;prop22&quot;:&quot;Full-Time&quot;,&quot;prop24&quot;:&quot;2021-02-12T06:36&quot;,&quot;eVar47&quot;:&quot;monster&quot;,&quot;eVar53&quot;:&quot;1500127001001&quot;,&quot;eVar50&quot;:&quot;Duration&quot;,&quot;eVar74&quot;:&quot;logo&quot;}')">Software Development Engineer II
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Amazon Corporate LLC</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Seattle, WA
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">Posted today</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="3a764f76-f5a9-427f-ab1e-b0e079829744" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="11455" data-m_impr_j_coc="" data-m_impr_j_jawsid="478006849" data-m_impr_j_jobid="14043153" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11968" data-m_impr_j_p="12" data-m_impr_j_postingid="3a764f76-f5a9-427f-ab1e-b0e079829744" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="a8cd66e5-5074-413a-a646-1ab2eb4f1800" href="https://job-openings.monster.com/servicenow-test-automation-engineer-sydney-nsw-us-dialog-group/3a764f76-f5a9-427f-ab1e-b0e079829744" onclick="clickJobTitle('plid=0&amp;pcid=11455&amp;poccid=11968','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;ServiceNow Test Automation Engineer&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-02-11T12:00&quot;,&quot;eVar53&quot;:&quot;1500137001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">ServiceNow Test Automation Engineer
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Dialog Group</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Sydney, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">1 day ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="54194641-75b3-4632-8e3e-ee087f62f713" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="660" data-m_impr_j_coc="" data-m_impr_j_jawsid="469501386" data-m_impr_j_jobid="537986" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11787" data-m_impr_j_p="13" data-m_impr_j_postingid="54194641-75b3-4632-8e3e-ee087f62f713" data-m_impr_j_pvc="7bc2b357-1dbb-448a-93f2-190704290afc" data-m_impr_s_t="t" data-m_impr_uuid="a9c9915f-5695-4211-9a84-0319e9ce0416" href="https://job-openings.monster.com/software-architect-sydney-new-south-wales-sydney-nsw-us-mri-software/54194641-75b3-4632-8e3e-ee087f62f713" onclick="clickJobTitle('plid=0&amp;pcid=660&amp;poccid=11787','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Software Architect - Sydney, New South Wales&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_MRI Software&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-01-05T12:00&quot;,&quot;eVar53&quot;:&quot;1500138001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Software Architect - Sydney, New South Wales
    </a></h2>
    </header>
    <div class="company">
    <span class="name">MRI Software</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Sydney, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">+30 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="8a9b9708-e809-4c7e-b518-8bba8f376a4b" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="10" data-m_impr_j_coc="" data-m_impr_j_jawsid="470842392" data-m_impr_j_jobid="2568036" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11709" data-m_impr_j_p="14" data-m_impr_j_postingid="8a9b9708-e809-4c7e-b518-8bba8f376a4b" data-m_impr_j_pvc="238a473f-f326-42d6-97e2-4fb4dd657137" data-m_impr_s_t="t" data-m_impr_uuid="e1870aab-4727-46dc-8ce5-d644e8b5bf81" href="https://job-openings.monster.com/senior-manager-enterprise-sales-anz-sydney-new-south-wales-nsw-us-twilio/8a9b9708-e809-4c7e-b518-8bba8f376a4b" onclick="clickJobTitle('plid=0&amp;pcid=10&amp;poccid=11709','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Senior Manager, Enterprise Sales, ANZ&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Twilio&quot;,&quot;eVar31&quot;:&quot;Sydney, New South Wales_NSW_&quot;,&quot;prop24&quot;:&quot;2021-01-12T12:00&quot;,&quot;eVar53&quot;:&quot;4100683001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Senior Manager, Enterprise Sales, ANZ
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Twilio</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Sydney, New South Wales, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">+30 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="15a6d27e-9b31-4417-9806-c13bf4d74e3f" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="9008" data-m_impr_j_coc="" data-m_impr_j_jawsid="478006847" data-m_impr_j_jobid="14048931" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11934" data-m_impr_j_p="15" data-m_impr_j_postingid="15a6d27e-9b31-4417-9806-c13bf4d74e3f" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="fd1147ea-cc83-4bd8-99cc-76aa97a813a0" href="https://job-openings.monster.com/principal-consultant-automation-devops-melbourne-vic-us-dialog-group/15a6d27e-9b31-4417-9806-c13bf4d74e3f" onclick="clickJobTitle('plid=0&amp;pcid=9008&amp;poccid=11934','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Principal Consultant, Automation \u0026 Devops&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Melbourne_VIC_&quot;,&quot;prop24&quot;:&quot;2021-02-11T12:00&quot;,&quot;eVar53&quot;:&quot;1300093001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Principal Consultant, Automation &amp; Devops
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Dialog Group</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Melbourne, VIC
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">1 day ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="68ed53a6-6ef7-4605-8ded-48f58a00e8e5" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="10" data-m_impr_j_coc="" data-m_impr_j_jawsid="473239076" data-m_impr_j_jobid="2601039" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11709" data-m_impr_j_p="16" data-m_impr_j_postingid="68ed53a6-6ef7-4605-8ded-48f58a00e8e5" data-m_impr_j_pvc="238a473f-f326-42d6-97e2-4fb4dd657137" data-m_impr_s_t="t" data-m_impr_uuid="0ef4ff2f-0b5a-4516-96b4-cd21d9486d39" href="https://job-openings.monster.com/growth-account-executive-sydney-new-south-wales-nsw-us-twilio/68ed53a6-6ef7-4605-8ded-48f58a00e8e5" onclick="clickJobTitle('plid=0&amp;pcid=10&amp;poccid=11709','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Growth Account Executive&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Twilio&quot;,&quot;eVar31&quot;:&quot;Sydney, New South Wales_NSW_&quot;,&quot;prop24&quot;:&quot;2021-01-27T12:00&quot;,&quot;eVar53&quot;:&quot;4100683001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Growth Account Executive
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Twilio</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Sydney, New South Wales, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">16 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content apas-ad" data-mux="searchResultsAds" style="display:none">
    <div id="bad3"></div>
    </section>
    
    <section class="card-content" data-jobid="0200b8c4-78a5-4a1b-af63-b8150b6d6958" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="4" data-m_impr_j_coc="" data-m_impr_j_jawsid="476859156" data-m_impr_j_jobid="540609" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11838" data-m_impr_j_p="17" data-m_impr_j_postingid="0200b8c4-78a5-4a1b-af63-b8150b6d6958" data-m_impr_j_pvc="7bc2b357-1dbb-448a-93f2-190704290afc" data-m_impr_s_t="t" data-m_impr_uuid="f60fb565-d15a-44db-98af-5cfde50aad94" href="https://job-openings.monster.com/qa-engineer-sydney-new-south-wales-sydney-nsw-us-mri-software/0200b8c4-78a5-4a1b-af63-b8150b6d6958" onclick="clickJobTitle('plid=0&amp;pcid=4&amp;poccid=11838','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;QA Engineer - Sydney, New South Wales&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_MRI Software&quot;,&quot;eVar31&quot;:&quot;Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-02-09T12:00&quot;,&quot;eVar53&quot;:&quot;1700192001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">QA Engineer - Sydney, New South Wales
    </a></h2>
    </header>
    <div class="company">
    <span class="name">MRI Software</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Sydney, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">3 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="3a753c97-6cd5-4f6b-a40e-a9c9ebc42051" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="11455" data-m_impr_j_coc="" data-m_impr_j_jawsid="473612444" data-m_impr_j_jobid="14013823" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11968" data-m_impr_j_p="18" data-m_impr_j_postingid="3a753c97-6cd5-4f6b-a40e-a9c9ebc42051" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="9004f0f6-0660-4dc1-9e26-a36ca61c94d7" href="https://job-openings.monster.com/test-automation-engineer-north-sydney-nsw-us-dialog-group/3a753c97-6cd5-4f6b-a40e-a9c9ebc42051" onclick="clickJobTitle('plid=0&amp;pcid=11455&amp;poccid=11968','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Test Automation Engineer&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;North Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-02-10T12:00&quot;,&quot;eVar53&quot;:&quot;1500137001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Test Automation Engineer
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Dialog Group</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    North Sydney, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">2 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="6558fca6-4cfa-470b-8b13-bac7c72a8087" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="10" data-m_impr_j_coc="" data-m_impr_j_jawsid="470842875" data-m_impr_j_jobid="2559567" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11709" data-m_impr_j_p="19" data-m_impr_j_postingid="6558fca6-4cfa-470b-8b13-bac7c72a8087" data-m_impr_j_pvc="238a473f-f326-42d6-97e2-4fb4dd657137" data-m_impr_s_t="t" data-m_impr_uuid="6fc62447-2ed4-4947-b02c-71fcf50271fa" href="https://job-openings.monster.com/sales-development-representative-anz-sydney-new-south-wales-nsw-us-twilio/6558fca6-4cfa-470b-8b13-bac7c72a8087" onclick="clickJobTitle('plid=0&amp;pcid=10&amp;poccid=11709','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Sales Development Representative, ANZ&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Twilio&quot;,&quot;eVar31&quot;:&quot;Sydney, New South Wales_NSW_&quot;,&quot;prop24&quot;:&quot;2021-01-12T12:00&quot;,&quot;eVar53&quot;:&quot;4100683001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Sales Development Representative, ANZ
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Twilio</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Sydney, New South Wales, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">+30 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="ec3a12e0-9b62-444e-b953-00f38d340028" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="4" data-m_impr_j_coc="" data-m_impr_j_jawsid="472336060" data-m_impr_j_jobid="13966052" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11838" data-m_impr_j_p="20" data-m_impr_j_postingid="ec3a12e0-9b62-444e-b953-00f38d340028" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="61ccc6a1-5917-48af-a466-526b0188f864" href="https://job-openings.monster.com/test-analysts-senior-test-analysts-brisbane-qld-us-dialog-group/ec3a12e0-9b62-444e-b953-00f38d340028" onclick="clickJobTitle('plid=0&amp;pcid=4&amp;poccid=11838','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Test Analysts \u0026 Senior Test Analysts&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Brisbane_QLD_&quot;,&quot;prop24&quot;:&quot;2021-01-21T12:00&quot;,&quot;eVar53&quot;:&quot;1700192001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Test Analysts &amp; Senior Test Analysts
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Dialog Group</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Brisbane, QLD
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">22 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="2e779a3a-7084-4fa3-b3a7-d7287415224e" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="10" data-m_impr_j_coc="" data-m_impr_j_jawsid="469700462" data-m_impr_j_jobid="2543686" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11709" data-m_impr_j_p="21" data-m_impr_j_postingid="2e779a3a-7084-4fa3-b3a7-d7287415224e" data-m_impr_j_pvc="238a473f-f326-42d6-97e2-4fb4dd657137" data-m_impr_s_t="t" data-m_impr_uuid="39225a9b-8a5f-4ad7-a2f3-c20b5dd80405" href="https://job-openings.monster.com/account-executive-iot-sales-apj-sydney-new-south-wales-nsw-us-twilio/2e779a3a-7084-4fa3-b3a7-d7287415224e" onclick="clickJobTitle('plid=0&amp;pcid=10&amp;poccid=11709','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Account Executive, IoT Sales, APJ&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Twilio&quot;,&quot;eVar31&quot;:&quot;Sydney, New South Wales_NSW_&quot;,&quot;prop24&quot;:&quot;2021-01-06T12:00&quot;,&quot;eVar53&quot;:&quot;4100683001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Account Executive, IoT Sales, APJ
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Twilio</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Sydney, New South Wales, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">+30 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="dece048e-e392-4c04-a52a-4c71a776b053" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="4" data-m_impr_j_coc="" data-m_impr_j_jawsid="472336064" data-m_impr_j_jobid="13915925" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11838" data-m_impr_j_p="22" data-m_impr_j_postingid="dece048e-e392-4c04-a52a-4c71a776b053" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="78860ffc-3efa-4590-ae57-6d21bb1fe4db" href="https://job-openings.monster.com/test-engineer-melbourne-cbd-vic-us-dialog-group/dece048e-e392-4c04-a52a-4c71a776b053" onclick="clickJobTitle('plid=0&amp;pcid=4&amp;poccid=11838','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Test Engineer&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Melbourne CBD_VIC_&quot;,&quot;prop24&quot;:&quot;2021-01-21T12:00&quot;,&quot;eVar53&quot;:&quot;1700192001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Test Engineer
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Dialog Group</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Melbourne CBD, VIC
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">22 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="c94fe8f2-5f9f-43c4-95d6-525bd24c83f4" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="11" data-m_impr_j_coc="" data-m_impr_j_jawsid="473612445" data-m_impr_j_jobid="14013805" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11741" data-m_impr_j_p="23" data-m_impr_j_postingid="c94fe8f2-5f9f-43c4-95d6-525bd24c83f4" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="4dc51cb8-f321-4627-b2e7-7a129464d36f" href="https://job-openings.monster.com/automation-devops-code-camp-brisbane-brisbane-qld-us-dialog-group/c94fe8f2-5f9f-43c4-95d6-525bd24c83f4" onclick="clickJobTitle('plid=0&amp;pcid=11&amp;poccid=11741','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Automation \u0026 Devops Code Camp (Brisbane)&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Brisbane_QLD_&quot;,&quot;prop24&quot;:&quot;2021-01-29T12:00&quot;,&quot;eVar53&quot;:&quot;9901111000004&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Automation &amp; Devops Code Camp (Brisbane)
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Dialog Group</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Brisbane, QLD
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">14 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="be841b74-ff37-48d7-a316-c0e38b61ae58" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="4" data-m_impr_j_coc="" data-m_impr_j_jawsid="472336059" data-m_impr_j_jobid="13984736" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11838" data-m_impr_j_p="24" data-m_impr_j_postingid="be841b74-ff37-48d7-a316-c0e38b61ae58" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="fad98616-e7e9-4e5b-927f-2c2f3db45d04" href="https://job-openings.monster.com/supply-chain-tester-brisbane-qld-us-dialog-group/be841b74-ff37-48d7-a316-c0e38b61ae58" onclick="clickJobTitle('plid=0&amp;pcid=4&amp;poccid=11838','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Supply Chain Tester&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Brisbane_QLD_&quot;,&quot;prop24&quot;:&quot;2021-01-21T12:00&quot;,&quot;eVar53&quot;:&quot;1700192001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Supply Chain Tester
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Dialog Group</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Brisbane, QLD
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">22 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="9e890453-5046-4ee8-9129-cb3990057416" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="4" data-m_impr_j_coc="" data-m_impr_j_jawsid="452769754" data-m_impr_j_jobid="13784535" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11838" data-m_impr_j_p="25" data-m_impr_j_postingid="9e890453-5046-4ee8-9129-cb3990057416" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="b684b45f-3f7b-4539-ac84-0ab2bad2fdec" href="https://job-openings.monster.com/principal-consultant-quality-assurance-testing-north-sydney-nsw-us-dialog-group/9e890453-5046-4ee8-9129-cb3990057416" onclick="clickJobTitle('plid=0&amp;pcid=4&amp;poccid=11838','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Principal Consultant - Quality Assurance and Testing&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;North Sydney_NSW_&quot;,&quot;prop24&quot;:&quot;2021-01-21T12:00&quot;,&quot;eVar53&quot;:&quot;1700192001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Principal Consultant - Quality Assurance and Testing
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Dialog Group</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    North Sydney, NSW
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">22 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    
    <section class="card-content" data-jobid="79414da8-65bc-4a36-9221-d12074a57d2b" onclick="MKImpressionTrackingMouseDownHijack(this, event)">
    <div class="flex-row">
    <div class="mux-company-logo thumbnail"></div>
    <div class="summary">
    <header class="card-header">
    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="11455" data-m_impr_j_coc="" data-m_impr_j_jawsid="472336061" data-m_impr_j_jobid="13956266" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11968" data-m_impr_j_p="26" data-m_impr_j_postingid="79414da8-65bc-4a36-9221-d12074a57d2b" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="6cd16d91-f640-492f-9241-193de266f469" href="https://job-openings.monster.com/test-automation-engineer-melbourne-cbd-vic-us-dialog-group/79414da8-65bc-4a36-9221-d12074a57d2b" onclick="clickJobTitle('plid=0&amp;pcid=11455&amp;poccid=11968','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Test Automation Engineer&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Melbourne CBD_VIC_&quot;,&quot;prop24&quot;:&quot;2021-01-21T12:00&quot;,&quot;eVar53&quot;:&quot;1500137001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Test Automation Engineer
    </a></h2>
    </header>
    <div class="company">
    <span class="name">Dialog Group</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Melbourne CBD, VIC
    </span>
    </div>
    </div>
    <div class="meta flex-col">
    <time datetime="2017-05-26T12:00">22 days ago</time>
    <span class="mux-tooltip applied-only" data-mux="tooltip" title="Applied">
    <i aria-hidden="true" class="icon icon-applied"></i>
    <span class="sr-only">Applied</span>
    </span>
    <span class="mux-tooltip saved-only" data-mux="tooltip" title="Saved">
    <i aria-hidden="true" class="icon icon-saved"></i>
    <span class="sr-only">Saved</span>
    </span>
    </div>
    </div>
    </section>
    



```python
    # Each job_elem is a new BeautifulSoup object.
    # You can use the same methods on it as you did before.
    title_elem = job_elem.find('h2', class_='title')
    company_elem = job_elem.find('div', class_='company')
    location_elem = job_elem.find('div', class_='location')
    print(title_elem)
    print(company_elem)
    print(location_elem)
    print()
```

    <h2 class="title"><a data-bypass="true" data-m_impr_a_placement_id="JSR2CW" data-m_impr_j_cid="11455" data-m_impr_j_coc="" data-m_impr_j_jawsid="472336061" data-m_impr_j_jobid="13956266" data-m_impr_j_jpm="2" data-m_impr_j_jpt="3" data-m_impr_j_lat="0" data-m_impr_j_lid="0" data-m_impr_j_long="0" data-m_impr_j_occid="11968" data-m_impr_j_p="26" data-m_impr_j_postingid="79414da8-65bc-4a36-9221-d12074a57d2b" data-m_impr_j_pvc="cec47324-719f-422e-89c2-4119fbb22642" data-m_impr_s_t="t" data-m_impr_uuid="6cd16d91-f640-492f-9241-193de266f469" href="https://job-openings.monster.com/test-automation-engineer-melbourne-cbd-vic-us-dialog-group/79414da8-65bc-4a36-9221-d12074a57d2b" onclick="clickJobTitle('plid=0&amp;pcid=11455&amp;poccid=11968','Software Developer',''); clickJobTitleSiteCat('{&quot;events.event48&quot;:&quot;true&quot;,&quot;eVar25&quot;:&quot;Test Automation Engineer&quot;,&quot;eVar66&quot;:&quot;Monster&quot;,&quot;eVar67&quot;:&quot;JSR2CW&quot;,&quot;eVar26&quot;:&quot;_Dialog Group&quot;,&quot;eVar31&quot;:&quot;Melbourne CBD_VIC_&quot;,&quot;prop24&quot;:&quot;2021-01-21T12:00&quot;,&quot;eVar53&quot;:&quot;1500137001001&quot;,&quot;eVar50&quot;:&quot;Aggregated&quot;,&quot;eVar74&quot;:&quot;regular&quot;}')">Test Automation Engineer
    </a></h2>
    <div class="company">
    <span class="name">Dialog Group</span>
    <ul class="list-inline">
    </ul>
    </div>
    <div class="location">
    <span class="name">
    Melbourne CBD, VIC
    </span>
    </div>
    



```python
for job_elem in job_elems:
    title_elem = job_elem.find('h2', class_='title')
    company_elem = job_elem.find('div', class_='company')
    location_elem = job_elem.find('div', class_='location')
    print(title_elem.text)
    print(company_elem.text)
    print(location_elem.text)
    print()
```

    Software Engineer - Full Stack - Sydney, New South Wales
    
    
    MRI Software
    
    
    
    
    
    Sydney, NSW
    
    
    



    ---------------------------------------------------------------------------

    AttributeError                            Traceback (most recent call last)

    <ipython-input-12-a21e95b03095> in <module>
          3     company_elem = job_elem.find('div', class_='company')
          4     location_elem = job_elem.find('div', class_='location')
    ----> 5     print(title_elem.text)
          6     print(company_elem.text)
          7     print(location_elem.text)


    AttributeError: 'NoneType' object has no attribute 'text'



```python
for job_elem in job_elems:
    title_elem = job_elem.find('h2', class_='title')
    company_elem = job_elem.find('div', class_='company')
    location_elem = job_elem.find('div', class_='location')
    if None in (title_elem, company_elem, location_elem):
        continue
    print(title_elem.text.strip())
    print(company_elem.text.strip())
    print(location_elem.text.strip())
    print()
```

    Software Engineer - Full Stack - Sydney, New South Wales
    MRI Software
    Sydney, NSW
    
    Technical Support Engineer 3 (Messaging)
    Twilio
    Melbourne, Victoria, VIC
    
    Technical Support Engineer 3 (Messaging)
    Twilio
    Sydney, New South Wales, NSW
    
    Sales Engineer - Commercial Real Estate SaaS - Sydney, New South Wales
    MRI Software
    Sydney, NSW
    
    Principal Consultant, Automation & Devops
    Dialog Group
    Sydney, NSW
    
    Customer Experience Technical Analyst - Sydney, New South Wales
    Mediaocean
    Sydney, NSW
    
    Consultant / Senior Consultant
    Randstad ANZ
    Melbourne, VIC
    
    Account Executive - APAC
    Uptake
    Perth, Western Australia, Australia
    
    Senior Talent Acquisition Specialist (Technology) - Sydney
    Randstad Sourceright
    Sydney, NSW
    
    Intern - Software Engineer - QA 2021 US
    Okta
    Bellevue,WA, San Jose,CA, San Francisco, CA, CA
    
    Software Development Engineer II
    Amazon Corporate LLC
    Seattle, WA
    
    ServiceNow Test Automation Engineer
    Dialog Group
    Sydney, NSW
    
    Software Architect - Sydney, New South Wales
    MRI Software
    Sydney, NSW
    
    Senior Manager, Enterprise Sales, ANZ
    Twilio
    Sydney, New South Wales, NSW
    
    Principal Consultant, Automation & Devops
    Dialog Group
    Melbourne, VIC
    
    Growth Account Executive
    Twilio
    Sydney, New South Wales, NSW
    
    QA Engineer - Sydney, New South Wales
    MRI Software
    Sydney, NSW
    
    Test Automation Engineer
    Dialog Group
    North Sydney, NSW
    
    Sales Development Representative, ANZ
    Twilio
    Sydney, New South Wales, NSW
    
    Test Analysts & Senior Test Analysts
    Dialog Group
    Brisbane, QLD
    
    Account Executive, IoT Sales, APJ
    Twilio
    Sydney, New South Wales, NSW
    
    Test Engineer
    Dialog Group
    Melbourne CBD, VIC
    
    Automation & Devops Code Camp (Brisbane)
    Dialog Group
    Brisbane, QLD
    
    Supply Chain Tester
    Dialog Group
    Brisbane, QLD
    
    Principal Consultant - Quality Assurance and Testing
    Dialog Group
    North Sydney, NSW
    
    Test Automation Engineer
    Dialog Group
    Melbourne CBD, VIC
    



```python
python_jobs = results.find_all('h2', string='Python Developer')
```


```python
python_jobs = results.find_all('h2',
                               string=lambda text: 'python' in text.lower())
```


```python
 print(len(python_jobs))
```

    0



```python
python_jobs = results.find_all('h2',
                               string=lambda text: "python" in text.lower())

for p_job in python_jobs:
    link = p_job.find('a')['href']
    print(p_job.text.strip())
    print(f"Apply here: {link}\n")
```


```python

```
