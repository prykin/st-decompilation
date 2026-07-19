STAllPlayersC::SelectObjects:
0044B5F0  55                        PUSH EBP
0044B5F1  8B EC                     MOV EBP,ESP
0044B5F3  83 EC 10                  SUB ESP,0x10
0044B5F6  53                        PUSH EBX
0044B5F7  56                        PUSH ESI
0044B5F8  57                        PUSH EDI
0044B5F9  33 FF                     XOR EDI,EDI
0044B5FB  33 C0                     XOR EAX,EAX
0044B5FD  6A 01                     PUSH 0x1
0044B5FF  A0 4D 87 80 00            MOV AL,[0x0080874d]
0044B604  6A 02                     PUSH 0x2
0044B606  57                        PUSH EDI
0044B607  8B D9                     MOV EBX,ECX
0044B609  57                        PUSH EDI
0044B60A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0044B60D  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0044B610  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0044B613  8B F0                     MOV ESI,EAX
0044B615  E8 76 2C 26 00            CALL 0x006ae290
0044B61A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0044B61D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0044B620  83 F8 07                  CMP EAX,0x7
0044B623  0F 87 C9 05 00 00         JA 0x0044bbf2
switchD_0044b629::switchD:
0044B629  FF 24 85 D0 BE 44 00      JMP dword ptr [EAX*0x4 + 0x44bed0]
switchD_0044b629::caseD_0:
0044B630  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
0044B633  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0044B636  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
0044B639  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
0044B63C  C1 E0 04                  SHL EAX,0x4
0044B63F  03 C6                     ADD EAX,ESI
0044B641  8B 04 45 29 4E 7F 00      MOV EAX,dword ptr [EAX*0x2 + 0x7f4e29]
0044B648  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0044B64B  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0044B64E  3B C7                     CMP EAX,EDI
0044B650  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0044B653  0F 8E BC 05 00 00         JLE 0x0044bc15
LAB_0044b659:
0044B659  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044B65C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044B65F  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0044B662  8B 3C 82                  MOV EDI,dword ptr [EDX + EAX*0x4]
0044B665  85 FF                     TEST EDI,EDI
0044B667  74 31                     JZ 0x0044b69a
0044B669  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
0044B66D  75 2B                     JNZ 0x0044b69a
0044B66F  8B 17                     MOV EDX,dword ptr [EDI]
0044B671  8B CF                     MOV ECX,EDI
0044B673  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0044B679  83 F8 01                  CMP EAX,0x1
0044B67C  75 1C                     JNZ 0x0044b69a
0044B67E  8B 07                     MOV EAX,dword ptr [EDI]
0044B680  8B CF                     MOV ECX,EDI
0044B682  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
0044B688  83 F8 01                  CMP EAX,0x1
0044B68B  75 0D                     JNZ 0x0044b69a
0044B68D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044B690  83 C7 32                  ADD EDI,0x32
0044B693  57                        PUSH EDI
0044B694  51                        PUSH ECX
0044B695  E8 26 2B 26 00            CALL 0x006ae1c0
LAB_0044b69a:
0044B69A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044B69D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044B6A0  40                        INC EAX
0044B6A1  3B C1                     CMP EAX,ECX
0044B6A3  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0044B6A6  7C B1                     JL 0x0044b659
0044B6A8  E9 68 05 00 00            JMP 0x0044bc15
switchD_0044b629::caseD_1:
0044B6AD  A1 1C 74 80 00            MOV EAX,[0x0080741c]
0044B6B2  8B 0D 18 74 80 00         MOV ECX,dword ptr [0x00807418]
0044B6B8  8D 55 FC                  LEA EDX,[EBP + -0x4]
0044B6BB  57                        PUSH EDI
0044B6BC  52                        PUSH EDX
0044B6BD  8B 15 14 74 80 00         MOV EDX,dword ptr [0x00807414]
0044B6C3  50                        PUSH EAX
0044B6C4  A1 10 74 80 00            MOV EAX,[0x00807410]
0044B6C9  51                        PUSH ECX
0044B6CA  52                        PUSH EDX
0044B6CB  50                        PUSH EAX
0044B6CC  56                        PUSH ESI
0044B6CD  8B CB                     MOV ECX,EBX
0044B6CF  E8 53 9B FB FF            CALL 0x00405227
0044B6D4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044B6D7  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0044B6DA  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0044B6DD  3B C7                     CMP EAX,EDI
0044B6DF  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0044B6E2  0F 8E 2D 05 00 00         JLE 0x0044bc15
LAB_0044b6e8:
0044B6E8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044B6EB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0044B6EE  6A 01                     PUSH 0x1
0044B6F0  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0044B6F3  66 8B 14 48               MOV DX,word ptr [EAX + ECX*0x2]
0044B6F7  8B CB                     MOV ECX,EBX
0044B6F9  52                        PUSH EDX
0044B6FA  56                        PUSH ESI
0044B6FB  E8 BA 71 FB FF            CALL 0x004028ba
0044B700  8B F8                     MOV EDI,EAX
0044B702  85 FF                     TEST EDI,EDI
0044B704  74 22                     JZ 0x0044b728
0044B706  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
0044B70A  75 1C                     JNZ 0x0044b728
0044B70C  8B 07                     MOV EAX,dword ptr [EDI]
0044B70E  8B CF                     MOV ECX,EDI
0044B710  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0044B716  85 C0                     TEST EAX,EAX
0044B718  74 0E                     JZ 0x0044b728
0044B71A  8B 17                     MOV EDX,dword ptr [EDI]
0044B71C  8B CF                     MOV ECX,EDI
0044B71E  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
0044B724  85 C0                     TEST EAX,EAX
0044B726  75 17                     JNZ 0x0044b73f
LAB_0044b728:
0044B728  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0044B72B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044B72E  57                        PUSH EDI
0044B72F  50                        PUSH EAX
0044B730  E8 3B 55 26 00            CALL 0x006b0c70
0044B735  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044B738  49                        DEC ECX
0044B739  4F                        DEC EDI
0044B73A  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0044B73D  EB 03                     JMP 0x0044b742
LAB_0044b73f:
0044B73F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_0044b742:
0044B742  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044B745  47                        INC EDI
0044B746  3B F8                     CMP EDI,EAX
0044B748  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0044B74B  7C 9B                     JL 0x0044b6e8
0044B74D  E9 C3 04 00 00            JMP 0x0044bc15
switchD_0044b629::caseD_2:
0044B752  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
0044B755  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0044B758  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
0044B75B  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
0044B75E  C1 E0 04                  SHL EAX,0x4
0044B761  03 C6                     ADD EAX,ESI
0044B763  8B 04 45 29 4E 7F 00      MOV EAX,dword ptr [EAX*0x2 + 0x7f4e29]
0044B76A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0044B76D  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0044B770  3B C7                     CMP EAX,EDI
0044B772  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0044B775  0F 8E 9A 04 00 00         JLE 0x0044bc15
LAB_0044b77b:
0044B77B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044B77E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044B781  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0044B784  8B 3C 82                  MOV EDI,dword ptr [EDX + EAX*0x4]
0044B787  85 FF                     TEST EDI,EDI
0044B789  0F 84 8D 00 00 00         JZ 0x0044b81c
0044B78F  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
0044B793  0F 85 83 00 00 00         JNZ 0x0044b81c
0044B799  8B 17                     MOV EDX,dword ptr [EDI]
0044B79B  8B CF                     MOV ECX,EDI
0044B79D  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044B7A0  83 C0 41                  ADD EAX,0x41
0044B7A3  8B C8                     MOV ECX,EAX
0044B7A5  81 E1 1F 00 00 80         AND ECX,0x8000001f
0044B7AB  79 05                     JNS 0x0044b7b2
0044B7AD  49                        DEC ECX
0044B7AE  83 C9 E0                  OR ECX,0xffffffe0
0044B7B1  41                        INC ECX
LAB_0044b7b2:
0044B7B2  BA 01 00 00 00            MOV EDX,0x1
0044B7B7  D3 E2                     SHL EDX,CL
0044B7B9  C1 E8 05                  SHR EAX,0x5
0044B7BC  85 14 85 10 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800f10],EDX
0044B7C3  75 2C                     JNZ 0x0044b7f1
0044B7C5  8B 07                     MOV EAX,dword ptr [EDI]
0044B7C7  8B CF                     MOV ECX,EDI
0044B7C9  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0044B7CC  83 C0 41                  ADD EAX,0x41
0044B7CF  8B C8                     MOV ECX,EAX
0044B7D1  81 E1 1F 00 00 80         AND ECX,0x8000001f
0044B7D7  79 05                     JNS 0x0044b7de
0044B7D9  49                        DEC ECX
0044B7DA  83 C9 E0                  OR ECX,0xffffffe0
0044B7DD  41                        INC ECX
LAB_0044b7de:
0044B7DE  BA 01 00 00 00            MOV EDX,0x1
0044B7E3  D3 E2                     SHL EDX,CL
0044B7E5  C1 E8 05                  SHR EAX,0x5
0044B7E8  85 14 85 00 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800f00],EDX
0044B7EF  74 2B                     JZ 0x0044b81c
LAB_0044b7f1:
0044B7F1  8B 07                     MOV EAX,dword ptr [EDI]
0044B7F3  8B CF                     MOV ECX,EDI
0044B7F5  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0044B7FB  83 F8 01                  CMP EAX,0x1
0044B7FE  75 1C                     JNZ 0x0044b81c
0044B800  8B 17                     MOV EDX,dword ptr [EDI]
0044B802  8B CF                     MOV ECX,EDI
0044B804  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
0044B80A  83 F8 01                  CMP EAX,0x1
0044B80D  75 0D                     JNZ 0x0044b81c
0044B80F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044B812  83 C7 32                  ADD EDI,0x32
0044B815  57                        PUSH EDI
0044B816  50                        PUSH EAX
0044B817  E8 A4 29 26 00            CALL 0x006ae1c0
LAB_0044b81c:
0044B81C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044B81F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044B822  40                        INC EAX
0044B823  3B C1                     CMP EAX,ECX
0044B825  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0044B828  0F 8C 4D FF FF FF         JL 0x0044b77b
0044B82E  E9 E2 03 00 00            JMP 0x0044bc15
switchD_0044b629::caseD_3:
0044B833  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
0044B836  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0044B839  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
0044B83C  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
0044B83F  C1 E0 04                  SHL EAX,0x4
0044B842  03 C6                     ADD EAX,ESI
0044B844  8B 04 45 29 4E 7F 00      MOV EAX,dword ptr [EAX*0x2 + 0x7f4e29]
0044B84B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0044B84E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0044B851  3B C7                     CMP EAX,EDI
0044B853  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0044B856  0F 8E B9 03 00 00         JLE 0x0044bc15
LAB_0044b85c:
0044B85C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044B85F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044B862  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0044B865  8B 3C 82                  MOV EDI,dword ptr [EDX + EAX*0x4]
0044B868  85 FF                     TEST EDI,EDI
0044B86A  74 5D                     JZ 0x0044b8c9
0044B86C  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
0044B870  75 57                     JNZ 0x0044b8c9
0044B872  8B 17                     MOV EDX,dword ptr [EDI]
0044B874  8B CF                     MOV ECX,EDI
0044B876  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044B879  83 C0 41                  ADD EAX,0x41
0044B87C  8B C8                     MOV ECX,EAX
0044B87E  81 E1 1F 00 00 80         AND ECX,0x8000001f
0044B884  79 05                     JNS 0x0044b88b
0044B886  49                        DEC ECX
0044B887  83 C9 E0                  OR ECX,0xffffffe0
0044B88A  41                        INC ECX
LAB_0044b88b:
0044B88B  BA 01 00 00 00            MOV EDX,0x1
0044B890  D3 E2                     SHL EDX,CL
0044B892  C1 E8 05                  SHR EAX,0x5
0044B895  85 14 85 00 10 80 00      TEST dword ptr [EAX*0x4 + 0x801000],EDX
0044B89C  74 2B                     JZ 0x0044b8c9
0044B89E  8B 07                     MOV EAX,dword ptr [EDI]
0044B8A0  8B CF                     MOV ECX,EDI
0044B8A2  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0044B8A8  83 F8 01                  CMP EAX,0x1
0044B8AB  75 1C                     JNZ 0x0044b8c9
0044B8AD  8B 17                     MOV EDX,dword ptr [EDI]
0044B8AF  8B CF                     MOV ECX,EDI
0044B8B1  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
0044B8B7  83 F8 01                  CMP EAX,0x1
0044B8BA  75 0D                     JNZ 0x0044b8c9
0044B8BC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044B8BF  83 C7 32                  ADD EDI,0x32
0044B8C2  57                        PUSH EDI
0044B8C3  50                        PUSH EAX
0044B8C4  E8 F7 28 26 00            CALL 0x006ae1c0
LAB_0044b8c9:
0044B8C9  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044B8CC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044B8CF  40                        INC EAX
0044B8D0  3B C1                     CMP EAX,ECX
0044B8D2  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0044B8D5  7C 85                     JL 0x0044b85c
0044B8D7  E9 39 03 00 00            JMP 0x0044bc15
switchD_0044b629::caseD_4:
0044B8DC  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
0044B8DF  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0044B8E2  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
0044B8E5  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
0044B8E8  C1 E0 04                  SHL EAX,0x4
0044B8EB  03 C6                     ADD EAX,ESI
0044B8ED  8B 04 45 29 4E 7F 00      MOV EAX,dword ptr [EAX*0x2 + 0x7f4e29]
0044B8F4  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0044B8F7  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0044B8FA  3B C7                     CMP EAX,EDI
0044B8FC  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0044B8FF  0F 8E 10 03 00 00         JLE 0x0044bc15
LAB_0044b905:
0044B905  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044B908  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044B90B  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0044B90E  8B 3C 82                  MOV EDI,dword ptr [EDX + EAX*0x4]
0044B911  85 FF                     TEST EDI,EDI
0044B913  74 5D                     JZ 0x0044b972
0044B915  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
0044B919  75 57                     JNZ 0x0044b972
0044B91B  8B 17                     MOV EDX,dword ptr [EDI]
0044B91D  8B CF                     MOV ECX,EDI
0044B91F  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044B922  83 C0 41                  ADD EAX,0x41
0044B925  8B C8                     MOV ECX,EAX
0044B927  81 E1 1F 00 00 80         AND ECX,0x8000001f
0044B92D  79 05                     JNS 0x0044b934
0044B92F  49                        DEC ECX
0044B930  83 C9 E0                  OR ECX,0xffffffe0
0044B933  41                        INC ECX
LAB_0044b934:
0044B934  BA 01 00 00 00            MOV EDX,0x1
0044B939  D3 E2                     SHL EDX,CL
0044B93B  C1 E8 05                  SHR EAX,0x5
0044B93E  85 14 85 A0 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800fa0],EDX
0044B945  74 2B                     JZ 0x0044b972
0044B947  8B 07                     MOV EAX,dword ptr [EDI]
0044B949  8B CF                     MOV ECX,EDI
0044B94B  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0044B951  83 F8 01                  CMP EAX,0x1
0044B954  75 1C                     JNZ 0x0044b972
0044B956  8B 17                     MOV EDX,dword ptr [EDI]
0044B958  8B CF                     MOV ECX,EDI
0044B95A  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
0044B960  83 F8 01                  CMP EAX,0x1
0044B963  75 0D                     JNZ 0x0044b972
0044B965  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044B968  83 C7 32                  ADD EDI,0x32
0044B96B  57                        PUSH EDI
0044B96C  50                        PUSH EAX
0044B96D  E8 4E 28 26 00            CALL 0x006ae1c0
LAB_0044b972:
0044B972  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044B975  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044B978  40                        INC EAX
0044B979  3B C1                     CMP EAX,ECX
0044B97B  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0044B97E  7C 85                     JL 0x0044b905
0044B980  E9 90 02 00 00            JMP 0x0044bc15
switchD_0044b629::caseD_5:
0044B985  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
0044B988  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0044B98B  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
0044B98E  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
0044B991  C1 E0 04                  SHL EAX,0x4
0044B994  03 C6                     ADD EAX,ESI
0044B996  8B 04 45 29 4E 7F 00      MOV EAX,dword ptr [EAX*0x2 + 0x7f4e29]
0044B99D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0044B9A0  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0044B9A3  3B C7                     CMP EAX,EDI
0044B9A5  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0044B9A8  0F 8E 67 02 00 00         JLE 0x0044bc15
LAB_0044b9ae:
0044B9AE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044B9B1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044B9B4  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0044B9B7  8B 3C 82                  MOV EDI,dword ptr [EDX + EAX*0x4]
0044B9BA  85 FF                     TEST EDI,EDI
0044B9BC  74 5D                     JZ 0x0044ba1b
0044B9BE  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
0044B9C2  75 57                     JNZ 0x0044ba1b
0044B9C4  8B 17                     MOV EDX,dword ptr [EDI]
0044B9C6  8B CF                     MOV ECX,EDI
0044B9C8  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044B9CB  83 C0 41                  ADD EAX,0x41
0044B9CE  8B C8                     MOV ECX,EAX
0044B9D0  81 E1 1F 00 00 80         AND ECX,0x8000001f
0044B9D6  79 05                     JNS 0x0044b9dd
0044B9D8  49                        DEC ECX
0044B9D9  83 C9 E0                  OR ECX,0xffffffe0
0044B9DC  41                        INC ECX
LAB_0044b9dd:
0044B9DD  BA 01 00 00 00            MOV EDX,0x1
0044B9E2  D3 E2                     SHL EDX,CL
0044B9E4  C1 E8 05                  SHR EAX,0x5
0044B9E7  85 14 85 10 10 80 00      TEST dword ptr [EAX*0x4 + 0x801010],EDX
0044B9EE  74 2B                     JZ 0x0044ba1b
0044B9F0  8B 07                     MOV EAX,dword ptr [EDI]
0044B9F2  8B CF                     MOV ECX,EDI
0044B9F4  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0044B9FA  83 F8 01                  CMP EAX,0x1
0044B9FD  75 1C                     JNZ 0x0044ba1b
0044B9FF  8B 17                     MOV EDX,dword ptr [EDI]
0044BA01  8B CF                     MOV ECX,EDI
0044BA03  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
0044BA09  83 F8 01                  CMP EAX,0x1
0044BA0C  75 0D                     JNZ 0x0044ba1b
0044BA0E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044BA11  83 C7 32                  ADD EDI,0x32
0044BA14  57                        PUSH EDI
0044BA15  50                        PUSH EAX
0044BA16  E8 A5 27 26 00            CALL 0x006ae1c0
LAB_0044ba1b:
0044BA1B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044BA1E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044BA21  40                        INC EAX
0044BA22  3B C1                     CMP EAX,ECX
0044BA24  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0044BA27  7C 85                     JL 0x0044b9ae
0044BA29  E9 E7 01 00 00            JMP 0x0044bc15
switchD_0044b629::caseD_6:
0044BA2E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0044BA31  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0044BA34  6A 01                     PUSH 0x1
0044BA36  6A 0E                     PUSH 0xe
0044BA38  51                        PUSH ECX
0044BA39  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0044BA3F  52                        PUSH EDX
0044BA40  E8 0B F9 29 00            CALL 0x006eb350
0044BA45  8B F8                     MOV EDI,EAX
0044BA47  85 FF                     TEST EDI,EDI
0044BA49  0F 84 C6 01 00 00         JZ 0x0044bc15
0044BA4F  39 77 24                  CMP dword ptr [EDI + 0x24],ESI
0044BA52  0F 85 BD 01 00 00         JNZ 0x0044bc15
0044BA58  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
0044BA5C  0F 85 B3 01 00 00         JNZ 0x0044bc15
0044BA62  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044BA65  50                        PUSH EAX
0044BA66  E8 A5 26 26 00            CALL 0x006ae110
0044BA6B  8B 15 1C 74 80 00         MOV EDX,dword ptr [0x0080741c]
0044BA71  A1 18 74 80 00            MOV EAX,[0x00807418]
0044BA76  8D 4D F8                  LEA ECX,[EBP + -0x8]
0044BA79  6A 00                     PUSH 0x0
0044BA7B  51                        PUSH ECX
0044BA7C  8B 0D 14 74 80 00         MOV ECX,dword ptr [0x00807414]
0044BA82  52                        PUSH EDX
0044BA83  8B 15 10 74 80 00         MOV EDX,dword ptr [0x00807410]
0044BA89  50                        PUSH EAX
0044BA8A  51                        PUSH ECX
0044BA8B  52                        PUSH EDX
0044BA8C  56                        PUSH ESI
0044BA8D  8B CB                     MOV ECX,EBX
0044BA8F  E8 93 97 FB FF            CALL 0x00405227
0044BA94  8B 07                     MOV EAX,dword ptr [EDI]
0044BA96  6A FF                     PUSH -0x1
0044BA98  6A 00                     PUSH 0x0
0044BA9A  8B CF                     MOV ECX,EDI
0044BA9C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0044BA9F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044BAA2  50                        PUSH EAX
0044BAA3  51                        PUSH ECX
0044BAA4  56                        PUSH ESI
0044BAA5  8B CB                     MOV ECX,EBX
0044BAA7  E8 04 96 FB FF            CALL 0x004050b0
0044BAAC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0044BAAF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0044BAB2  52                        PUSH EDX
0044BAB3  E8 58 26 26 00            CALL 0x006ae110
0044BAB8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044BABB  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
0044BAC2  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0044BAC5  85 C0                     TEST EAX,EAX
0044BAC7  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0044BACA  0F 8E 45 01 00 00         JLE 0x0044bc15
LAB_0044bad0:
0044BAD0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044BAD3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044BAD6  6A 01                     PUSH 0x1
0044BAD8  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0044BADB  66 8B 0C 42               MOV CX,word ptr [EDX + EAX*0x2]
0044BADF  51                        PUSH ECX
0044BAE0  56                        PUSH ESI
0044BAE1  8B CB                     MOV ECX,EBX
0044BAE3  E8 D2 6D FB FF            CALL 0x004028ba
0044BAE8  8B F8                     MOV EDI,EAX
0044BAEA  85 FF                     TEST EDI,EDI
0044BAEC  74 22                     JZ 0x0044bb10
0044BAEE  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
0044BAF2  75 1C                     JNZ 0x0044bb10
0044BAF4  8B 17                     MOV EDX,dword ptr [EDI]
0044BAF6  8B CF                     MOV ECX,EDI
0044BAF8  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0044BAFE  85 C0                     TEST EAX,EAX
0044BB00  74 0E                     JZ 0x0044bb10
0044BB02  8B 07                     MOV EAX,dword ptr [EDI]
0044BB04  8B CF                     MOV ECX,EDI
0044BB06  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
0044BB0C  85 C0                     TEST EAX,EAX
0044BB0E  75 17                     JNZ 0x0044bb27
LAB_0044bb10:
0044BB10  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0044BB13  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044BB16  57                        PUSH EDI
0044BB17  51                        PUSH ECX
0044BB18  E8 53 51 26 00            CALL 0x006b0c70
0044BB1D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044BB20  49                        DEC ECX
0044BB21  4F                        DEC EDI
0044BB22  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0044BB25  EB 03                     JMP 0x0044bb2a
LAB_0044bb27:
0044BB27  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_0044bb2a:
0044BB2A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044BB2D  47                        INC EDI
0044BB2E  3B F8                     CMP EDI,EAX
0044BB30  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0044BB33  7C 9B                     JL 0x0044bad0
0044BB35  E9 DB 00 00 00            JMP 0x0044bc15
switchD_0044b629::caseD_7:
0044BB3A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0044BB3D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044BB40  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0044BB46  6A 01                     PUSH 0x1
0044BB48  6A 0E                     PUSH 0xe
0044BB4A  52                        PUSH EDX
0044BB4B  50                        PUSH EAX
0044BB4C  E8 FF F7 29 00            CALL 0x006eb350
0044BB51  3B C7                     CMP EAX,EDI
0044BB53  0F 84 BC 00 00 00         JZ 0x0044bc15
0044BB59  39 70 24                  CMP dword ptr [EAX + 0x24],ESI
0044BB5C  0F 85 B3 00 00 00         JNZ 0x0044bc15
0044BB62  83 78 20 14               CMP dword ptr [EAX + 0x20],0x14
0044BB66  0F 85 A9 00 00 00         JNZ 0x0044bc15
0044BB6C  66 8B 40 30               MOV AX,word ptr [EAX + 0x30]
0044BB70  66 3D FF FF               CMP AX,0xffff
0044BB74  0F 84 9B 00 00 00         JZ 0x0044bc15
0044BB7A  50                        PUSH EAX
0044BB7B  56                        PUSH ESI
0044BB7C  8B CB                     MOV ECX,EBX
0044BB7E  E8 76 A1 FB FF            CALL 0x00405cf9
0044BB83  8B F8                     MOV EDI,EAX
0044BB85  85 FF                     TEST EDI,EDI
0044BB87  0F 84 88 00 00 00         JZ 0x0044bc15
0044BB8D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044BB90  51                        PUSH ECX
0044BB91  E8 7A 25 26 00            CALL 0x006ae110
0044BB96  8B CF                     MOV ECX,EDI
0044BB98  E8 18 72 FB FF            CALL 0x00402db5
0044BB9D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0044BBA0  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0044BBA3  33 FF                     XOR EDI,EDI
0044BBA5  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0044BBA8  85 C0                     TEST EAX,EAX
0044BBAA  7E 69                     JLE 0x0044bc15
LAB_0044bbac:
0044BBAC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044BBAF  8D 55 F0                  LEA EDX,[EBP + -0x10]
0044BBB2  52                        PUSH EDX
0044BBB3  8B D7                     MOV EDX,EDI
0044BBB5  E8 B6 10 26 00            CALL 0x006acc70
0044BBBA  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0044BBBD  6A 01                     PUSH 0x1
0044BBBF  50                        PUSH EAX
0044BBC0  56                        PUSH ESI
0044BBC1  8B CB                     MOV ECX,EBX
0044BBC3  E8 F2 6C FB FF            CALL 0x004028ba
0044BBC8  8B 10                     MOV EDX,dword ptr [EAX]
0044BBCA  8B C8                     MOV ECX,EAX
0044BBCC  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
0044BBD2  85 C0                     TEST EAX,EAX
0044BBD4  75 12                     JNZ 0x0044bbe8
0044BBD6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044BBD9  57                        PUSH EDI
0044BBDA  50                        PUSH EAX
0044BBDB  E8 90 50 26 00            CALL 0x006b0c70
0044BBE0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044BBE3  49                        DEC ECX
0044BBE4  4F                        DEC EDI
0044BBE5  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_0044bbe8:
0044BBE8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044BBEB  47                        INC EDI
0044BBEC  3B F8                     CMP EDI,EAX
0044BBEE  7C BC                     JL 0x0044bbac
0044BBF0  EB 23                     JMP 0x0044bc15
switchD_0044b629::default:
0044BBF2  68 58 8A 7A 00            PUSH 0x7a8a58
0044BBF7  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044BBFC  57                        PUSH EDI
0044BBFD  57                        PUSH EDI
0044BBFE  68 23 31 00 00            PUSH 0x3123
0044BC03  68 04 60 7A 00            PUSH 0x7a6004
0044BC08  E8 C3 18 26 00            CALL 0x006ad4d0
0044BC0D  83 C4 18                  ADD ESP,0x18
0044BC10  85 C0                     TEST EAX,EAX
0044BC12  74 01                     JZ 0x0044bc15
0044BC14  CC                        INT3
LAB_0044bc15:
0044BC15  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044BC18  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0044BC1B  85 C0                     TEST EAX,EAX
0044BC1D  75 0F                     JNZ 0x0044bc2e
0044BC1F  51                        PUSH ECX
0044BC20  E8 EB 24 26 00            CALL 0x006ae110
0044BC25  5F                        POP EDI
0044BC26  5E                        POP ESI
0044BC27  5B                        POP EBX
0044BC28  8B E5                     MOV ESP,EBP
0044BC2A  5D                        POP EBP
0044BC2B  C2 0C 00                  RET 0xc
LAB_0044bc2e:
0044BC2E  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
0044BC31  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
0044BC34  8D 3C 46                  LEA EDI,[ESI + EAX*0x2]
0044BC37  C1 E7 04                  SHL EDI,0x4
0044BC3A  03 FE                     ADD EDI,ESI
0044BC3C  D1 E7                     SHL EDI,0x1
0044BC3E  8B 87 23 50 7F 00         MOV EAX,dword ptr [EDI + 0x7f5023]
0044BC44  83 E8 00                  SUB EAX,0x0
0044BC47  0F 84 47 01 00 00         JZ 0x0044bd94
0044BC4D  48                        DEC EAX
0044BC4E  74 2E                     JZ 0x0044bc7e
0044BC50  68 0C 8A 7A 00            PUSH 0x7a8a0c
0044BC55  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044BC5A  6A 00                     PUSH 0x0
0044BC5C  6A 00                     PUSH 0x0
0044BC5E  68 7D 31 00 00            PUSH 0x317d
0044BC63  68 04 60 7A 00            PUSH 0x7a6004
0044BC68  E8 63 18 26 00            CALL 0x006ad4d0
0044BC6D  83 C4 18                  ADD ESP,0x18
0044BC70  85 C0                     TEST EAX,EAX
0044BC72  0F 84 DB 00 00 00         JZ 0x0044bd53
0044BC78  CC                        INT3
LAB_0044bc7e:
0044BC7E  6A 00                     PUSH 0x0
0044BC80  6A 00                     PUSH 0x0
0044BC82  6A 01                     PUSH 0x1
0044BC84  56                        PUSH ESI
0044BC85  8B CB                     MOV ECX,EBX
0044BC87  C7 87 23 50 7F 00 00 00 00 00  MOV dword ptr [EDI + 0x7f5023],0x0
0044BC91  E8 51 76 FB FF            CALL 0x004032e7
0044BC96  8B 87 83 4F 7F 00         MOV EAX,dword ptr [EDI + 0x7f4f83]
0044BC9C  85 C0                     TEST EAX,EAX
0044BC9E  0F 84 C8 00 00 00         JZ 0x0044bd6c
0044BCA4  83 F8 3C                  CMP EAX,0x3c
0044BCA7  74 62                     JZ 0x0044bd0b
0044BCA9  3D AE 01 00 00            CMP EAX,0x1ae
0044BCAE  74 27                     JZ 0x0044bcd7
0044BCB0  68 CC 89 7A 00            PUSH 0x7a89cc
0044BCB5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044BCBA  6A 00                     PUSH 0x0
0044BCBC  6A 00                     PUSH 0x0
0044BCBE  68 79 31 00 00            PUSH 0x3179
0044BCC3  68 04 60 7A 00            PUSH 0x7a6004
0044BCC8  E8 03 18 26 00            CALL 0x006ad4d0
0044BCCD  83 C4 18                  ADD ESP,0x18
0044BCD0  85 C0                     TEST EAX,EAX
0044BCD2  74 7F                     JZ 0x0044bd53
0044BCD4  CC                        INT3
LAB_0044bcd7:
0044BCD7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044BCDA  6A 00                     PUSH 0x0
0044BCDC  51                        PUSH ECX
0044BCDD  56                        PUSH ESI
0044BCDE  6A 3C                     PUSH 0x3c
0044BCE0  6A 00                     PUSH 0x0
0044BCE2  56                        PUSH ESI
0044BCE3  8B CB                     MOV ECX,EBX
0044BCE5  E8 85 5C FB FF            CALL 0x0040196f
0044BCEA  85 C0                     TEST EAX,EAX
0044BCEC  7E 0D                     JLE 0x0044bcfb
0044BCEE  50                        PUSH EAX
0044BCEF  6A 00                     PUSH 0x0
0044BCF1  56                        PUSH ESI
0044BCF2  8B CB                     MOV ECX,EBX
0044BCF4  E8 86 74 FB FF            CALL 0x0040317f
0044BCF9  EB 58                     JMP 0x0044bd53
LAB_0044bcfb:
0044BCFB  6A 00                     PUSH 0x0
0044BCFD  56                        PUSH ESI
0044BCFE  8B CB                     MOV ECX,EBX
0044BD00  E8 1B 9C FB FF            CALL 0x00405920
0044BD05  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044BD08  52                        PUSH EDX
0044BD09  EB 32                     JMP 0x0044bd3d
LAB_0044bd0b:
0044BD0B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044BD0E  6A 00                     PUSH 0x0
0044BD10  50                        PUSH EAX
0044BD11  56                        PUSH ESI
0044BD12  6A 3C                     PUSH 0x3c
0044BD14  6A 00                     PUSH 0x0
0044BD16  56                        PUSH ESI
0044BD17  8B CB                     MOV ECX,EBX
0044BD19  E8 51 5C FB FF            CALL 0x0040196f
0044BD1E  85 C0                     TEST EAX,EAX
0044BD20  7C 0D                     JL 0x0044bd2f
0044BD22  50                        PUSH EAX
0044BD23  6A 00                     PUSH 0x0
0044BD25  56                        PUSH ESI
0044BD26  8B CB                     MOV ECX,EBX
0044BD28  E8 52 74 FB FF            CALL 0x0040317f
0044BD2D  EB 24                     JMP 0x0044bd53
LAB_0044bd2f:
0044BD2F  6A 00                     PUSH 0x0
0044BD31  56                        PUSH ESI
0044BD32  8B CB                     MOV ECX,EBX
0044BD34  E8 E7 9B FB FF            CALL 0x00405920
LAB_0044bd39:
0044BD39  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044BD3C  51                        PUSH ECX
LAB_0044bd3d:
0044BD3D  6A 00                     PUSH 0x0
0044BD3F  6A 00                     PUSH 0x0
0044BD41  56                        PUSH ESI
0044BD42  8B CB                     MOV ECX,EBX
0044BD44  E8 75 9E FB FF            CALL 0x00405bbe
LAB_0044bd49:
0044BD49  C7 87 83 4F 7F 00 3C 00 00 00  MOV dword ptr [EDI + 0x7f4f83],0x3c
LAB_0044bd53:
0044BD53  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044BD56  52                        PUSH EDX
0044BD57  E8 B4 23 26 00            CALL 0x006ae110
0044BD5C  8B CB                     MOV ECX,EBX
0044BD5E  E8 7B 6A FB FF            CALL 0x004027de
0044BD63  5F                        POP EDI
0044BD64  5E                        POP ESI
0044BD65  5B                        POP EBX
0044BD66  8B E5                     MOV ESP,EBP
0044BD68  5D                        POP EBP
0044BD69  C2 0C 00                  RET 0xc
LAB_0044bd6c:
0044BD6C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0044BD6F  6A 00                     PUSH 0x0
0044BD71  52                        PUSH EDX
0044BD72  56                        PUSH ESI
0044BD73  6A 3C                     PUSH 0x3c
0044BD75  6A 00                     PUSH 0x0
0044BD77  56                        PUSH ESI
0044BD78  8B CB                     MOV ECX,EBX
0044BD7A  E8 F0 5B FB FF            CALL 0x0040196f
0044BD7F  85 C0                     TEST EAX,EAX
0044BD81  0F 8E 18 01 00 00         JLE 0x0044be9f
0044BD87  50                        PUSH EAX
0044BD88  6A 00                     PUSH 0x0
0044BD8A  56                        PUSH ESI
0044BD8B  8B CB                     MOV ECX,EBX
0044BD8D  E8 ED 73 FB FF            CALL 0x0040317f
0044BD92  EB B5                     JMP 0x0044bd49
LAB_0044bd94:
0044BD94  8B 87 83 4F 7F 00         MOV EAX,dword ptr [EDI + 0x7f4f83]
0044BD9A  85 C0                     TEST EAX,EAX
0044BD9C  0F 84 06 01 00 00         JZ 0x0044bea8
0044BDA2  83 F8 3C                  CMP EAX,0x3c
0044BDA5  74 72                     JZ 0x0044be19
0044BDA7  3D AE 01 00 00            CMP EAX,0x1ae
0044BDAC  74 2A                     JZ 0x0044bdd8
0044BDAE  68 8C 89 7A 00            PUSH 0x7a898c
0044BDB3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044BDB8  6A 00                     PUSH 0x0
0044BDBA  6A 00                     PUSH 0x0
0044BDBC  68 52 31 00 00            PUSH 0x3152
0044BDC1  68 04 60 7A 00            PUSH 0x7a6004
0044BDC6  E8 05 17 26 00            CALL 0x006ad4d0
0044BDCB  83 C4 18                  ADD ESP,0x18
0044BDCE  85 C0                     TEST EAX,EAX
0044BDD0  74 81                     JZ 0x0044bd53
0044BDD2  CC                        INT3
LAB_0044bdd8:
0044BDD8  6A 00                     PUSH 0x0
0044BDDA  51                        PUSH ECX
0044BDDB  56                        PUSH ESI
0044BDDC  6A 3C                     PUSH 0x3c
0044BDDE  6A 00                     PUSH 0x0
0044BDE0  56                        PUSH ESI
0044BDE1  8B CB                     MOV ECX,EBX
0044BDE3  E8 87 5B FB FF            CALL 0x0040196f
0044BDE8  85 C0                     TEST EAX,EAX
0044BDEA  7E 10                     JLE 0x0044bdfc
0044BDEC  50                        PUSH EAX
0044BDED  6A 00                     PUSH 0x0
0044BDEF  56                        PUSH ESI
0044BDF0  8B CB                     MOV ECX,EBX
0044BDF2  E8 88 73 FB FF            CALL 0x0040317f
0044BDF7  E9 57 FF FF FF            JMP 0x0044bd53
LAB_0044bdfc:
0044BDFC  6A 00                     PUSH 0x0
0044BDFE  56                        PUSH ESI
0044BDFF  8B CB                     MOV ECX,EBX
0044BE01  E8 1A 9B FB FF            CALL 0x00405920
0044BE06  6A 00                     PUSH 0x0
0044BE08  6A 01                     PUSH 0x1
0044BE0A  6A 00                     PUSH 0x0
0044BE0C  56                        PUSH ESI
0044BE0D  8B CB                     MOV ECX,EBX
0044BE0F  E8 D3 74 FB FF            CALL 0x004032e7
0044BE14  E9 20 FF FF FF            JMP 0x0044bd39
LAB_0044be19:
0044BE19  6A 00                     PUSH 0x0
0044BE1B  51                        PUSH ECX
0044BE1C  56                        PUSH ESI
0044BE1D  6A 3C                     PUSH 0x3c
0044BE1F  6A 00                     PUSH 0x0
0044BE21  56                        PUSH ESI
0044BE22  8B CB                     MOV ECX,EBX
0044BE24  E8 46 5B FB FF            CALL 0x0040196f
0044BE29  85 C0                     TEST EAX,EAX
0044BE2B  7E 10                     JLE 0x0044be3d
0044BE2D  50                        PUSH EAX
0044BE2E  6A 00                     PUSH 0x0
0044BE30  56                        PUSH ESI
0044BE31  8B CB                     MOV ECX,EBX
0044BE33  E8 47 73 FB FF            CALL 0x0040317f
0044BE38  E9 16 FF FF FF            JMP 0x0044bd53
LAB_0044be3d:
0044BE3D  0F 8D 10 FF FF FF         JGE 0x0044bd53
0044BE43  6A 00                     PUSH 0x0
0044BE45  56                        PUSH ESI
0044BE46  8B CB                     MOV ECX,EBX
0044BE48  E8 D3 9A FB FF            CALL 0x00405920
0044BE4D  8B 87 97 4F 7F 00         MOV EAX,dword ptr [EDI + 0x7f4f97]
0044BE53  6A 00                     PUSH 0x0
0044BE55  3B C6                     CMP EAX,ESI
0044BE57  75 3A                     JNZ 0x0044be93
0044BE59  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044BE5C  8D 55 F4                  LEA EDX,[EBP + -0xc]
0044BE5F  6A 00                     PUSH 0x0
0044BE61  52                        PUSH EDX
0044BE62  50                        PUSH EAX
0044BE63  6A 01                     PUSH 0x1
0044BE65  6A 00                     PUSH 0x0
0044BE67  56                        PUSH ESI
0044BE68  8B CB                     MOV ECX,EBX
0044BE6A  E8 67 62 FB FF            CALL 0x004020d6
0044BE6F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0044BE72  6A 00                     PUSH 0x0
0044BE74  6A 00                     PUSH 0x0
0044BE76  51                        PUSH ECX
0044BE77  6A 3C                     PUSH 0x3c
0044BE79  56                        PUSH ESI
0044BE7A  8B CB                     MOV ECX,EBX
0044BE7C  E8 3F 69 FB FF            CALL 0x004027c0
0044BE81  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0044BE84  52                        PUSH EDX
0044BE85  E8 86 22 26 00            CALL 0x006ae110
0044BE8A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044BE8D  50                        PUSH EAX
0044BE8E  E9 AA FE FF FF            JMP 0x0044bd3d
LAB_0044be93:
0044BE93  6A 01                     PUSH 0x1
0044BE95  6A 00                     PUSH 0x0
0044BE97  56                        PUSH ESI
0044BE98  8B CB                     MOV ECX,EBX
0044BE9A  E8 48 74 FB FF            CALL 0x004032e7
LAB_0044be9f:
0044BE9F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044BEA2  50                        PUSH EAX
0044BEA3  E9 95 FE FF FF            JMP 0x0044bd3d
LAB_0044bea8:
0044BEA8  6A 00                     PUSH 0x0
0044BEAA  51                        PUSH ECX
0044BEAB  56                        PUSH ESI
0044BEAC  6A 3C                     PUSH 0x3c
0044BEAE  6A 00                     PUSH 0x0
0044BEB0  56                        PUSH ESI
0044BEB1  8B CB                     MOV ECX,EBX
0044BEB3  E8 B7 5A FB FF            CALL 0x0040196f
0044BEB8  85 C0                     TEST EAX,EAX
0044BEBA  0F 8E 79 FE FF FF         JLE 0x0044bd39
0044BEC0  50                        PUSH EAX
0044BEC1  6A 00                     PUSH 0x0
0044BEC3  56                        PUSH ESI
0044BEC4  8B CB                     MOV ECX,EBX
0044BEC6  E8 B4 72 FB FF            CALL 0x0040317f
0044BECB  E9 79 FE FF FF            JMP 0x0044bd49
