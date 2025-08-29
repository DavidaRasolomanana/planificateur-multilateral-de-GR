/**
 * @file GR.c
 * @brief Planification multilateral de gare routiere
 * 
 * Contexte :
 * - 5 cooperatives independantes, chacune possede 10 vehicules.
 * - 6 destinations : Tamatave, Antsirabe, Majunga, Toliara, Morondava, Isalo.
 * - Maquette ANSI temps réel + saisie de réservations + planification.
 *
 * Objectifs :
 * 1) Eviter les embouteillages à l'entree de la gare (files/quais, acces regule).
 * 2) Convois securises : departs groupes, convoi >= 4 véhicules (peut être >4).
 * 3) Réservations en temps reel depuis le meme executable (interface terminal).
 *
 * Ce projet planifie les activites des acteurs clients et cooperatives afin de fludifier et faciliter les trafics au sein et autour d'une gare routiere a Madagascar 
 * 
 * Voici les fonctionnalites :
 * 
 *      clients :
 *  -Remplissage des formulaires de voyage (heure , destination , place ...)   
 *  -Reservation des tickets en temps reel a distance.
 *  -feedbacks et notation du service pour but d'amelioration des services.
 * 
 *      Gare :
 *  NIVEAU BILLETERIE
 *  -Reception et analyse des formulaires envoyes par les clients
 *  -Proposition des services adaptes a la demande de la clientele
 *  -Transmission et receptions des reservations vers les cooperatives concerenees
 *  -Classemments par notation et feedbacks 
 *  
 *  NIVEAU TRAFIC
 *  -Creation de convoi de vehicule
 *  -Planification des departs des convois :
 *      .Regulation des entrees et sorties des vehicules dans la gare :
 *      .Calcul des durees du trajet afin de planifier l'entree et la sortie dans les autres gares
 *      .Pour eviter les bouchons ; alternance du depart et de l'arrivee a partir des donnees
 *  -Communication inter-gare    
 *       
 *      Cooperative :
 *  -Gestion de la repartition des places dans chaque vehicule
 *
 * @author COOP-ADN
 * @date 29/09/25
 
 */