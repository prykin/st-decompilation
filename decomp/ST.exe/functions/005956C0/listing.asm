FUN_005956c0:
005956C0  55                        PUSH EBP
005956C1  8B EC                     MOV EBP,ESP
005956C3  83 EC 4C                  SUB ESP,0x4c
005956C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005956CB  53                        PUSH EBX
005956CC  56                        PUSH ESI
005956CD  57                        PUSH EDI
005956CE  8D 55 B8                  LEA EDX,[EBP + -0x48]
005956D1  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005956D4  6A 00                     PUSH 0x0
005956D6  52                        PUSH EDX
005956D7  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005956DA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005956E0  E8 0B 81 19 00            CALL 0x0072d7f0
005956E5  8B F0                     MOV ESI,EAX
005956E7  83 C4 08                  ADD ESP,0x8
005956EA  85 F6                     TEST ESI,ESI
005956EC  0F 85 86 05 00 00         JNZ 0x00595c78
005956F2  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
005956F5  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005956F8  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
005956FB  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
005956FE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00595701  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00595704  68 A6 25 00 00            PUSH 0x25a6
00595709  50                        PUSH EAX
0059570A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0059570D  51                        PUSH ECX
0059570E  53                        PUSH EBX
0059570F  56                        PUSH ESI
00595710  52                        PUSH EDX
00595711  50                        PUSH EAX
00595712  57                        PUSH EDI
00595713  E8 D1 DE E6 FF            CALL 0x004035e9
00595718  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0059571B  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
00595721  83 C3 55                  ADD EBX,0x55
00595724  8D 44 0E FF               LEA EAX,[ESI + ECX*0x1 + -0x1]
00595728  8B 8A 40 01 00 00         MOV ECX,dword ptr [EDX + 0x140]
0059572E  51                        PUSH ECX
0059572F  53                        PUSH EBX
00595730  50                        PUSH EAX
00595731  53                        PUSH EBX
00595732  56                        PUSH ESI
00595733  57                        PUSH EDI
00595734  E8 77 FC 12 00            CALL 0x006c53b0
00595739  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0059573C  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00595742  8D 42 78                  LEA EAX,[EDX + 0x78]
00595745  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
0059574B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0059574E  52                        PUSH EDX
0059574F  50                        PUSH EAX
00595750  8D 4C 0E FF               LEA ECX,[ESI + ECX*0x1 + -0x1]
00595754  51                        PUSH ECX
00595755  50                        PUSH EAX
00595756  56                        PUSH ESI
00595757  57                        PUSH EDI
00595758  E8 53 FC 12 00            CALL 0x006c53b0
0059575D  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
00595763  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00595769  6A 02                     PUSH 0x2
0059576B  8B 42 34                  MOV EAX,dword ptr [EDX + 0x34]
0059576E  50                        PUSH EAX
0059576F  6A FF                     PUSH -0x1
00595771  6A FF                     PUSH -0x1
00595773  51                        PUSH ECX
00595774  68 A7 25 00 00            PUSH 0x25a7
00595779  E8 C2 A9 11 00            CALL 0x006b0140
0059577E  50                        PUSH EAX
0059577F  6A 23                     PUSH 0x23
00595781  6A 2D                     PUSH 0x2d
00595783  53                        PUSH EBX
00595784  56                        PUSH ESI
00595785  6A 00                     PUSH 0x0
00595787  E8 A1 F4 E6 FF            CALL 0x00404c2d
0059578C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0059578F  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00595792  83 C4 28                  ADD ESP,0x28
00595795  8D 44 11 FF               LEA EAX,[ECX + EDX*0x1 + -0x1]
00595799  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
0059579F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005957A2  8D 46 2D                  LEA EAX,[ESI + 0x2d]
005957A5  8B 92 40 01 00 00         MOV EDX,dword ptr [EDX + 0x140]
005957AB  83 C1 78                  ADD ECX,0x78
005957AE  52                        PUSH EDX
005957AF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005957B2  52                        PUSH EDX
005957B3  50                        PUSH EAX
005957B4  51                        PUSH ECX
005957B5  50                        PUSH EAX
005957B6  57                        PUSH EDI
005957B7  E8 F4 FB 12 00            CALL 0x006c53b0
005957BC  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005957C1  6A 02                     PUSH 0x2
005957C3  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005957C6  51                        PUSH ECX
005957C7  6A FF                     PUSH -0x1
005957C9  6A FF                     PUSH -0x1
005957CB  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005957D1  52                        PUSH EDX
005957D2  68 A8 25 00 00            PUSH 0x25a8
005957D7  E8 64 A9 11 00            CALL 0x006b0140
005957DC  50                        PUSH EAX
005957DD  6A 23                     PUSH 0x23
005957DF  68 EB 00 00 00            PUSH 0xeb
005957E4  8D 46 2D                  LEA EAX,[ESI + 0x2d]
005957E7  53                        PUSH EBX
005957E8  50                        PUSH EAX
005957E9  6A 00                     PUSH 0x0
005957EB  E8 3D F4 E6 FF            CALL 0x00404c2d
005957F0  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005957F6  83 C4 28                  ADD ESP,0x28
005957F9  8D 86 18 01 00 00         LEA EAX,[ESI + 0x118]
005957FF  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
00595805  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00595808  52                        PUSH EDX
00595809  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0059580C  51                        PUSH ECX
0059580D  50                        PUSH EAX
0059580E  8D 4A 78                  LEA ECX,[EDX + 0x78]
00595811  51                        PUSH ECX
00595812  50                        PUSH EAX
00595813  57                        PUSH EDI
00595814  E8 97 FB 12 00            CALL 0x006c53b0
00595819  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0059581E  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00595824  6A 02                     PUSH 0x2
00595826  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
00595829  51                        PUSH ECX
0059582A  6A FF                     PUSH -0x1
0059582C  6A FF                     PUSH -0x1
0059582E  52                        PUSH EDX
0059582F  68 A9 25 00 00            PUSH 0x25a9
00595834  E8 07 A9 11 00            CALL 0x006b0140
00595839  50                        PUSH EAX
0059583A  6A 23                     PUSH 0x23
0059583C  6A 46                     PUSH 0x46
0059583E  8D 86 18 01 00 00         LEA EAX,[ESI + 0x118]
00595844  53                        PUSH EBX
00595845  50                        PUSH EAX
00595846  6A 00                     PUSH 0x0
00595848  E8 E0 F3 E6 FF            CALL 0x00404c2d
0059584D  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00595853  83 C4 28                  ADD ESP,0x28
00595856  8D 86 5E 01 00 00         LEA EAX,[ESI + 0x15e]
0059585C  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
00595862  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00595865  52                        PUSH EDX
00595866  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00595869  51                        PUSH ECX
0059586A  50                        PUSH EAX
0059586B  8D 4A 78                  LEA ECX,[EDX + 0x78]
0059586E  51                        PUSH ECX
0059586F  50                        PUSH EAX
00595870  57                        PUSH EDI
00595871  E8 3A FB 12 00            CALL 0x006c53b0
00595876  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0059587B  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00595881  6A 02                     PUSH 0x2
00595883  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
00595886  51                        PUSH ECX
00595887  6A FF                     PUSH -0x1
00595889  6A FF                     PUSH -0x1
0059588B  52                        PUSH EDX
0059588C  68 AA 25 00 00            PUSH 0x25aa
00595891  E8 AA A8 11 00            CALL 0x006b0140
00595896  50                        PUSH EAX
00595897  6A 23                     PUSH 0x23
00595899  68 91 00 00 00            PUSH 0x91
0059589E  8D 86 5E 01 00 00         LEA EAX,[ESI + 0x15e]
005958A4  53                        PUSH EBX
005958A5  50                        PUSH EAX
005958A6  6A 00                     PUSH 0x0
005958A8  E8 80 F3 E6 FF            CALL 0x00404c2d
005958AD  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005958B3  83 C4 28                  ADD ESP,0x28
005958B6  8D 86 EF 01 00 00         LEA EAX,[ESI + 0x1ef]
005958BC  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
005958C2  52                        PUSH EDX
005958C3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005958C6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005958C9  51                        PUSH ECX
005958CA  50                        PUSH EAX
005958CB  8D 4A 78                  LEA ECX,[EDX + 0x78]
005958CE  51                        PUSH ECX
005958CF  50                        PUSH EAX
005958D0  57                        PUSH EDI
005958D1  E8 DA FA 12 00            CALL 0x006c53b0
005958D6  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005958DB  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005958E1  6A 02                     PUSH 0x2
005958E3  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005958E6  51                        PUSH ECX
005958E7  6A FF                     PUSH -0x1
005958E9  6A FF                     PUSH -0x1
005958EB  52                        PUSH EDX
005958EC  68 AB 25 00 00            PUSH 0x25ab
005958F1  E8 4A A8 11 00            CALL 0x006b0140
005958F6  50                        PUSH EAX
005958F7  6A 23                     PUSH 0x23
005958F9  6A 46                     PUSH 0x46
005958FB  8D 86 EF 01 00 00         LEA EAX,[ESI + 0x1ef]
00595901  53                        PUSH EBX
00595902  50                        PUSH EAX
00595903  6A 00                     PUSH 0x0
00595905  E8 23 F3 E6 FF            CALL 0x00404c2d
0059590A  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00595910  83 C4 28                  ADD ESP,0x28
00595913  8D 86 35 02 00 00         LEA EAX,[ESI + 0x235]
00595919  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
0059591F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00595922  52                        PUSH EDX
00595923  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00595926  51                        PUSH ECX
00595927  50                        PUSH EAX
00595928  8D 4A 78                  LEA ECX,[EDX + 0x78]
0059592B  51                        PUSH ECX
0059592C  50                        PUSH EAX
0059592D  57                        PUSH EDI
0059592E  E8 7D FA 12 00            CALL 0x006c53b0
00595933  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00595938  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0059593E  6A 02                     PUSH 0x2
00595940  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
00595943  51                        PUSH ECX
00595944  6A FF                     PUSH -0x1
00595946  6A FF                     PUSH -0x1
00595948  52                        PUSH EDX
00595949  68 AC 25 00 00            PUSH 0x25ac
0059594E  E8 ED A7 11 00            CALL 0x006b0140
00595953  50                        PUSH EAX
00595954  6A 23                     PUSH 0x23
00595956  6A 32                     PUSH 0x32
00595958  8D 86 35 02 00 00         LEA EAX,[ESI + 0x235]
0059595E  53                        PUSH EBX
0059595F  50                        PUSH EAX
00595960  6A 00                     PUSH 0x0
00595962  E8 C6 F2 E6 FF            CALL 0x00404c2d
00595967  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
0059596D  83 C4 28                  ADD ESP,0x28
00595970  8D 86 67 02 00 00         LEA EAX,[ESI + 0x267]
00595976  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
0059597C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0059597F  52                        PUSH EDX
00595980  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00595983  51                        PUSH ECX
00595984  50                        PUSH EAX
00595985  8D 4A 78                  LEA ECX,[EDX + 0x78]
00595988  51                        PUSH ECX
00595989  50                        PUSH EAX
0059598A  57                        PUSH EDI
0059598B  E8 20 FA 12 00            CALL 0x006c53b0
00595990  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00595995  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0059599B  6A 02                     PUSH 0x2
0059599D  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005959A0  51                        PUSH ECX
005959A1  6A FF                     PUSH -0x1
005959A3  6A FF                     PUSH -0x1
005959A5  52                        PUSH EDX
005959A6  68 AD 25 00 00            PUSH 0x25ad
005959AB  E8 90 A7 11 00            CALL 0x006b0140
005959B0  50                        PUSH EAX
005959B1  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005959B4  05 99 FD FF FF            ADD EAX,0xfffffd99
005959B9  6A 23                     PUSH 0x23
005959BB  50                        PUSH EAX
005959BC  8D 86 67 02 00 00         LEA EAX,[ESI + 0x267]
005959C2  53                        PUSH EBX
005959C3  50                        PUSH EAX
005959C4  6A 00                     PUSH 0x0
005959C6  E8 62 F2 E6 FF            CALL 0x00404c2d
005959CB  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
005959CE  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005959D4  83 C4 28                  ADD ESP,0x28
005959D7  8B 42 34                  MOV EAX,dword ptr [EDX + 0x34]
005959DA  8D 4B 19                  LEA ECX,[EBX + 0x19]
005959DD  6A 02                     PUSH 0x2
005959DF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005959E2  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005959E8  50                        PUSH EAX
005959E9  6A FF                     PUSH -0x1
005959EB  6A FF                     PUSH -0x1
005959ED  51                        PUSH ECX
005959EE  68 AE 25 00 00            PUSH 0x25ae
005959F3  E8 48 A7 11 00            CALL 0x006b0140
005959F8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005959FB  50                        PUSH EAX
005959FC  6A 14                     PUSH 0x14
005959FE  68 96 00 00 00            PUSH 0x96
00595A03  8D 46 0A                  LEA EAX,[ESI + 0xa]
00595A06  52                        PUSH EDX
00595A07  50                        PUSH EAX
00595A08  6A 00                     PUSH 0x0
00595A0A  E8 1E F2 E6 FF            CALL 0x00404c2d
00595A0F  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00595A14  83 C4 28                  ADD ESP,0x28
00595A17  83 C3 32                  ADD EBX,0x32
00595A1A  8B 88 40 01 00 00         MOV ECX,dword ptr [EAX + 0x140]
00595A20  8D 46 0A                  LEA EAX,[ESI + 0xa]
00595A23  51                        PUSH ECX
00595A24  6A 04                     PUSH 0x4
00595A26  6A 19                     PUSH 0x19
00595A28  68 96 00 00 00            PUSH 0x96
00595A2D  53                        PUSH EBX
00595A2E  50                        PUSH EAX
00595A2F  57                        PUSH EDI
00595A30  E8 3B 0A 13 00            CALL 0x006c6470
00595A35  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00595A38  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00595A3E  8D 42 34                  LEA EAX,[EDX + 0x34]
00595A41  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
00595A47  52                        PUSH EDX
00595A48  6A 04                     PUSH 0x4
00595A4A  6A 15                     PUSH 0x15
00595A4C  68 92 00 00 00            PUSH 0x92
00595A51  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00595A54  50                        PUSH EAX
00595A55  8D 46 0C                  LEA EAX,[ESI + 0xc]
00595A58  50                        PUSH EAX
00595A59  57                        PUSH EDI
00595A5A  E8 11 0A 13 00            CALL 0x006c6470
00595A5F  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00595A65  A1 18 76 80 00            MOV EAX,[0x00807618]
00595A6A  6A 02                     PUSH 0x2
00595A6C  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
00595A6F  52                        PUSH EDX
00595A70  6A FF                     PUSH -0x1
00595A72  6A FF                     PUSH -0x1
00595A74  50                        PUSH EAX
00595A75  68 AF 25 00 00            PUSH 0x25af
00595A7A  E8 C1 A6 11 00            CALL 0x006b0140
00595A7F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00595A82  50                        PUSH EAX
00595A83  6A 14                     PUSH 0x14
00595A85  68 96 00 00 00            PUSH 0x96
00595A8A  8D 86 A5 00 00 00         LEA EAX,[ESI + 0xa5]
00595A90  51                        PUSH ECX
00595A91  50                        PUSH EAX
00595A92  6A 00                     PUSH 0x0
00595A94  E8 94 F1 E6 FF            CALL 0x00404c2d
00595A99  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
00595A9F  83 C4 28                  ADD ESP,0x28
00595AA2  8B 82 40 01 00 00         MOV EAX,dword ptr [EDX + 0x140]
00595AA8  50                        PUSH EAX
00595AA9  6A 04                     PUSH 0x4
00595AAB  6A 19                     PUSH 0x19
00595AAD  68 96 00 00 00            PUSH 0x96
00595AB2  8D 86 A5 00 00 00         LEA EAX,[ESI + 0xa5]
00595AB8  53                        PUSH EBX
00595AB9  50                        PUSH EAX
00595ABA  57                        PUSH EDI
00595ABB  E8 B0 09 13 00            CALL 0x006c6470
00595AC0  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00595AC6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00595AC9  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
00595ACF  8D 8E A7 00 00 00         LEA ECX,[ESI + 0xa7]
00595AD5  52                        PUSH EDX
00595AD6  6A 04                     PUSH 0x4
00595AD8  6A 15                     PUSH 0x15
00595ADA  68 92 00 00 00            PUSH 0x92
00595ADF  50                        PUSH EAX
00595AE0  51                        PUSH ECX
00595AE1  57                        PUSH EDI
00595AE2  E8 89 09 13 00            CALL 0x006c6470
00595AE7  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
00595AED  8D 8E 4A 01 00 00         LEA ECX,[ESI + 0x14a]
00595AF3  8B 82 40 01 00 00         MOV EAX,dword ptr [EDX + 0x140]
00595AF9  50                        PUSH EAX
00595AFA  6A 04                     PUSH 0x4
00595AFC  6A 19                     PUSH 0x19
00595AFE  6A 19                     PUSH 0x19
00595B00  53                        PUSH EBX
00595B01  51                        PUSH ECX
00595B02  57                        PUSH EDI
00595B03  E8 68 09 13 00            CALL 0x006c6470
00595B08  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
00595B0E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00595B11  8B 82 40 01 00 00         MOV EAX,dword ptr [EDX + 0x140]
00595B17  8D 96 4C 01 00 00         LEA EDX,[ESI + 0x14c]
00595B1D  50                        PUSH EAX
00595B1E  6A 04                     PUSH 0x4
00595B20  6A 15                     PUSH 0x15
00595B22  6A 15                     PUSH 0x15
00595B24  51                        PUSH ECX
00595B25  52                        PUSH EDX
00595B26  57                        PUSH EDI
00595B27  E8 44 09 13 00            CALL 0x006c6470
00595B2C  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00595B31  8D 96 68 01 00 00         LEA EDX,[ESI + 0x168]
00595B37  8B 88 40 01 00 00         MOV ECX,dword ptr [EAX + 0x140]
00595B3D  51                        PUSH ECX
00595B3E  6A 19                     PUSH 0x19
00595B40  6A 64                     PUSH 0x64
00595B42  53                        PUSH EBX
00595B43  52                        PUSH EDX
00595B44  57                        PUSH EDI
00595B45  E8 06 0D 13 00            CALL 0x006c6850
00595B4A  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00595B4F  8D 96 D1 01 00 00         LEA EDX,[ESI + 0x1d1]
00595B55  8B 88 40 01 00 00         MOV ECX,dword ptr [EAX + 0x140]
00595B5B  51                        PUSH ECX
00595B5C  6A 04                     PUSH 0x4
00595B5E  6A 19                     PUSH 0x19
00595B60  6A 19                     PUSH 0x19
00595B62  53                        PUSH EBX
00595B63  52                        PUSH EDX
00595B64  57                        PUSH EDI
00595B65  E8 06 09 13 00            CALL 0x006c6470
00595B6A  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00595B6F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00595B72  8B 88 40 01 00 00         MOV ECX,dword ptr [EAX + 0x140]
00595B78  8D 86 D3 01 00 00         LEA EAX,[ESI + 0x1d3]
00595B7E  51                        PUSH ECX
00595B7F  6A 04                     PUSH 0x4
00595B81  6A 15                     PUSH 0x15
00595B83  6A 15                     PUSH 0x15
00595B85  52                        PUSH EDX
00595B86  50                        PUSH EAX
00595B87  57                        PUSH EDI
00595B88  E8 E3 08 13 00            CALL 0x006c6470
00595B8D  6A 02                     PUSH 0x2
00595B8F  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00595B95  A1 18 76 80 00            MOV EAX,[0x00807618]
00595B9A  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
00595B9D  52                        PUSH EDX
00595B9E  6A FF                     PUSH -0x1
00595BA0  6A FF                     PUSH -0x1
00595BA2  50                        PUSH EAX
00595BA3  68 B0 25 00 00            PUSH 0x25b0
00595BA8  E8 93 A5 11 00            CALL 0x006b0140
00595BAD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00595BB0  50                        PUSH EAX
00595BB1  6A 14                     PUSH 0x14
00595BB3  68 96 00 00 00            PUSH 0x96
00595BB8  8D 86 F9 01 00 00         LEA EAX,[ESI + 0x1f9]
00595BBE  51                        PUSH ECX
00595BBF  50                        PUSH EAX
00595BC0  6A 00                     PUSH 0x0
00595BC2  E8 66 F0 E6 FF            CALL 0x00404c2d
00595BC7  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
00595BCD  83 C4 28                  ADD ESP,0x28
00595BD0  8B 82 40 01 00 00         MOV EAX,dword ptr [EDX + 0x140]
00595BD6  50                        PUSH EAX
00595BD7  6A 19                     PUSH 0x19
00595BD9  68 96 00 00 00            PUSH 0x96
00595BDE  8D 86 F9 01 00 00         LEA EAX,[ESI + 0x1f9]
00595BE4  53                        PUSH EBX
00595BE5  50                        PUSH EAX
00595BE6  57                        PUSH EDI
00595BE7  E8 64 0C 13 00            CALL 0x006c6850
00595BEC  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00595BF2  A1 18 76 80 00            MOV EAX,[0x00807618]
00595BF7  6A 02                     PUSH 0x2
00595BF9  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
00595BFC  52                        PUSH EDX
00595BFD  6A FF                     PUSH -0x1
00595BFF  6A FF                     PUSH -0x1
00595C01  50                        PUSH EAX
00595C02  68 B1 25 00 00            PUSH 0x25b1
00595C07  E8 34 A5 11 00            CALL 0x006b0140
00595C0C  50                        PUSH EAX
00595C0D  6A 19                     PUSH 0x19
00595C0F  6A 41                     PUSH 0x41
00595C11  8D 86 94 02 00 00         LEA EAX,[ESI + 0x294]
00595C17  53                        PUSH EBX
00595C18  50                        PUSH EAX
00595C19  6A 00                     PUSH 0x0
00595C1B  E8 0D F0 E6 FF            CALL 0x00404c2d
00595C20  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00595C26  83 C4 28                  ADD ESP,0x28
00595C29  8D 86 94 02 00 00         LEA EAX,[ESI + 0x294]
00595C2F  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
00595C35  52                        PUSH EDX
00595C36  6A 04                     PUSH 0x4
00595C38  6A 19                     PUSH 0x19
00595C3A  6A 41                     PUSH 0x41
00595C3C  53                        PUSH EBX
00595C3D  50                        PUSH EAX
00595C3E  57                        PUSH EDI
00595C3F  E8 2C 08 13 00            CALL 0x006c6470
00595C44  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00595C49  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00595C4C  81 C6 96 02 00 00         ADD ESI,0x296
00595C52  8B 88 40 01 00 00         MOV ECX,dword ptr [EAX + 0x140]
00595C58  51                        PUSH ECX
00595C59  6A 04                     PUSH 0x4
00595C5B  6A 15                     PUSH 0x15
00595C5D  6A 3D                     PUSH 0x3d
00595C5F  52                        PUSH EDX
00595C60  56                        PUSH ESI
00595C61  57                        PUSH EDI
00595C62  E8 09 08 13 00            CALL 0x006c6470
00595C67  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00595C6A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00595C6F  5F                        POP EDI
00595C70  5E                        POP ESI
00595C71  5B                        POP EBX
00595C72  8B E5                     MOV ESP,EBP
00595C74  5D                        POP EBP
00595C75  C2 20 00                  RET 0x20
LAB_00595c78:
00595C78  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00595C7B  68 E0 BF 7C 00            PUSH 0x7cbfe0
00595C80  68 CC 4C 7A 00            PUSH 0x7a4ccc
00595C85  56                        PUSH ESI
00595C86  6A 00                     PUSH 0x0
00595C88  68 EB 00 00 00            PUSH 0xeb
00595C8D  68 70 BF 7C 00            PUSH 0x7cbf70
00595C92  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00595C98  E8 33 78 11 00            CALL 0x006ad4d0
00595C9D  83 C4 18                  ADD ESP,0x18
00595CA0  85 C0                     TEST EAX,EAX
00595CA2  74 01                     JZ 0x00595ca5
00595CA4  CC                        INT3
LAB_00595ca5:
00595CA5  68 EB 00 00 00            PUSH 0xeb
00595CAA  68 70 BF 7C 00            PUSH 0x7cbf70
00595CAF  6A 00                     PUSH 0x0
00595CB1  56                        PUSH ESI
00595CB2  E8 89 01 11 00            CALL 0x006a5e40
00595CB7  5F                        POP EDI
00595CB8  5E                        POP ESI
00595CB9  5B                        POP EBX
00595CBA  8B E5                     MOV ESP,EBP
00595CBC  5D                        POP EBP
00595CBD  C2 20 00                  RET 0x20
