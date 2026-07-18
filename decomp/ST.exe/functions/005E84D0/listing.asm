FUN_005e84d0:
005E84D0  55                        PUSH EBP
005E84D1  8B EC                     MOV EBP,ESP
005E84D3  81 EC 10 01 00 00         SUB ESP,0x110
005E84D9  53                        PUSH EBX
005E84DA  56                        PUSH ESI
005E84DB  8B F1                     MOV ESI,ECX
005E84DD  57                        PUSH EDI
005E84DE  89 75 B4                  MOV dword ptr [EBP + -0x4c],ESI
005E84E1  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
005E84E8  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005E84EE  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005E84F1  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E84F6  33 F6                     XOR ESI,ESI
005E84F8  8D 95 1C FF FF FF         LEA EDX,[EBP + 0xffffff1c]
005E84FE  8D 8D 18 FF FF FF         LEA ECX,[EBP + 0xffffff18]
005E8504  56                        PUSH ESI
005E8505  52                        PUSH EDX
005E8506  89 85 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],EAX
005E850C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E8512  E8 D9 52 14 00            CALL 0x0072d7f0
005E8517  8B F8                     MOV EDI,EAX
005E8519  83 C4 08                  ADD ESP,0x8
005E851C  3B FE                     CMP EDI,ESI
005E851E  0F 85 82 0E 00 00         JNZ 0x005e93a6
005E8524  8B 5D B4                  MOV EBX,dword ptr [EBP + -0x4c]
005E8527  39 B3 87 1A 00 00         CMP dword ptr [EBX + 0x1a87],ESI
005E852D  74 1F                     JZ 0x005e854e
005E852F  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005E8532  8B 93 8B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a8b]
005E8538  2B C2                     SUB EAX,EDX
005E853A  3D FA 00 00 00            CMP EAX,0xfa
005E853F  72 0D                     JC 0x005e854e
005E8541  8B CB                     MOV ECX,EBX
005E8543  E8 B4 D4 E1 FF            CALL 0x004059fc
005E8548  89 B3 87 1A 00 00         MOV dword ptr [EBX + 0x1a87],ESI
LAB_005e854e:
005E854E  33 C0                     XOR EAX,EAX
005E8550  8A 43 65                  MOV AL,byte ptr [EBX + 0x65]
005E8553  48                        DEC EAX
005E8554  0F 84 F2 04 00 00         JZ 0x005e8a4c
005E855A  83 E8 02                  SUB EAX,0x2
005E855D  0F 84 88 01 00 00         JZ 0x005e86eb
005E8563  48                        DEC EAX
005E8564  0F 85 29 0E 00 00         JNZ 0x005e9393
005E856A  39 B3 64 1A 00 00         CMP dword ptr [EBX + 0x1a64],ESI
005E8570  75 4D                     JNZ 0x005e85bf
005E8572  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E8578  8B 81 00 03 00 00         MOV EAX,dword ptr [ECX + 0x300]
005E857E  3B C6                     CMP EAX,ESI
005E8580  7E 3D                     JLE 0x005e85bf
005E8582  48                        DEC EAX
005E8583  89 81 00 03 00 00         MOV dword ptr [ECX + 0x300],EAX
005E8589  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E858F  8B 81 FC 02 00 00         MOV EAX,dword ptr [ECX + 0x2fc]
005E8595  83 F8 FF                  CMP EAX,-0x1
005E8598  74 22                     JZ 0x005e85bc
005E859A  8B 91 18 03 00 00         MOV EDX,dword ptr [ECX + 0x318]
005E85A0  52                        PUSH EDX
005E85A1  8B 91 14 03 00 00         MOV EDX,dword ptr [ECX + 0x314]
005E85A7  52                        PUSH EDX
005E85A8  8B 91 00 03 00 00         MOV EDX,dword ptr [ECX + 0x300]
005E85AE  52                        PUSH EDX
005E85AF  50                        PUSH EAX
005E85B0  8B 81 40 03 00 00         MOV EAX,dword ptr [ECX + 0x340]
005E85B6  50                        PUSH EAX
005E85B7  E8 74 B1 0C 00            CALL 0x006b3730
LAB_005e85bc:
005E85BC  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_005e85bf:
005E85BF  8B 8B F8 1A 00 00         MOV ECX,dword ptr [EBX + 0x1af8]
005E85C5  3B CE                     CMP ECX,ESI
005E85C7  74 28                     JZ 0x005e85f1
005E85C9  E8 23 D0 E1 FF            CALL 0x004055f1
005E85CE  85 C0                     TEST EAX,EAX
005E85D0  74 05                     JZ 0x005e85d7
005E85D2  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005E85D5  EB 1A                     JMP 0x005e85f1
LAB_005e85d7:
005E85D7  8B 83 F8 1A 00 00         MOV EAX,dword ptr [EBX + 0x1af8]
005E85DD  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005E85E0  3B C6                     CMP EAX,ESI
005E85E2  7C 0D                     JL 0x005e85f1
005E85E4  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E85EA  50                        PUSH EAX
005E85EB  51                        PUSH ECX
005E85EC  E8 FF B4 0C 00            CALL 0x006b3af0
LAB_005e85f1:
005E85F1  39 B3 64 1A 00 00         CMP dword ptr [EBX + 0x1a64],ESI
005E85F7  74 09                     JZ 0x005e8602
005E85F9  80 BB 5F 1A 00 00 0E      CMP byte ptr [EBX + 0x1a5f],0xe
005E8600  75 32                     JNZ 0x005e8634
LAB_005e8602:
005E8602  8B 8B 00 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b00]
005E8608  3B CE                     CMP ECX,ESI
005E860A  74 28                     JZ 0x005e8634
005E860C  E8 E0 CF E1 FF            CALL 0x004055f1
005E8611  85 C0                     TEST EAX,EAX
005E8613  74 05                     JZ 0x005e861a
005E8615  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005E8618  EB 1A                     JMP 0x005e8634
LAB_005e861a:
005E861A  8B 83 00 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b00]
005E8620  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005E8623  3B C6                     CMP EAX,ESI
005E8625  7C 0D                     JL 0x005e8634
005E8627  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E862D  50                        PUSH EAX
005E862E  52                        PUSH EDX
005E862F  E8 BC B4 0C 00            CALL 0x006b3af0
LAB_005e8634:
005E8634  39 B3 64 1A 00 00         CMP dword ptr [EBX + 0x1a64],ESI
005E863A  75 31                     JNZ 0x005e866d
005E863C  8B 8B FC 1A 00 00         MOV ECX,dword ptr [EBX + 0x1afc]
005E8642  3B CE                     CMP ECX,ESI
005E8644  74 27                     JZ 0x005e866d
005E8646  E8 A6 CF E1 FF            CALL 0x004055f1
005E864B  85 C0                     TEST EAX,EAX
005E864D  74 05                     JZ 0x005e8654
005E864F  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005E8652  EB 19                     JMP 0x005e866d
LAB_005e8654:
005E8654  8B 83 FC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1afc]
005E865A  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005E865D  3B C6                     CMP EAX,ESI
005E865F  7C 0C                     JL 0x005e866d
005E8661  50                        PUSH EAX
005E8662  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E8667  50                        PUSH EAX
005E8668  E8 83 B4 0C 00            CALL 0x006b3af0
LAB_005e866d:
005E866D  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E8673  8B 81 E6 02 00 00         MOV EAX,dword ptr [ECX + 0x2e6]
005E8679  3B C6                     CMP EAX,ESI
005E867B  74 09                     JZ 0x005e8686
005E867D  80 78 65 02               CMP byte ptr [EAX + 0x65],0x2
005E8681  74 03                     JZ 0x005e8686
005E8683  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_005e8686:
005E8686  39 75 F8                  CMP dword ptr [EBP + -0x8],ESI
005E8689  0F 84 04 0D 00 00         JZ 0x005e9393
005E868F  8A 8B 5A 1A 00 00         MOV CL,byte ptr [EBX + 0x1a5a]
005E8695  C6 43 65 02               MOV byte ptr [EBX + 0x65],0x2
005E8699  80 F9 FF                  CMP CL,0xff
005E869C  0F 84 F1 0C 00 00         JZ 0x005e9393
005E86A2  81 E1 FF 00 00 00         AND ECX,0xff
005E86A8  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
005E86AF  2B C1                     SUB EAX,ECX
005E86B1  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005E86B4  8D 0C D1                  LEA ECX,[ECX + EDX*0x8]
005E86B7  8D 04 4B                  LEA EAX,[EBX + ECX*0x2]
005E86BA  03 C1                     ADD EAX,ECX
005E86BC  39 B0 D1 00 00 00         CMP dword ptr [EAX + 0xd1],ESI
005E86C2  0F 84 CB 0C 00 00         JZ 0x005e9393
005E86C8  05 C1 00 00 00            ADD EAX,0xc1
005E86CD  B9 20 76 80 00            MOV ECX,0x807620
005E86D2  50                        PUSH EAX
005E86D3  E8 78 B4 0F 00            CALL 0x006e3b50
005E86D8  8B 8D 18 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff18]
005E86DE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E86E4  5F                        POP EDI
005E86E5  5E                        POP ESI
005E86E6  5B                        POP EBX
005E86E7  8B E5                     MOV ESP,EBP
005E86E9  5D                        POP EBP
005E86EA  C3                        RET
LAB_005e86eb:
005E86EB  39 B3 64 1A 00 00         CMP dword ptr [EBX + 0x1a64],ESI
005E86F1  75 54                     JNZ 0x005e8747
005E86F3  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E86F9  8B 91 04 03 00 00         MOV EDX,dword ptr [ECX + 0x304]
005E86FF  8B 81 00 03 00 00         MOV EAX,dword ptr [ECX + 0x300]
005E8705  4A                        DEC EDX
005E8706  3B C2                     CMP EAX,EDX
005E8708  7D 3D                     JGE 0x005e8747
005E870A  40                        INC EAX
005E870B  89 81 00 03 00 00         MOV dword ptr [ECX + 0x300],EAX
005E8711  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E8717  8B 81 FC 02 00 00         MOV EAX,dword ptr [ECX + 0x2fc]
005E871D  83 F8 FF                  CMP EAX,-0x1
005E8720  74 22                     JZ 0x005e8744
005E8722  8B 91 18 03 00 00         MOV EDX,dword ptr [ECX + 0x318]
005E8728  52                        PUSH EDX
005E8729  8B 91 14 03 00 00         MOV EDX,dword ptr [ECX + 0x314]
005E872F  52                        PUSH EDX
005E8730  8B 91 00 03 00 00         MOV EDX,dword ptr [ECX + 0x300]
005E8736  52                        PUSH EDX
005E8737  50                        PUSH EAX
005E8738  8B 81 40 03 00 00         MOV EAX,dword ptr [ECX + 0x340]
005E873E  50                        PUSH EAX
005E873F  E8 EC AF 0C 00            CALL 0x006b3730
LAB_005e8744:
005E8744  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_005e8747:
005E8747  8B 8B F8 1A 00 00         MOV ECX,dword ptr [EBX + 0x1af8]
005E874D  3B CE                     CMP ECX,ESI
005E874F  74 0C                     JZ 0x005e875d
005E8751  E8 9B CE E1 FF            CALL 0x004055f1
005E8756  85 C0                     TEST EAX,EAX
005E8758  74 03                     JZ 0x005e875d
005E875A  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_005e875d:
005E875D  39 B3 64 1A 00 00         CMP dword ptr [EBX + 0x1a64],ESI
005E8763  74 08                     JZ 0x005e876d
005E8765  39 B3 68 1A 00 00         CMP dword ptr [EBX + 0x1a68],ESI
005E876B  74 16                     JZ 0x005e8783
LAB_005e876d:
005E876D  8B 8B 00 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b00]
005E8773  3B CE                     CMP ECX,ESI
005E8775  74 0C                     JZ 0x005e8783
005E8777  E8 75 CE E1 FF            CALL 0x004055f1
005E877C  85 C0                     TEST EAX,EAX
005E877E  74 03                     JZ 0x005e8783
005E8780  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_005e8783:
005E8783  39 B3 64 1A 00 00         CMP dword ptr [EBX + 0x1a64],ESI
005E8789  75 16                     JNZ 0x005e87a1
005E878B  8B 8B FC 1A 00 00         MOV ECX,dword ptr [EBX + 0x1afc]
005E8791  3B CE                     CMP ECX,ESI
005E8793  74 0C                     JZ 0x005e87a1
005E8795  E8 57 CE E1 FF            CALL 0x004055f1
005E879A  85 C0                     TEST EAX,EAX
005E879C  74 03                     JZ 0x005e87a1
005E879E  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_005e87a1:
005E87A1  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E87A7  8B 81 E6 02 00 00         MOV EAX,dword ptr [ECX + 0x2e6]
005E87AD  3B C6                     CMP EAX,ESI
005E87AF  74 09                     JZ 0x005e87ba
005E87B1  80 78 65 01               CMP byte ptr [EAX + 0x65],0x1
005E87B5  74 03                     JZ 0x005e87ba
005E87B7  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_005e87ba:
005E87BA  39 75 F8                  CMP dword ptr [EBP + -0x8],ESI
005E87BD  0F 84 D0 0B 00 00         JZ 0x005e9393
005E87C3  8B 8B F8 1A 00 00         MOV ECX,dword ptr [EBX + 0x1af8]
005E87C9  3B CE                     CMP ECX,ESI
005E87CB  74 1A                     JZ 0x005e87e7
005E87CD  E8 B8 8A E1 FF            CALL 0x0040128a
005E87D2  8B 93 F8 1A 00 00         MOV EDX,dword ptr [EBX + 0x1af8]
005E87D8  52                        PUSH EDX
005E87D9  E8 D2 5A 14 00            CALL 0x0072e2b0
005E87DE  83 C4 04                  ADD ESP,0x4
005E87E1  89 B3 F8 1A 00 00         MOV dword ptr [EBX + 0x1af8],ESI
LAB_005e87e7:
005E87E7  8B 8B 00 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b00]
005E87ED  3B CE                     CMP ECX,ESI
005E87EF  74 1A                     JZ 0x005e880b
005E87F1  E8 94 8A E1 FF            CALL 0x0040128a
005E87F6  8B 83 00 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b00]
005E87FC  50                        PUSH EAX
005E87FD  E8 AE 5A 14 00            CALL 0x0072e2b0
005E8802  83 C4 04                  ADD ESP,0x4
005E8805  89 B3 00 1B 00 00         MOV dword ptr [EBX + 0x1b00],ESI
LAB_005e880b:
005E880B  8B 8B FC 1A 00 00         MOV ECX,dword ptr [EBX + 0x1afc]
005E8811  3B CE                     CMP ECX,ESI
005E8813  74 1A                     JZ 0x005e882f
005E8815  E8 70 8A E1 FF            CALL 0x0040128a
005E881A  8B 8B FC 1A 00 00         MOV ECX,dword ptr [EBX + 0x1afc]
005E8820  51                        PUSH ECX
005E8821  E8 8A 5A 14 00            CALL 0x0072e2b0
005E8826  83 C4 04                  ADD ESP,0x4
005E8829  89 B3 FC 1A 00 00         MOV dword ptr [EBX + 0x1afc],ESI
LAB_005e882f:
005E882F  8B 83 64 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a64]
005E8835  8B 53 61                  MOV EDX,dword ptr [EBX + 0x61]
005E8838  3B C6                     CMP EAX,ESI
005E883A  C6 43 65 01               MOV byte ptr [EBX + 0x65],0x1
005E883E  89 93 6C 1A 00 00         MOV dword ptr [EBX + 0x1a6c],EDX
005E8844  75 36                     JNZ 0x005e887c
005E8846  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E884B  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E8851  8B 88 EC 02 00 00         MOV ECX,dword ptr [EAX + 0x2ec]
005E8857  51                        PUSH ECX
005E8858  52                        PUSH EDX
005E8859  E8 D2 AB 0C 00            CALL 0x006b3430
005E885E  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E8864  8B 81 FC 02 00 00         MOV EAX,dword ptr [ECX + 0x2fc]
005E886A  83 F8 FF                  CMP EAX,-0x1
005E886D  74 0D                     JZ 0x005e887c
005E886F  50                        PUSH EAX
005E8870  8B 81 40 03 00 00         MOV EAX,dword ptr [ECX + 0x340]
005E8876  50                        PUSH EAX
005E8877  E8 74 B2 0C 00            CALL 0x006b3af0
LAB_005e887c:
005E887C  56                        PUSH ESI
005E887D  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005E8880  56                        PUSH ESI
005E8881  56                        PUSH ESI
005E8882  56                        PUSH ESI
005E8883  56                        PUSH ESI
005E8884  56                        PUSH ESI
005E8885  6A 1C                     PUSH 0x1c
005E8887  6A 02                     PUSH 0x2
005E8889  68 A1 C0 00 00            PUSH 0xc0a1
005E888E  6A 02                     PUSH 0x2
005E8890  BE 01 00 00 00            MOV ESI,0x1
005E8895  51                        PUSH ECX
005E8896  56                        PUSH ESI
005E8897  E8 23 A5 E1 FF            CALL 0x00402dbf
005E889C  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005E88A2  83 C4 30                  ADD ESP,0x30
005E88A5  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005E88AB  85 C0                     TEST EAX,EAX
005E88AD  74 31                     JZ 0x005e88e0
005E88AF  B9 06 00 00 00            MOV ECX,0x6
005E88B4  33 C0                     XOR EAX,EAX
005E88B6  8D BD 5C FF FF FF         LEA EDI,[EBP + 0xffffff5c]
005E88BC  F3 AB                     STOSD.REP ES:EDI
005E88BE  66 AB                     STOSW ES:EDI
005E88C0  8D 85 5C FF FF FF         LEA EAX,[EBP + 0xffffff5c]
005E88C6  66 89 B5 68 FF FF FF      MOV word ptr [EBP + 0xffffff68],SI
005E88CD  66 89 B5 66 FF FF FF      MOV word ptr [EBP + 0xffffff66],SI
005E88D4  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005E88DA  50                        PUSH EAX
005E88DB  E8 71 C2 E1 FF            CALL 0x00404b51
LAB_005e88e0:
005E88E0  8B CB                     MOV ECX,EBX
005E88E2  E8 CA AD E1 FF            CALL 0x004036b1
005E88E7  8D BB 94 1A 00 00         LEA EDI,[EBX + 0x1a94]
005E88ED  BE 16 00 00 00            MOV ESI,0x16
LAB_005e88f2:
005E88F2  8B 0F                     MOV ECX,dword ptr [EDI]
005E88F4  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E88FA  51                        PUSH ECX
005E88FB  52                        PUSH EDX
005E88FC  E8 2F AB 0C 00            CALL 0x006b3430
005E8901  83 C7 04                  ADD EDI,0x4
005E8904  4E                        DEC ESI
005E8905  75 EB                     JNZ 0x005e88f2
005E8907  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E890C  8B 88 91 03 00 00         MOV ECX,dword ptr [EAX + 0x391]
005E8912  83 F9 FF                  CMP ECX,-0x1
005E8915  74 22                     JZ 0x005e8939
005E8917  8B 90 AD 03 00 00         MOV EDX,dword ptr [EAX + 0x3ad]
005E891D  52                        PUSH EDX
005E891E  8B 90 A9 03 00 00         MOV EDX,dword ptr [EAX + 0x3a9]
005E8924  8B 80 D5 03 00 00         MOV EAX,dword ptr [EAX + 0x3d5]
005E892A  52                        PUSH EDX
005E892B  6A FE                     PUSH -0x2
005E892D  51                        PUSH ECX
005E892E  50                        PUSH EAX
005E892F  E8 9C AB 0C 00            CALL 0x006b34d0
005E8934  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e8939:
005E8939  8B 88 22 04 00 00         MOV ECX,dword ptr [EAX + 0x422]
005E893F  83 F9 FF                  CMP ECX,-0x1
005E8942  74 22                     JZ 0x005e8966
005E8944  8B 90 3E 04 00 00         MOV EDX,dword ptr [EAX + 0x43e]
005E894A  52                        PUSH EDX
005E894B  8B 90 3A 04 00 00         MOV EDX,dword ptr [EAX + 0x43a]
005E8951  8B 80 66 04 00 00         MOV EAX,dword ptr [EAX + 0x466]
005E8957  52                        PUSH EDX
005E8958  6A FE                     PUSH -0x2
005E895A  51                        PUSH ECX
005E895B  50                        PUSH EAX
005E895C  E8 6F AB 0C 00            CALL 0x006b34d0
005E8961  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e8966:
005E8966  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005E896C  83 F9 FF                  CMP ECX,-0x1
005E896F  74 22                     JZ 0x005e8993
005E8971  8B 90 CF 04 00 00         MOV EDX,dword ptr [EAX + 0x4cf]
005E8977  52                        PUSH EDX
005E8978  8B 90 CB 04 00 00         MOV EDX,dword ptr [EAX + 0x4cb]
005E897E  8B 80 F7 04 00 00         MOV EAX,dword ptr [EAX + 0x4f7]
005E8984  52                        PUSH EDX
005E8985  6A FE                     PUSH -0x2
005E8987  51                        PUSH ECX
005E8988  50                        PUSH EAX
005E8989  E8 42 AB 0C 00            CALL 0x006b34d0
005E898E  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e8993:
005E8993  8B 88 40 05 00 00         MOV ECX,dword ptr [EAX + 0x540]
005E8999  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E899F  51                        PUSH ECX
005E89A0  52                        PUSH EDX
005E89A1  E8 8A AA 0C 00            CALL 0x006b3430
005E89A6  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E89AB  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005E89B1  83 F9 FF                  CMP ECX,-0x1
005E89B4  74 22                     JZ 0x005e89d8
005E89B6  8B 90 7C 05 00 00         MOV EDX,dword ptr [EAX + 0x57c]
005E89BC  52                        PUSH EDX
005E89BD  8B 90 78 05 00 00         MOV EDX,dword ptr [EAX + 0x578]
005E89C3  8B 80 A4 05 00 00         MOV EAX,dword ptr [EAX + 0x5a4]
005E89C9  52                        PUSH EDX
005E89CA  6A FE                     PUSH -0x2
005E89CC  51                        PUSH ECX
005E89CD  50                        PUSH EAX
005E89CE  E8 FD AA 0C 00            CALL 0x006b34d0
005E89D3  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e89d8:
005E89D8  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005E89DE  83 F9 FF                  CMP ECX,-0x1
005E89E1  74 22                     JZ 0x005e8a05
005E89E3  8B 90 0D 06 00 00         MOV EDX,dword ptr [EAX + 0x60d]
005E89E9  52                        PUSH EDX
005E89EA  8B 90 09 06 00 00         MOV EDX,dword ptr [EAX + 0x609]
005E89F0  8B 80 35 06 00 00         MOV EAX,dword ptr [EAX + 0x635]
005E89F6  52                        PUSH EDX
005E89F7  6A FE                     PUSH -0x2
005E89F9  51                        PUSH ECX
005E89FA  50                        PUSH EAX
005E89FB  E8 D0 AA 0C 00            CALL 0x006b34d0
005E8A00  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e8a05:
005E8A05  8B 88 58 05 00 00         MOV ECX,dword ptr [EAX + 0x558]
005E8A0B  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E8A11  51                        PUSH ECX
005E8A12  52                        PUSH EDX
005E8A13  E8 18 AA 0C 00            CALL 0x006b3430
005E8A18  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E8A1D  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E8A23  8B 88 54 05 00 00         MOV ECX,dword ptr [EAX + 0x554]
005E8A29  51                        PUSH ECX
005E8A2A  52                        PUSH EDX
005E8A2B  E8 00 AA 0C 00            CALL 0x006b3430
005E8A30  6A 00                     PUSH 0x0
005E8A32  8B CB                     MOV ECX,EBX
005E8A34  E8 BB B9 E1 FF            CALL 0x004043f4
005E8A39  8B 8D 18 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff18]
005E8A3F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E8A45  5F                        POP EDI
005E8A46  5E                        POP ESI
005E8A47  5B                        POP EBX
005E8A48  8B E5                     MOV ESP,EBP
005E8A4A  5D                        POP EBP
005E8A4B  C3                        RET
LAB_005e8a4c:
005E8A4C  8A 83 75 1A 00 00         MOV AL,byte ptr [EBX + 0x1a75]
005E8A52  84 C0                     TEST AL,AL
005E8A54  0F 85 39 09 00 00         JNZ 0x005e9393
005E8A5A  B9 08 00 00 00            MOV ECX,0x8
005E8A5F  33 C0                     XOR EAX,EAX
005E8A61  8D 7D B8                  LEA EDI,[EBP + -0x48]
005E8A64  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005E8A67  F3 AB                     STOSD.REP ES:EDI
005E8A69  39 B3 70 1A 00 00         CMP dword ptr [EBX + 0x1a70],ESI
005E8A6F  75 38                     JNZ 0x005e8aa9
005E8A71  B9 09 00 00 00            MOV ECX,0x9
005E8A76  33 C0                     XOR EAX,EAX
005E8A78  8D BD F0 FE FF FF         LEA EDI,[EBP + 0xfffffef0]
005E8A7E  6A FF                     PUSH -0x1
005E8A80  F3 AB                     STOSD.REP ES:EDI
005E8A82  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005E8A88  6A 01                     PUSH 0x1
005E8A8A  66 AB                     STOSW ES:EDI
005E8A8C  8D 85 F0 FE FF FF         LEA EAX,[EBP + 0xfffffef0]
005E8A92  6A 26                     PUSH 0x26
005E8A94  50                        PUSH EAX
005E8A95  6A 1A                     PUSH 0x1a
005E8A97  6A 01                     PUSH 0x1
005E8A99  51                        PUSH ECX
005E8A9A  C6 85 F2 FE FF FF 04      MOV byte ptr [EBP + 0xfffffef2],0x4
005E8AA1  E8 BA C8 12 00            CALL 0x00715360
005E8AA6  83 C4 1C                  ADD ESP,0x1c
LAB_005e8aa9:
005E8AA9  8B 8B 70 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a70]
005E8AAF  41                        INC ECX
005E8AB0  8B C1                     MOV EAX,ECX
005E8AB2  89 8B 70 1A 00 00         MOV dword ptr [EBX + 0x1a70],ECX
005E8AB8  83 F8 0A                  CMP EAX,0xa
005E8ABB  75 06                     JNZ 0x005e8ac3
005E8ABD  89 B3 70 1A 00 00         MOV dword ptr [EBX + 0x1a70],ESI
LAB_005e8ac3:
005E8AC3  A0 A0 67 80 00            MOV AL,[0x008067a0]
005E8AC8  84 C0                     TEST AL,AL
005E8ACA  74 0B                     JZ 0x005e8ad7
005E8ACC  B9 90 2A 80 00            MOV ECX,0x802a90
005E8AD1  FF 15 5C C0 85 00         CALL dword ptr [0x0085c05c]
LAB_005e8ad7:
005E8AD7  A1 64 17 81 00            MOV EAX,[0x00811764]
005E8ADC  56                        PUSH ESI
005E8ADD  8D 55 E0                  LEA EDX,[EBP + -0x20]
005E8AE0  6A FF                     PUSH -0x1
005E8AE2  52                        PUSH EDX
005E8AE3  6A FF                     PUSH -0x1
005E8AE5  50                        PUSH EAX
005E8AE6  E8 25 EA 0C 00            CALL 0x006b7510
005E8AEB  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005E8AEE  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
005E8AF1  3B C6                     CMP EAX,ESI
005E8AF3  0F 8E B0 07 00 00         JLE 0x005e92a9
005E8AF9  BF 02 00 00 00            MOV EDI,0x2
005E8AFE  EB 07                     JMP 0x005e8b07
LAB_005e8b00:
005E8B00  BF 02 00 00 00            MOV EDI,0x2
005E8B05  33 F6                     XOR ESI,ESI
LAB_005e8b07:
005E8B07  56                        PUSH ESI
005E8B08  8D 4D DC                  LEA ECX,[EBP + -0x24]
005E8B0B  6A FF                     PUSH -0x1
005E8B0D  8D 55 F0                  LEA EDX,[EBP + -0x10]
005E8B10  51                        PUSH ECX
005E8B11  8D 45 98                  LEA EAX,[EBP + -0x68]
005E8B14  52                        PUSH EDX
005E8B15  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005E8B1B  8D 4D D8                  LEA ECX,[EBP + -0x28]
005E8B1E  50                        PUSH EAX
005E8B1F  51                        PUSH ECX
005E8B20  6A FF                     PUSH -0x1
005E8B22  52                        PUSH EDX
005E8B23  E8 08 CB 12 00            CALL 0x00715630
005E8B28  83 C4 20                  ADD ESP,0x20
005E8B2B  83 F8 B3                  CMP EAX,-0x4d
005E8B2E  0F 84 FF 06 00 00         JZ 0x005e9233
005E8B34  3B C6                     CMP EAX,ESI
005E8B36  0F 84 E4 06 00 00         JZ 0x005e9220
005E8B3C  83 F8 01                  CMP EAX,0x1
005E8B3F  0F 85 50 07 00 00         JNZ 0x005e9295
005E8B45  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
005E8B48  83 C0 F0                  ADD EAX,-0x10
005E8B4B  83 F8 25                  CMP EAX,0x25
005E8B4E  0F 87 AD 06 00 00         JA 0x005e9201
005E8B54  33 C9                     XOR ECX,ECX
005E8B56  8A 88 08 94 5E 00         MOV CL,byte ptr [EAX + 0x5e9408]
switchD_005e8b5c::switchD:
005E8B5C  FF 24 8D F0 93 5E 00      JMP dword ptr [ECX*0x4 + 0x5e93f0]
switchD_005e8b5c::caseD_1a:
005E8B63  8B 15 D5 7D 80 00         MOV EDX,dword ptr [0x00807dd5]
005E8B69  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005E8B6C  C1 EA 10                  SHR EDX,0x10
005E8B6F  66 39 16                  CMP word ptr [ESI],DX
005E8B72  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
005E8B76  74 5A                     JZ 0x005e8bd2
005E8B78  B9 08 00 00 00            MOV ECX,0x8
005E8B7D  33 C0                     XOR EAX,EAX
005E8B7F  8D BD 78 FF FF FF         LEA EDI,[EBP + 0xffffff78]
005E8B85  88 83 74 1A 00 00         MOV byte ptr [EBX + 0x1a74],AL
005E8B8B  F3 AB                     STOSD.REP ES:EDI
005E8B8D  C6 83 75 1A 00 00 01      MOV byte ptr [EBX + 0x1a75],0x1
005E8B94  8A 0D A0 67 80 00         MOV CL,byte ptr [0x008067a0]
005E8B9A  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005E8B9D  6A 00                     PUSH 0x0
005E8B9F  F6 D9                     NEG CL
005E8BA1  1B C9                     SBB ECX,ECX
005E8BA3  6A 00                     PUSH 0x0
005E8BA5  83 E1 04                  AND ECX,0x4
005E8BA8  6A 00                     PUSH 0x0
005E8BAA  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
005E8BB0  6A 00                     PUSH 0x0
005E8BB2  81 C1 4D 69 00 00         ADD ECX,0x694d
005E8BB8  52                        PUSH EDX
005E8BB9  6A 00                     PUSH 0x0
005E8BBB  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
005E8BBE  C7 45 84 02 00 00 00      MOV dword ptr [EBP + -0x7c],0x2
005E8BC5  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
005E8BC8  68 26 25 00 00            PUSH 0x2526
005E8BCD  E9 0E 03 00 00            JMP 0x005e8ee0
LAB_005e8bd2:
005E8BD2  8D 46 02                  LEA EAX,[ESI + 0x2]
005E8BD5  33 C9                     XOR ECX,ECX
005E8BD7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005E8BDA  8A 08                     MOV CL,byte ptr [EAX]
005E8BDC  8B C1                     MOV EAX,ECX
005E8BDE  48                        DEC EAX
005E8BDF  74 71                     JZ 0x005e8c52
005E8BE1  83 E8 02                  SUB EAX,0x2
005E8BE4  0F 85 17 06 00 00         JNZ 0x005e9201
005E8BEA  8A 83 76 1A 00 00         MOV AL,byte ptr [EBX + 0x1a76]
005E8BF0  84 C0                     TEST AL,AL
005E8BF2  74 23                     JZ 0x005e8c17
005E8BF4  8B 53 61                  MOV EDX,dword ptr [EBX + 0x61]
005E8BF7  8B 8B 7B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a7b]
005E8BFD  2B D1                     SUB EDX,ECX
005E8BFF  81 FA 88 13 00 00         CMP EDX,0x1388
005E8C05  0F 86 F6 05 00 00         JBE 0x005e9201
005E8C0B  C6 83 76 1A 00 00 00      MOV byte ptr [EBX + 0x1a76],0x0
005E8C12  E9 EA 05 00 00            JMP 0x005e9201
LAB_005e8c17:
005E8C17  8B 46 03                  MOV EAX,dword ptr [ESI + 0x3]
005E8C1A  8B 0D BE 87 80 00         MOV ECX,dword ptr [0x008087be]
005E8C20  3B C1                     CMP EAX,ECX
005E8C22  0F 84 D9 05 00 00         JZ 0x005e9201
005E8C28  89 83 8F 1A 00 00         MOV dword ptr [EBX + 0x1a8f],EAX
005E8C2E  8A 46 0B                  MOV AL,byte ptr [ESI + 0xb]
005E8C31  88 83 93 1A 00 00         MOV byte ptr [EBX + 0x1a93],AL
005E8C37  C7 83 87 1A 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1a87],0x1
005E8C41  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005E8C47  89 83 8B 1A 00 00         MOV dword ptr [EBX + 0x1a8b],EAX
005E8C4D  E9 AF 05 00 00            JMP 0x005e9201
LAB_005e8c52:
005E8C52  8D 7E 0B                  LEA EDI,[ESI + 0xb]
005E8C55  33 C0                     XOR EAX,EAX
005E8C57  8A 07                     MOV AL,byte ptr [EDI]
005E8C59  48                        DEC EAX
005E8C5A  83 F8 04                  CMP EAX,0x4
005E8C5D  0F 87 4B 01 00 00         JA 0x005e8dae
switchD_005e8c63::switchD:
005E8C63  FF 24 85 30 94 5E 00      JMP dword ptr [EAX*0x4 + 0x5e9430]
switchD_005e8c63::caseD_1:
005E8C6A  8A 83 76 1A 00 00         MOV AL,byte ptr [EBX + 0x1a76]
005E8C70  84 C0                     TEST AL,AL
005E8C72  74 1D                     JZ 0x005e8c91
005E8C74  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005E8C7A  05 9A 06 00 00            ADD EAX,0x69a
005E8C7F  83 38 00                  CMP dword ptr [EAX],0x0
005E8C82  74 06                     JZ 0x005e8c8a
005E8C84  50                        PUSH EAX
005E8C85  E8 D6 23 0C 00            CALL 0x006ab060
LAB_005e8c8a:
005E8C8A  C6 83 76 1A 00 00 00      MOV byte ptr [EBX + 0x1a76],0x0
LAB_005e8c91:
005E8C91  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
005E8C95  C6 83 5F 1A 00 00 0E      MOV byte ptr [EBX + 0x1a5f],0xe
005E8C9C  E9 0D 01 00 00            JMP 0x005e8dae
switchD_005e8c63::caseD_2:
005E8CA1  8A 83 76 1A 00 00         MOV AL,byte ptr [EBX + 0x1a76]
005E8CA7  84 C0                     TEST AL,AL
005E8CA9  74 38                     JZ 0x005e8ce3
005E8CAB  8B 8B 77 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a77]
005E8CB1  8B 46 03                  MOV EAX,dword ptr [ESI + 0x3]
005E8CB4  3B C8                     CMP ECX,EAX
005E8CB6  74 1D                     JZ 0x005e8cd5
005E8CB8  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005E8CBE  05 9A 06 00 00            ADD EAX,0x69a
005E8CC3  83 38 00                  CMP dword ptr [EAX],0x0
005E8CC6  74 06                     JZ 0x005e8cce
005E8CC8  50                        PUSH EAX
005E8CC9  E8 92 23 0C 00            CALL 0x006ab060
LAB_005e8cce:
005E8CCE  C6 83 76 1A 00 00 00      MOV byte ptr [EBX + 0x1a76],0x0
LAB_005e8cd5:
005E8CD5  8A 83 76 1A 00 00         MOV AL,byte ptr [EBX + 0x1a76]
005E8CDB  84 C0                     TEST AL,AL
005E8CDD  0F 85 CB 00 00 00         JNZ 0x005e8dae
LAB_005e8ce3:
005E8CE3  8B 15 44 C2 79 00         MOV EDX,dword ptr [0x0079c244]
005E8CE9  52                        PUSH EDX
005E8CEA  68 80 76 80 00            PUSH 0x807680
005E8CEF  68 E4 6E 7C 00            PUSH 0x7c6ee4
005E8CF4  68 3A F3 80 00            PUSH 0x80f33a
005E8CF9  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005E8CFF  8A 07                     MOV AL,byte ptr [EDI]
005E8D01  8B 4E 03                  MOV ECX,dword ptr [ESI + 0x3]
005E8D04  8D 55 A8                  LEA EDX,[EBP + -0x58]
005E8D07  6A 00                     PUSH 0x0
005E8D09  52                        PUSH EDX
005E8D0A  68 49 4E 40 00            PUSH 0x404e49
005E8D0F  6A 00                     PUSH 0x0
005E8D11  68 44 CE 7C 00            PUSH 0x7cce44
005E8D16  68 3A F3 80 00            PUSH 0x80f33a
005E8D1B  88 45 A8                  MOV byte ptr [EBP + -0x58],AL
005E8D1E  89 4D A9                  MOV dword ptr [EBP + -0x57],ECX
005E8D21  C7 45 AD 00 00 00 00      MOV dword ptr [EBP + -0x53],0x0
005E8D28  E8 E3 CB 13 00            CALL 0x00725910
005E8D2D  83 C4 28                  ADD ESP,0x28
005E8D30  83 F8 90                  CMP EAX,-0x70
005E8D33  75 04                     JNZ 0x005e8d39
005E8D35  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
LAB_005e8d39:
005E8D39  80 3F 03                  CMP byte ptr [EDI],0x3
005E8D3C  0F 94 C0                  SETZ AL
005E8D3F  48                        DEC EAX
005E8D40  24 FE                     AND AL,0xfe
005E8D42  83 C0 0F                  ADD EAX,0xf
005E8D45  88 83 5F 1A 00 00         MOV byte ptr [EBX + 0x1a5f],AL
005E8D4B  EB 61                     JMP 0x005e8dae
switchD_005e8c63::caseD_5:
005E8D4D  8B 0D 40 C2 79 00         MOV ECX,dword ptr [0x0079c240]
005E8D53  68 DD 7D 80 00            PUSH 0x807ddd
005E8D58  51                        PUSH ECX
005E8D59  68 80 76 80 00            PUSH 0x807680
005E8D5E  68 38 CE 7C 00            PUSH 0x7cce38
005E8D63  68 3A F3 80 00            PUSH 0x80f33a
005E8D68  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005E8D6E  8A 17                     MOV DL,byte ptr [EDI]
005E8D70  8B 46 03                  MOV EAX,dword ptr [ESI + 0x3]
005E8D73  8B 4E 07                  MOV ECX,dword ptr [ESI + 0x7]
005E8D76  88 55 9C                  MOV byte ptr [EBP + -0x64],DL
005E8D79  8D 55 9C                  LEA EDX,[EBP + -0x64]
005E8D7C  6A 00                     PUSH 0x0
005E8D7E  52                        PUSH EDX
005E8D7F  68 49 4E 40 00            PUSH 0x404e49
005E8D84  6A 00                     PUSH 0x0
005E8D86  68 44 CE 7C 00            PUSH 0x7cce44
005E8D8B  68 3A F3 80 00            PUSH 0x80f33a
005E8D90  89 45 9D                  MOV dword ptr [EBP + -0x63],EAX
005E8D93  89 4D A1                  MOV dword ptr [EBP + -0x5f],ECX
005E8D96  E8 75 CB 13 00            CALL 0x00725910
005E8D9B  83 C4 2C                  ADD ESP,0x2c
005E8D9E  83 F8 90                  CMP EAX,-0x70
005E8DA1  75 04                     JNZ 0x005e8da7
005E8DA3  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
LAB_005e8da7:
005E8DA7  C6 83 5F 1A 00 00 10      MOV byte ptr [EBX + 0x1a5f],0x10
switchD_005e8c63::default:
005E8DAE  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005E8DB1  84 C0                     TEST AL,AL
005E8DB3  74 63                     JZ 0x005e8e18
005E8DB5  33 C0                     XOR EAX,EAX
005E8DB7  6A 12                     PUSH 0x12
005E8DB9  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005E8DBF  8B CB                     MOV ECX,EBX
005E8DC1  50                        PUSH EAX
005E8DC2  68 21 61 00 00            PUSH 0x6121
005E8DC7  E8 F4 A8 E1 FF            CALL 0x004036c0
005E8DCC  C6 05 7E 87 80 00 00      MOV byte ptr [0x0080877e],0x0
005E8DD3  8A 07                     MOV AL,byte ptr [EDI]
005E8DD5  3C 01                     CMP AL,0x1
005E8DD7  75 0A                     JNZ 0x005e8de3
005E8DD9  C7 05 BE 87 80 00 00 00 00 00  MOV dword ptr [0x008087be],0x0
LAB_005e8de3:
005E8DE3  8B 13                     MOV EDX,dword ptr [EBX]
005E8DE5  8B CB                     MOV ECX,EBX
005E8DE7  C7 83 64 1A 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1a64],0x1
005E8DF1  FF 52 08                  CALL dword ptr [EDX + 0x8]
005E8DF4  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005E8DFA  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005E8E00  85 C9                     TEST ECX,ECX
005E8E02  0F 84 F9 03 00 00         JZ 0x005e9201
005E8E08  6A 01                     PUSH 0x1
005E8E0A  6A 00                     PUSH 0x0
005E8E0C  6A 01                     PUSH 0x1
005E8E0E  E8 92 91 E1 FF            CALL 0x00401fa5
005E8E13  E9 E9 03 00 00            JMP 0x005e9201
LAB_005e8e18:
005E8E18  8A 83 76 1A 00 00         MOV AL,byte ptr [EBX + 0x1a76]
005E8E1E  84 C0                     TEST AL,AL
005E8E20  0F 85 DB 03 00 00         JNZ 0x005e9201
005E8E26  8A 46 0D                  MOV AL,byte ptr [ESI + 0xd]
005E8E29  84 C0                     TEST AL,AL
005E8E2B  0F 84 85 00 00 00         JZ 0x005e8eb6
005E8E31  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005E8E34  80 39 01                  CMP byte ptr [ECX],0x1
005E8E37  75 05                     JNZ 0x005e8e3e
005E8E39  80 3F 05                  CMP byte ptr [EDI],0x5
005E8E3C  74 78                     JZ 0x005e8eb6
LAB_005e8e3e:
005E8E3E  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005E8E41  C6 83 76 1A 00 00 01      MOV byte ptr [EBX + 0x1a76],0x1
005E8E48  8B 56 03                  MOV EDX,dword ptr [ESI + 0x3]
005E8E4B  89 83 7B 1A 00 00         MOV dword ptr [EBX + 0x1a7b],EAX
005E8E51  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005E8E57  89 93 77 1A 00 00         MOV dword ptr [EBX + 0x1a77],EDX
005E8E5D  05 9A 06 00 00            ADD EAX,0x69a
005E8E62  83 38 00                  CMP dword ptr [EAX],0x0
005E8E65  74 06                     JZ 0x005e8e6d
005E8E67  50                        PUSH EAX
005E8E68  E8 F3 21 0C 00            CALL 0x006ab060
LAB_005e8e6d:
005E8E6D  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005E8E73  6A 01                     PUSH 0x1
005E8E75  51                        PUSH ECX
005E8E76  C7 45 EC FF FF FF FF      MOV dword ptr [EBP + -0x14],0xffffffff
005E8E7D  E8 7E D6 0C 00            CALL 0x006b6500
005E8E82  A1 64 17 81 00            MOV EAX,[0x00811764]
005E8E87  6A FF                     PUSH -0x1
005E8E89  6A 00                     PUSH 0x0
005E8E8B  8D 55 EC                  LEA EDX,[EBP + -0x14]
005E8E8E  6A 04                     PUSH 0x4
005E8E90  52                        PUSH EDX
005E8E91  6A 25                     PUSH 0x25
005E8E93  6A 01                     PUSH 0x1
005E8E95  50                        PUSH EAX
005E8E96  E8 C5 C4 12 00            CALL 0x00715360
005E8E9B  8B 0D 3C 73 80 00         MOV ECX,dword ptr [0x0080733c]
005E8EA1  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005E8EA7  83 C4 1C                  ADD ESP,0x1c
005E8EAA  51                        PUSH ECX
005E8EAB  52                        PUSH EDX
005E8EAC  E8 4F D6 0C 00            CALL 0x006b6500
005E8EB1  E9 4B 03 00 00            JMP 0x005e9201
LAB_005e8eb6:
005E8EB6  C6 83 74 1A 00 00 00      MOV byte ptr [EBX + 0x1a74],0x0
005E8EBD  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E8EC3  E8 BB BC E1 FF            CALL 0x00404b83
005E8EC8  6A 00                     PUSH 0x0
005E8ECA  6A 00                     PUSH 0x0
005E8ECC  6A 00                     PUSH 0x0
005E8ECE  6A 00                     PUSH 0x0
005E8ED0  6A 00                     PUSH 0x0
005E8ED2  6A 00                     PUSH 0x0
005E8ED4  C6 83 75 1A 00 00 01      MOV byte ptr [EBX + 0x1a75],0x1
005E8EDB  68 23 25 00 00            PUSH 0x2523
LAB_005e8ee0:
005E8EE0  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005E8EE6  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005E8EEC  E8 B7 B0 E1 FF            CALL 0x00403fa8
005E8EF1  E9 0B 03 00 00            JMP 0x005e9201
switchD_005e8b5c::caseD_26:
005E8EF6  8A 83 76 1A 00 00         MOV AL,byte ptr [EBX + 0x1a76]
005E8EFC  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005E8EFF  84 C0                     TEST AL,AL
005E8F01  8B FE                     MOV EDI,ESI
005E8F03  0F 84 F8 02 00 00         JZ 0x005e9201
005E8F09  85 F6                     TEST ESI,ESI
005E8F0B  0F 84 F0 02 00 00         JZ 0x005e9201
005E8F11  8B 0E                     MOV ECX,dword ptr [ESI]
005E8F13  8B 83 77 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a77]
005E8F19  3B C8                     CMP ECX,EAX
005E8F1B  0F 85 E0 02 00 00         JNZ 0x005e9201
005E8F21  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005E8F24  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
005E8F27  8D 46 18                  LEA EAX,[ESI + 0x18]
005E8F2A  83 C2 1C                  ADD EDX,0x1c
005E8F2D  3B CA                     CMP ECX,EDX
005E8F2F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005E8F32  0F 8F C9 02 00 00         JG 0x005e9201
005E8F38  83 F9 1C                  CMP ECX,0x1c
005E8F3B  0F 8E C0 02 00 00         JLE 0x005e9201
005E8F41  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005E8F47  83 BA 9A 06 00 00 00      CMP dword ptr [EDX + 0x69a],0x0
005E8F4E  0F 85 C6 00 00 00         JNZ 0x005e901a
005E8F54  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
005E8F57  83 C6 0C                  ADD ESI,0xc
005E8F5A  50                        PUSH EAX
005E8F5B  E8 10 1D 0C 00            CALL 0x006aac70
005E8F60  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005E8F66  89 81 9A 06 00 00         MOV dword ptr [ECX + 0x69a],EAX
005E8F6C  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005E8F72  8B 06                     MOV EAX,dword ptr [ESI]
005E8F74  8D B3 83 1A 00 00         LEA ESI,[EBX + 0x1a83]
005E8F7A  89 82 9E 06 00 00         MOV dword ptr [EDX + 0x69e],EAX
005E8F80  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005E8F86  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
005E8F89  89 91 AE 06 00 00         MOV dword ptr [ECX + 0x6ae],EDX
005E8F8F  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005E8F95  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
005E8F98  89 88 B2 06 00 00         MOV dword ptr [EAX + 0x6b2],ECX
005E8F9E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005E8FA1  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005E8FA7  8B 08                     MOV ECX,dword ptr [EAX]
005E8FA9  89 8A A2 06 00 00         MOV dword ptr [EDX + 0x6a2],ECX
005E8FAF  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005E8FB5  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005E8FB8  89 82 A6 06 00 00         MOV dword ptr [EDX + 0x6a6],EAX
005E8FBE  8B 06                     MOV EAX,dword ptr [ESI]
005E8FC0  85 C0                     TEST EAX,EAX
005E8FC2  74 06                     JZ 0x005e8fca
005E8FC4  56                        PUSH ESI
005E8FC5  E8 96 20 0C 00            CALL 0x006ab060
LAB_005e8fca:
005E8FCA  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005E8FD0  8B 81 A6 06 00 00         MOV EAX,dword ptr [ECX + 0x6a6]
005E8FD6  50                        PUSH EAX
005E8FD7  89 83 7F 1A 00 00         MOV dword ptr [EBX + 0x1a7f],EAX
005E8FDD  E8 2E 1C 0C 00            CALL 0x006aac10
005E8FE2  89 06                     MOV dword ptr [ESI],EAX
005E8FE4  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005E8FEA  6A 00                     PUSH 0x0
005E8FEC  52                        PUSH EDX
005E8FED  68 2F 25 00 00            PUSH 0x252f
005E8FF2  E8 49 71 0C 00            CALL 0x006b0140
005E8FF7  50                        PUSH EAX
005E8FF8  68 3A F3 80 00            PUSH 0x80f33a
005E8FFD  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005E9003  83 C4 0C                  ADD ESP,0xc
005E9006  8B CB                     MOV ECX,EBX
005E9008  6A 00                     PUSH 0x0
005E900A  68 3A F3 80 00            PUSH 0x80f33a
005E900F  E8 46 94 E1 FF            CALL 0x0040245a
005E9014  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
005E9017  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_005e901a:
005E901A  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
005E901D  8B F2                     MOV ESI,EDX
005E901F  0F AF 30                  IMUL ESI,dword ptr [EAX]
005E9022  3B 77 0C                  CMP ESI,dword ptr [EDI + 0xc]
005E9025  0F 87 D6 01 00 00         JA 0x005e9201
005E902B  8B 83 83 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a83]
005E9031  03 C2                     ADD EAX,EDX
005E9033  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005E9036  80 38 00                  CMP byte ptr [EAX],0x0
005E9039  0F 85 9F 00 00 00         JNZ 0x005e90de
005E903F  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005E9045  8D 77 1C                  LEA ESI,[EDI + 0x1c]
005E9048  83 C1 E4                  ADD ECX,-0x1c
005E904B  8B B8 A2 06 00 00         MOV EDI,dword ptr [EAX + 0x6a2]
005E9051  0F AF FA                  IMUL EDI,EDX
005E9054  8B 90 9A 06 00 00         MOV EDX,dword ptr [EAX + 0x69a]
005E905A  8B C1                     MOV EAX,ECX
005E905C  03 FA                     ADD EDI,EDX
005E905E  C1 E9 02                  SHR ECX,0x2
005E9061  F3 A5                     MOVSD.REP ES:EDI,ESI
005E9063  8B C8                     MOV ECX,EAX
005E9065  83 E1 03                  AND ECX,0x3
005E9068  F3 A4                     MOVSB.REP ES:EDI,ESI
005E906A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005E906D  C6 01 01                  MOV byte ptr [ECX],0x1
005E9070  8B 8B 7F 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a7f]
005E9076  8B 53 61                  MOV EDX,dword ptr [EBX + 0x61]
005E9079  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005E907F  49                        DEC ECX
005E9080  89 93 7B 1A 00 00         MOV dword ptr [EBX + 0x1a7b],EDX
005E9086  89 8B 7F 1A 00 00         MOV dword ptr [EBX + 0x1a7f],ECX
005E908C  8B 88 A6 06 00 00         MOV ECX,dword ptr [EAX + 0x6a6]
005E9092  8B 83 7F 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a7f]
005E9098  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005E909B  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005E909E  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
005E90A1  C1 E2 02                  SHL EDX,0x2
005E90A4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005E90A7  C1 E0 02                  SHL EAX,0x2
005E90AA  2B C2                     SUB EAX,EDX
005E90AC  33 D2                     XOR EDX,EDX
005E90AE  F7 F1                     DIV ECX
005E90B0  50                        PUSH EAX
005E90B1  A1 18 76 80 00            MOV EAX,[0x00807618]
005E90B6  50                        PUSH EAX
005E90B7  68 2F 25 00 00            PUSH 0x252f
005E90BC  E8 7F 70 0C 00            CALL 0x006b0140
005E90C1  50                        PUSH EAX
005E90C2  68 3A F3 80 00            PUSH 0x80f33a
005E90C7  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005E90CD  83 C4 0C                  ADD ESP,0xc
005E90D0  8B CB                     MOV ECX,EBX
005E90D2  6A 01                     PUSH 0x1
005E90D4  68 3A F3 80 00            PUSH 0x80f33a
005E90D9  E8 7C 93 E1 FF            CALL 0x0040245a
LAB_005e90de:
005E90DE  8B 83 7F 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a7f]
005E90E4  85 C0                     TEST EAX,EAX
005E90E6  0F 85 15 01 00 00         JNZ 0x005e9201
005E90EC  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005E90F2  E8 41 8D E1 FF            CALL 0x00401e38
005E90F7  85 C0                     TEST EAX,EAX
005E90F9  75 3A                     JNZ 0x005e9135
005E90FB  88 83 74 1A 00 00         MOV byte ptr [EBX + 0x1a74],AL
005E9101  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E9107  E8 77 BA E1 FF            CALL 0x00404b83
005E910C  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005E9112  6A 00                     PUSH 0x0
005E9114  6A 00                     PUSH 0x0
005E9116  6A 00                     PUSH 0x0
005E9118  6A 00                     PUSH 0x0
005E911A  6A 00                     PUSH 0x0
005E911C  C6 83 75 1A 00 00 01      MOV byte ptr [EBX + 0x1a75],0x1
005E9123  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005E9129  6A 00                     PUSH 0x0
005E912B  68 2E 25 00 00            PUSH 0x252e
005E9130  E8 73 AE E1 FF            CALL 0x00403fa8
LAB_005e9135:
005E9135  C6 83 76 1A 00 00 00      MOV byte ptr [EBX + 0x1a76],0x0
005E913C  E9 C0 00 00 00            JMP 0x005e9201
switchD_005e8b5c::caseD_10:
005E9141  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005E9145  0F 85 B6 00 00 00         JNZ 0x005e9201
005E914B  8A 15 A0 67 80 00         MOV DL,byte ptr [0x008067a0]
005E9151  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005E9157  F6 DA                     NEG DL
005E9159  1B D2                     SBB EDX,EDX
005E915B  83 E2 04                  AND EDX,0x4
005E915E  81 C2 4D 69 00 00         ADD EDX,0x694d
005E9164  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
005E9167  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005E916D  3B CE                     CMP ECX,ESI
005E916F  0F 84 82 00 00 00         JZ 0x005e91f7
005E9175  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005E9178  56                        PUSH ESI
005E9179  56                        PUSH ESI
005E917A  56                        PUSH ESI
005E917B  8D 55 B8                  LEA EDX,[EBP + -0x48]
005E917E  56                        PUSH ESI
005E917F  52                        PUSH EDX
005E9180  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
005E9183  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
005E9186  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005E918C  56                        PUSH ESI
005E918D  68 24 25 00 00            PUSH 0x2524
005E9192  E8 11 AE E1 FF            CALL 0x00403fa8
005E9197  EB 68                     JMP 0x005e9201
switchD_005e8b5c::caseD_1b:
005E9199  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005E919C  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005E91A2  52                        PUSH EDX
005E91A3  E8 14 9A E1 FF            CALL 0x00402bbc
005E91A8  EB 57                     JMP 0x005e9201
switchD_005e8b5c::caseD_31:
005E91AA  C6 83 75 1A 00 00 01      MOV byte ptr [EBX + 0x1a75],0x1
005E91B1  A0 A0 67 80 00            MOV AL,[0x008067a0]
005E91B6  F6 D8                     NEG AL
005E91B8  1B C0                     SBB EAX,EAX
005E91BA  83 E0 04                  AND EAX,0x4
005E91BD  05 4D 69 00 00            ADD EAX,0x694d
005E91C2  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
005E91C5  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005E91CB  39 B0 E6 02 00 00         CMP dword ptr [EAX + 0x2e6],ESI
005E91D1  74 24                     JZ 0x005e91f7
005E91D3  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005E91D6  56                        PUSH ESI
005E91D7  56                        PUSH ESI
005E91D8  56                        PUSH ESI
005E91D9  8D 55 B8                  LEA EDX,[EBP + -0x48]
005E91DC  56                        PUSH ESI
005E91DD  52                        PUSH EDX
005E91DE  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
005E91E1  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
005E91E4  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005E91EA  56                        PUSH ESI
005E91EB  68 22 25 00 00            PUSH 0x2522
005E91F0  E8 B3 AD E1 FF            CALL 0x00403fa8
005E91F5  EB 0A                     JMP 0x005e9201
LAB_005e91f7:
005E91F7  8B 03                     MOV EAX,dword ptr [EBX]
005E91F9  8D 4D B8                  LEA ECX,[EBP + -0x48]
005E91FC  51                        PUSH ECX
005E91FD  8B CB                     MOV ECX,EBX
005E91FF  FF 10                     CALL dword ptr [EAX]
switchD_005e8b5c::caseD_11:
005E9201  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005E9204  8B 53 61                  MOV EDX,dword ptr [EBX + 0x61]
005E9207  85 C0                     TEST EAX,EAX
005E9209  89 93 6C 1A 00 00         MOV dword ptr [EBX + 0x1a6c],EDX
005E920F  0F 84 80 00 00 00         JZ 0x005e9295
005E9215  8D 45 F0                  LEA EAX,[EBP + -0x10]
005E9218  50                        PUSH EAX
005E9219  E8 42 1E 0C 00            CALL 0x006ab060
005E921E  EB 75                     JMP 0x005e9295
LAB_005e9220:
005E9220  8B 4B 61                  MOV ECX,dword ptr [EBX + 0x61]
005E9223  8B 93 6C 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a6c]
005E9229  2B CA                     SUB ECX,EDX
005E922B  81 F9 30 75 00 00         CMP ECX,0x7530
005E9231  76 62                     JBE 0x005e9295
LAB_005e9233:
005E9233  C6 83 74 1A 00 00 00      MOV byte ptr [EBX + 0x1a74],0x0
005E923A  C6 83 75 1A 00 00 01      MOV byte ptr [EBX + 0x1a75],0x1
005E9241  8A 15 A0 67 80 00         MOV DL,byte ptr [0x008067a0]
005E9247  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005E924D  F6 DA                     NEG DL
005E924F  1B D2                     SBB EDX,EDX
005E9251  83 E2 04                  AND EDX,0x4
005E9254  81 C2 4D 69 00 00         ADD EDX,0x694d
005E925A  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
005E925D  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005E9263  3B CE                     CMP ECX,ESI
005E9265  74 24                     JZ 0x005e928b
005E9267  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005E926A  56                        PUSH ESI
005E926B  56                        PUSH ESI
005E926C  56                        PUSH ESI
005E926D  8D 55 B8                  LEA EDX,[EBP + -0x48]
005E9270  56                        PUSH ESI
005E9271  52                        PUSH EDX
005E9272  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
005E9275  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
005E9278  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005E927E  56                        PUSH ESI
005E927F  68 25 25 00 00            PUSH 0x2525
005E9284  E8 1F AD E1 FF            CALL 0x00403fa8
005E9289  EB 0A                     JMP 0x005e9295
LAB_005e928b:
005E928B  8B 03                     MOV EAX,dword ptr [EBX]
005E928D  8D 4D B8                  LEA ECX,[EBP + -0x48]
005E9290  51                        PUSH ECX
005E9291  8B CB                     MOV ECX,EBX
005E9293  FF 10                     CALL dword ptr [EAX]
LAB_005e9295:
005E9295  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005E9298  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005E929B  40                        INC EAX
005E929C  3B C1                     CMP EAX,ECX
005E929E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005E92A1  0F 8C 59 F8 FF FF         JL 0x005e8b00
005E92A7  33 F6                     XOR ESI,ESI
LAB_005e92a9:
005E92A9  8A 83 76 1A 00 00         MOV AL,byte ptr [EBX + 0x1a76]
005E92AF  84 C0                     TEST AL,AL
005E92B1  0F 84 DC 00 00 00         JZ 0x005e9393
005E92B7  8B 53 61                  MOV EDX,dword ptr [EBX + 0x61]
005E92BA  8B 8B 7B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a7b]
005E92C0  2B D1                     SUB EDX,ECX
005E92C2  81 FA B8 0B 00 00         CMP EDX,0xbb8
005E92C8  0F 86 C5 00 00 00         JBE 0x005e9393
005E92CE  8B 83 7F 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a7f]
005E92D4  3B C6                     CMP EAX,ESI
005E92D6  0F 84 B7 00 00 00         JZ 0x005e9393
005E92DC  39 B3 83 1A 00 00         CMP dword ptr [EBX + 0x1a83],ESI
005E92E2  0F 84 AB 00 00 00         JZ 0x005e9393
005E92E8  8D 3C 85 04 00 00 00      LEA EDI,[EAX*0x4 + 0x4]
005E92EF  57                        PUSH EDI
005E92F0  E8 7B 19 0C 00            CALL 0x006aac70
005E92F5  8B B3 83 1A 00 00         MOV ESI,dword ptr [EBX + 0x1a83]
005E92FB  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005E92FE  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
005E9301  8B B3 7F 1A 00 00         MOV ESI,dword ptr [EBX + 0x1a7f]
005E9307  89 30                     MOV dword ptr [EAX],ESI
005E9309  8B B3 5B 1A 00 00         MOV ESI,dword ptr [EBX + 0x1a5b]
005E930F  8D 48 04                  LEA ECX,[EAX + 0x4]
005E9312  33 C0                     XOR EAX,EAX
005E9314  33 D2                     XOR EDX,EDX
005E9316  39 86 A6 06 00 00         CMP dword ptr [ESI + 0x6a6],EAX
005E931C  76 28                     JBE 0x005e9346
LAB_005e931e:
005E931E  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
005E9321  80 3C 30 00               CMP byte ptr [EAX + ESI*0x1],0x0
005E9325  75 10                     JNZ 0x005e9337
005E9327  89 01                     MOV dword ptr [ECX],EAX
005E9329  8B B3 7F 1A 00 00         MOV ESI,dword ptr [EBX + 0x1a7f]
005E932F  83 C1 04                  ADD ECX,0x4
005E9332  42                        INC EDX
005E9333  3B D6                     CMP EDX,ESI
005E9335  73 0F                     JNC 0x005e9346
LAB_005e9337:
005E9337  8B B3 5B 1A 00 00         MOV ESI,dword ptr [EBX + 0x1a5b]
005E933D  40                        INC EAX
005E933E  3B 86 A6 06 00 00         CMP EAX,dword ptr [ESI + 0x6a6]
005E9344  72 D8                     JC 0x005e931e
LAB_005e9346:
005E9346  A1 64 17 81 00            MOV EAX,[0x00811764]
005E934B  6A 01                     PUSH 0x1
005E934D  50                        PUSH EAX
005E934E  E8 AD D1 0C 00            CALL 0x006b6500
005E9353  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005E9356  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005E935C  6A FF                     PUSH -0x1
005E935E  6A 01                     PUSH 0x1
005E9360  57                        PUSH EDI
005E9361  51                        PUSH ECX
005E9362  6A 25                     PUSH 0x25
005E9364  6A 01                     PUSH 0x1
005E9366  52                        PUSH EDX
005E9367  E8 F4 BF 12 00            CALL 0x00715360
005E936C  A1 3C 73 80 00            MOV EAX,[0x0080733c]
005E9371  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005E9377  83 C4 1C                  ADD ESP,0x1c
005E937A  50                        PUSH EAX
005E937B  51                        PUSH ECX
005E937C  E8 7F D1 0C 00            CALL 0x006b6500
005E9381  8D 55 E4                  LEA EDX,[EBP + -0x1c]
005E9384  52                        PUSH EDX
005E9385  E8 D6 1C 0C 00            CALL 0x006ab060
005E938A  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005E938D  89 83 7B 1A 00 00         MOV dword ptr [EBX + 0x1a7b],EAX
LAB_005e9393:
005E9393  8B 8D 18 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff18]
005E9399  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E939F  5F                        POP EDI
005E93A0  5E                        POP ESI
005E93A1  5B                        POP EBX
005E93A2  8B E5                     MOV ESP,EBP
005E93A4  5D                        POP EBP
005E93A5  C3                        RET
LAB_005e93a6:
005E93A6  8B 95 18 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff18]
005E93AC  68 F4 DD 7C 00            PUSH 0x7cddf4
005E93B1  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E93B6  57                        PUSH EDI
005E93B7  56                        PUSH ESI
005E93B8  68 A6 02 00 00            PUSH 0x2a6
005E93BD  68 5C DD 7C 00            PUSH 0x7cdd5c
005E93C2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E93C8  E8 03 41 0C 00            CALL 0x006ad4d0
005E93CD  83 C4 18                  ADD ESP,0x18
005E93D0  85 C0                     TEST EAX,EAX
005E93D2  74 01                     JZ 0x005e93d5
005E93D4  CC                        INT3
LAB_005e93d5:
005E93D5  68 A6 02 00 00            PUSH 0x2a6
005E93DA  68 5C DD 7C 00            PUSH 0x7cdd5c
005E93DF  56                        PUSH ESI
005E93E0  57                        PUSH EDI
005E93E1  E8 5A CA 0B 00            CALL 0x006a5e40
005E93E6  5F                        POP EDI
005E93E7  5E                        POP ESI
005E93E8  5B                        POP EBX
005E93E9  8B E5                     MOV ESP,EBP
005E93EB  5D                        POP EBP
005E93EC  C3                        RET
