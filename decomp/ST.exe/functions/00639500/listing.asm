FUN_00639500:
00639500  55                        PUSH EBP
00639501  8B EC                     MOV EBP,ESP
00639503  53                        PUSH EBX
00639504  56                        PUSH ESI
00639505  8B F1                     MOV ESI,ECX
00639507  57                        PUSH EDI
00639508  0F BF 96 49 02 00 00      MOVSX EDX,word ptr [ESI + 0x249]
0063950F  0F BF 86 45 02 00 00      MOVSX EAX,word ptr [ESI + 0x245]
00639516  89 96 82 02 00 00         MOV dword ptr [ESI + 0x282],EDX
0063951C  89 86 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EAX
00639522  0F BF 96 4B 02 00 00      MOVSX EDX,word ptr [ESI + 0x24b]
00639529  0F BF 8E 47 02 00 00      MOVSX ECX,word ptr [ESI + 0x247]
00639530  8B FA                     MOV EDI,EDX
00639532  89 8E 7E 02 00 00         MOV dword ptr [ESI + 0x27e],ECX
00639538  2B F8                     SUB EDI,EAX
0063953A  89 BE 5F 02 00 00         MOV dword ptr [ESI + 0x25f],EDI
00639540  0F BF BE 4D 02 00 00      MOVSX EDI,word ptr [ESI + 0x24d]
00639547  8B DF                     MOV EBX,EDI
00639549  57                        PUSH EDI
0063954A  52                        PUSH EDX
0063954B  2B D9                     SUB EBX,ECX
0063954D  51                        PUSH ECX
0063954E  50                        PUSH EAX
0063954F  89 9E 63 02 00 00         MOV dword ptr [ESI + 0x263],EBX
00639555  E8 7E 39 07 00            CALL 0x006aced8
0063955A  0F BF BE 49 02 00 00      MOVSX EDI,word ptr [ESI + 0x249]
00639561  83 C4 10                  ADD ESP,0x10
00639564  89 86 67 02 00 00         MOV dword ptr [ESI + 0x267],EAX
0063956A  85 C0                     TEST EAX,EAX
0063956C  BB 01 00 00 00            MOV EBX,0x1
00639571  75 06                     JNZ 0x00639579
00639573  89 9E 67 02 00 00         MOV dword ptr [ESI + 0x267],EBX
LAB_00639579:
00639579  8B 8E 67 02 00 00         MOV ECX,dword ptr [ESI + 0x267]
0063957F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00639584  83 E9 64                  SUB ECX,0x64
00639587  F7 E9                     IMUL ECX
00639589  C1 FA 04                  SAR EDX,0x4
0063958C  8B C2                     MOV EAX,EDX
0063958E  C1 E8 1F                  SHR EAX,0x1f
00639591  03 D0                     ADD EDX,EAX
00639593  79 02                     JNS 0x00639597
00639595  33 D2                     XOR EDX,EDX
LAB_00639597:
00639597  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
0063959A  C1 E0 02                  SHL EAX,0x2
0063959D  8B 88 C0 1D 7D 00         MOV ECX,dword ptr [EAX + 0x7d1dc0]
006395A3  8B 90 C4 1D 7D 00         MOV EDX,dword ptr [EAX + 0x7d1dc4]
006395A9  0F AF CF                  IMUL ECX,EDI
006395AC  03 CA                     ADD ECX,EDX
006395AE  8B 90 C8 1D 7D 00         MOV EDX,dword ptr [EAX + 0x7d1dc8]
006395B4  0F AF CF                  IMUL ECX,EDI
006395B7  03 CA                     ADD ECX,EDX
006395B9  B8 35 87 FC 09            MOV EAX,0x9fc8735
006395BE  F7 E9                     IMUL ECX
006395C0  C1 FA 0C                  SAR EDX,0xc
006395C3  8B 86 51 02 00 00         MOV EAX,dword ptr [ESI + 0x251]
006395C9  8B CA                     MOV ECX,EDX
006395CB  C1 E9 1F                  SHR ECX,0x1f
006395CE  03 D1                     ADD EDX,ECX
006395D0  89 96 6B 02 00 00         MOV dword ptr [ESI + 0x26b],EDX
006395D6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006395D9  85 C0                     TEST EAX,EAX
006395DB  89 96 A3 02 00 00         MOV dword ptr [ESI + 0x2a3],EDX
006395E1  74 06                     JZ 0x006395e9
006395E3  88 9E 6F 02 00 00         MOV byte ptr [ESI + 0x26f],BL
LAB_006395e9:
006395E9  5F                        POP EDI
006395EA  5E                        POP ESI
006395EB  5B                        POP EBX
006395EC  5D                        POP EBP
006395ED  C2 04 00                  RET 0x4
