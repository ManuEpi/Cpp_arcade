Incremental>false</LinkIncremental>
    <TargetName>visualinfod</TargetName>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">
    <OutDir>$(BIN_DIR)\$(Configuration)\$(PlatformName)\</OutDir>
    <IntDir>tmp\$(TargetName)\$(Configuration)\$(PlatformName)\</IntDir>
    <LinkIncremental>false</LinkIncremental>
    <TargetName>visualinfo</TargetName>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|x64'">
    <OutDir>$(BIN_DIR)\$(Configuration)\$(PlatformName)\</OutDir>
    <IntDir>tmp\$(TargetName)\$(Configuration)\$(PlatformName)\</IntDir>
    <LinkIncremental>false</LinkIncremental>
    <TargetName>visualinfo</TargetName>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Template|Win32'">
    <OutDir>$(BIN_DIR)\$(Configuration)\$(PlatformName)\</OutDir>
    <TargetName>visualinfo</TargetName>
    <IntDir>tmp\$(TargetName)\$(Configuration)\$(PlatformName)\</IntDir>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Template|x64'">
    <OutDir>..\..\bin/</OutDir>
    <TargetName>visualinfo</TargetName>
  </PropertyGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">
    <ClCompile>
      <RuntimeLibrary>MultiThreadedDebugDLL</RuntimeLibrary>
      <InlineFunctionExpansion>Default</InlineFunctionExpansion>
      <FunctionLevelLinking>false</FunctionLevelLinking>
      <Optimization>Disabled</Optimization>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;WIN32_LEAN_AND_MEAN;VC_EXTRA_LEAN;GLEW_STATIC;_CRT_SECURE_NO_WARNINGS;%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <BasicRuntimeChecks>EnableFastChecks</BasicRuntimeChecks>
    </ClCompile>
    <Midl>
      <TypeLibraryName>.\..\..\bin\visualinfo.tlb</TypeLibraryName>
    </Midl>
    <ResourceCompile>
      <Culture>0x0409</Culture>
      <PreprocessorDefinitions>_DEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ResourceCompile>
    <Bscmake>
      <SuppressStartupBanner>true</SuppressStartupBanner>
    </Bscmake>
    <Link>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <GenerateDebugInformation>true</GenerateDebugInformation>
      <SubSystem>Console</SubSystem>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalDependencies>glew32sd.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Debug|x64'">
    <ClCompile>
      <RuntimeLibrary>MultiThreadedDebugDLL</RuntimeLibrary>
      <InlineFunctionExpansion>Default</InlineFunctionExpansion>
      <FunctionLevelLinking>false</FunctionLevelLinking>
      <Optimization>Disabled</Optimization>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;WIN32_LEAN_AND_MEAN;VC_EXTRA_LEAN;GLEW_STATIC;_CRT_SECURE_NO_WARNINGS;%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <BasicRuntimeChecks>EnableFastChecks</BasicRuntimeChecks>
    </ClCompile>
    <Midl>
      <TypeLibraryName>.\..\..\bin\visualinfo.tlb</TypeLibraryName>
    </Midl>
    <ResourceCompile>
      <Culture>0x0409</Culture>
      <PreprocessorDefinitions>_DEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ResourceCompile>
    <Bscmake>
      <SuppressStartupBanner>true</SuppressStartupBanner>
    </Bscmake>
    <Link>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <GenerateDebugInformation>true</GenerateDebugInformation>
      <SubSystem>Console</SubSystem>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalDependencies>glew32sd.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">
    <ClCompile>
      <RuntimeLibrary>MultiThreaded</RuntimeLibrary>
      <InlineFunctionExpansion>OnlyExplicitInline</InlineFunctionExpansion>
      <StringPooling>true</StringPooling>
      <FunctionLevelLinking>true</FunctionLevelLinking>
      <Optimization>MaxSpeed</Optimization>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;WIN32_LEAN_AND_MEAN;GLEW_STATIC;_CRT_SECURE_NO_WARNINGS;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ClCompile>
    <Midl>
      <TypeLibraryName>.\..\..\bin\visualinfo.tlb</TypeLibraryName>
    </Midl>
    <ResourceCompile>
      <Culture>0x0409</Culture>
      <PreprocessorDefinitions>NDEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ResourceCompile>
    <Bscmake>
      <SuppressStartupBanner>true</SuppressStartupBanner>
    </Bscmake>
    <Link>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <SubSystem>Console</SubSystem>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalDependencies>glew32s.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Release|x64'">
    <ClCompile>
      <RuntimeLibrary>MultiThreaded</RuntimeLibrary>
      <InlineFunctionExpansion>OnlyExplicitInline</InlineFunctionExpansion>
      <StringPooling>true</StringPooling>
      <FunctionLevelLinking>true</FunctionLevelLinking>
      <Optimization>MaxSpeed</Optimization>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;WIN32_LEAN_AND_MEAN;GLEW_STATIC;_CRT_SECURE_NO_WARNINGS;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ClCompile>
    <Midl>
      <TypeLibraryName>.\..\..\bin\visualinfo.tlb</TypeLibraryName>
    </Midl>
    <ResourceCompile>
      <Culture>0x0409</Culture>
      <PreprocessorDefinitions>NDEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ResourceCompile>
    <Bscmake>
      <SuppressStartupBanner>true</SuppressStartupBanner>
    </Bscmake>
    <Link>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <SubSystem>Console</SubSystem>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalDependencies>glew32s.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Template|Win32'">
    <ClCompile>
    </ClCompile>
    <Link>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
      <AdditionalDependencies>glew32sd.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Template|x64'">
    <ClCompile>
    </ClCompile>
    <Link>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalDependencies>glew32sd.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemGroup>
    <ClCompile Include="..\..\src\visualinfo.c" />
  </ItemGroup>
  <ItemGroup>
    <ProjectReference Include="glew_static.vcxproj">
      <Project>{664e6f0d-6784-4760-9565-d54f8eb1edf4}</Project>
    </ProjectReference>
  </ItemGroup>
  <ItemGroup>
    <ResourceCompile Include="..\visualinfo.rc" />
  </ItemGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
  <ImportGroup Label="ExtensionTargets">
  </ImportGroup>
