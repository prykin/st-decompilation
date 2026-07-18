FUN_006bd4b0:
006BD4B0  8B 0D 44 4F 85 00         MOV ECX,dword ptr [0x00854f44]
006BD4B6  53                        PUSH EBX
006BD4B7  56                        PUSH ESI
006BD4B8  8B 01                     MOV EAX,dword ptr [ECX]
006BD4BA  25 04 00 08 00            AND EAX,0x80004
006BD4BF  3D 04 00 08 00            CMP EAX,0x80004
006BD4C4  75 3A                     JNZ 0x006bd500
006BD4C6  8B 91 C0 00 00 00         MOV EDX,dword ptr [ECX + 0xc0]
006BD4CC  85 D2                     TEST EDX,EDX
006BD4CE  74 30                     JZ 0x006bd500
006BD4D0  8B 71 10                  MOV ESI,dword ptr [ECX + 0x10]
006BD4D3  8B 59 08                  MOV EBX,dword ptr [ECX + 0x8]
006BD4D6  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006BD4D9  56                        PUSH ESI
006BD4DA  8B 35 E0 4F 85 00         MOV ESI,dword ptr [0x00854fe0]
006BD4E0  50                        PUSH EAX
006BD4E1  0F AF DE                  IMUL EBX,ESI
006BD4E4  56                        PUSH ESI
006BD4E5  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
006BD4E8  8B 0D 00 4F 85 00         MOV ECX,dword ptr [0x00854f00]
006BD4EE  03 DE                     ADD EBX,ESI
006BD4F0  03 D9                     ADD EBX,ECX
006BD4F2  53                        PUSH EBX
006BD4F3  50                        PUSH EAX
006BD4F4  52                        PUSH EDX
006BD4F5  E8 66 15 01 00            CALL 0x006cea60
006BD4FA  8B 0D 44 4F 85 00         MOV ECX,dword ptr [0x00854f44]
LAB_006bd500:
006BD500  8B 51 68                  MOV EDX,dword ptr [ECX + 0x68]
006BD503  83 FA 04                  CMP EDX,0x4
006BD506  89 15 DC 4E 85 00         MOV dword ptr [0x00854edc],EDX
006BD50C  0F 8F 5B 01 00 00         JG 0x006bd66d
006BD512  8D 41 70                  LEA EAX,[ECX + 0x70]
006BD515  C7 05 D8 4E 85 00 00 00 00 00  MOV dword ptr [0x00854ed8],0x0
006BD51F  85 D2                     TEST EDX,EDX
006BD521  A3 D8 4F 85 00            MOV [0x00854fd8],EAX
006BD526  0F 8E 0F 02 00 00         JLE 0x006bd73b
006BD52C  BE 01 00 00 00            MOV ESI,0x1
006BD531  EB 06                     JMP 0x006bd539
LAB_006bd533:
006BD533  8B 0D 44 4F 85 00         MOV ECX,dword ptr [0x00854f44]
LAB_006bd539:
006BD539  8B 10                     MOV EDX,dword ptr [EAX]
006BD53B  8B 1D E0 4E 85 00         MOV EBX,dword ptr [0x00854ee0]
006BD541  2B D3                     SUB EDX,EBX
006BD543  8B 1D E4 4E 85 00         MOV EBX,dword ptr [0x00854ee4]
006BD549  89 15 B0 4F 85 00         MOV dword ptr [0x00854fb0],EDX
006BD54F  8B 15 24 4F 85 00         MOV EDX,dword ptr [0x00854f24]
006BD555  2B D3                     SUB EDX,EBX
006BD557  8B 58 04                  MOV EBX,dword ptr [EAX + 0x4]
006BD55A  03 D3                     ADD EDX,EBX
006BD55C  89 15 B4 4F 85 00         MOV dword ptr [0x00854fb4],EDX
006BD562  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006BD565  89 15 B8 4F 85 00         MOV dword ptr [0x00854fb8],EDX
006BD56B  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BD56E  89 15 BC 4F 85 00         MOV dword ptr [0x00854fbc],EDX
006BD574  8B 15 5C 4F 85 00         MOV EDX,dword ptr [0x00854f5c]
006BD57A  52                        PUSH EDX
006BD57B  8B 15 1C 4F 85 00         MOV EDX,dword ptr [0x00854f1c]
006BD581  52                        PUSH EDX
006BD582  8B 15 9C 4F 85 00         MOV EDX,dword ptr [0x00854f9c]
006BD588  52                        PUSH EDX
006BD589  8B 15 20 4F 85 00         MOV EDX,dword ptr [0x00854f20]
006BD58F  52                        PUSH EDX
006BD590  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006BD593  8B 00                     MOV EAX,dword ptr [EAX]
006BD595  68 B0 4F 85 00            PUSH 0x854fb0
006BD59A  52                        PUSH EDX
006BD59B  8B 15 58 4F 85 00         MOV EDX,dword ptr [0x00854f58]
006BD5A1  50                        PUSH EAX
006BD5A2  A1 68 4F 85 00            MOV EAX,[0x00854f68]
006BD5A7  52                        PUSH EDX
006BD5A8  8B 15 00 4F 85 00         MOV EDX,dword ptr [0x00854f00]
006BD5AE  50                        PUSH EAX
006BD5AF  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BD5B4  51                        PUSH ECX
006BD5B5  8B 0D E0 4F 85 00         MOV ECX,dword ptr [0x00854fe0]
006BD5BB  51                        PUSH ECX
006BD5BC  52                        PUSH EDX
006BD5BD  50                        PUSH EAX
006BD5BE  E8 9D 19 01 00            CALL 0x006cef60
006BD5C3  8B 0D E4 4F 85 00         MOV ECX,dword ptr [0x00854fe4]
006BD5C9  A3 EC 4F 85 00            MOV [0x00854fec],EAX
006BD5CE  85 C9                     TEST ECX,ECX
006BD5D0  75 05                     JNZ 0x006bd5d7
006BD5D2  A3 E4 4F 85 00            MOV [0x00854fe4],EAX
LAB_006bd5d7:
006BD5D7  A1 D4 4E 85 00            MOV EAX,[0x00854ed4]
006BD5DC  85 C0                     TEST EAX,EAX
006BD5DE  75 62                     JNZ 0x006bd642
006BD5E0  8B 0D 90 4F 85 00         MOV ECX,dword ptr [0x00854f90]
006BD5E6  8B 15 D8 4F 85 00         MOV EDX,dword ptr [0x00854fd8]
006BD5EC  51                        PUSH ECX
006BD5ED  52                        PUSH EDX
006BD5EE  68 F0 4E 85 00            PUSH 0x854ef0
006BD5F3  E8 B8 28 01 00            CALL 0x006cfeb0
006BD5F8  83 C4 0C                  ADD ESP,0xc
006BD5FB  85 C0                     TEST EAX,EAX
006BD5FD  74 43                     JZ 0x006bd642
006BD5FF  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BD604  56                        PUSH ESI
006BD605  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006BD608  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BD60B  8B 80 C0 01 00 00         MOV EAX,dword ptr [EAX + 0x1c0]
006BD611  51                        PUSH ECX
006BD612  8B 0D FC 4E 85 00         MOV ECX,dword ptr [0x00854efc]
006BD618  52                        PUSH EDX
006BD619  8B 15 F8 4E 85 00         MOV EDX,dword ptr [0x00854ef8]
006BD61F  51                        PUSH ECX
006BD620  8B 0D F4 4E 85 00         MOV ECX,dword ptr [0x00854ef4]
006BD626  52                        PUSH EDX
006BD627  8B 15 F0 4E 85 00         MOV EDX,dword ptr [0x00854ef0]
006BD62D  51                        PUSH ECX
006BD62E  52                        PUSH EDX
006BD62F  6A 64                     PUSH 0x64
006BD631  50                        PUSH EAX
006BD632  E8 99 44 01 00            CALL 0x006d1ad0
006BD637  83 F8 FF                  CMP EAX,-0x1
006BD63A  75 06                     JNZ 0x006bd642
006BD63C  89 35 D4 4E 85 00         MOV dword ptr [0x00854ed4],ESI
LAB_006bd642:
006BD642  A1 D8 4F 85 00            MOV EAX,[0x00854fd8]
006BD647  8B 0D D8 4E 85 00         MOV ECX,dword ptr [0x00854ed8]
006BD64D  8B 15 DC 4E 85 00         MOV EDX,dword ptr [0x00854edc]
006BD653  83 C0 10                  ADD EAX,0x10
006BD656  41                        INC ECX
006BD657  A3 D8 4F 85 00            MOV [0x00854fd8],EAX
006BD65C  3B CA                     CMP ECX,EDX
006BD65E  89 0D D8 4E 85 00         MOV dword ptr [0x00854ed8],ECX
006BD664  0F 8C C9 FE FF FF         JL 0x006bd533
006BD66A  5E                        POP ESI
006BD66B  5B                        POP EBX
006BD66C  C3                        RET
LAB_006bd66d:
006BD66D  8B 15 24 4F 85 00         MOV EDX,dword ptr [0x00854f24]
006BD673  A1 5C 4F 85 00            MOV EAX,[0x00854f5c]
006BD678  89 15 B4 4F 85 00         MOV dword ptr [0x00854fb4],EDX
006BD67E  8B 15 1C 4F 85 00         MOV EDX,dword ptr [0x00854f1c]
006BD684  50                        PUSH EAX
006BD685  A1 9C 4F 85 00            MOV EAX,[0x00854f9c]
006BD68A  52                        PUSH EDX
006BD68B  8B 15 20 4F 85 00         MOV EDX,dword ptr [0x00854f20]
006BD691  50                        PUSH EAX
006BD692  A1 E4 4E 85 00            MOV EAX,[0x00854ee4]
006BD697  52                        PUSH EDX
006BD698  8B 15 E0 4E 85 00         MOV EDX,dword ptr [0x00854ee0]
006BD69E  68 B0 4F 85 00            PUSH 0x854fb0
006BD6A3  50                        PUSH EAX
006BD6A4  A1 58 4F 85 00            MOV EAX,[0x00854f58]
006BD6A9  52                        PUSH EDX
006BD6AA  8B 15 68 4F 85 00         MOV EDX,dword ptr [0x00854f68]
006BD6B0  50                        PUSH EAX
006BD6B1  A1 E0 4F 85 00            MOV EAX,[0x00854fe0]
006BD6B6  52                        PUSH EDX
006BD6B7  8B 15 D4 4F 85 00         MOV EDX,dword ptr [0x00854fd4]
006BD6BD  51                        PUSH ECX
006BD6BE  8B 0D 00 4F 85 00         MOV ECX,dword ptr [0x00854f00]
006BD6C4  50                        PUSH EAX
006BD6C5  51                        PUSH ECX
006BD6C6  52                        PUSH EDX
006BD6C7  C7 05 B0 4F 85 00 00 00 00 00  MOV dword ptr [0x00854fb0],0x0
006BD6D1  E8 8A 18 01 00            CALL 0x006cef60
006BD6D6  8B 0D E4 4F 85 00         MOV ECX,dword ptr [0x00854fe4]
006BD6DC  A3 EC 4F 85 00            MOV [0x00854fec],EAX
006BD6E1  85 C9                     TEST ECX,ECX
006BD6E3  75 05                     JNZ 0x006bd6ea
006BD6E5  A3 E4 4F 85 00            MOV [0x00854fe4],EAX
LAB_006bd6ea:
006BD6EA  A1 D4 4E 85 00            MOV EAX,[0x00854ed4]
006BD6EF  85 C0                     TEST EAX,EAX
006BD6F1  75 48                     JNZ 0x006bd73b
006BD6F3  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BD6F8  BE 01 00 00 00            MOV ESI,0x1
006BD6FD  56                        PUSH ESI
006BD6FE  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006BD701  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BD704  8B 80 C0 01 00 00         MOV EAX,dword ptr [EAX + 0x1c0]
006BD70A  51                        PUSH ECX
006BD70B  8B 0D FC 4E 85 00         MOV ECX,dword ptr [0x00854efc]
006BD711  52                        PUSH EDX
006BD712  8B 15 F8 4E 85 00         MOV EDX,dword ptr [0x00854ef8]
006BD718  51                        PUSH ECX
006BD719  8B 0D F4 4E 85 00         MOV ECX,dword ptr [0x00854ef4]
006BD71F  52                        PUSH EDX
006BD720  8B 15 F0 4E 85 00         MOV EDX,dword ptr [0x00854ef0]
006BD726  51                        PUSH ECX
006BD727  52                        PUSH EDX
006BD728  6A 64                     PUSH 0x64
006BD72A  50                        PUSH EAX
006BD72B  E8 A0 43 01 00            CALL 0x006d1ad0
006BD730  83 F8 FF                  CMP EAX,-0x1
006BD733  75 06                     JNZ 0x006bd73b
006BD735  89 35 D4 4E 85 00         MOV dword ptr [0x00854ed4],ESI
LAB_006bd73b:
006BD73B  5E                        POP ESI
006BD73C  5B                        POP EBX
006BD73D  C3                        RET
