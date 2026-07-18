FUN_0073b470:
0073B470  55                        PUSH EBP
0073B471  8B EC                     MOV EBP,ESP
0073B473  83 EC 14                  SUB ESP,0x14
0073B476  53                        PUSH EBX
0073B477  56                        PUSH ESI
0073B478  57                        PUSH EDI
LAB_0073b479:
0073B479  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0073B47D  75 1E                     JNZ 0x0073b49d
0073B47F  68 50 FE 79 00            PUSH 0x79fe50
0073B484  6A 00                     PUSH 0x0
0073B486  6A 69                     PUSH 0x69
0073B488  68 BC 09 7A 00            PUSH 0x7a09bc
0073B48D  6A 02                     PUSH 0x2
0073B48F  E8 0C 5B FF FF            CALL 0x00730fa0
0073B494  83 C4 14                  ADD ESP,0x14
0073B497  83 F8 01                  CMP EAX,0x1
0073B49A  75 01                     JNZ 0x0073b49d
0073B49C  CC                        INT3
LAB_0073b49d:
0073B49D  33 C0                     XOR EAX,EAX
0073B49F  85 C0                     TEST EAX,EAX
0073B4A1  75 D6                     JNZ 0x0073b479
0073B4A3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073B4A6  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0073B4A9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073B4AC  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
0073B4AF  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0073B4B2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B4B5  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0073B4B8  81 E2 82 00 00 00         AND EDX,0x82
0073B4BE  85 D2                     TEST EDX,EDX
0073B4C0  74 0D                     JZ 0x0073b4cf
0073B4C2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073B4C5  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0073B4C8  83 E1 40                  AND ECX,0x40
0073B4CB  85 C9                     TEST ECX,ECX
0073B4CD  74 16                     JZ 0x0073b4e5
LAB_0073b4cf:
0073B4CF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073B4D2  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0073B4D5  0C 20                     OR AL,0x20
0073B4D7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B4DA  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0073B4DD  83 C8 FF                  OR EAX,0xffffffff
0073B4E0  E9 F6 01 00 00            JMP 0x0073b6db
LAB_0073b4e5:
0073B4E5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073B4E8  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0073B4EB  83 E0 01                  AND EAX,0x1
0073B4EE  85 C0                     TEST EAX,EAX
0073B4F0  74 4A                     JZ 0x0073b53c
0073B4F2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B4F5  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
0073B4FC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073B4FF  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0073B502  83 E0 10                  AND EAX,0x10
0073B505  85 C0                     TEST EAX,EAX
0073B507  74 1C                     JZ 0x0073b525
0073B509  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B50C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073B50F  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0073B512  89 01                     MOV dword ptr [ECX],EAX
0073B514  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B517  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0073B51A  83 E2 FE                  AND EDX,0xfffffffe
0073B51D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073B520  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0073B523  EB 17                     JMP 0x0073b53c
LAB_0073b525:
0073B525  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B528  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0073B52B  83 CA 20                  OR EDX,0x20
0073B52E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073B531  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0073B534  83 C8 FF                  OR EAX,0xffffffff
0073B537  E9 9F 01 00 00            JMP 0x0073b6db
LAB_0073b53c:
0073B53C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B53F  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0073B542  83 CA 02                  OR EDX,0x2
0073B545  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073B548  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0073B54B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B54E  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0073B551  83 E2 EF                  AND EDX,0xffffffef
0073B554  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073B557  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0073B55A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B55D  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
0073B564  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0073B56B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073B56E  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0073B571  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073B574  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0073B577  81 E1 0C 01 00 00         AND ECX,0x10c
0073B57D  85 C9                     TEST ECX,ECX
0073B57F  75 2E                     JNZ 0x0073b5af
0073B581  81 7D F8 B0 20 7F 00      CMP dword ptr [EBP + -0x8],0x7f20b0
0073B588  74 09                     JZ 0x0073b593
0073B58A  81 7D F8 D0 20 7F 00      CMP dword ptr [EBP + -0x8],0x7f20d0
0073B591  75 10                     JNZ 0x0073b5a3
LAB_0073b593:
0073B593  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0073B596  52                        PUSH EDX
0073B597  E8 E4 5A 00 00            CALL 0x00741080
0073B59C  83 C4 04                  ADD ESP,0x4
0073B59F  85 C0                     TEST EAX,EAX
0073B5A1  75 0C                     JNZ 0x0073b5af
LAB_0073b5a3:
0073B5A3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073B5A6  50                        PUSH EAX
0073B5A7  E8 94 78 00 00            CALL 0x00742e40
0073B5AC  83 C4 04                  ADD ESP,0x4
LAB_0073b5af:
0073B5AF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B5B2  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0073B5B5  81 E2 08 01 00 00         AND EDX,0x108
0073B5BB  85 D2                     TEST EDX,EDX
0073B5BD  0F 84 D6 00 00 00         JZ 0x0073b699
LAB_0073b5c3:
0073B5C3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073B5C6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B5C9  8B 10                     MOV EDX,dword ptr [EAX]
0073B5CB  2B 51 08                  SUB EDX,dword ptr [ECX + 0x8]
0073B5CE  85 D2                     TEST EDX,EDX
0073B5D0  7D 21                     JGE 0x0073b5f3
0073B5D2  68 7C 09 7A 00            PUSH 0x7a097c
0073B5D7  6A 00                     PUSH 0x0
0073B5D9  68 A0 00 00 00            PUSH 0xa0
0073B5DE  68 BC 09 7A 00            PUSH 0x7a09bc
0073B5E3  6A 02                     PUSH 0x2
0073B5E5  E8 B6 59 FF FF            CALL 0x00730fa0
0073B5EA  83 C4 14                  ADD ESP,0x14
0073B5ED  83 F8 01                  CMP EAX,0x1
0073B5F0  75 01                     JNZ 0x0073b5f3
0073B5F2  CC                        INT3
LAB_0073b5f3:
0073B5F3  33 C0                     XOR EAX,EAX
0073B5F5  85 C0                     TEST EAX,EAX
0073B5F7  75 CA                     JNZ 0x0073b5c3
0073B5F9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B5FC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073B5FF  8B 01                     MOV EAX,dword ptr [ECX]
0073B601  2B 42 08                  SUB EAX,dword ptr [EDX + 0x8]
0073B604  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073B607  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B60A  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0073B60D  83 C2 01                  ADD EDX,0x1
0073B610  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073B613  89 10                     MOV dword ptr [EAX],EDX
0073B615  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B618  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0073B61B  83 EA 01                  SUB EDX,0x1
0073B61E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073B621  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0073B624  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0073B628  7E 1C                     JLE 0x0073b646
0073B62A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073B62D  51                        PUSH ECX
0073B62E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073B631  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0073B634  50                        PUSH EAX
0073B635  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0073B638  51                        PUSH ECX
0073B639  E8 32 2D 00 00            CALL 0x0073e370
0073B63E  83 C4 0C                  ADD ESP,0xc
0073B641  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0073B644  EB 46                     JMP 0x0073b68c
LAB_0073b646:
0073B646  83 7D F0 FF               CMP dword ptr [EBP + -0x10],-0x1
0073B64A  74 1B                     JZ 0x0073b667
0073B64C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0073B64F  C1 FA 05                  SAR EDX,0x5
0073B652  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073B655  83 E0 1F                  AND EAX,0x1f
0073B658  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
0073B65F  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0073B662  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0073B665  EB 07                     JMP 0x0073b66e
LAB_0073b667:
0073B667  C7 45 EC F8 1F 7F 00      MOV dword ptr [EBP + -0x14],0x7f1ff8
LAB_0073b66e:
0073B66E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0073B671  0F BE 48 04               MOVSX ECX,byte ptr [EAX + 0x4]
0073B675  83 E1 20                  AND ECX,0x20
0073B678  85 C9                     TEST ECX,ECX
0073B67A  74 10                     JZ 0x0073b68c
0073B67C  6A 02                     PUSH 0x2
0073B67E  6A 00                     PUSH 0x0
0073B680  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0073B683  52                        PUSH EDX
0073B684  E8 C7 76 00 00            CALL 0x00742d50
0073B689  83 C4 0C                  ADD ESP,0xc
LAB_0073b68c:
0073B68C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073B68F  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0073B692  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
0073B695  88 11                     MOV byte ptr [ECX],DL
0073B697  EB 1E                     JMP 0x0073b6b7
LAB_0073b699:
0073B699  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0073B6A0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073B6A3  50                        PUSH EAX
0073B6A4  8D 4D 08                  LEA ECX,[EBP + 0x8]
0073B6A7  51                        PUSH ECX
0073B6A8  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0073B6AB  52                        PUSH EDX
0073B6AC  E8 BF 2C 00 00            CALL 0x0073e370
0073B6B1  83 C4 0C                  ADD ESP,0xc
0073B6B4  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0073b6b7:
0073B6B7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073B6BA  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
0073B6BD  74 14                     JZ 0x0073b6d3
0073B6BF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B6C2  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0073B6C5  83 CA 20                  OR EDX,0x20
0073B6C8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073B6CB  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0073B6CE  83 C8 FF                  OR EAX,0xffffffff
0073B6D1  EB 08                     JMP 0x0073b6db
LAB_0073b6d3:
0073B6D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073B6D6  25 FF 00 00 00            AND EAX,0xff
LAB_0073b6db:
0073B6DB  5F                        POP EDI
0073B6DC  5E                        POP ESI
0073B6DD  5B                        POP EBX
0073B6DE  8B E5                     MOV ESP,EBP
0073B6E0  5D                        POP EBP
0073B6E1  C3                        RET
