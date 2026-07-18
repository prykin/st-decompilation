FUN_005e7570:
005E7570  55                        PUSH EBP
005E7571  8B EC                     MOV EBP,ESP
005E7573  83 EC 48                  SUB ESP,0x48
005E7576  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E757B  53                        PUSH EBX
005E757C  56                        PUSH ESI
005E757D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005E7580  57                        PUSH EDI
005E7581  8D 55 BC                  LEA EDX,[EBP + -0x44]
005E7584  8D 4D B8                  LEA ECX,[EBP + -0x48]
005E7587  6A 00                     PUSH 0x0
005E7589  52                        PUSH EDX
005E758A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005E758D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E7593  E8 58 62 14 00            CALL 0x0072d7f0
005E7598  8B F0                     MOV ESI,EAX
005E759A  83 C4 08                  ADD ESP,0x8
005E759D  85 F6                     TEST ESI,ESI
005E759F  0F 85 E2 02 00 00         JNZ 0x005e7887
005E75A5  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005E75A8  8B CE                     MOV ECX,ESI
005E75AA  E8 DF CF E1 FF            CALL 0x0040458e
005E75AF  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005E75B4  85 C0                     TEST EAX,EAX
005E75B6  74 2A                     JZ 0x005e75e2
005E75B8  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
005E75BE  85 C9                     TEST ECX,ECX
005E75C0  74 14                     JZ 0x005e75d6
005E75C2  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005E75C5  83 F9 FF                  CMP ECX,-0x1
005E75C8  74 18                     JZ 0x005e75e2
005E75CA  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005E75CD  51                        PUSH ECX
005E75CE  50                        PUSH EAX
005E75CF  E8 1C C5 0C 00            CALL 0x006b3af0
005E75D4  EB 0C                     JMP 0x005e75e2
LAB_005e75d6:
005E75D6  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005E75DC  51                        PUSH ECX
005E75DD  E8 2E 15 0D 00            CALL 0x006b8b10
LAB_005e75e2:
005E75E2  81 7E 4D 05 61 00 00      CMP dword ptr [ESI + 0x4d],0x6105
005E75E9  75 2E                     JNZ 0x005e7619
005E75EB  80 3D 68 17 81 00 02      CMP byte ptr [0x00811768],0x2
005E75F2  75 1A                     JNZ 0x005e760e
005E75F4  C7 46 4D 02 61 00 00      MOV dword ptr [ESI + 0x4d],0x6102
005E75FB  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005E7601  6A 02                     PUSH 0x2
005E7603  6A 0A                     PUSH 0xa
005E7605  52                        PUSH EDX
005E7606  E8 38 A7 E1 FF            CALL 0x00401d43
005E760B  83 C4 0C                  ADD ESP,0xc
LAB_005e760e:
005E760E  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E7614  E8 6A D5 E1 FF            CALL 0x00404b83
LAB_005e7619:
005E7619  81 7E 4D 0A 61 00 00      CMP dword ptr [ESI + 0x4d],0x610a
005E7620  75 1D                     JNZ 0x005e763f
005E7622  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005E7627  6A 02                     PUSH 0x2
005E7629  6A 0A                     PUSH 0xa
005E762B  50                        PUSH EAX
005E762C  E8 12 A7 E1 FF            CALL 0x00401d43
005E7631  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E7637  83 C4 0C                  ADD ESP,0xc
005E763A  E8 44 D5 E1 FF            CALL 0x00404b83
LAB_005e763f:
005E763F  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E7645  8D 41 2C                  LEA EAX,[ECX + 0x2c]
005E7648  8B 49 2C                  MOV ECX,dword ptr [ECX + 0x2c]
005E764B  85 C9                     TEST ECX,ECX
005E764D  74 0C                     JZ 0x005e765b
005E764F  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005E7655  50                        PUSH EAX
005E7656  E8 85 AA 10 00            CALL 0x006f20e0
LAB_005e765b:
005E765B  8B 8E F8 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af8]
005E7661  85 C9                     TEST ECX,ECX
005E7663  74 1E                     JZ 0x005e7683
005E7665  E8 20 9C E1 FF            CALL 0x0040128a
005E766A  8B 96 F8 1A 00 00         MOV EDX,dword ptr [ESI + 0x1af8]
005E7670  52                        PUSH EDX
005E7671  E8 3A 6C 14 00            CALL 0x0072e2b0
005E7676  83 C4 04                  ADD ESP,0x4
005E7679  C7 86 F8 1A 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1af8],0x0
LAB_005e7683:
005E7683  8D BE 94 1A 00 00         LEA EDI,[ESI + 0x1a94]
005E7689  BB 16 00 00 00            MOV EBX,0x16
LAB_005e768e:
005E768E  8B 07                     MOV EAX,dword ptr [EDI]
005E7690  83 F8 FF                  CMP EAX,-0x1
005E7693  74 12                     JZ 0x005e76a7
005E7695  50                        PUSH EAX
005E7696  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E769B  50                        PUSH EAX
005E769C  E8 0F C5 0C 00            CALL 0x006b3bb0
005E76A1  C7 07 FF FF FF FF         MOV dword ptr [EDI],0xffffffff
LAB_005e76a7:
005E76A7  83 C7 04                  ADD EDI,0x4
005E76AA  4B                        DEC EBX
005E76AB  75 E1                     JNZ 0x005e768e
005E76AD  8B 8E 00 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b00]
005E76B3  33 FF                     XOR EDI,EDI
005E76B5  3B CF                     CMP ECX,EDI
005E76B7  74 1A                     JZ 0x005e76d3
005E76B9  E8 CC 9B E1 FF            CALL 0x0040128a
005E76BE  8B 8E 00 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b00]
005E76C4  51                        PUSH ECX
005E76C5  E8 E6 6B 14 00            CALL 0x0072e2b0
005E76CA  83 C4 04                  ADD ESP,0x4
005E76CD  89 BE 00 1B 00 00         MOV dword ptr [ESI + 0x1b00],EDI
LAB_005e76d3:
005E76D3  39 BE 64 1A 00 00         CMP dword ptr [ESI + 0x1a64],EDI
005E76D9  75 76                     JNZ 0x005e7751
005E76DB  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E76E1  8B 81 91 03 00 00         MOV EAX,dword ptr [ECX + 0x391]
005E76E7  83 F8 FF                  CMP EAX,-0x1
005E76EA  74 0D                     JZ 0x005e76f9
005E76EC  8B 91 D5 03 00 00         MOV EDX,dword ptr [ECX + 0x3d5]
005E76F2  50                        PUSH EAX
005E76F3  52                        PUSH EDX
005E76F4  E8 F7 C3 0C 00            CALL 0x006b3af0
LAB_005e76f9:
005E76F9  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E76FF  8B 81 22 04 00 00         MOV EAX,dword ptr [ECX + 0x422]
005E7705  83 F8 FF                  CMP EAX,-0x1
005E7708  74 0D                     JZ 0x005e7717
005E770A  50                        PUSH EAX
005E770B  8B 81 66 04 00 00         MOV EAX,dword ptr [ECX + 0x466]
005E7711  50                        PUSH EAX
005E7712  E8 D9 C3 0C 00            CALL 0x006b3af0
LAB_005e7717:
005E7717  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E771D  8B 81 B3 04 00 00         MOV EAX,dword ptr [ECX + 0x4b3]
005E7723  83 F8 FF                  CMP EAX,-0x1
005E7726  74 0D                     JZ 0x005e7735
005E7728  8B 89 F7 04 00 00         MOV ECX,dword ptr [ECX + 0x4f7]
005E772E  50                        PUSH EAX
005E772F  51                        PUSH ECX
005E7730  E8 BB C3 0C 00            CALL 0x006b3af0
LAB_005e7735:
005E7735  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E773B  8B 82 40 05 00 00         MOV EAX,dword ptr [EDX + 0x540]
005E7741  3B C7                     CMP EAX,EDI
005E7743  7C 0C                     JL 0x005e7751
005E7745  50                        PUSH EAX
005E7746  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E774B  50                        PUSH EAX
005E774C  E8 9F C3 0C 00            CALL 0x006b3af0
LAB_005e7751:
005E7751  8B 8E FC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1afc]
005E7757  3B CF                     CMP ECX,EDI
005E7759  74 1A                     JZ 0x005e7775
005E775B  E8 2A 9B E1 FF            CALL 0x0040128a
005E7760  8B 8E FC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1afc]
005E7766  51                        PUSH ECX
005E7767  E8 44 6B 14 00            CALL 0x0072e2b0
005E776C  83 C4 04                  ADD ESP,0x4
005E776F  89 BE FC 1A 00 00         MOV dword ptr [ESI + 0x1afc],EDI
LAB_005e7775:
005E7775  39 BE 64 1A 00 00         CMP dword ptr [ESI + 0x1a64],EDI
005E777B  75 75                     JNZ 0x005e77f2
005E777D  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E7783  8B 81 60 05 00 00         MOV EAX,dword ptr [ECX + 0x560]
005E7789  83 F8 FF                  CMP EAX,-0x1
005E778C  74 0D                     JZ 0x005e779b
005E778E  8B 91 A4 05 00 00         MOV EDX,dword ptr [ECX + 0x5a4]
005E7794  50                        PUSH EAX
005E7795  52                        PUSH EDX
005E7796  E8 55 C3 0C 00            CALL 0x006b3af0
LAB_005e779b:
005E779B  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E77A1  8B 81 F1 05 00 00         MOV EAX,dword ptr [ECX + 0x5f1]
005E77A7  83 F8 FF                  CMP EAX,-0x1
005E77AA  74 0D                     JZ 0x005e77b9
005E77AC  50                        PUSH EAX
005E77AD  8B 81 35 06 00 00         MOV EAX,dword ptr [ECX + 0x635]
005E77B3  50                        PUSH EAX
005E77B4  E8 37 C3 0C 00            CALL 0x006b3af0
LAB_005e77b9:
005E77B9  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E77BF  8B 81 58 05 00 00         MOV EAX,dword ptr [ECX + 0x558]
005E77C5  3B C7                     CMP EAX,EDI
005E77C7  7C 0D                     JL 0x005e77d6
005E77C9  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E77CF  50                        PUSH EAX
005E77D0  52                        PUSH EDX
005E77D1  E8 1A C3 0C 00            CALL 0x006b3af0
LAB_005e77d6:
005E77D6  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E77DB  8B 80 54 05 00 00         MOV EAX,dword ptr [EAX + 0x554]
005E77E1  3B C7                     CMP EAX,EDI
005E77E3  7C 0D                     JL 0x005e77f2
005E77E5  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E77EB  50                        PUSH EAX
005E77EC  51                        PUSH ECX
005E77ED  E8 FE C2 0C 00            CALL 0x006b3af0
LAB_005e77f2:
005E77F2  8B 86 F0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af0]
005E77F8  3B C7                     CMP EAX,EDI
005E77FA  74 06                     JZ 0x005e7802
005E77FC  50                        PUSH EAX
005E77FD  E8 6E DD 0C 00            CALL 0x006b5570
LAB_005e7802:
005E7802  8B 8E EC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1aec]
005E7808  8D 86 EC 1A 00 00         LEA EAX,[ESI + 0x1aec]
005E780E  3B CF                     CMP ECX,EDI
005E7810  89 BE F0 1A 00 00         MOV dword ptr [ESI + 0x1af0],EDI
005E7816  74 06                     JZ 0x005e781e
005E7818  50                        PUSH EAX
005E7819  E8 42 38 0C 00            CALL 0x006ab060
LAB_005e781e:
005E781E  8B 8E 83 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a83]
005E7824  8D 86 83 1A 00 00         LEA EAX,[ESI + 0x1a83]
005E782A  3B CF                     CMP ECX,EDI
005E782C  74 06                     JZ 0x005e7834
005E782E  50                        PUSH EAX
005E782F  E8 2C 38 0C 00            CALL 0x006ab060
LAB_005e7834:
005E7834  81 7E 4D 02 61 00 00      CMP dword ptr [ESI + 0x4d],0x6102
005E783B  75 27                     JNZ 0x005e7864
005E783D  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005E7843  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005E7849  3B CF                     CMP ECX,EDI
005E784B  74 17                     JZ 0x005e7864
005E784D  E8 DC CD E1 FF            CALL 0x0040462e
005E7852  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005E7858  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005E785E  89 B9 AB 1C 00 00         MOV dword ptr [ECX + 0x1cab],EDI
LAB_005e7864:
005E7864  39 7E 4D                  CMP dword ptr [ESI + 0x4d],EDI
005E7867  74 0E                     JZ 0x005e7877
005E7869  83 C6 3D                  ADD ESI,0x3d
005E786C  B9 20 76 80 00            MOV ECX,0x807620
005E7871  56                        PUSH ESI
005E7872  E8 D9 C2 0F 00            CALL 0x006e3b50
LAB_005e7877:
005E7877  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005E787A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E7880  5F                        POP EDI
005E7881  5E                        POP ESI
005E7882  5B                        POP EBX
005E7883  8B E5                     MOV ESP,EBP
005E7885  5D                        POP EBP
005E7886  C3                        RET
LAB_005e7887:
005E7887  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005E788A  68 98 DD 7C 00            PUSH 0x7cdd98
005E788F  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E7894  56                        PUSH ESI
005E7895  6A 00                     PUSH 0x0
005E7897  68 D5 00 00 00            PUSH 0xd5
005E789C  68 5C DD 7C 00            PUSH 0x7cdd5c
005E78A1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E78A6  E8 25 5C 0C 00            CALL 0x006ad4d0
005E78AB  83 C4 18                  ADD ESP,0x18
005E78AE  85 C0                     TEST EAX,EAX
005E78B0  74 01                     JZ 0x005e78b3
005E78B2  CC                        INT3
LAB_005e78b3:
005E78B3  68 D5 00 00 00            PUSH 0xd5
005E78B8  68 5C DD 7C 00            PUSH 0x7cdd5c
005E78BD  6A 00                     PUSH 0x0
005E78BF  56                        PUSH ESI
005E78C0  E8 7B E5 0B 00            CALL 0x006a5e40
005E78C5  5F                        POP EDI
005E78C6  5E                        POP ESI
005E78C7  5B                        POP EBX
005E78C8  8B E5                     MOV ESP,EBP
005E78CA  5D                        POP EBP
005E78CB  C3                        RET
