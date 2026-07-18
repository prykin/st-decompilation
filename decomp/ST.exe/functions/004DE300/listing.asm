FUN_004de300:
004DE300  55                        PUSH EBP
004DE301  8B EC                     MOV EBP,ESP
004DE303  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DE306  53                        PUSH EBX
004DE307  33 DB                     XOR EBX,EBX
004DE309  57                        PUSH EDI
004DE30A  83 F8 07                  CMP EAX,0x7
004DE30D  8B F9                     MOV EDI,ECX
004DE30F  77 3D                     JA 0x004de34e
switchD_004de311::switchD:
004DE311  FF 24 85 A8 E3 4D 00      JMP dword ptr [EAX*0x4 + 0x4de3a8]
switchD_004de311::caseD_0:
004DE318  BB BC 00 00 00            MOV EBX,0xbc
004DE31D  EB 2F                     JMP 0x004de34e
switchD_004de311::caseD_1:
004DE31F  BB B3 00 00 00            MOV EBX,0xb3
004DE324  EB 28                     JMP 0x004de34e
switchD_004de311::caseD_2:
004DE326  BB B5 00 00 00            MOV EBX,0xb5
004DE32B  EB 21                     JMP 0x004de34e
switchD_004de311::caseD_3:
004DE32D  BB BD 00 00 00            MOV EBX,0xbd
004DE332  EB 1A                     JMP 0x004de34e
switchD_004de311::caseD_4:
004DE334  BB AD 00 00 00            MOV EBX,0xad
004DE339  EB 13                     JMP 0x004de34e
switchD_004de311::caseD_5:
004DE33B  BB B8 00 00 00            MOV EBX,0xb8
004DE340  EB 0C                     JMP 0x004de34e
switchD_004de311::caseD_6:
004DE342  BB AE 00 00 00            MOV EBX,0xae
004DE347  EB 05                     JMP 0x004de34e
switchD_004de311::caseD_7:
004DE349  BB BE 00 00 00            MOV EBX,0xbe
switchD_004de311::default:
004DE34E  8B 8F D0 04 00 00         MOV ECX,dword ptr [EDI + 0x4d0]
004DE354  8D 87 D0 04 00 00         LEA EAX,[EDI + 0x4d0]
004DE35A  85 C9                     TEST ECX,ECX
004DE35C  7C 42                     JL 0x004de3a0
004DE35E  56                        PUSH ESI
004DE35F  8D B7 DC 04 00 00         LEA ESI,[EDI + 0x4dc]
LAB_004de365:
004DE365  39 18                     CMP dword ptr [EAX],EBX
004DE367  75 21                     JNZ 0x004de38a
004DE369  8B 0E                     MOV ECX,dword ptr [ESI]
004DE36B  33 C0                     XOR EAX,EAX
004DE36D  85 C9                     TEST ECX,ECX
004DE36F  0F 94 C0                  SETZ AL
004DE372  89 06                     MOV dword ptr [ESI],EAX
004DE374  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DE37A  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004DE380  8B CF                     MOV ECX,EDI
004DE382  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
004DE385  E8 BF 5B F2 FF            CALL 0x00403f49
LAB_004de38a:
004DE38A  83 C6 14                  ADD ESI,0x14
004DE38D  8B 4E F4                  MOV ECX,dword ptr [ESI + -0xc]
004DE390  8D 46 F4                  LEA EAX,[ESI + -0xc]
004DE393  85 C9                     TEST ECX,ECX
004DE395  7D CE                     JGE 0x004de365
004DE397  5E                        POP ESI
004DE398  5F                        POP EDI
004DE399  33 C0                     XOR EAX,EAX
004DE39B  5B                        POP EBX
004DE39C  5D                        POP EBP
004DE39D  C2 04 00                  RET 0x4
LAB_004de3a0:
004DE3A0  5F                        POP EDI
004DE3A1  33 C0                     XOR EAX,EAX
004DE3A3  5B                        POP EBX
004DE3A4  5D                        POP EBP
004DE3A5  C2 04 00                  RET 0x4
