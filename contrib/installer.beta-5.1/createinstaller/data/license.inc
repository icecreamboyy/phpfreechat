<?php
echo <<<HTML
<h2> GNU/GPL License: </h2>
<div class="licensetext">
<a href="about:blank">PROGRAM</a>
is Free Software released under the GNU/GPL License.
<div class="error"> *** To continue installing PROGRAM you must check the box under the license *** </div>
</div>  
<div class="clr"> </div>         
<div class="license-form" id="license-tabed">
For 
<a href="?file=license#w" onclick="document.getElementById('license-frame').src=this.href;return false;">End-users</a>
<a href="?file=license#SEC2" onclick="document.getElementById('license-frame').src=this.href;return false;">Developers</a>
<a href="?file=license#SEC3" onclick="document.getElementById('license-frame').src=this.href;return false;">Distributers</a>
<div class="form-block" style="padding: 0px;">
<iframe id="license-frame" src="$HTTP_FILE?file=license" class="license" frameborder="0" scrolling="auto"></iframe>
</div>
</div>
<div class="clr"></div>
<div class="ctr"><span class="ctr">
<input name="agreecheck" id="agreecheck" class="inputbox" onclick="agreesubmit(this)" type="checkbox" value="true" />
<label for="agreecheck">I Accept the GPL License</label>
</span></div>
<div class="clr"></div>
</div>
HTML;
?>