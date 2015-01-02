<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=iso-8859-15">
      <style>
	  tbody {
			 border-top:none;
		}
        body{
       font-family: Arial, Helvetica, sans-serif;
        }
		
        #mainalign{
        //width:500px;
        }
        .alignleft {
        float: left;
        width:10px;
        }
		.alignleft1 {
        //float: right;
        //width:100px;
        }
        .right {
        //float: right;
        
        }
		td.end{
		border-bottom: 2px solid;
        border-top: 1px solid;
		}
        .block {
        float: left;
        
        }
       div .banner_border{
       color:#0a2d4b;
       border:2px solid;
        }
         div .plan-structure{
         border: 2px solid;
          font-family: arial,hevatica,sans-serif;
          font-size: 10px;
          padding: 10px;
        }
       table {border: 0px solid black; }
h2 {
		text-transform:uppercase;
	}
	span.td {
    //float:left;
    //display:inline-block;
    //width:100%;
}

.amt{
padding: 0 3px;
}
      </style>
    </head>
  <body>
  <?php //dsm($content['content'])?>
  <?php global $base_url; //dsm($base_url); ?>
  <?php setlocale(LC_MONETARY, 'en_US'); ?>
  <div class="page-cnt">

    <div class="page-cnt-pre-top" style="height:20px;">     
      <div class="Clearfix"></div>
    </div>
    <br/><br/>
    <table style="margin: 0px; border-top: none !important;">
      <div class="banner_border">
        <table>
          <tr class="banner_border">
            <td id="page-cnt-title">
              <?php echo $content['content']->YearEnd ." " .$content['content']->AnnualReviewType; ?> ANNUAL REVIEW <br/>
              <span>
                <?php echo $content['content']->ClientName; ?>
              </span>
            </td>
            <td id="page-cnt-logo">
              <img src="http://able.westwardadvisors.com/sites/all/modules/custom/westward_services/images/banner-logo.jpg" />
            </td>
          </tr>
        </table>
        <div class="page-top-banner-img">
          <?php $path=$base_url.'/'.drupal_get_path_alias(current_path()); ?>

          <?php if(isset($content['content']->CreditFacalities) && ( isset($content['content']->CreditFacalities->CreditFacality) ) ){ ?>

          <img id="Image-Maps-Com-image-maps-2014-12-10-040005" src="http://able.westwardadvisors.com/sites/all/modules/custom/westward_services/images/banner.png" border="0" width="688" height="315" alt="" />

          <?php }else{ ?>

          <img id="Image-Maps-Com-image-maps-2014-12-10-041049" src="http://able.westwardadvisors.com/sites/all/modules/custom/westward_services/images/banner-less.png" border="0" width="688" height="315" orgWidth="888"/>

          <?php } ?>

        </div>

      </div>
    </table>
    
    <table style="margin: 0px; border-top: none !important;">
      <div class="clearfix"></div>
      <div class="page-cnt-details">
        <div class="plan-structure" name="planstrucure">
          <h2>Plan Structure & Benefits</h2>
          <p>
                  Your plan is designed to help you create wealth, protect your wealth and transfer it in a tax efficient way. It is designed to provide the following
                  benefits  to you and your beneficiaries:
                </p>
             
                <ul>
                  <?php if(!empty($content['content']->BenifitBullet1)){ ?>
                  <li>
                    <?php echo $content['content']->BenifitBullet1; ?>
                  </li>
                  <?php } ?>
                  <?php if(!empty($content['content']->BenifitBullet2)){ ?>
                  <li>
                    <?php echo $content['content']->BenifitBullet2; ?>
                  </li>
                  <?php } ?>
                  <?php if(!empty($content['content']->BenifitBullet3)){ ?>
                  <li>
                    <?php echo $content['content']->BenifitBullet3; ?>
                  </li>
                  <?php } ?>
                  <?php if(!empty($content['content']->BenifitBullet4)){ ?>
                  <li>
                    <?php echo $content['content']->BenifitBullet4; ?>
                  </li>
                  <?php } ?>
                  <?php if(!empty($content['content']->BenifitBullet5)){ ?>
                  <li>
                    <?php echo $content['content']->BenifitBullet5; ?>
                  </li>
                  <?php } ?>
                </ul>
                <br/>
                <br/>
                <span class="notice">If your financial situation has changed or if you have any questions, please contact Westward at your earliest convenience.</span>
          <div class="clearfix"></div>
        
        <br/>
        <br/></div>
        <div class="clearfix"></div>
         <div style="page-break-before: always;"></div>
        <div class="insurance-details">

          <?php 
            if(isset($content['content']->CoveragePolicies->CoveragePolicy)){  
            	
            ?>
          <div class="page-cnt-title1" id="insurancecoverage">
            <?php echo $content['content']->ClientName; ?> :: <?php echo $content['content']->YearEnd; ?> <?php echo $content['content']->AnnualReviewType; ?> ANNUAL REVIEW
        </div>
          <div class="clearfix"></div>

          <?php             
                $policy=$content['content']->CoveragePolicies->CoveragePolicy;
                if(is_object($policy)){ 
            ?>
          <h2 >COVERAGE</h2>

          <table width="650px;">
            <tr>
              <td width="175px;border-right:black 1px solid">
                <table>
                  <tr>
                    <td border="0" >Policy #  :</td>
                    <td border="0">
                      <?php echo $policy->PolicyNumber; ?>
                    </td>
                  </tr>
                  <tr>
                    <td border="0">Insurer  :</td>
                    <td border="0">
                      <?php echo $policy->PolicyIsurer; ?>
                    </td>
                  </tr>
                  <tr>
                    <td border="0">Amount   :</td>
                    <td border="0">
                      <?php echo $policy->PolicyCoverageAmount; ?>
                    </td>
                  </tr>
                  <tr>
                    <td border="0">Type    :</td>
                    <td border="0">
                      <?php echo $policy->PolicyCoveragePattern; ?>
                    </td>
                  </tr>
                  <tr>
                    <td border="0">Purpose   :</td>
                    <td border="0">
                      <?php echo $policy->PolicyCoveragePurpose; ?>
                    </td>
                  </tr>
                  <tr>
                    <td border="0">Insured   :</td>
                    <td border="0">
                      <?php echo $policy->PolicyCoverageInsuredName; ?>
                      <br/>
                    </td>
                  </tr>
                  <tr>
                    <td border="0">Life Basis   :</td>
                    <td border="0">
                      <?php echo $policy->PolicyCoverageLifeBasis; ?>
                    </td>
                  </tr>
                 </table>
              </td>
			 
              <?php 
			               $current_year=$policy->PolicyCoverageCurrentYear;
			               $dates=explode(' ',$current_year);
			               $dates=explode('/',$dates[0]);
			               $year=$dates[count($dates)-1];
			               
			               ?>
              <td width="475px;" align="right">
                <table class="tbcolor"   border="0"  width="100%">
                  <tr>
                    <td width="30%"></td>
                    <td  width="35%" align="right">
                      <span class="td">
					 Current year<br></span>
                    <span class="td"><?php echo $year; ?>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span>
                    </td>
                    <td  width="35%" align="right">
                        Since Inception<br/>
                      <?php echo $policy->PolicyCoverageCumalitiveYear; ?>
                    </td>
                  </tr>
                   <?php //if(($policy->PolicyCoveragePremiumCurrentYearDonationPremiums !=0 || $policy->PolicyCoverageCumalitiveYearDonationPremiums !=0 ) && ($policy->PolicyCoveragePremiumCurrentYearDonationPremiums !=0 || $policy->PolicyCoverageCumalitiveYearDonationPremiums !=0)) { ?>
					       <tr>
		                    <td>Premium</td>
		                    <td align="right">
		                      <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy->PolicyCoverageCurrentYearPremium); ?>
		                      </span>
		                    </td>
		                    <td align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy->PolicyCoverageCumalitiveYearPremium); ?>
		                      </span>
		                    </td>
		                  </tr>
		                  <?php if($policy->PolicyCoveragePremiumCurrentYearDonationPremiums !=0 || $policy->PolicyCoverageCumalitiveYearDonationPremiums !=0 ){ ?>
		                  <tr>
		                    <td>Donation Premium</td>
		                    <td align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy->PolicyCoveragePremiumCurrentYearDonationPremiums); ?>
		                      </span>
		                    </td>
		                    <td align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy->PolicyCoverageCumalitiveYearDonationPremiums); ?>
		                      </span>
		                    </td>
		                  </tr>
		                  <?php } ?>
		                  <?php if($policy->PolicyCoveragePremiumCurrentYearDonationCredit !=0 || $policy->PolicyCoverageCumalitiveYearDonationCredit !=0 ){ ?>
		                  <tr>
		                    <td>Donation Credit</td>
		                    <td align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy->PolicyCoveragePremiumCurrentYearDonationCredit); ?>
		                      </span>
		                    </td>
		                    <td align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy->PolicyCoverageCumalitiveYearDonationCredit); ?>
		                      </span>
		                    </td>
		                  </tr>
		                  <?php } ?>
		                  <?php if($policy->PolicyCoverageOtherCurrent !=0 || $policy->PolicyCoverageOtherCumalitive !=0 ){ ?>
		                  <tr>
		                    <td><?php echo $policy->PolicyCoverageOtherText; ?></td>
		                    <td align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy->PolicyCoverageOtherCurrent); ?>
		                      </span>
		                    </td>
		                    <td align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy->PolicyCoverageOtherCumalitive); ?>
		                      </span>
		                    </td>
		                  </tr>
		                  <?php } ?>
		                  <tr>
		                    <td class="end">Total</td>
		                    <td class="end" align="right" >
		                      <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy->PolicyCoveragePremiumCurrentYearSum); ?>
		                      </span>
		                    </td>
		                    <td class="end" align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy->PolicyCoverageCumalitiveYearSum); ?>
		                      </span>
		                    </td>
		                  </tr>
					     </table>
              </td>

            

            </tr>
          </table>

          <?php }elseif(is_array($policy) && count($policy) ){  ?>

          <?php 
			            $policy_count=count($policy);
			            for($i=0;$i<$policy_count;$i++){
		            ?>
          <h2 >
            COVERAGE <?php echo $i+1; ?>
          </h2>
          <table width="650px;" border="0">
            <tr border="0">
			  <td width="175px;border-right:black 1px solid">
                <table border="0">
                  <tr border="0">
                    <td border="0">Policy #  :</td>
                    <td border="0">
                      <?php echo $policy[$i]->PolicyNumber; ?>
                    </td>
                  </tr>
                  <tr border="0">
                    <td border="0">Insurer  :</td>
                    <td border="0">
                      <?php echo $policy[$i]->PolicyIsurer; ?>
                    </td>
                  </tr>
                  <!--<tr><td>Amount   :</td><td><?php //echo $policy[$i]->PolicyCoverageInsuredName.': '.westward_services_money($policy[$i]->PolicyCoverageAmount).' ('.$policy[$i]->PolicyCoveragePattern.')';  ?></td></tr>-->
                  <tr border="0">
                    <td border="0">Amount   :</td>
                    <td border="0">
                      <?php echo $policy[$i]->PolicyCoverageAmount; ?>
                    </td>
                  </tr>
                  <tr border="0">
                    <td border="0">Type    :</td>
                    <td border="0">
                      <?php echo $policy[$i]->PolicyCoveragePattern; ?>
                    </td>
                  </tr>
                  <tr border="0">
                    <td border="0">Purpose   :</td>
                    <td border="0">
                      <?php echo $policy[$i]->PolicyCoveragePurpose; ?>
                    </td>
                  </tr>
                  <tr border="0">
                    <td border="0">Insured   :</td>
                    <td border="0">
                      <?php echo $policy[$i]->PolicyCoverageInsuredName; ?>
                      <br/>
                    </td>
                  </tr>
                  <tr border="0">
                    <td border="0">Life Basis   :</td>
                    <td border="0">
                      <?php echo $policy[$i]->PolicyCoverageLifeBasis; ?>
                    </td>
                  </tr>
                </table>
              </td>
			  
              <?php 
			               $current_year=$policy[$i]->PolicyCoverageCurrentYear;
			               $dates=explode(' ',$current_year);
			               $dates=explode('/',$dates[0]);
			               $year=$dates[count($dates)-1];
			               
			               ?>
              <td width="475px;">
                <table class="tbcolor"  width="100%"  border="0">
                  <tr>
                    <td  width="30%"></td>
                    <td  width="35%" align="right">
					<span class="td">
					 Current year<br></span>
                    <span class="td"><?php echo $year; ?>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span>
                    </td>
                    <td  width="35%" align="right">
                         Since Inception<br/>
                      <?php echo $policy[$i]->PolicyCoverageCumalitiveYear; ?>
                    </td>
                  </tr>
                   <?php //if(($policy[$i]->PolicyCoveragePremiumCurrentYearDonationPremiums !=0 || $policy[$i]->PolicyCoverageCumalitiveYearDonationPremiums !=0 ) && ($policy[$i]->PolicyCoveragePremiumCurrentYearDonationPremiums !=0 || $policy[$i]->PolicyCoverageCumalitiveYearDonationPremiums !=0)) { ?>
			                   
		                  <tr border="0">
		                    <td>Premium</td>
		                    <td align="right">
		                      <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy[$i]->PolicyCoverageCurrentYearPremium); ?>
		                      </span>
		                    </td>
		                    <td align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy[$i]->PolicyCoverageCumalitiveYearPremium); ?>
		                      </span>
		                    </td>
		                  </tr>
		                  <?php if($policy[$i]->PolicyCoveragePremiumCurrentYearDonationPremiums !=0 || $policy[$i]->PolicyCoverageCumalitiveYearDonationPremiums !=0 ){ ?>
		                  <tr border="0">
		                    <td>Donation Premium</td>
		                    <td id="mainalign" align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy[$i]->PolicyCoveragePremiumCurrentYearDonationPremiums); ?>
		                      </span>
		                    </td>
		                    <td id="Td1" align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy[$i]->PolicyCoverageCumalitiveYearDonationPremiums); ?>
		                      </span>
		                    </td>
		                  </tr>
		                  <?php } ?>
		                  <?php if($policy[$i]->PolicyCoveragePremiumCurrentYearDonationCredit !=0 || $policy[$i]->PolicyCoverageCumalitiveYearDonationCredit !=0 ){ ?>
		                  <tr border="0">
		                    <td>Donation Credit</td>
		                    <td align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy[$i]->PolicyCoveragePremiumCurrentYearDonationCredit); ?>
		                      </span>
		                    </td>
		                    <td align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy[$i]->PolicyCoverageCumalitiveYearDonationCredit); ?>
		                      </span>
		                    </td>
		                  </tr>
		                  <?php } ?>
		                  <?php if($policy[$i]->PolicyCoverageOtherCurrent !=0 || $policy[$i]->PolicyCoverageOtherCumalitive !=0 ){ ?>
		                  <tr>
		                    <td><?php echo $policy[$i]->PolicyCoverageOtherText; ?></td>
		                    <td align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy[$i]->PolicyCoverageOtherCurrent); ?>
		                      </span>
		                    </td>
		                    <td align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy[$i]->PolicyCoverageOtherCumalitive); ?>
		                      </span>
		                    </td>
		                  </tr>
		                  <?php } ?>
		                  <tr border="0">
		                    <td class="end">Total</td>
		                    <td class="end" align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy[$i]->PolicyCoveragePremiumCurrentYearSum); ?>
		                      </span>
		                    </td>
		                    <td class="end" align="right">
		                       <span class="alignleft">$</span>
		                      <span class="alignleft1">
		                        <?php echo westward_services_money($policy[$i]->PolicyCoverageCumalitiveYearSum); ?>
		                      </span>
		                    </td>
		                  </tr>
						  
		           
		             <?php //}?>
                </table>
              </td>


            </tr>
          </table>
          <?php  } //end for for loop?>
          <?php } //end of else if?>
          <?php } ?>
            
        

            <br /> <br />
             <?php 
            if(isset($content['content']->CreditFacalities->CreditFacality)){ 
            ?>
          <div class="page-cnt-title1" id="creditfacility" name="creditfacility">
            <?php echo $content['content']->ClientName; ?> :: <?php echo $content['content']->YearEnd; ?> <?php echo $content['content']->AnnualReviewType; ?> ANNUAL REVIEW
       </div>
          <div class="clearfix"></div>
          <?php 
	            $facility=$content['content']->CreditFacalities->CreditFacality;
	            if(is_object($facility)){           
            
            ?>
          <h2 >CREDIT FACILITY</h2>
          <div class="clearfix"></div>
          <table width="650px;">
            <tr>
			 <td width="175px;border-right:black 1px solid">
                <table>
                  <tr>
                    <td width="70px;">Credit Facility # :</td>
                    <td>
                      <?php echo $content['content']->CreditFacalities->CreditFacality->CreditFacalityNumber; ?>
                    </td>
                  </tr>
                  <tr>
                    <td>Lender :</td>
                    <td>
                      <?php echo $content['content']->CreditFacalities->CreditFacality->CreditFacalityLender; ?>
                    </td>
                  </tr>
                  <tr>
                    <td>Borrower 1 :</td>
                    <td>
                      <?php echo $content['content']->CreditFacalities->CreditFacality->CreditFacalityBorrower1; ?>
                      <br/>
                    </td>
                  </tr>
                  <?php if($content['content']->CreditFacalities->CreditFacality->CreditFacalityBorrower2){ ?>
                  <tr>
                    <td>Borrower 2 :</td>
                    <td>
                      <?php echo $content['content']->CreditFacalities->CreditFacality->CreditFacalityBorrower2; ?>
                      <br/>
                    </td>
                  </tr>
                  <?php } ?>
                </table>
              </td>
              <td width="475px;">
                <table class="tbcolor" width="100%"  border="0">
                  <?php 
	               $current_year=$content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYear;
	               $dates=explode(' ',$current_year);
	               $dates=explode('/',$dates[0]);
	               $year=$dates[count($dates)-1];
	               
	               ?>
				   
                  <tr>
                    <td width="30%"></td>
                    <td  width="35%" align="right">
                       <span class="td">
					 Current year<br></span>
                    <span class="td"><?php echo $year; ?>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span>
                    </td>
                    <td width="35%" align="right">
                   
                      Since Inception<br/>
                      <?php echo $content['content']->CreditFacalities->CreditFacality->CreditFacalityInpectionYear; ?> 
                    </td>
                  </tr>
                  <?php if($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearPremiumTax !=0 || $content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearPremiumTax !=0 ){ ?>
                  <tr>
                    <td>Premiums Tax</td>
                    <td align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearPremiumTax); ?>
                      </span>
                    </td>
                    <td align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearPremiumTax); ?>
                      </span>
                    </td>
                  </tr>
                  <?php } ?>
                  <?php if($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearInterestExpense !=0 || $content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearInterestExpense !=0 ){ ?>
                  <tr>
                    <td>Interest Expense</td>
                    <td align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearInterestExpense); ?>
                      </span>
                    </td>
                    <td align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearInterestExpense); ?>
                      </span>
                    </td>
                  </tr>
                  <?php } ?>
                  <?php if($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearTaxRefund !=0 || $content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearTaxRefund !=0 ){ ?>
                  <tr>
                    <td>Tax Refund Growth</td>
                    <td align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearTaxRefund); ?>
                      </span>
                    </td>
                    <td align="right">
                      <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearTaxRefund); ?>
                      </span>
                    </td>
                  </tr>
                  <?php }?>
                  <?php if($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearCashValue !=0 || $content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearCashValue !=0 ){ ?>
                  <tr>
                    <td>Cash Value Growth</td>
                    <td align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearCashValue); ?>
                      </span>
                    </td>
                    <td align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearCashValue); ?>
                      </span>
                    </td>
                  </tr>
                  <?php }?>
                  <?php if($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearPersTaxRecovery !=0 || $content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearPersTaxRecovery !=0 ){ ?>
                  <tr>
                    <td>Personal Tax Recovery</td>
                    <td align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearPersTaxRecovery); ?>
                      </span>
                    </td>
                    <td align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearPersTaxRecovery); ?>
                      </span>
                    </td>
                  </tr>
                  <?php } ?>
                  <tr>
                    <td class="end">Total</td>
                    <td class="end" align="right">
                      <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCurrentYearSum); ?>
                      </span>
                    </td>
                    <td class="end" align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality->CreditFacalityCumalitiveYearSum); ?>
                      </span>
                    </td>
                  </tr>
                </table>
              </td>

             
            </tr>
          </table>

          <?php }elseif(is_array($facility) && count($facility) ){ ?>
          <?php 
	               $facility_count=count($content['content']->CreditFacalities->CreditFacality);
	               for($i=0;$i<$facility_count;$i++){
	            ?>
          <h2>
            CREDIT FACILITY <?php echo $i+1; ?>
          </h2>
          <div class="clearfix"></div>
          <table width="650px;">
            <tr>
			<td width="175px;border-right:black 1px solid">
                <table>
                  <tr>
                    <td width="70px;">Credit Facility # :</td>
                    <td>
                      <?php echo $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityNumber; ?>
                    </td>
                  </tr>
                  <tr>
                    <td>Lender :</td>
                    <td>
                      <?php echo $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityLender; ?>
                    </td>
                  </tr>
                  <tr>
                    <td>Borrower 1 :</td>
                    <td>
                      <?php echo $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityBorrower1; ?>
                      <br/>
                    </td>
                  </tr>
                  <?php if($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityBorrower2){ ?>
                  <tr>
                    <td>Borrower 2 :</td>
                    <td>
                      <?php echo $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityBorrower2; ?>
                      <br/>
                    </td>
                  </tr>
                  <?php } ?>
                </table>
              </td>
              <td width="475px;">
                <table class="tbcolor"  width="100%"  border="0" >
                  <?php 
	               $current_year=$content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYear;
	               $dates=explode(' ',$current_year);
	               $dates=explode('/',$dates[0]);
	               $year=$dates[count($dates)-1];
	               //echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearCashValue);
	               ?>
				            <tr>
                    <td width="30%"></td>
                    <td width="35%" align="right">
					<span class="td">
					 Current year<br></span>
                    <span class="td"><?php echo $year; ?>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span>
                    </td>
                    <td width="35%" align="right">
					
                      Since Inception <br/>
                      <?php echo $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityInpectionYear; ?> 
                    </td>
                  </tr>
                  <?php if($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearPremiumTax !=0 || $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearPremiumTax !=0 ){ ?>
                  <tr>
                    <td>Premiums Tax</td>
                    <td align="right">
                      <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearPremiumTax); ?>
                      </span>
                    </td>
                    <td align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearPremiumTax); ?>
                      </span>
                    </td>
                  </tr>
                  <?php } ?>
                  <?php if($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearInterestExpense !=0 || $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearInterestExpense !=0 ){ ?>
                  <tr>
                    <td>Interest Expense</td>
                    <td align="right">
                      <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearInterestExpense); ?>
                      </span>
                    </td>
                    <td align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearInterestExpense); ?>
                      </span>
                    </td>
                  </tr>
                  <?php } ?>
                  <?php if($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearTaxRefund !=0 || $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearTaxRefund !=0 ){ ?>
                  <tr>
                    <td>Tax Refund Growth</td>
                    <td align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearTaxRefund); ?>
                      </span>
                    </td>
                    <td align="right">
                      <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearTaxRefund); ?>
                      </span>
                    </td>
                  </tr>
                  <?php }?>
                  <?php if($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearCashValue !=0 || $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearCashValue !=0 ){ ?>
                  <tr>
                    <td>Cash Value Growth</td>
                    <td align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearCashValue); ?>
                      </span>
                    </td>
                    <td align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearCashValue); ?>
                      </span>
                    </td>
                  </tr>
                  <?php } ?>
                  <?php if($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearPersTaxRecovery !=0 || $content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearPersTaxRecovery !=0 ){ ?>
                  <tr>
                    <td>Personal Tax Recovery</td>
                    <td align="right">
                      <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearPersTaxRecovery); ?>
                      </span>
                    </td>
                    <td align="right">
                      <span class="alignleft">$</span>
                      <b class="right">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearPersTaxRecovery); ?>
                      </b>
                    </td>
                  </tr>
                  <?php } ?>
                  <tr>
                    <td class="end">Total</td>
                    <td  class="end" align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCurrentYearSum); ?>
                      </span>
                    </td>
                    <td class="end" align="right">
                       <span class="alignleft">$</span>
                      <span class="alignleft1">
                        <?php echo westward_services_money($content['content']->CreditFacalities->CreditFacality[$i]->CreditFacalityCumalitiveYearSum); ?>
                      </span>
                    </td>
                  </tr>
                </table>
              </td>

            </tr>
          </table>
       

          <?php } //end of for loop?>

          <?php } //end of elseif ?>
          <?php } //end of if ?>




        </div>
        <div style="page-break-before: always;"></div>
        <div class="insurance-details">
         


          <?php if($content['content']->InterestExpense || $content['content']->LoanRenewal || $content['content']->TaxableIncome || $content['content']->NextAnnualReview || $content['content']->FiveYearAnnualReview 
	                        || $content['content']->CustomAction ){ ?>

          <div class="page-cnt-title1" name="nextactions">
            <?php echo $content['content']->ClientName; ?> :: <?php echo $content['content']->YearEnd; ?> <?php echo $content['content']->AnnualReviewType; ?> ANNUAL REVIEW
          </div>
          <div class="clearfix"></div>
          <h2 id="nextactions">NEXT ACTIONS</h2>
          <div class="clearfix"></div>

          <?php } ?>

          <div class="next-actions">
            <table width="650px;">
              <?php if($content['content']->InterestExpense){ ?>
              <?php if($content['content']->InterestExpense1BorrowerName){ ?>
              <tr>
                <td width="175px;">
                  Include the interest deduction of <?php echo round($content['content']->InterestExpenseBorrower1Perc,2); ?>% in the <?php echo $content['content']->YearEnd; ?> personal tax return for <?php echo $content['content']->InterestExpense1BorrowerName; ?>.
                </td>
                <td width="475px;">
                  <b>Interest Expense</b><br/>
                  <div class="pull-right">
                    <img src=""<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/img3.png" />
                  </div>
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
                <td width="175px;">
                  Include the interest deduction of <?php echo round($content['content']->InterestExpenseBorrower2Perc,2); ?>% in the <?php echo $content['content']->YearEnd; ?> personal tax return for <?php echo $content['content']->InterestExpense2BorrowerName; ?>.
                </td>
                <td width="475px;">
                  <b>Interest Expense</b><br/>
                  <div class="pull-right">
                    <img src=""<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/img3.png" />
                  </div>
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
                <td width="175px;">
                  Deliver cheques to Westward by <?php echo $newdate; ?>, We will verify amounts and submit to the insurer on your behalf.
                </td>
                <td width="475px;">
                  <?php 
			                    $date=substr($renewal->LoanRenewalDate,0,strpos($renewal->LoanRenewalDate,'T'));
			                    $date=strtotime($date);
			                    $newdate = strtotime ( '+7 day' , $date ) ;
			                    $newdate = date( 'F d, Y' , $newdate );
			                    ?>
                  <b> Loan Renewal</b><br/>
                  Your loan is up for renewal on <?php echo $newdate; ?>. About one month prior to the renewal date, we will send instructions on how to complete the process and the amount for each of the cheques. We estimate the loan renewal payments will be as follows for the coming year:
                  <table class="tbcolor"  width="100%">
                    <tr>
                      <td width="30%"></td>
                      <td width="35%">Who</td>
                      <td width="35%" class="alignright">Estimated Amount</td>
                    </tr>
                    <tr>
                      <td>Interest</td>
                      <td>
                        <?php echo $renewal->LoanRenewalPolicyInterestPayor; ?>
                      </td>
                      <td align="right">
                         <span class="alignleft">$</span>
                      <span class="alignleft1">
                          <?php echo westward_services_money($renewal->LoanRenewalProjectedInterest); ?>
                        </span>
                      </td>
                    </tr>
                    <tr>
                      <td>Annual policy investment amount</td>
                      <td><?php echo $renewal->LoanRenewalPayerPolicyInvestment ;  ?></td>
                      <td align="right">
                         <span class="alignleft">$</span>
                      <span class="alignleft1">
                          <?php echo westward_services_money($renewal->LoanRenewalPolicyInvestmentDeposit);  ?>
                        </span>
                      </td>
                    </tr>
                   
					<tr>
                      <td class="end" >Total loan anniversary payment</td>
                      <td class="end" ></td>
                      <td class="end" align="right">
                         <span class="alignleft">$</span>
                      <span class="alignleft1">
                          <?php echo westward_services_money($renewal->LoanRenewalPolicyTotal); ?>
                        </span>
                      </td>
                    </tr>
                  </table>
                </td>
              </tr>

              <?php if($renewal->LoanAdvance){ ?>
              <tr>
                <?php 
				                   $date=substr($renewal->LoanRenewalDate,0,strpos($renewal->LoanRenewalDate,'T'));
				                   $date=strtotime($date);
				                   $newdate = strtotime ( '+7 day' , $date ) ;
				                   $newdate = date( 'F d, Y' , $newdate );
				                    ?>
                <td width="175px;">
                  Invest loan proceeds after they have been advanced, on or about <?php echo $newdate; ?>.
                </td>
                <td width="475px;">
                  <b>Loan Advance</b><br/>
                  The following estimated loan proceeds will be advanced on or about <?php echo $newdate; ?> .
                  <table class="tbcolor"  width="100%">
                    <tr>
                      <td width="30%"></td>
                      <td width="35%"></td>
					  <td width="35%"></td>
                    </tr>
					<tr>
                      <td>Secured by annual policy investment</td>
                      <td></td>
                      <td align="right">
                        <span class="alignleft">$</span>
                      <span class="alignleft1">
                          <?php echo westward_services_money($renewal->LoanAdvanceAdvanceSecuredbyCashValueGrowth); ?>
                        </span>
                      </td>
                    </tr>     
                    <tr>
                      <td>Secured by cash value growth</td>
                      <td></td>
                      <td align="right">
                         <span class="alignleft">$</span>
                      <span class="alignleft1">
                          <?php echo westward_services_money($renewal->LoanAdvanceSecuredbyPolicyDeposit); ?>
                        </span>
                      </td>
                    </tr>
                                   
                    <tr >
                      <td class="end">Total loan advance</td>
                      <td class="end"></td>
                      <td class="end" align="right">
                        <span class="alignleft">$</span>
                      <span class="alignleft1">
                          <?php echo westward_services_money($renewal->LoanAdvanceTotal); ?>
                        </span>
                      </td>
                    </tr>
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
                <td width="175px;">
                  Deliver cheques to Westward by <?php echo $newdate; ?>, We will verify amounts and submit to the insurer on your behalf.
                </td>
                <td width="475px;">
                  <?php 
				                    $date=substr($renewal[$i]->LoanRenewalDate,0,strpos($renewal[$i]->LoanRenewalDate,'T'));
				                    $date=strtotime($date);
				                    $newdate = strtotime ( '+7 day' , $date ) ;
				                    $newdate = date( 'F d, Y' , $newdate );
				                    ?>
                  <b>
                    Loan Renewal <?php echo $i+1; ?>
                  </b><br/>
                  Your loan is up for renewal on <?php echo $newdate; ?>. About one month prior to the renewal date, we will send instructions on how to complete the process and the amount for each of the cheques. We estimate the loan renewal payments will be as follows for the coming year:
                  <table class="tbcolor" width="100%">
                    <tr>
                      <td width="30%"></td>
                      <td width="35%">Who</td>
                      <td width="35%" class="alignright">Estimated Amount</td>
                    </tr>
                    <tr>
                      <td>Interest</td>
                      <td>
                        <?php echo $renewal[$i]->LoanRenewalPayerPolicyInvestment; ?>
                      </td>
                      <td align="right">
                        <span class="alignleft">$</span>
                      <span class="alignleft1">
                          <?php echo westward_services_money($renewal[$i]->LoanRenewalPolicyInvestmentDeposit); ?>
                        </span>
                      </td>
                    </tr>
                    <!--<tr>
                      <td>Annual policy investment amount</td>
                      <td></td>
                      <td align="right">
                         <span class="alignleft">$</span>
                      <span class="alignleft1">
                          <?php //echo westward_services_money($renewal[$i]->LoanRenewalProjectedInterest);  ?>
                        </span>
                      </td>
                    </tr>
                    -->
                    <tr >
                      <td class="end">Total loan anniversary payment</td>
                      <td class="end"></td>
                      <td class="end" align="right">
                         <span class="alignleft">$</span>
                      <span class="alignleft1">
                          <?php echo westward_services_money($renewal[$i]->LoanRenewalPolicyTotal); ?>
                        </span>
                      </td>
                    </tr>
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
                <td width="175px;">
                  Invest loan proceeds after they have been advanced, on or about <?php echo $newdate; ?>
                </td>
                <td width="475px;">
                  <b>
                    Loan Advance <?php echo $i+1; ?>
                  </b><br/>
                  The following estimated loan proceeds will be advanced on or about <?php echo $newdate; ?> .
                  <table class="tbcolor"  width="100%">
                    <tr>
                      <td   width="30%"></td>
                      <td   width="35%"></td>
					  <td   width="35%"></td>
					</tr>
                    <tr>
                      <td>Secured by cash value growth</td>
                      <td></td>
                      <td align="right">
                         <span class="alignleft">$</span>
                      <span class="alignleft1">
                          <?php echo westward_services_money($renewal[$i]->LoanAdvanceSecuredbyPolicyDeposit); ?>
                        </span>
                      </td>
                    </tr>
                    <tr>
                      <td>Secured by annual policy investment</td>
                      <td></td>
                      <td align="right">
                         <span class="alignleft">$</span>
                      <span class="alignleft1">
                          <?php echo westward_services_money($renewal[$i]->LoanAdvanceAdvanceSecuredbyCashValueGrowth); ?>
                        </span>
                      </td>
                    </tr>                    
                    <tr>
                      <td class="end">Total loan advance</td>
                      <td class="end"></td>
                      <td class="end" align="right">
                         <span class="alignleft">$</span>
                      <span class="alignleft1">
                          <?php echo westward_services_money($renewal[$i]->LoanAdvanceTotal); ?>
                        </span>
                      </td>
                    </tr>
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
                <td width="175px;">
                  Contact us if projected taxable income for next year is less than $<?php echo westward_services_money($content['content']->TaxableIncomeProjectedInterestExpense); ?>.
                </td>
                <td width="475px;">
                  <b>Taxable Income Requirement</b><br/>
		               The total projected personal interest expense for the <?php echo date('Y', strtotime('+1 year')); ?> tax year is $<?php echo westward_services_money($content['content']->TaxableIncomeProjectedInterestExpense); ?>. The intention is to apply this interest expense against personal income taxed at the top marginal tax rate.
		               <br/>
		               <?php if($content['content']->TaxableIncomeProjectedPremiumDonation &&  $content['content']->TaxableIncomeProjectedIncomeRequired && $content['content']->TaxableIncomeDonationLimitPerc){ ?>
	                  In addition, the projected amount of premiums to be paid in <?php echo date('Y', strtotime('+1 year')); ?> on behalf of a charitable organization is $<?php echo westward_services_money($content['content']->TaxableIncomeProjectedPremiumDonation);?>. 
		               The projected income required to absorb these charitable premium payments, over and above the income required to absorb the interest deduction, is $<?php echo  westward_services_money($content['content']->TaxableIncomeProjectedIncomeRequired);?> based on a <?php echo round($content['content']->TaxableIncomeDonationLimitPerc,2); ?>% income limitation.<?php } ?>
		               
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
                <td width="175px;">
                  Westward to deliver annual review by <?php echo $newdate; ?>.
                </td>
                <td width="475px;">
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
                <td width="175px;">
                  Next five year meeting to be scheduled for <?php echo $content['content']->FiveYearAnnualReviewMeetingDate; ?>.
                </td>
                <td width="475px;">
                  <b>Five Year Plan Review</b><br/>
                  Westward will review the plan with you and your advisor every five years to discuss its effectiveness, learn if there have been changes in your estate needs or finances, discuss and explore new opportunities, and complete any additional planning based on your current situation.
                </td>
              </tr>
              <?php } ?>
              <?php 
                if($content['content']->CustomAction){
                	if(is_object($content['content']->CustomActions->CustomAction)){ 
                ?>
              <tr>
                <td width="175px;">
                  <?php echo $content['content']->CustomActions->CustomAction->CustomSidebar; ?>
                  <br/>
                </td>
                <td width="475px;">
                  <b>
                    <?php echo $content['content']->CustomActions->CustomAction->CustomActionTitle; ?>
                  </b>
                  <br/>
                  <?php echo $content['content']->CustomActions->CustomAction->CustomActionBody; ?>
                </td>
              </tr>

              <?php }elseif(is_array($content['content']->CustomActions->CustomAction)){ ?>
              <?php $count=count($content['content']->CustomActions->CustomAction);?>
              <?php for($i=0;$i<$count;$i++){ ?>
              <tr>
                <td width="175px;">
                  <?php echo $content['content']->CustomActions->CustomAction[$i]->CustomSidebar; ?>
                  <br/>
                </td>
                <td width="475px;">
                  <b>
                    <?php echo $content['content']->CustomActions->CustomAction[$i]->CustomActionTitle; ?>
                  </b>
                  <br/>
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
	            <td width="175px;">
                 Notify Westward when you want to switch to joint last coverage.
                </td>
                <td width="475px;">
                 <b>Policy Option to Switch to Joint Last</b><br/>
	             The policy includes an option to switch the single life coverage on <?php echo $content['content']->PolicyJointLastLifeInsured; ?> to a joint last-to-die coverage on <?php echo $content['content']->PolicyJointJointLastNameAndName; ?>. This option does not require any medical underwriting. This option is available <?php echo $newdate; ?>. 
	             Exercising the option will reduce the monthly cost of insurance but should only be exercised when the purpose of the insurance coverage changes.</td>
	             </td>
              </tr>
              <?php } ?>
              
            </table>
          </div>
          <div class="clearfix"></div>

        </div>
      </div>
    </table>
   
      <div style="page-break-before: always;"></div>
    <div class="insurance-details">

      <table>
        <tr>
          <td>
            <h2>CONTACT</h2>
            If your financial situation has changed or if you have any questions about your plan or its performance, please contact us at your earliest convenience.<br/>
            <br/>
            <?php echo $content['content']->POContactName; ?><br/>
            <?php echo $content['content']->POContactEmail; ?><br/>
            888.687.1507<br/><br/>

            Westward Advisors Ltd.<br/>
            #300 - 1090 Homer Street<br/>
            Vancouver, BC V6B 2W9<br/>

          </td>
          <td>
            <div id="videos">
              <h2>VIDEOS</h2>
            </div>
            <div class="footerimg1">
              <img src=""<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/Westward_footer_logo.jpg" />
            </div>
            <div class="clearfix"></div>
            Want to learn more about your personal or corporate annual review? What to look for and why it's important? Or maybe you just want a brief refresher on the steps involved in the loan renewal process. We've prepared a few short videos that answer the most frequently asked questions about plan management and maintenance.
            <br/>
            <br/>
            <div class="footerimg2">
              <img src=""<?php echo $base_url.'/'.drupal_get_path('module','westward_services'); ?>/images/img4.png" />
            </div>
            <div class="footerlist">
              <ul>
                <li>
                  <a href="http://www.westwardadvisors.com/Video/AR_Personal/AR_Personal.html">Understanding Your Personal Annual Review</a>
                </li>
                <li>
                  <a href="http://www.westwardadvisors.com/Video/Corporate_AR_Video/Corporate_AR_Video_Draft.html">Understanding Your Corporate Annual Review</a>
                </li>
                <li>
                  <a href="http://westwardadvisors.com/westwardadvisors.com/Video/IA-CF-Renewal_Video/IA-CF-Renewal.html">Industrial Alliance Loan Revewal Process</a>
                </li>
                <li>
                  <a href="http://westwardadvisors.com/westwardadvisors.com/Video/RBC-CF-Renewal_Video/RBC-CF-Renewal-Final.html">RBC Loan Renewal Process</a>
                </li>
              </ul>

            </div>
          </td>
        </tr>
      </table>
    </div>

  </div>
    </body>
</html>
