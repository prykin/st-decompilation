SettMapMTy::DeleteCtrls:
005CC840  55                        PUSH EBP
005CC841  8B EC                     MOV EBP,ESP
005CC843  83 EC 48                  SUB ESP,0x48
005CC846  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005CC84B  53                        PUSH EBX
005CC84C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005CC84F  33 DB                     XOR EBX,EBX
005CC851  56                        PUSH ESI
005CC852  8D 55 BC                  LEA EDX,[EBP + -0x44]
005CC855  8D 4D B8                  LEA ECX,[EBP + -0x48]
005CC858  53                        PUSH EBX
005CC859  52                        PUSH EDX
005CC85A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005CC85D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CC863  E8 88 0F 16 00            CALL 0x0072d7f0
005CC868  8B F0                     MOV ESI,EAX
005CC86A  83 C4 08                  ADD ESP,0x8
005CC86D  3B F3                     CMP ESI,EBX
005CC86F  0F 85 9E 02 00 00         JNZ 0x005ccb13
005CC875  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005CC87A  3B C3                     CMP EAX,EBX
005CC87C  74 28                     JZ 0x005cc8a6
005CC87E  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
005CC884  74 14                     JZ 0x005cc89a
005CC886  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005CC889  83 F9 FF                  CMP ECX,-0x1
005CC88C  74 18                     JZ 0x005cc8a6
005CC88E  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005CC891  51                        PUSH ECX
005CC892  50                        PUSH EAX
005CC893  E8 58 72 0E 00            CALL 0x006b3af0
005CC898  EB 0C                     JMP 0x005cc8a6
LAB_005cc89a:
005CC89A  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005CC8A0  51                        PUSH ECX
005CC8A1  E8 6A C2 0E 00            CALL 0x006b8b10
LAB_005cc8a6:
005CC8A6  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005CC8A9  53                        PUSH EBX
005CC8AA  53                        PUSH EBX
005CC8AB  53                        PUSH EBX
005CC8AC  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
005CC8AF  53                        PUSH EBX
005CC8B0  53                        PUSH EBX
005CC8B1  53                        PUSH EBX
005CC8B2  6A 1C                     PUSH 0x1c
005CC8B4  6A 02                     PUSH 0x2
005CC8B6  68 A1 C0 00 00            PUSH 0xc0a1
005CC8BB  6A 02                     PUSH 0x2
005CC8BD  52                        PUSH EDX
005CC8BE  53                        PUSH EBX
005CC8BF  E8 FB 64 E3 FF            CALL 0x00402dbf
005CC8C4  8B 86 FC 21 00 00         MOV EAX,dword ptr [ESI + 0x21fc]
005CC8CA  83 C4 30                  ADD ESP,0x30
005CC8CD  3B C3                     CMP EAX,EBX
005CC8CF  74 0F                     JZ 0x005cc8e0
005CC8D1  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005CC8D4  50                        PUSH EAX
005CC8D5  E8 D6 8D 11 00            CALL 0x006e56b0
005CC8DA  89 9E FC 21 00 00         MOV dword ptr [ESI + 0x21fc],EBX
LAB_005cc8e0:
005CC8E0  8B 86 00 22 00 00         MOV EAX,dword ptr [ESI + 0x2200]
005CC8E6  3B C3                     CMP EAX,EBX
005CC8E8  7C 0C                     JL 0x005cc8f6
005CC8EA  50                        PUSH EAX
005CC8EB  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005CC8F0  50                        PUSH EAX
005CC8F1  E8 FA 71 0E 00            CALL 0x006b3af0
LAB_005cc8f6:
005CC8F6  38 9E E6 21 00 00         CMP byte ptr [ESI + 0x21e6],BL
005CC8FC  0F 84 FB 01 00 00         JZ 0x005ccafd
005CC902  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005CC908  8B 81 4C 05 00 00         MOV EAX,dword ptr [ECX + 0x54c]
005CC90E  3B C3                     CMP EAX,EBX
005CC910  74 15                     JZ 0x005cc927
005CC912  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005CC915  50                        PUSH EAX
005CC916  E8 95 8D 11 00            CALL 0x006e56b0
005CC91B  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005CC921  89 9A 4C 05 00 00         MOV dword ptr [EDX + 0x54c],EBX
LAB_005cc927:
005CC927  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CC92C  8B 80 50 05 00 00         MOV EAX,dword ptr [EAX + 0x550]
005CC932  3B C3                     CMP EAX,EBX
005CC934  74 15                     JZ 0x005cc94b
005CC936  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005CC939  50                        PUSH EAX
005CC93A  E8 71 8D 11 00            CALL 0x006e56b0
005CC93F  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005CC945  89 99 50 05 00 00         MOV dword ptr [ECX + 0x550],EBX
LAB_005cc94b:
005CC94B  8B 8E F8 21 00 00         MOV ECX,dword ptr [ESI + 0x21f8]
005CC951  3B CB                     CMP ECX,EBX
005CC953  74 1A                     JZ 0x005cc96f
005CC955  E8 30 49 E3 FF            CALL 0x0040128a
005CC95A  8B 96 F8 21 00 00         MOV EDX,dword ptr [ESI + 0x21f8]
005CC960  52                        PUSH EDX
005CC961  E8 4A 19 16 00            CALL 0x0072e2b0
005CC966  83 C4 04                  ADD ESP,0x4
005CC969  89 9E F8 21 00 00         MOV dword ptr [ESI + 0x21f8],EBX
LAB_005cc96f:
005CC96F  6A 33                     PUSH 0x33
005CC971  E8 BA 1B 16 00            CALL 0x0072e530
005CC976  83 C4 04                  ADD ESP,0x4
005CC979  3B C3                     CMP EAX,EBX
005CC97B  74 45                     JZ 0x005cc9c2
005CC97D  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005CC981  88 18                     MOV byte ptr [EAX],BL
005CC983  C7 40 03 FF FF FF FF      MOV dword ptr [EAX + 0x3],0xffffffff
005CC98A  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005CC98E  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005CC991  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005CC994  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005CC997  C7 40 1B 01 00 00 00      MOV dword ptr [EAX + 0x1b],0x1
005CC99E  C7 40 13 01 00 00 00      MOV dword ptr [EAX + 0x13],0x1
005CC9A5  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005CC9AC  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005CC9AF  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005CC9B2  C7 40 2F 01 00 00 00      MOV dword ptr [EAX + 0x2f],0x1
005CC9B9  C7 40 2B 01 00 00 00      MOV dword ptr [EAX + 0x2b],0x1
005CC9C0  EB 02                     JMP 0x005cc9c4
LAB_005cc9c2:
005CC9C2  33 C0                     XOR EAX,EAX
LAB_005cc9c4:
005CC9C4  3B C3                     CMP EAX,EBX
005CC9C6  89 86 F8 21 00 00         MOV dword ptr [ESI + 0x21f8],EAX
005CC9CC  0F 84 BF 00 00 00         JZ 0x005cca91
005CC9D2  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005CC9D7  53                        PUSH EBX
005CC9D8  6A 01                     PUSH 0x1
005CC9DA  6A 10                     PUSH 0x10
005CC9DC  6A 01                     PUSH 0x1
005CC9DE  6A 62                     PUSH 0x62
005CC9E0  68 90 01 00 00            PUSH 0x190
005CC9E5  68 F1 01 00 00            PUSH 0x1f1
005CC9EA  68 C8 00 00 00            PUSH 0xc8
005CC9EF  50                        PUSH EAX
005CC9F0  E8 FB 2F 0F 00            CALL 0x006bf9f0
005CC9F5  8B 8E F8 21 00 00         MOV ECX,dword ptr [ESI + 0x21f8]
005CC9FB  50                        PUSH EAX
005CC9FC  68 F1 01 00 00            PUSH 0x1f1
005CCA01  68 C8 00 00 00            PUSH 0xc8
005CCA06  6A 01                     PUSH 0x1
005CCA08  E8 90 7B E3 FF            CALL 0x0040459d
005CCA0D  85 C0                     TEST EAX,EAX
005CCA0F  74 35                     JZ 0x005cca46
005CCA11  8B 86 F8 21 00 00         MOV EAX,dword ptr [ESI + 0x21f8]
005CCA17  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005CCA1A  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005CCA21  8B 86 F8 21 00 00         MOV EAX,dword ptr [ESI + 0x21f8]
005CCA27  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005CCA2A  3B C3                     CMP EAX,EBX
005CCA2C  7C 0D                     JL 0x005cca3b
005CCA2E  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005CCA34  50                        PUSH EAX
005CCA35  51                        PUSH ECX
005CCA36  E8 F5 69 0E 00            CALL 0x006b3430
LAB_005cca3b:
005CCA3B  8B 8E F8 21 00 00         MOV ECX,dword ptr [ESI + 0x21f8]
005CCA41  E8 AB 8B E3 FF            CALL 0x004055f1
LAB_005cca46:
005CCA46  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005CCA4C  6A 62                     PUSH 0x62
005CCA4E  68 90 01 00 00            PUSH 0x190
005CCA53  68 F1 01 00 00            PUSH 0x1f1
005CCA58  68 C8 00 00 00            PUSH 0xc8
005CCA5D  52                        PUSH EDX
005CCA5E  E8 1D 95 0E 00            CALL 0x006b5f80
005CCA63  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CCA68  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005CCA6B  51                        PUSH ECX
005CCA6C  6A 01                     PUSH 0x1
005CCA6E  6A 62                     PUSH 0x62
005CCA70  68 90 01 00 00            PUSH 0x190
005CCA75  68 F1 01 00 00            PUSH 0x1f1
005CCA7A  68 C8 00 00 00            PUSH 0xc8
005CCA7F  68 F1 01 00 00            PUSH 0x1f1
005CCA84  68 C8 00 00 00            PUSH 0xc8
005CCA89  E8 0A 58 E3 FF            CALL 0x00402298
005CCA8E  83 C4 20                  ADD ESP,0x20
LAB_005cca91:
005CCA91  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005CCA97  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005CCA9D  8B 82 54 05 00 00         MOV EAX,dword ptr [EDX + 0x554]
005CCAA3  50                        PUSH EAX
005CCAA4  51                        PUSH ECX
005CCAA5  E8 46 70 0E 00            CALL 0x006b3af0
005CCAAA  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005CCAB0  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005CCAB6  8B 82 58 05 00 00         MOV EAX,dword ptr [EDX + 0x558]
005CCABC  50                        PUSH EAX
005CCABD  51                        PUSH ECX
005CCABE  E8 2D 70 0E 00            CALL 0x006b3af0
005CCAC3  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CCAC8  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005CCACE  83 F9 FF                  CMP ECX,-0x1
005CCAD1  74 12                     JZ 0x005ccae5
005CCAD3  8B 90 A4 05 00 00         MOV EDX,dword ptr [EAX + 0x5a4]
005CCAD9  51                        PUSH ECX
005CCADA  52                        PUSH EDX
005CCADB  E8 10 70 0E 00            CALL 0x006b3af0
005CCAE0  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005ccae5:
005CCAE5  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005CCAEB  83 F9 FF                  CMP ECX,-0x1
005CCAEE  74 0D                     JZ 0x005ccafd
005CCAF0  8B 80 35 06 00 00         MOV EAX,dword ptr [EAX + 0x635]
005CCAF6  51                        PUSH ECX
005CCAF7  50                        PUSH EAX
005CCAF8  E8 F3 6F 0E 00            CALL 0x006b3af0
LAB_005ccafd:
005CCAFD  8B CE                     MOV ECX,ESI
005CCAFF  E8 90 83 E3 FF            CALL 0x00404e94
005CCB04  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005CCB07  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CCB0D  5E                        POP ESI
005CCB0E  5B                        POP EBX
005CCB0F  8B E5                     MOV ESP,EBP
005CCB11  5D                        POP EBP
005CCB12  C3                        RET
LAB_005ccb13:
005CCB13  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005CCB16  68 D4 D2 7C 00            PUSH 0x7cd2d4
005CCB1B  68 CC 4C 7A 00            PUSH 0x7a4ccc
005CCB20  56                        PUSH ESI
005CCB21  53                        PUSH EBX
005CCB22  68 C0 00 00 00            PUSH 0xc0
005CCB27  68 58 D2 7C 00            PUSH 0x7cd258
005CCB2C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005CCB32  E8 99 09 0E 00            CALL 0x006ad4d0
005CCB37  83 C4 18                  ADD ESP,0x18
005CCB3A  85 C0                     TEST EAX,EAX
005CCB3C  74 01                     JZ 0x005ccb3f
005CCB3E  CC                        INT3
LAB_005ccb3f:
005CCB3F  68 C0 00 00 00            PUSH 0xc0
005CCB44  68 58 D2 7C 00            PUSH 0x7cd258
005CCB49  53                        PUSH EBX
005CCB4A  56                        PUSH ESI
005CCB4B  E8 F0 92 0D 00            CALL 0x006a5e40
005CCB50  5E                        POP ESI
005CCB51  5B                        POP EBX
005CCB52  8B E5                     MOV ESP,EBP
005CCB54  5D                        POP EBP
005CCB55  C3                        RET
