FUN_006d3730:
006D3730  55                        PUSH EBP
006D3731  8B EC                     MOV EBP,ESP
006D3733  6A FF                     PUSH -0x1
006D3735  68 C0 DA 79 00            PUSH 0x79dac0
006D373A  68 64 D9 72 00            PUSH 0x72d964
006D373F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006D3745  50                        PUSH EAX
006D3746  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006D374D  83 EC 58                  SUB ESP,0x58
006D3750  53                        PUSH EBX
006D3751  56                        PUSH ESI
006D3752  57                        PUSH EDI
006D3753  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006D3756  33 DB                     XOR EBX,EBX
006D3758  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006D375B  85 FF                     TEST EDI,EDI
006D375D  0F 8E 4A 02 00 00         JLE 0x006d39ad
006D3763  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006D3766  85 D2                     TEST EDX,EDX
006D3768  0F 8E 3F 02 00 00         JLE 0x006d39ad
006D376E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D3771  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006D3774  25 00 11 00 00            AND EAX,0x1100
006D3779  3D 00 01 00 00            CMP EAX,0x100
006D377E  0F 84 56 02 00 00         JZ 0x006d39da
006D3784  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006D3787  85 C0                     TEST EAX,EAX
006D3789  0F 84 4B 02 00 00         JZ 0x006d39da
006D378F  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006D3792  03 45 14                  ADD EAX,dword ptr [EBP + 0x14]
006D3795  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006D3798  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006D379B  03 4D 18                  ADD ECX,dword ptr [EBP + 0x18]
006D379E  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006D37A1  03 C7                     ADD EAX,EDI
006D37A3  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006D37A6  03 CA                     ADD ECX,EDX
006D37A8  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006D37AB  33 C0                     XOR EAX,EAX
006D37AD  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
006D37B0  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006D37B3  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006D37B6  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006D37B9  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006D37BC  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
006D37BF  8D 45 CC                  LEA EAX,[EBP + -0x34]
006D37C2  50                        PUSH EAX
006D37C3  8D 4D A8                  LEA ECX,[EBP + -0x58]
006D37C6  51                        PUSH ECX
006D37C7  8D 55 98                  LEA EDX,[EBP + -0x68]
006D37CA  52                        PUSH EDX
006D37CB  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
006D37D1  85 C0                     TEST EAX,EAX
006D37D3  0F 84 D4 01 00 00         JZ 0x006d39ad
006D37D9  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
006D37DC  2B 45 CC                  SUB EAX,dword ptr [EBP + -0x34]
006D37DF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D37E2  03 C8                     ADD ECX,EAX
006D37E4  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
006D37E7  8B C2                     MOV EAX,EDX
006D37E9  2B 45 D0                  SUB EAX,dword ptr [EBP + -0x30]
006D37EC  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D37EF  03 F8                     ADD EDI,EAX
006D37F1  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006D37F4  03 C1                     ADD EAX,ECX
006D37F6  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006D37F9  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006D37FC  03 CF                     ADD ECX,EDI
006D37FE  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006D3801  8B 7D A0                  MOV EDI,dword ptr [EBP + -0x60]
006D3804  2B 7D 98                  SUB EDI,dword ptr [EBP + -0x68]
006D3807  03 F8                     ADD EDI,EAX
006D3809  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
006D380C  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006D380F  2B C2                     SUB EAX,EDX
006D3811  03 C1                     ADD EAX,ECX
006D3813  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006D3816  8D 4D CC                  LEA ECX,[EBP + -0x34]
006D3819  51                        PUSH ECX
006D381A  8D 55 A8                  LEA EDX,[EBP + -0x58]
006D381D  52                        PUSH EDX
006D381E  8D 45 BC                  LEA EAX,[EBP + -0x44]
006D3821  50                        PUSH EAX
006D3822  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
006D3828  85 C0                     TEST EAX,EAX
006D382A  0F 84 7D 01 00 00         JZ 0x006d39ad
006D3830  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006D3833  8B C8                     MOV ECX,EAX
006D3835  2B 4D CC                  SUB ECX,dword ptr [EBP + -0x34]
006D3838  8B 5D 98                  MOV EBX,dword ptr [EBP + -0x68]
006D383B  03 D9                     ADD EBX,ECX
006D383D  89 5D 98                  MOV dword ptr [EBP + -0x68],EBX
006D3840  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
006D3843  8B F9                     MOV EDI,ECX
006D3845  2B 7D D0                  SUB EDI,dword ptr [EBP + -0x30]
006D3848  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
006D384B  03 D7                     ADD EDX,EDI
006D384D  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
006D3850  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
006D3853  2B F8                     SUB EDI,EAX
006D3855  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006D3858  2B C1                     SUB EAX,ECX
006D385A  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006D385D  03 DF                     ADD EBX,EDI
006D385F  89 5D A0                  MOV dword ptr [EBP + -0x60],EBX
006D3862  03 C2                     ADD EAX,EDX
006D3864  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006D3867  F6 46 0C 10               TEST byte ptr [ESI + 0xc],0x10
006D386B  0F 84 D7 00 00 00         JZ 0x006d3948
006D3871  3B CA                     CMP ECX,EDX
006D3873  0F 8C CF 00 00 00         JL 0x006d3948
006D3879  75 0C                     JNZ 0x006d3887
006D387B  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
006D387E  39 4D BC                  CMP dword ptr [EBP + -0x44],ECX
006D3881  0F 8E C1 00 00 00         JLE 0x006d3948
LAB_006d3887:
006D3887  8D 55 98                  LEA EDX,[EBP + -0x68]
006D388A  52                        PUSH EDX
006D388B  8D 45 BC                  LEA EAX,[EBP + -0x44]
006D388E  50                        PUSH EAX
006D388F  8D 4D A8                  LEA ECX,[EBP + -0x58]
006D3892  51                        PUSH ECX
006D3893  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
006D3899  85 C0                     TEST EAX,EAX
006D389B  0F 84 A7 00 00 00         JZ 0x006d3948
006D38A1  56                        PUSH ESI
006D38A2  E8 09 80 FE FF            CALL 0x006bb8b0
006D38A7  8B D8                     MOV EBX,EAX
006D38A9  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
006D38AC  85 DB                     TEST EBX,EBX
006D38AE  0F 85 82 00 00 00         JNZ 0x006d3936
006D38B4  83 7E 20 10               CMP dword ptr [ESI + 0x20],0x10
006D38B8  8B 86 78 04 00 00         MOV EAX,dword ptr [ESI + 0x478]
006D38BE  75 1C                     JNZ 0x006d38dc
006D38C0  8B D0                     MOV EDX,EAX
006D38C2  0F AF 55 9C               IMUL EDX,dword ptr [EBP + -0x64]
006D38C6  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
006D38C9  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
006D38CC  8B D0                     MOV EDX,EAX
006D38CE  0F AF 55 C0               IMUL EDX,dword ptr [EBP + -0x40]
006D38D2  8B 5D BC                  MOV EBX,dword ptr [EBP + -0x44]
006D38D5  8D 14 5A                  LEA EDX,[EDX + EBX*0x2]
006D38D8  D1 E7                     SHL EDI,0x1
006D38DA  EB 12                     JMP 0x006d38ee
LAB_006d38dc:
006D38DC  8B C8                     MOV ECX,EAX
006D38DE  0F AF 4D 9C               IMUL ECX,dword ptr [EBP + -0x64]
006D38E2  03 4D 98                  ADD ECX,dword ptr [EBP + -0x68]
006D38E5  8B D0                     MOV EDX,EAX
006D38E7  0F AF 55 C0               IMUL EDX,dword ptr [EBP + -0x40]
006D38EB  03 55 BC                  ADD EDX,dword ptr [EBP + -0x44]
LAB_006d38ee:
006D38EE  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006D38F5  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006D38F8  53                        PUSH EBX
006D38F9  57                        PUSH EDI
006D38FA  50                        PUSH EAX
006D38FB  8B 86 74 04 00 00         MOV EAX,dword ptr [ESI + 0x474]
006D3901  03 C8                     ADD ECX,EAX
006D3903  51                        PUSH ECX
006D3904  03 C2                     ADD EAX,EDX
006D3906  50                        PUSH EAX
006D3907  E8 04 DD FF FF            CALL 0x006d1610
006D390C  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006D3913  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006D3916  EB 18                     JMP 0x006d3930
LAB_006d3930:
006D3930  56                        PUSH ESI
006D3931  E8 4A 80 FE FF            CALL 0x006bb980
LAB_006d3936:
006D3936  81 FB A0 00 76 88         CMP EBX,0x887600a0
006D393C  74 6D                     JZ 0x006d39ab
006D393E  81 FB AE 01 76 88         CMP EBX,0x887601ae
006D3944  75 67                     JNZ 0x006d39ad
006D3946  EB 63                     JMP 0x006d39ab
LAB_006d3948:
006D3948  33 FF                     XOR EDI,EDI
LAB_006d394a:
006D394A  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006D394D  8B 10                     MOV EDX,dword ptr [EAX]
006D394F  6A 00                     PUSH 0x0
006D3951  68 00 00 00 01            PUSH 0x1000000
006D3956  8D 4D 98                  LEA ECX,[EBP + -0x68]
006D3959  51                        PUSH ECX
006D395A  50                        PUSH EAX
006D395B  8D 4D BC                  LEA ECX,[EBP + -0x44]
006D395E  51                        PUSH ECX
006D395F  50                        PUSH EAX
006D3960  FF 52 14                  CALL dword ptr [EDX + 0x14]
006D3963  8B D8                     MOV EBX,EAX
006D3965  85 DB                     TEST EBX,EBX
006D3967  74 32                     JZ 0x006d399b
006D3969  81 FB C2 01 76 88         CMP EBX,0x887601c2
006D396F  75 08                     JNZ 0x006d3979
006D3971  56                        PUSH ESI
006D3972  E8 C9 B2 FF FF            CALL 0x006cec40
006D3977  EB 1C                     JMP 0x006d3995
LAB_006d3979:
006D3979  81 FB A0 00 76 88         CMP EBX,0x887600a0
006D397F  74 08                     JZ 0x006d3989
006D3981  81 FB AE 01 76 88         CMP EBX,0x887601ae
006D3987  75 12                     JNZ 0x006d399b
LAB_006d3989:
006D3989  85 FF                     TEST EDI,EDI
006D398B  75 0E                     JNZ 0x006d399b
006D398D  6A 02                     PUSH 0x2
006D398F  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006d3995:
006D3995  47                        INC EDI
006D3996  83 FF 02                  CMP EDI,0x2
006D3999  7C AF                     JL 0x006d394a
LAB_006d399b:
006D399B  81 FB A0 00 76 88         CMP EBX,0x887600a0
006D39A1  74 08                     JZ 0x006d39ab
006D39A3  81 FB AE 01 76 88         CMP EBX,0x887601ae
006D39A9  75 02                     JNZ 0x006d39ad
LAB_006d39ab:
006D39AB  33 DB                     XOR EBX,EBX
LAB_006d39ad:
006D39AD  85 DB                     TEST EBX,EBX
006D39AF  74 29                     JZ 0x006d39da
006D39B1  6A 67                     PUSH 0x67
006D39B3  68 FC E1 7E 00            PUSH 0x7ee1fc
006D39B8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006D39BE  52                        PUSH EDX
006D39BF  53                        PUSH EBX
006D39C0  E8 7B 24 FD FF            CALL 0x006a5e40
006D39C5  8B C3                     MOV EAX,EBX
006D39C7  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D39CA  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D39D1  5F                        POP EDI
006D39D2  5E                        POP ESI
006D39D3  5B                        POP EBX
006D39D4  8B E5                     MOV ESP,EBP
006D39D6  5D                        POP EBP
006D39D7  C2 1C 00                  RET 0x1c
LAB_006d39da:
006D39DA  33 C0                     XOR EAX,EAX
006D39DC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D39DF  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D39E6  5F                        POP EDI
006D39E7  5E                        POP ESI
006D39E8  5B                        POP EBX
006D39E9  8B E5                     MOV ESP,EBP
006D39EB  5D                        POP EBP
006D39EC  C2 1C 00                  RET 0x1c