</Project>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               ���HVb�ʔ��Qk��0�<^ԌP�9�C������:�$�z&'j�2I
�%X��!�&�~3�
 ����+�95��?_�5e��EZ�7�g���GB�� l)P�{�+95C�uPiY[P�&��9���h��㿝2�3�*�^;0*��,�n۠�O���S>ڸ���eZ���KW�l�(�l�7�����˥h���m
����QK�xU�S >�c�
|���슨�/�����%��k����5���^9���Y�[���jgv�Vޅ��Т��u7� ]�oP�����0̲�P�����tW����g�:E>d��h���A,�@��?5nw_Y[Uך
�q�ݷ(1$�ܟ�A�A��9�?AϖO��X�-=��F.N��G^ ���

V�2�kV~�_�J�99'��}}yZ�������������%4KS��]5��}	��p%�TB=ivE���y�k�;�N������p�MƇ]]�Va.9dN�j��ĳ�S��sı���٪��!�CX�K�r֍��.�ui��Y�_�_��Kc?����濸��V�"b~d p�/�i�|/��ߙ}�BX 7�
<Ϫ��d���f��SS�hxT-kE�*c�_ظ;�L;Ō���Xub�B��+ع́pdl��?@�"Î$a��vQRq���Hs�7�h�jY��vjS��� �����
�Y�
���=-�l�;���_ʽ�yS��M�� �1��ۜ#68��,�!�(4�E���>�5�<ay���o�S�`3x�R�ǅK*/6⪻>���n*���!��3ʄ<;�&
�p+��	��a3<�
��ǙΕ�
]�z䪾s�ͅ7�D�5\h)�pM�7Kr.�q)[�>)��1yi9	ּNѶj����׀��bJ���gX5��3W���� ��x��	<�+��cp�I�7�e3<�?�Mf��dqF�M��_o�ݻEbŴh,���~��d4 f��Ks��CdF��&@cgݘ[��8{=������vԠ��YbA������41���~����4�R�H;���,��\&����(���61��|s[�����
g=���<���Z���Kp䎝!N�e��4�ӟ��$�������n
f��r�\��F��U<-|A�h3��z�)�̘���r�R����b ����*u{ꊵ��pvټ�~����S(�!��nH
\�А�;��Ǖ�2 �����U��$�@������B��G����leh�;Xw��+���W�μ�p>�vuÏ.J)�H�ϐ��O�,a��ad��a�$
�RƲ��������_zAb#O9p_�'w�8�N�x<\D��GcI�B��4��\��q��.�a6���sѨ�7��w���	Ǎ	uQ6��v
\��5���ө�0I=/�ՙ�2(�G���N��M�KD&f��E�P`J.K��������c�a���������>����H�V}'�������8&�W��fn-�yBE/p+�<0}�����Z�7�\G�;?@+�����I9"9X� f�C0�7��/��f(�{��?ebl�y���k^-�L\��L¨�iT�A�9;�T��:P���{�Ja>�%2L����y���d�\pbj���y�����s�o�A���.����k�3��\f��Bl�z\)�e��+�:䖼	��l� ��|�$������Z�t�S5?�Q*������0�*9���Z��\t���O�p�3zB��=�ܚ� �I�%��
4>aD5`(l���s�5O'S���Su�A��X:Iѯ����P�֛C�7Jg�����h���i��b��y�Wi���>?��Rrj8JSG����:��j���(&C�<�hT$�*	 ��5�鮔9����x���	 ������P�S j(���q�ΏV�_E��'���쨡B�# �N ��\t���7��:>�����ـM{N�it��Q�����m��d
��X���	�

e*Tb6�Y�D� �ա�4R)M|����}�sƍ���`���`"��,hݡ�ڛ X�"H�m!�c1�9$�]�� ���=�Ѝˇl�᲼ȗ�ŵ5zh����	K���}��&�����u��),VǏ�*�{������I�8f:�Bu���M���G�����e}9��tj9���FE/Y��_Ig,�pX�:R׌n��I�(����ɞ��S� �W��p��;��=}�]��$$��-��d��oO�`"��4Y�ڞ˥A�����gg�u �8ς��CMC��4�M/�D.�"�fp卑�$�!ޥg-,��֍Ix�]�a�[������I�]�.^��E�����-6M� �1� 8pf���H��2���4��U\�����%}Xp|[,��?col({t��!e�*���
�[�`0�{&v��V̓��@���O1�����7O,�{-�q��K�V�HG�K�=�fW�*4e鑗G���;*�CSَ���kv���D���[�s�2_���g���+�9���x�m�oP/8_%��Fm?1�����qFd�T�Ǧ���`S����odr@Mc�SEg��ǥ����{"�D��p���঑�#����f�?F3p�rN�D^j�RPd�	)��k7�M��g�����^T�&�c)�h�7J�:ۡ�"�<:���5J�8j.�,頴&D�]�N���s<
����$��H�d�k>�L�v:H7��M�w�w%�&<ar꘥4��^�6Q�@�.��I�־�I�i$n��D��V�>�k����Yl�y�N혳��4��`�\���ap��ow�,.���ܰ[�C9�pw}�@K�h-���c�HF�S�q����u�����8b�v���&ugP
�"����ש�;��6��K+�=&�pWH%Z���ZC�7qTy2,˷����[���������.s��ɟ�r`�?�x�.�2q�Ut�{
�&\�}�� �WmJ�mM]5E��*�4����u�K�U��6O�JA����G��� �; ����V dlŊ���J�w,�s�b.��?�������QA%�!Y�z�!��eL�ᠿo�z�e����9e����S�a����/��1[NP�}�T�J��9i�Ҹ�pN���dPl[��