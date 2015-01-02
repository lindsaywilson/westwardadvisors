<?php //dsm($content['content'])?>
<?php global $base_url; //dsm($base_url); ?>
<?php setlocale(LC_MONETARY, 'en_US'); ?>
<div class="page-cnt">
   
    <div class="page-cnt-pre-top">
    <h2>Client Data</h2>
    <div class="Clearfix"></div>
    </div>

    <div class="page-cnt-top"> 
        <div id="page-cnt-title">
        <?php echo $content['content']->YearEnd; ?>  <?php echo $content['content']->AnnualReviewType; ?>   ANNUAL REVIEW <br/>
        <span> <?php echo $content['content']->ClientName; ?> </span>
        </div>
        <div id="page-cnt-logo">
        <img src="<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/banner-logo.jpg" />
        </div>
         <div class="clearfix"></div>
        <div class="page-top-banner-img">
        <?php $path=$base_url.'/'.drupal_get_path_alias(current_path()); ?>  
        
        <?php if(isset($content['content']->CreditFacalities) && ( isset($content['content']->CreditFacalities->CreditFacality) ) ){ ?>
	        
	        <img id="Image-Maps-Com-image-maps-2014-12-10-040005" src="<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/banner.png" border="0" width="888" height="415" orgWidth="888" orgHeight="415" usemap="#image-maps-2014-12-10-040005" alt="" />
			<map name="image-maps-2014-12-10-040005" id="ImageMapsCom-image-maps-2014-12-10-040005">
			<area  alt="" title="Plan Structure & Beneftis" href="<?php echo $path; ?>#planstrucure" shape="rect" coords="285,40,417,297" style="outline:none;" target="_self"     />
			<area  alt="" title="Insurance Coverage" href="<?php echo $path; ?>#insurancecoverage" shape="rect" coords="420,20,568,300" style="outline:none;" target="_self"     />
			<area  alt="" title="Credit Facility" href="<?php echo $path; ?>#creditfacility" shape="rect" coords="576,49,724,297" style="outline:none;" target="_self"     />
			<area  alt="" title="Next Actions" href="<?php echo $path; ?>#nextactions" shape="rect" coords="734,40,862,294" style="outline:none;" target="_self"     />
			<area  alt="" title="Video" target="_blank" href="http://www.westwardadvisors.com/client-pathway/videos-tutorials-0" shape="rect" coords="624,328,695,413" style="outline:none;" target="_self"     />
			<area  alt="" title="Save" href="<?php echo $base_url; ?>/printpdf/<?php echo 'annual_review_pdf/'.$content['id']; ?>" shape="rect" coords="700,328,771,413" style="outline:none;" target="_self"     />
			<area  alt="" title="Contact" href="mailto:service@westwardadvisors.com" shape="rect" coords="781,336,848,415" style="outline:none;" target="_self"     />
			<area shape="rect" coords="886,413,888,415" alt="Image Map" style="outline:none;" title="Image Map" href="http://www.image-maps.com/index.php?aff=mapped_users_0" />
			</map>
		
		<?php }else{ ?>
		
			<img id="Image-Maps-Com-image-maps-2014-12-10-041049" src="<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/banner-less.png" border="0" width="888" height="415" orgWidth="888" orgHeight="415" usemap="#image-maps-2014-12-10-041049" alt="" />
			<map name="image-maps-2014-12-10-041049" id="ImageMapsCom-image-maps-2014-12-10-041049">
			<area  alt="" title="Plan Structure & Beneftis" href="<?php echo $path; ?>#planstrucure" shape="rect" coords="283,40,431,300" style="outline:none;" target="_self"     />
			<area  alt="" title="Insurance Coverage" href="<?php echo $path; ?>#insurancecoverage" shape="rect" coords="463,18,635,298" style="outline:none;" target="_self"     />
			<area  alt="" title="Next actions" href="<?php echo $path; ?>#nextactions" shape="rect" coords="687,21,859,301" style="outline:none;" target="_self"     />
			<area  alt="" title="Video" target="_blank" href="http://www.westwardadvisors.com/client-pathway/videos-tutorials-0" shape="rect" coords="628,331,691,411" style="outline:none;" target="_self"     />
			<area  alt="" title="Save" href="<?php echo $base_url; ?>/printpdf/<?php echo 'annual_review_pdf/'.$content['id']; ?>" shape="rect" coords="699,332,766,411" style="outline:none;" target="_self"     />
			<area  alt="" title="Contact" href="mailto:service@westwardadvisors.com" shape="rect" coords="776,333,843,412" style="outline:none;" target="_self"     />
			<area shape="rect" coords="886,413,888,415" alt="Image Map" style="outline:none;" title="Image Map" href="http://www.image-maps.com/index.php?aff=mapped_users_0" />
			</map>
		
		<?php } ?>
        
        </div>
    </div>
    <div class="clearfix"></div>
    <div class="page-cnt-details">
        
       
        <div class="plan-structure" name="planstrucure">
        
         <h2 id="planstrucure">Plan Structure & Benefits</h2>
             <div class="plan-image"><img src="<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/person.png" /></div>
             <div class="plan-structure-details">
               <p>Your plan is designed to help you create wealth, protect your wealth and transfer it in a tax efficient way. It is designed to provide the following
             benefits  to you and your beneficiaries:</p>
             <ul>
             <?php if(!empty($content['content']->BenifitBullet1)){ ?>
             <li><?php echo $content['content']->BenifitBullet1; ?></li>
             <?php } ?>
             <?php if(!empty($content['content']->BenifitBullet2)){ ?>
             <li><?php echo $content['content']->BenifitBullet2; ?></li>
              <?php } ?>
             <?php if(!empty($content['content']->BenifitBullet3)){ ?>
             <li><?php echo $content['content']->BenifitBullet3; ?></li>
              <?php } ?>
             <?php if(!empty($content['content']->BenifitBullet4)){ ?>
             <li><?php echo $content['content']->BenifitBullet4; ?></li>
              <?php } ?>
             <?php if(!empty($content['content']->BenifitBullet5)){ ?>
             <li><?php echo $content['content']->BenifitBullet5; ?></li>
             <?php } ?>
             </ul>
             <br/>
             <br/>
             
             <span class="notice">If your financial situation has changed or if you have any questions, please contact Westward at your earliest convenience.</span>
             </div>
              <div class="clearfix"></div>
        </div>
        <div class="clearfix"></div>
        <div class="insurance-details" name="insurancecoverage">
            
            <?php 
            if(isset($content['content']->CoveragePolicies->CoveragePolicy)){  
            	
            ?>
            <div class="page-cnt-title1" id="insurancecoverage"><?php echo $content['content']->ClientName; ?> :: <?php echo $content['content']->YearEnd; ?> <?php echo $content['content']->AnnualReviewType; ?> ANNUAL REVIEW</div>
            <div class="clearfix"></div>
            
            <?php             
                $policy=$content['content']->CoveragePolicies->CoveragePolicy;	
                if(is_object($policy)){ 
            ?>
                    <h2 >COVERAGE</h2>
			             <div class="custom-grid2">
			               <table>
			               <tr><td>Policy #  :</td><td><?php echo $policy->PolicyNumber; ?></td></tr>
			               <tr><td>Insurer  :</td><td><?php echo $policy->PolicyIsurer; ?></td></tr>
			               <tr><td>Amount   :</td><td>  <?php echo $policy->PolicyCoverageAmount; ?></td></tr>
		                   <tr><td>Type    :</td><td><?php echo $policy->PolicyCoveragePattern; ?></td></tr>
			               <tr><td>Purpose   :</td><td><?php echo $policy->PolicyCoveragePurpose; ?></td></tr>
			               <tr><td>Insured   :</td><td><?php echo $policy->PolicyCoverageInsuredName; ?><br/></td></tr>
			               <tr><td>Life Basis   :</td><td><?php echo $policy->PolicyCoverageLifeBasis; ?></td></tr>
			               </table>   
			             </div>
			            <?php 
			               $current_year=$policy->PolicyCoverageCurrentYear;
			               $dates=explode(' ',$current_year);
			               $dates=explode('/',$dates[0]);
			               $year=$dates[count($dates)-1];
			               
			               ?>
			            <div class="custom-grid3">
			               <table class="tbcolor">
			               <tr><td width="30%"></td><td  width="35%" class="alignright">
			               <span class="year">Current Year <br/><?php echo $year; ?></span>
			               </td>
			               <td width="35%" class="alignright">
			               <span class="year">Since Inception <br/><?php echo $policy->PolicyCoverageCumalitiveYear; ?></span>
			               </td>
			               </tr>
			                <?php if(($policy->PolicyCoveragePremiumCurrentYearDonationPremiums !=0 || $policy->PolicyCoverageCumalitiveYearDonationPremiums !=0 ) && ($policy->PolicyCoveragePremiumCurrentYearDonationPremiums !=0 || $policy->PolicyCoverageCumalitiveYearDonationPremiums !=0)) { ?>
			                       <tr><td>Premium</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy->PolicyCoverageCurrentYearPremium); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy->PolicyCoverageCumalitiveYearPremium); ?></b></td></tr>
					               <?php if($policy->PolicyCoveragePremiumCurrentYearDonationPremiums !=0 || $policy->PolicyCoverageCumalitiveYearDonationPremiums !=0 ){ ?>
					               <tr><td>Donation Premium</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy->PolicyCoveragePremiumCurrentYearDonationPremiums); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy->PolicyCoverageCumalitiveYearDonationPremiums); ?></b></td></tr>
					               <?php } ?>
					               <?php if($policy->PolicyCoveragePremiumCurrentYearDonationCredit !=0 || $policy->PolicyCoverageCumalitiveYearDonationCredit !=0 ){ ?>
					               <tr><td>Donation Credit</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy->PolicyCoveragePremiumCurrentYearDonationCredit); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy->PolicyCoverageCumalitiveYearDonationCredit); ?></b></td></tr>
					               <?php } ?>
					               <?php if($policy->PolicyCoverageOtherCurrent !=0 || $policy->PolicyCoverageOtherCumalitive !=0 ){ ?>
					               <tr><td><?php echo $policy->PolicyCoverageOtherText; ?></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy->PolicyCoverageOtherCurrent); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy->PolicyCoverageOtherCumalitive); ?></b></td></tr>
					               <?php } ?>
					               <tr class="end"> <td>Total</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy->PolicyCoveragePremiumCurrentYearSum); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy->PolicyCoverageCumalitiveYearSum); ?></b></td></tr>
					         <?php }else{ ?>				         
					               <tr class="end"><td>Premium</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy->PolicyCoverageCurrentYearPremium); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy->PolicyCoverageCumalitiveYearPremium); ?></b></td></tr>
					         <?php }?> 
			               </table>
			            </div>
			            <div class="clearfix"></div>          
			            <hr />
            
            
            <?php }elseif(is_array($policy) && count($policy) ){  ?>
           
		            <?php 
			            $policy_count=count($policy);
			            for($i=0;$i<$policy_count;$i++){
		            ?>
			             <h2 >COVERAGE <?php echo $i+1; ?></h2>
			             <div class="custom-grid2">
			               <table>
			               <tr><td>Policy #  :</td><td><?php echo $policy[$i]->PolicyNumber; ?></td></tr>
			               <tr><td>Insurer  :</td><td><?php echo $policy[$i]->PolicyIsurer; ?></td></tr>
			               <!--<tr><td>Amount   :</td><td><?php //echo $policy[$i]->PolicyCoverageInsuredName.': '.westward_services_money($policy[$i]->PolicyCoverageAmount).' ('.$policy[$i]->PolicyCoveragePattern.')';  ?></td></tr>-->
		                 <tr><td>Amount   :</td><td>  <?php echo $policy[$i]->PolicyCoverageAmount; ?></td></tr>
		                   <tr><td>Type    :</td><td><?php echo $policy[$i]->PolicyCoveragePattern; ?></td></tr>
			               <tr><td>Purpose   :</td><td><?php echo $policy[$i]->PolicyCoveragePurpose; ?></td></tr>
			               <tr><td>Insured   :</td><td><?php echo $policy[$i]->PolicyCoverageInsuredName; ?><br/></td></tr>
			               <tr><td>Life Basis   :</td><td><?php echo $policy[$i]->PolicyCoverageLifeBasis; ?></td></tr>
			               </table>   
			             </div>
			            <?php 
			               $current_year=$policy[$i]->PolicyCoverageCurrentYear;
			               $dates=explode(' ',$current_year);
			               $dates=explode('/',$dates[0]);
			               $year=$dates[count($dates)-1];
			               
			               ?>
			            <div class="custom-grid3">
			               <table class="tbcolor">
			                <tr><td width="30%"></td><td  width="35%" class="alignright">
			               <span class="year">Current Year <br/><?php echo $year; ?></span>
			               </td>
			               <td width="35%" class="alignright">
			               <span class="year">Since Inception <br/><?php echo $policy[$i]->PolicyCoverageCumalitiveYear; ?></span>
			               </td>
			               </tr>
			               <?php //if(($policy[$i]->PolicyCoveragePremiumCurrentYearDonationPremiums !=0 || $policy[$i]->PolicyCoverageCumalitiveYearDonationPremiums !=0 ) && ($policy[$i]->PolicyCoveragePremiumCurrentYearDonationPremiums !=0 || $policy[$i]->PolicyCoverageCumalitiveYearDonationPremiums !=0)) { ?>
			                   <tr><td >Premium</td><td ><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy[$i]->PolicyCoverageCurrentYearPremium); ?></b></td><td ><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy[$i]->PolicyCoverageCumalitiveYearPremium); ?></b></td></tr>
				               <?php if($policy[$i]->PolicyCoveragePremiumCurrentYearDonationPremiums !=0 || $policy[$i]->PolicyCoverageCumalitiveYearDonationPremiums !=0 ){ ?>
				               <tr><td>Donation Premium</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy[$i]->PolicyCoveragePremiumCurrentYearDonationPremiums); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy[$i]->PolicyCoverageCumalitiveYearDonationPremiums); ?></b></td></tr>
				               <?php } ?>
				               <?php if($policy[$i]->PolicyCoveragePremiumCurrentYearDonationCredit !=0 || $policy[$i]->PolicyCoverageCumalitiveYearDonationCredit !=0 ){ ?>
				               <tr><td>Donation Credit</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy[$i]->PolicyCoveragePremiumCurrentYearDonationCredit); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy[$i]->PolicyCoverageCumalitiveYearDonationCredit); ?></b></td></tr>
				               <?php } ?>
				                <?php if($policy[$i]->PolicyCoverageOtherCurrent !=0 || $policy[$i]->PolicyCoverageOtherCumalitive !=0 ){ ?>
				               <tr><td><?php echo $policy[$i]->PolicyCoverageOtherText; ?></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy[$i]->PolicyCoverageOtherCurrent); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy[$i]->PolicyCoverageOtherCumalitive); ?></b></td></tr>
				               <?php } ?>
				               <tr class="end"><td>Total</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy[$i]->PolicyCoveragePremiumCurrentYearSum); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy[$i]->PolicyCoverageCumalitiveYearSum); ?></b></td></tr>
				           <?php //}else{ ?>
				               <!--<tr class="end"><td >Premium</td><td ><span class="alignleft">$</span><b class="right"><?php //echo westward_services_money($policy[$i]->PolicyCoverageCurrentYearPremium); ?></b></td><td ><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($policy[$i]->PolicyCoverageCumalitiveYearPremium); ?></b></td></tr>-->
				           <?php //}?> 
			               </table>
			            </div>
			            <div class="clearfix"></div>          
			            <hr />
		            <?php  } //end for for loop?>
              <?php } //end of else if?>
            <?php } ?>
           
            <?php 
            if(isset($content['content']->CreditFacalities->CreditFacality)){ 
            ?>
            <div class="page-cnt-title1" id="creditfacility" name="creditfacility"><?php echo $content['content']->ClientName; ?> :: <?php echo $content['content']->YearEnd; ?> <?php echo $content['content']->AnnualReviewType; ?> ANNUAL REVIEW</div>
            <div class="clearfix"></div>
            <?php 
	            $facility=$content['content']->CreditFacalities->CreditFacality;
	            if(is_object($facility)){           
            
            ?>
	            <h2 >CREDIT FACILITY</h2>
	             <div class="clearfix"></div>
	             <div class="custom-grid2">
	               <table>
	               <tr><td>Credit Facility # :</td><td><?php echo $content['content']->CreditFacalities->CreditFacality->CreditFacalityNumber; ?></td></tr>
	               <tr><td>Lender :</td><td><?php echo $content['content']->CreditFacalities->CreditFacality->CreditFacalityLender; ?></td></tr>
	               <tr><td>Borrower 1 :</td><td><?php echo $content['content']->CreditFacalities->CreditFacality->CreditFacalityBorrower1; ?><br/></td></tr>
	               <?php if($content['content']->CreditFacalities->CreditFacality->CreditFacalityBorrower2){ ?>
	               <tr><td>Borrower 2 :</td><td><?php echo $content['content']->CreditFacalities->CreditFacality->CreditFacalityBorrower2; ?><br/></td></tr>
	               <?php } ?>
	               </table>   
	             </div>
	            <div class="custom-grid3">
	               <table class="tbcolor">
	               <?php 
	               $current_year=$content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYear;
	               $dates=explode(' ',$current_year);
	               $dates=explode('/',$dates[0]);
	               $year=$dates[count($dates)-1];
	               
	               ?>
	               
	              
	               <tr>
	               <td width="30%"></td>
	               <td width="35%" class="alignright">
	               <span class="year">Current Year <br/><?php echo $year; ?></span>
	               </td>
	               <td width="35%" class="alignright">
	               <span class="year">Since Inception <br/>
	               <?php echo $content['content']->CreditFacalities->CreditFacality->CreditFacalityInpectionYear; ?>
	               </span>
	               </td>
	               </tr>
	               <?php if($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearPremiumTax !=0 || $content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearPremiumTax !=0 ){ ?>
	               <tr><td>Premiums Tax</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearPremiumTax); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearPremiumTax); ?></b></td></tr>
	               <?php } ?>
	               <?php if($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearInterestExpense !=0 || $content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearInterestExpense !=0 ){ ?>
	               <tr><td>Interest Expense</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearInterestExpense); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearInterestExpense); ?></b></td></tr>
	               <?php } ?>
	               <?php if($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearTaxRefund !=0 || $content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearTaxRefund !=0 ){ ?>
	                <tr><td>Tax Refund Growth</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearTaxRefund); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearTaxRefund); ?></b></td></tr>
	               <?php }?>
	               <?php if($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearCashValue !=0 || $content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearCashValue !=0 ){ ?>
	               <tr><td>Cash Value Growth</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearCashValue); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearCashValue); ?></b></td></tr> 
	               <?php }?>
	               <?php if($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearPersTaxRecovery !=0 || $content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearPersTaxRecovery !=0 ){ ?>
	               <tr><td>Personal Tax Recovery</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearPersTaxRecovery); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearPersTaxRecovery); ?></b></td></tr> 
	               <?php } ?>
	               <tr class="end"><td>Total</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearSum); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearSum); ?></b></td></tr> 
	               </table>
	            </div>
	             <div class="clearfix"></div>
	             <hr />
	            
	            <?php }elseif(is_array($facility) && count($facility) ){ ?> 
	            <?php 
	               $facility_count=count($content['content']->CreditFacalities->CreditFacality);
	               for($i=0;$i<$facility_count;$i++){
	            ?>            
	             <h2>CREDIT FACILITY <?php echo $i+1; ?></h2>
	             <div class="clearfix"></div>
	           <div class="custom-grid2">
	               <table>
	               <tr><td>Credit Facility # :</td><td><?php echo $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityNumber; ?></td></tr>
	               <tr><td>Lender :</td><td><?php echo $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityLender; ?></td></tr>
	               <tr><td>Borrower 1 :</td><td><?php echo $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityBorrower1; ?><br/></td></tr>
	               <?php if($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityBorrower2){ ?>
	               <tr><td>Borrower 2 :</td><td><?php echo $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityBorrower2; ?><br/></td></tr>
	               <?php } ?>
	               </table>   
	             </div>
	            <div class="custom-grid3">
	               <table class="tbcolor">
	               <?php 
	               $current_year=$content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYear;
	               $dates=explode(' ',$current_year);
	               $dates=explode('/',$dates[0]);
	               $year=$dates[count($dates)-1];
	               //echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearCashValue);
	               ?>
	               
	               
	               <tr>
	               <td width="30%"></td>
	               <td width="35%" class="alignright">
	               <span class="year">Current Year <br/><?php echo $year; ?></span>
	               </td>
	               <td width="35%" class="alignright">
	               <span class="year">Since Inception <br/>
	               <?php echo $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityInpectionYear; ?>
	               </span>
	               </td>
	               </tr>
	               <?php if($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearPremiumTax !=0 || $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearPremiumTax !=0 ){ ?>
	                <tr><td>Premiums Tax</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearPremiumTax); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearPremiumTax); ?></b></td></tr>
	               <?php } ?>
	               <?php if($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearInterestExpense !=0 || $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearInterestExpense !=0 ){ ?>
	                <tr><td>Interest Expense</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearInterestExpense); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearInterestExpense); ?></b></td></tr>
	               <?php } ?>
	               <?php if($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearTaxRefund !=0 || $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearTaxRefund !=0 ){ ?>
	                <tr><td>Tax Refund Growth</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearTaxRefund); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearTaxRefund); ?></b></td></tr>
	               <?php }?>
	               <?php if($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearCashValue !=0 || $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearCashValue !=0 ){ ?>
	                <tr><td>Cash Value Growth</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearCashValue); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearCashValue); ?></b></td></tr>
	               <?php } ?>
	                <?php if($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearPersTaxRecovery !=0 || $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearPersTaxRecovery !=0 ){ ?>
	                <tr><td>Personal Tax Recovery</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearPersTaxRecovery); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearPersTaxRecovery); ?></b></td></tr> 
	               <?php } ?>
	               <tr class="end"><td>Total</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearSum); ?></b></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearSum); ?></b></td></tr> 
	               </table>
	            </div>
	             <div class="clearfix"></div>
	             <hr />
	             
	             <?php } //end of for loop?>
	             
	          <?php } //end of elseif ?>
	        <?php } //end of if ?>
	        
	        
	        <?php if($content['content']->InterestExpense || $content['content']->LoanRenewal || $content['content']->TaxableIncome || $content['content']->NextAnnualReview || $content['content']->FiveYearAnnualReview 
	                        || $content['content']->CustomAction ){ ?>
	        
            <div class="page-cnt-title1" name="nextactions"><?php echo $content['content']->ClientName; ?> :: <?php echo $content['content']->YearEnd; ?> <?php echo $content['content']->AnnualReviewType; ?> ANNUAL REVIEW</div>
            <div class="clearfix"></div>
            <h2 id="nextactions">NEXT ACTIONS</h2>
            <div class="clearfix"></div>
            
            <?php } ?>
            
            <div class="next-actions">
            <table>
               <?php if($content['content']->InterestExpense){ ?>
                    <?php if($content['content']->InterestExpense1BorrowerName){ ?>
	                <tr>
	                    <td width="20%">Include the interest deduction of <?php echo round($content['content']->InterestExpenseBorrower1Perc,2); ?>% in the <?php echo $content['content']->YearEnd; ?> personal tax return for <?php echo $content['content']->InterestExpense1BorrowerName; ?>.</td>
	                    <td width="80%">
	                    <b>Interest Expense</b><br/>
	                    <div class="pull-right"><img src="<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/img3.png" /></div>
	                    <?php 
	                    $date=substr($content['content']->YearEndFullDate,0,strpos($content['content']->YearEndFullDate,'T'));
	                    $date=strtotime($date);                   
	                    $newdate = date( 'F d, Y' , $date );
	                    ?>
	                    <?php echo $content['content']->InterestExpense1BorrowerName; ?> can deduct <?php echo round($content['content']->InterestExpenseBorrower1Perc,2); ?>% in interest expense for the year ended <?php echo $newdate; ?> as a personal tax deduction, provided that the borrowed money was used continuously throughout the year for the purpose of earning business or Investment Income.            
	                    </td>
	                </tr>
	                <?php } ?>
	                <?php if( $content['content']->InterestExpense2BorrowerName){ ?>
	                <tr>
	                    <td width="20%">Include the interest deduction of <?php echo round($content['content']->InterestExpenseBorrower2Perc,2); ?>% in the <?php echo $content['content']->YearEnd; ?> personal tax return for <?php echo $content['content']->InterestExpense2BorrowerName; ?>.</td>
	                    <td width="80%">
	                    <b>Interest Expense</b><br/>
	                    <div class="pull-right"><img src="<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/img3.png" /></div>
	                    <?php 
	                    $date=substr($content['content']->YearEndFullDate,0,strpos($content['content']->YearEndFullDate,'T'));
	                    $date=strtotime($date);                   
	                    $newdate = date( 'F d, Y' , $date );
	                    ?>
	                    <?php echo $content['content']->InterestExpense2BorrowerName; ?> can deduct <?php echo round($content['content']->InterestExpenseBorrower2Perc,2); ?>% in interest expense for the year ended <?php echo $newdate; ?> as a personal tax deduction, provided that the borrowed money was used continuously throughout the year for the purpose of earning business or Investment Income.            
	                    </td>
	                </tr>
	                <?php } ?>
               <?php } ?>
              <?php if($content['content']->LoanRenewal){ ?>
		            <?php 
		                if(isset($content['content']->LoanRenewals)){
				            $renewal=$content['content']->LoanRenewals->LoanRenewal;			           
				            if(is_object($renewal)){       
			            ?>
			                 <tr>
			                    <?php 
			                     $date=substr($renewal->LoanRenewalDate,0,strpos($renewal->LoanRenewalDate,'T'));
			                     $date=strtotime($date);
			                     $newdate = strtotime ( '-7 day' , $date ) ;
			                     $newdate = date( 'F d, Y' , $newdate );
			                    ?>
			                    <td width="20%">Deliver cheques to Westward by <?php echo $newdate; ?>, We will verify amounts and submit to the insurer on your behalf.</td>
			                    <td width="80%">
			                    <?php 
			                    $date=substr($renewal->LoanRenewalDate,0,strpos($renewal->LoanRenewalDate,'T'));
			                    $date=strtotime($date);
			                    //$newdate = strtotime ( '+7 day' , $date ) ;
			                    $newdate = date( 'F d, Y' , $date );
			                    ?>
			                       <b> Loan Renewal</b><br/>
			            Your loan is up for renewal on <?php echo $newdate; ?>. About one month prior to the renewal date, we will send instructions on how to complete the process and the amount for each of the cheques. We estimate the loan renewal payments will be as follows for the coming year: 
			                        <table class="tbcolor">
			                            <tr>
                                    <td  width="30%"></td>
                                    <td  width="45%">Who</td>
                                    <td  width="25%" class="alignright">Estimated Amount</td>
                                  </tr>
			                            <tr>
                                    <td>Interest</td>
                                    <td><?php echo $renewal->LoanRenewalPolicyInterestPayor; ?> 	</td>
                                    <td><span class="alignleft">$</span><b class="right">
                                    <?php echo westward_services_money($renewal->LoanRenewalProjectedInterest); ?></b>
                                    </td>
                                  </tr>
                                <tr>
                                  <td>Annual policy interest payor</td>
                                  <td>
                                    <?php echo $renewal->LoanRenewalPayerPolicyInvestment ;  ?>
                                  </td>
                                  <td>
                                     <span class="alignleft">$</span><b class="right">
                                      <?php echo westward_services_money($renewal->LoanRenewalPolicyInvestmentDeposit); ?>
                                    </b>
                                  </td>
                                </tr>
                                  
                                        <!--
			                            <tr><td>Annual policy investment amount</td><td></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($renewal->LoanRenewalProjectedInterest);  ?></b></td></tr>
                                        -->
			                            <tr class="end"><td>Total loan anniversary payment</td><td></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($renewal->LoanRenewalPolicyTotal); ?></b></td></tr>
			                        </table>          
			                    </td>
			                </tr>
			                
				            <?php if($renewal->LoanAdvance){ ?>
				                <tr>
				                  <?php 
                         
				                  $date=substr($renewal->LoanRenewalDate,0,strpos($renewal->LoanRenewalDate,'T'));
                           
				                   $date=strtotime($date);
				                  $newdate = strtotime ( "+7 day" , $date ) ;
				                    $newdate = date( 'F d, Y' , $newdate );
				                    ?>
				                <td width="20%">Invest loan proceeds after they have been advanced, on or about <?php echo $newdate; ?>.</td>
				                <td width="80%">
				               <b>Loan Advance</b><br/>
				               The following estimated loan proceeds will be advanced on or about <?php echo $newdate; ?> .
				                       <table class="tbcolor">
				                            <tr><td></td><td></td></tr>
                                 <tr>
                                   <td width="75%">Secured by annual policy investment</td>
                                   <td>
                                     <span class="alignleft">$</span>
                                     <b class="right">
                                       <?php echo westward_services_money($renewal->LoanAdvanceAdvanceSecuredbyCashValueGrowth); ?>
                                     </b>
                                   </td>
                                 </tr>

                                 <tr><td width="75%">Secured by cash value growth</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($renewal->LoanAdvanceSecuredbyPolicyDeposit); ?></b></td></tr>
				                            <tr class="end"><td width="75%">Total loan advance</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($renewal->LoanAdvanceTotal); ?></b></td></tr>
				                        </table> 
				                </td>
				                </tr>
		                    <?php } ?>   
			                
	                     <?php }elseif(is_array($renewal) && count($renewal)){?>
	                          <?php 
	                          $count=count($renewal); 
	                          for($i=0;$i<$count;$i++){
	                          ?>
		                         <tr>
				                    <?php 
				                     $date=substr($renewal[$i]->LoanRenewalDate,0,strpos($renewal[$i]->LoanRenewalDate,'T'));
				                     $date=strtotime($date);
				                     $newdate = strtotime ( '-7 day' , $date ) ;
				                     $newdate = date( 'F d, Y' , $newdate );
				                    ?>
				                    <td width="20%">Deliver cheques to Westward by <?php echo $newdate; ?>, We will verify amounts and submit to the insurer on your behalf.</td>
				                    <td width="80%">
				                    <?php 
				                    $date=substr($renewal[$i]->LoanRenewalDate,0,strpos($renewal[$i]->LoanRenewalDate,'T'));
				                    $date=strtotime($date);
				                    $newdate = strtotime ( '+7 day' , $date ) ;
				                    $newdate = date( 'F d, Y' , $newdate );
				                    ?>
				                       <b> Loan Renewal <?php echo $i+1; ?></b><br/>
				            Your loan is up for renewal on <?php echo $newdate; ?>. About one month prior to the renewal date, we will send instructions on how to complete the process and the amount for each of the cheques. We estimate the loan renewal payments will be as follows for the coming year: 
				                        <table class="tbcolor">
				                            <tr><td></td><td>Who</td><td class="alignright">Estimated Amount</td></tr>
				                            <tr><td>Interest</td><td><?php echo $renewal[$i]->LoanRenewalPayerPolicyInvestment; ?> 	</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($renewal[$i]->LoanRenewalPolicyInvestmentDeposit); ?></b></td></tr>
				                            
				                            <!--				                            
				                            <tr><td>Annual policy investment amount</td><td></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($renewal[$i]->LoanRenewalProjectedInterest);  ?></b></td></tr>
				                             -->
				                             
				                            <tr class="end"><td>Total loan anniversary payment</td><td></td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($renewal[$i]->LoanRenewalPolicyTotal); ?></b></td></tr>
				                        </table>          
				                    </td>
				                </tr>
				                <?php if($renewal[$i]->LoanAdvance){ ?>
				                <tr>
				                  <?php 
				                   $date=substr($renewal[$i]->LoanRenewalDate,0,strpos($renewal[$i]->LoanRenewalDate,'T'));
				                   $date=strtotime($date);
				                   $newdate = strtotime ( '+7 day' , $date ) ;
				                   $newdate = date( 'F d, Y' , $newdate );
				                    ?>
				                <td width="20%">Invest loan proceeds after they have been advanced, on or about <?php echo $newdate; ?></td>
				                <td width="80%">
				               <b>Loan Advance <?php echo $i+1; ?></b><br/>
				               The following estimated loan proceeds will be advanced on or about <?php echo $newdate; ?> .
				                       <table class="tbcolor">
				                            <tr><td></td><td></td></tr>
				                            <tr><td width="75%">Secured by cash value growth</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($renewal[$i]->LoanAdvanceSecuredbyPolicyDeposit); ?></b></td></tr>
				                            <tr><td width="75%">Secured by annual policy investment</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($renewal[$i]->LoanAdvanceAdvanceSecuredbyCashValueGrowth); ?></b></td></tr>
				                            <tr class="end"><td width="75%">Total loan advance</td><td><span class="alignleft">$</span><b class="right"><?php echo westward_services_money($renewal[$i]->LoanAdvanceTotal); ?></b></td></tr>
				                        </table> 
				                </td>
				                </tr>
		                           <?php } ?> 
	                          <?php } // end of for?>
	                     <?php } // end of else if?>
                    <?php } // end of if?>
               <?php } // end of if?>
               
               <?php if($content['content']->TaxableIncome){ ?>
		                <tr>
		                <td width="20%">Contact us if projected taxable income for next year is less than $<?php echo westward_services_money($content['content']->TaxableIncomeProjectedInterestExpense); ?>. </td>
		                <td width="80%">
		               <b>Taxable Income Requirement</b><br/>
		               The total projected personal interest expense for the <?php echo date('Y', strtotime('+1 year')); ?> tax year is $<?php echo westward_services_money($content['content']->TaxableIncomeProjectedInterestExpense); ?>. The intention is to apply this interest expense against personal income taxed at the top marginal tax rate.
                      <br/>
		              <?php if($content['content']->TaxableIncomeProjectedPremiumDonation &&  $content['content']->TaxableIncomeProjectedIncomeRequired && $content['content']->TaxableIncomeDonationLimitPerc){ ?>
	                  In addition, the projected amount of premiums to be paid in <?php echo date('Y', strtotime('+1 year')); ?> on behalf of a charitable organization is $<?php echo westward_services_money($content['content']->TaxableIncomeProjectedPremiumDonation); ?>. 
		               The projected income required to absorb these charitable premium payments, over and above the income required to absorb the interest deduction, is $<?php echo  westward_services_money($content['content']->TaxableIncomeProjectedIncomeRequired); ?> based on a <?php echo round($content['content']->TaxableIncomeDonationLimitPerc,2); ?>% income limitation.<?php } ?>
		               </td>
		                </tr>
                <?php } ?>
                <?php if($content['content']->NextAnnualReview){ ?>
		                <tr>
		                <?php 
		                    $date=substr($content['content']->NextAnnualMeetingDate,0,strpos($content['content']->NextAnnualMeetingDate,'T'));
		                    $date=strtotime($date);                   
		                    $newdate = date( 'F d, Y' , $date );
		                    ?>
		                <td width="20%">Westward to deliver annual review by <?php echo $newdate; ?>.</td>
		                <td width="80%">
		               <b>Next Annual Review</b><br/>
		               <?php 
		                    $date=substr($content['content']->NextAnnualMeetingDate,0,strpos($content['content']->NextAnnualMeetingDate,'T'));
		                    $date=strtotime($date);                   
		                    $newdate = date( 'F d, Y' , $date );
		                ?>
		               Westward will post an Annual Review in <?php echo $newdate; ?> to summarize the progress over the past year and map out the next actions for the coming year.
		                </td>
		                </tr>
                <?php } ?>
                <?php if($content['content']->FiveYearAnnualReview){ ?>
	                <tr>
	                 <?php 
                   //echo $content['content']->FiveYearAnnualReviewMeetingDate;
	                    $date=substr($content['content']->NextAnnualMeetingDate,0,strpos($content['content']->FiveYearAnnualReviewMeetingDate,'T'));
	                    $date=strtotime($date);                   
	                    $newdate = date( 'Y' , $date );
	                ?>
	                <td width="20%">Next five year meeting to be scheduled for <?php echo $content['content']->FiveYearAnnualReviewMeetingDate; ?>.</td>
	                <td width="80%">
	               <b>Five Year Plan Review</b><br/>
	              Westward will review the plan with you and your advisor every five years to discuss its effectiveness, learn if there have been changes in your estate needs or finances, discuss and explore new opportunities, and complete any additional planning based on your current situation.
	                </td>
	                </tr>
                <?php } ?>
                <?php 
                if($content['content']->CustomAction && isset($content['content']->CustomActions)){
                	if(is_object($content['content']->CustomActions->CustomAction)){ 
                ?>
                 <tr>
                <td width="20%"> <?php echo $content['content']->CustomActions->CustomAction->CustomSidebar; ?>.<br/>
               </td>
                <td width="80%">
               <b><?php echo $content['content']->CustomActions->CustomAction->CustomActionTitle; ?></b><br/>
                  <?php echo $content['content']->CustomActions->CustomAction->CustomActionBody; ?>
                  </td>
                </tr>
                   
                <?php }elseif(is_array($content['content']->CustomActions->CustomAction)){ ?> 
                    <?php $count=count($content['content']->CustomActions->CustomAction);?>
                    <?php for($i=0;$i<$count;$i++){ ?>
	                    <tr>
		                <td width="20%"><?php echo $content['content']->CustomActions->CustomAction[$i]->CustomSidebar; ?>.<br/>
		                </td>
		                <td width="80%">
		               <b><?php echo $content['content']->CustomActions->CustomAction[$i]->CustomActionTitle; ?></b><br/>
		                  <?php echo $content['content']->CustomActions->CustomAction[$i]->CustomActionBody; ?>
		                </td>
	                </tr>
                    <?php } // end of for loop?>
                 <?php }//end of elseif?>
              <?php } ?>
              
              <?php if($content['content']->PolicyJointOption){ ?>
	                <tr>
	                 <?php 
                   //echo $content['content']->FiveYearAnnualReviewMeetingDate;
	                    $date=substr($content['content']->PolicyJointLastStartDate,0,strpos($content['content']->PolicyJointLastStartDate,'T'));
	                    $date=strtotime($date);                   
	                    $newdate = date( 'F d, Y' , $date );
	                ?>
	                <td width="20%">Notify Westward when you want to switch to joint last coverage.</td>
	                <td width="80%">
	               <b>Policy Option to Switch to Joint Last</b><br/>
	             The policy includes an option to switch the single life coverage on <?php echo $content['content']->PolicyJointLastLifeInsured; ?> to a joint last-to-die coverage on <?php echo $content['content']->PolicyJointJointLastNameAndName; ?>. This option does not require any medical underwriting. This option is available <?php echo $newdate; ?>. 
	             Exercising the option will reduce the monthly cost of insurance but should only be exercised when the purpose of the insurance coverage changes.</td>
	                </tr>
                <?php } ?>
              
              
            </table>
            </div>
            <div class="clearfix"></div>
            
        </div> 
    </div>
    
    <div class="page-cnt-footer">
        <div class="footer-col1">
            <h2>CONTACT</h2>
            If your financial situation has changed or if you have any questions about your plan or its performance, please contact us at your earliest convenience.<br/>
            <br/>
           <?php echo $content['content']->POContactName; ?><br/>
           <?php echo $content['content']->POContactEmail; ?><br/>
            888.687.1507<br/><br/>
            
            Westward Advisors Ltd.<br/>
            #300 - 1090 Homer Street<br/>
            Vancouver, BC V6B 2W9<br/>

        </div>
        <div class="footer-col2">
            <div id="videos"><h2>VIDEOS</h2></div> 
            <div class="footerimg1"><img src="<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/Westward_footer_logo.jpg" /></div> 
             <div class="clearfix"></div>
            Want to learn more about your personal or corporate annual review? What to look for and why it's important? Or maybe you just want a brief refresher on the steps involved in the loan renewal process. We've prepared a few short videos that answer the most frequently asked questions about plan management and maintenance.
            <br/>
            <br/>
            <div class="footerimg2"><img src="<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/img4.png" /></div>
            <div class="footerlist">
               <ul>
                <li><a href="http://www.westwardadvisors.com/Video/AR_Personal/AR_Personal.html">Understanding Your Personal Annual Review</a></li>
                <li><a href="http://www.westwardadvisors.com/Video/Corporate_AR_Video/Corporate_AR_Video_Draft.html">Understanding Your Corporate Annual Review</a></li>
                <li><a href="http://westwardadvisors.com/westwardadvisors.com/Video/IA-CF-Renewal_Video/IA-CF-Renewal.html">Industrial Alliance Loan Revewal Process</a></li>
                <li><a href="http://westwardadvisors.com/westwardadvisors.com/Video/RBC-CF-Renewal_Video/RBC-CF-Renewal-Final.html">RBC Loan Renewal Process</a></li>
                </ul>
                <div class="footericons">
                  <a href="http://www.westwardadvisors.com/client-pathway/videos-tutorials-0"><img src="<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/video.jpg" /></a>
                  <a href="<?php echo $base_url; ?>/printpdf/<?php echo 'annual_review_pdf/'.$content['id']; ?>"><img src="<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/save.jpg" /></a>
                  <a href="mailto:service@westwardadvisors.com"><img src="<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/contact.jpg" /></a>
                </div>
            </div>
        </div>
        <div class="clearfix"></div>
    </div>
    
</div>